#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> map;
    
    int sum=0;
    
    for(int i=0;i<name.size();i++)
    {
        map.insert({name[i],yearning[i]});
    }
    
    for(int i=0;i<photo.size();i++)
    {
        for(int j=0;j<photo[i].size();j++)
        {
            if(map.find(photo[i][j])!=map.end())
                sum += map[photo[i][j]];
        }
        answer.push_back(sum);
        sum = 0;
    }
    
    return answer;
}