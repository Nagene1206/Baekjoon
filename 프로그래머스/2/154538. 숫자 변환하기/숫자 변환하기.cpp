#include <string>
#include <vector>
#include <queue>
#include <set>

using namespace std;

int solution(int x, int y, int n) {
    int answer = 0;
    
    queue<pair<int,int>> q;
    set<int> s;
    
    if(x==y) return 0;
    
    q.push({x,0});
    s.insert(x);
    
    while(!q.empty())
    {
        pair<int,int> data = q.front();
        q.pop();
        
        if(data.first == y)
        {
            answer = data.second;
            break;
        }
        
        else if(data.first < y)
        {
            int addN = data.first + n;
            if(s.insert(addN).second)
                q.push({addN,data.second+1});
            
            int x2 = data.first*2;
            if(s.insert(x2).second)
                q.push({x2,data.second+1});
            
            int x3 = data.first*3;
            if(s.insert(x3).second)
                q.push({x3,data.second+1});
        }
    }
    
    if(answer == 0) answer = -1;
    
    return answer;
}