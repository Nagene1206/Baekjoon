#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> sor_arr;
    
    for(int i=0;i<commands.size();i++)
    {
        sor_arr.clear();
        for(int j=commands[i][0]-1;j<commands[i][1];j++)
        {
            sor_arr.push_back(array[j]);
        }
        sort(sor_arr.begin(),sor_arr.end());
        answer.push_back(sor_arr[commands[i][2]-1]);
    }
    
    return answer;
}