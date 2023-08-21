#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    map<char,int> map;
    
    int tyear = ((today[2]-'0')*10+(today[3]-'0'))*28*12;
    int tmonth = ((today[5]-'0')*10+(today[6]-'0'))*28;
    int tday = (today[8]-'0')*10+(today[9]-'0');
    int tline = tyear+tmonth+tday;
    
    for(int i=0;i<terms.size();i++)
    {
        char tmp = terms[i][0];
        terms[i].erase(0,2);
        map.insert({tmp, stoi(terms[i])});
    }
    
    for(int i=0;i<privacies.size();i++)
    {
        int pyear = ((privacies[i][2]-'0')*10+(privacies[i][3]-'0'))*28*12;
        int pmonth = ((privacies[i][5]-'0')*10+(privacies[i][6]-'0'))*28;
        int pday = (privacies[i][8]-'0')*10+(privacies[i][9]-'0');
        
        pmonth += map[privacies[i][11]]*28;
        
        int pline = pyear+pmonth+pday;
        
        
        if(pline <= tline)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}