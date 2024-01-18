#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int zero_cnt = 0;
    int correct = 0;
    
    for(int i=0;i<lottos.size();i++)
    {
        if(lottos[i] == 0)
        {
            zero_cnt++;
        }
        else
        {
            if(find(win_nums.begin(),win_nums.end(),lottos[i])!=win_nums.end())
                correct++;
        }
    }
    
    if(7-correct-zero_cnt>=6) answer.push_back(6);
    else answer.push_back(7-correct-zero_cnt);
    
    if(7-correct>=6) answer.push_back(6);
    else answer.push_back(7-correct);
    
    return answer;
}