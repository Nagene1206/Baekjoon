#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> res;

int fatigue[3][3] = {{1,1,1},{5,1,1},{25,5,1}};

void DFS(vector<int> &picks, vector<string> &minerals, int &answer, int sum, int location)
{
    if(location==minerals.size()||(picks[0]+picks[1]+picks[2]==0))
    {
        answer=min(answer,sum);
        return;
    }
    
    for(int i=0;i<3;i++)
    {
        if(picks[i]!=0)
        {
            picks[i]--;
            int tmp_idx = location;
            int tmp_sum = sum;
            for(;tmp_idx<location+5&& tmp_idx<minerals.size();tmp_idx++) {
                tmp_sum += fatigue[i][res[minerals[tmp_idx]]];
            }
            
            DFS(picks,minerals,answer,tmp_sum,tmp_idx);
            picks[i]++;
        }
    }
}

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 25*50 + 1;
    res.insert({"diamond",0});
    res.insert({"iron",1});
    res.insert({"stone",2});
    
    DFS(picks,minerals,answer,0,0);
    
    return answer;
}