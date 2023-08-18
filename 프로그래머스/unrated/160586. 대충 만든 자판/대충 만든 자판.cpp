#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char,int> key;

    for(int i=0;i<26;i++)
    {
        key.insert({'A'+i,-1});
    }
    
    for(int i=0;i<keymap.size(); i++)
    {
        for(int j=0;j<keymap[i].length(); j++)
        {
            if(key[keymap[i][j]] == -1)
                key[keymap[i][j]] = j+1;
            else if(key[keymap[i][j]]>j+1)
                key[keymap[i][j]] = j+1;
        }
    }
    
    for(int i=0;i<targets.size();i++)
    {
        int sum = 0;
        for(int j=0;j<targets[i].length();j++)
        {
            if(key[targets[i][j]]==-1)
            {
                sum = -1;
                break;
            }
            sum += key[targets[i][j]];
        }
        answer.push_back(sum);
    }
    
    return answer;
}