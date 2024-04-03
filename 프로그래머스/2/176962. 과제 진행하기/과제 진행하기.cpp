#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

bool cmp(vector<string> &v1, vector<string> &v2)
{
    return v1[1]<v2[1];
}

int time_trans(string str)
{
    int time = 0;
    
    time = (((str[0] - '0')*10) + (str[1] - '0'))*60 + ((str[3] - '0')*10)+(str[4] - '0');
    
    return time;
}

vector<string> solution(vector<vector<string>> plans) {
    vector<string> answer;
    stack<pair<string,int>> play;
    
    sort(plans.begin(),plans.end(),cmp);
    
    int c_t = 0; //현재 시간
    
    for(int i=0;i<plans.size();i++)
    {   
        c_t = time_trans(plans[i][1]);
        
        if(i<plans.size()-1)
        {
            if(c_t + stoi(plans[i][2])>time_trans(plans[i+1][1]))
            {
                play.push({plans[i][0],c_t+stoi(plans[i][2])-time_trans(plans[i+1][1])});
            }
            else
            {
                answer.push_back(plans[i][0]);
                c_t += stoi(plans[i][2]);
                
                if(!play.empty())
                {
                    while(!play.empty()&&c_t+play.top().second<=time_trans(plans[i+1][1]))
                    {
                        answer.push_back(play.top().first);
                        c_t += play.top().second;
                        play.pop();
                    }
                    
                    if(!play.empty())
                    {
                        play.top().second -= time_trans(plans[i+1][1]) - c_t;
                    }
                }
            }
        }
        else
            answer.push_back(plans[i][0]);
    }
    
    while(!play.empty())
    {
        answer.push_back(play.top().first);
        play.pop();
    }
    
    
    return answer;
}