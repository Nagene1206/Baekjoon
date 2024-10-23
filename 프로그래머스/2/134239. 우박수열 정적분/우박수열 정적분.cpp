#include <string>
#include <vector>

using namespace std;

vector<double> solution(int k, vector<vector<int>> ranges) {
    vector<double> answer;
    vector<int> line;
    
    line.push_back(k);
    
    while(k!=1)
    {
        if(k%2==0)
            k/=2;
        else
            k = (k*3)+1;
        
        line.push_back(k);
    }
    
    for(int i=0;i<ranges.size();i++)
    {
        int s = ranges[i][0];
        int e = line.size() - 1 + ranges[i][1];
        
        if(s>e)
        {
            answer.push_back(-1.0);
            continue;
        }
        
        double tmp = 0;
        
        for(int j=s;j<e;j++)
        {
            tmp += (double)(line[j]+line[j+1])/2;
        }
        
        answer.push_back(tmp);
    }
    
    return answer;
}