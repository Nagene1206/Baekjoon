#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> list;
    
    for(int i=0;i<score.size();i++)
    {
        list.push_back(score[i]);
        sort(list.begin(),list.end());
        if(list.size()>k)
        {
            list.erase(list.begin());
        }
        answer.push_back(list[0]);
    }
    
    return answer;
}