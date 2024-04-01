#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    
    int s = 0,e = 0;
    int sum = sequence[0];
    int l = sequence.size()+1;
    
    pair<int, int> result;

    while(s<=e&&e<sequence.size())
    {
        if(sum<k) sum+=sequence[++e];
        else if(sum==k)
        {
            if(e-s+1<l)
            {
                l = e-s+1;
                result = {s,e};
            }
            else if(e-s+1==l)
                if(s<result.first) result = {s,e};
            
            sum -= sequence[s++];
        }
        else sum -= sequence[s++];
    }
    
    answer.push_back(result.first);
    answer.push_back(result.second);
    
    return answer;
}