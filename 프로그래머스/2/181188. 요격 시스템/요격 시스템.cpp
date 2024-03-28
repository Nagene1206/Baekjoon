#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets) {
    int answer = 0;
    int tmp = 0;
    
    sort(targets.begin(),targets.end());
    
    while(tmp < targets.size())
    {
        int end = targets[tmp++][1];
        answer++;
        
        while(tmp < targets.size() && targets[tmp][0]<end)
        {
            if(targets[tmp][1]<end) end = targets[tmp][1];
            tmp++;
        }
    }
    
    return answer;
}