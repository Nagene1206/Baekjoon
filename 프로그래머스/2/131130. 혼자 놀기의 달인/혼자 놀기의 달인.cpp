#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> cards) {
    int answer = 0;
    
    int n =cards.size();
    vector<bool> visit(n+1,false);
    vector<int> res;
    
    for(int i=0;i<n;i++)
    {
        int now = cards[i];
        int cnt = 0;
        
        while(!visit[now])
        {
            visit[now] = true;
            now = cards[now-1];
            cnt++;
        }
        
        if(cnt != 0) res.push_back(cnt);
    }
    
    sort(res.begin(),res.end(),greater<int>());
    
    if(res.size()>1) return res[0] * res[1];
    return answer;
}