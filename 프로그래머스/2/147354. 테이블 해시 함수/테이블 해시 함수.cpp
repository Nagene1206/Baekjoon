#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int colu;

bool cmp(vector<int> &v1, vector<int> &v2)
{
    if(v1[colu-1]==v2[colu-1])
        return v1[0]>v2[0];
    else return v1[colu-1]<v2[colu-1];
}

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    int answer = 0;
    
    colu = col;
    
    sort(data.begin(), data.end(), cmp);

    for (int i = row_begin - 1; i < row_end; i++)
    {
        int sum = 0;
        for (int j = 0; j < data[0].size(); j++)
            sum += data[i][j] % (i+1);
        
        if (i == row_begin - 1) answer = sum;
        else answer = answer ^ sum;
    }

    return answer;
}