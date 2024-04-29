#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cal_time(string s)
{
    int time;
    
    time = ((s[0]-'0')*10 + s[1]-'0')*60 + ((s[3]-'0')*10 + s[4]-'0');
    
    return time;
}

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    
    vector<int> room;
    
    sort(book_time.begin(),book_time.end());
    
    for(int i=0;i<book_time.size();i++)
    {
        int start_time = cal_time(book_time[i][0]);
        int end_time = cal_time(book_time[i][1]);
        if(i==0)
            room.push_back(end_time+10);
        else
        {
            bool can = false;
            for(int j=0;j<room.size();j++)
            {
                if(room[j]<=start_time)
                {
                    room[j] = end_time+10;
                    can = true;
                    break;
                }
            }
            
            if(!can)
            {
                room.push_back(end_time+10);
            }
        }
    }
    
    answer = room.size();
    
    return answer;
}