#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    
    map<string, int> mp;    //이름을 맵으로
    vector<vector<int>> gift_trade(friends.size(), vector<int>(friends.size(),0)); //주고 받은 수
    vector<int> gift_index(friends.size(),0); //선물지수
    vector<int> next_gift(friends.size(),0);  //다음달 받는 수
    
    int top = 0;
    
    for(int i=0;i<friends.size();i++)
    {
        mp.insert({friends[i],i});
    }
    
    for(int i=0;i<gifts.size();i++)
    {
        string str1,str2,str3;
        str1 = gifts[i];
        
        str2 = str1.substr(0,str1.find(' '));
        str3 = str1.substr(str1.find(' ')+1);
        
        gift_trade[mp[str2]][mp[str3]]++;
        gift_index[mp[str2]]++;
        gift_index[mp[str3]]--;
    }
    
    for(int i=0;i<friends.size();i++)
    {
        for(int j=0;j<friends.size();j++)
        {
            if(i==j) continue;
            else if(gift_trade[i][j]>gift_trade[j][i])
            {
                next_gift[i]++;
                if(next_gift[i]>top)
                {
                    top = next_gift[i];
                }
            }
            else if(gift_trade[i][j]==gift_trade[j][i])
            {
                if(gift_index[i]>gift_index[j])
                {
                    next_gift[i]++;
                    if(next_gift[i]>top)
                    {
                        top = next_gift[i];
                    }
                }
            }
        }
    }
    
    answer = top;
    
    return answer;
}