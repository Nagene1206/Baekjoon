#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq; //우선순위 큐
    int now_size = tangerine.size();    //현재 갯수
    
    sort(tangerine.begin(),tangerine.end());
    
    int sum = 0;
    
    for(int i=0;i<tangerine.size();i++)
    {
        if(i==tangerine.size()-1)
        {
            if(tangerine[i] != tangerine[i-1])
            {
                pq.push(1);
            }
            else
            {
                sum++;
                pq.push(sum);
            }
        }
        else if(tangerine[i] != tangerine[i+1])
        {
            sum++;
            pq.push(sum);
            sum = 0;
        }
        else if(tangerine[i] == tangerine[i+1])
        {
            sum++;
        }
    }
    
    if(k==now_size) return pq.size();
    
    while(k<now_size)
    {
        now_size -= pq.top();
        pq.pop();
    }
    
    if(k==now_size) answer = pq.size();
    else if(k>now_size) answer = pq.size()+1;
    
    return answer;
}