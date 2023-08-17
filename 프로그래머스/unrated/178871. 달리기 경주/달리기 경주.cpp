#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer(players);
    
    map<string,int> player;
    
    for(int i=0;i<players.size();i++)
    {
        player.insert({players[i],i});
    }
    
    for(int i=0;i<callings.size();i++)
    {
        int indx = player[callings[i]];
        player[answer[indx-1]] += 1;
        player[callings[i]] -= 1;
        
        string tmp = answer[indx];
        answer[indx] = answer[indx-1];
        answer[indx-1] = tmp;
    }
    
    return answer;
}