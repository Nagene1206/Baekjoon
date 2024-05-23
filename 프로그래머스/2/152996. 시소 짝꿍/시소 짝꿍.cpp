#include <string>
#include <vector>

using namespace std;

long long solution(vector<int> weights) {
    long long answer = 0;
    vector<long long> cnt(1001,0);
    
    for(int i=0;i<weights.size();i++)
        cnt[weights[i]]++;
    
    for(int i=0;i<weights.size();i++)
    {
        if(weights[i]%2 == 0)
        {
            long long couple = (weights[i]/2)*3;
            if(couple < 1001) answer += cnt[couple];
        }
        if(weights[i]%3 == 0)
        {
            long long couple = (weights[i]/3)*4;
            if(couple < 1001) answer += cnt[couple];
        }
        long long couple = weights[i]*2;
        if(couple < 1001) answer += cnt[couple];
    }
    
    for(int i=100;i<1001;i++)
    {
        if(cnt[i]>=2)
            answer += (long long)(cnt[i]*(cnt[i]-1))/2;
    }
    
    return answer;
}
