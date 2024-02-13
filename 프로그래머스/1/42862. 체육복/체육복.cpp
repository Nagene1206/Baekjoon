#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    
    answer += n - lost.size();
    
    for(int i=0;i<lost.size();i++)
    {
        if(find(reserve.begin(),reserve.end(),lost[i])!=reserve.end())
        {
            answer++;
            reserve.erase(find(reserve.begin(),reserve.end(),lost[i]));
            lost.erase(find(lost.begin(),lost.end(),lost[i]));
            i--;
        }
    }
    
    for(int i=0;i<lost.size();i++)
    {
        if(find(reserve.begin(),reserve.end(),lost[i]-1)!=reserve.end())
        {
            answer++;
            reserve.erase(find(reserve.begin(),reserve.end(),lost[i]-1));
        }
        else if(find(reserve.begin(),reserve.end(),lost[i]+1)!=reserve.end())
        {
            answer++;
            reserve.erase(find(reserve.begin(),reserve.end(),lost[i]+1));
        }
    }
    
    return answer;
}