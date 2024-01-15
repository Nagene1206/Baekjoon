#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(),0);
    
    map<string,set<string>> mp; //신고 당한 사람 = string, 신고한 사람 = set
    map<string,int> idx;
    
    for(int i=0;i<id_list.size();i++)
    {
        idx[id_list[i]] = i;
    }
    
    for(auto rep : report)
    {
        stringstream ss(rep);
        string from, to;
        ss >> from >> to;
        
        mp[to].insert(from);
    }
    
    for(auto rep : mp)
    {
        if(rep.second.size() >= k)
        {
            for(auto iter : rep.second)
            {
                answer[idx[iter]]++;
            }
        }
    }
    
    return answer;
}