#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    
    stack<int> con;
    
    for(int i=1;i<order.size()+1;i++)
    {
        con.push(i);
        
        while(!con.empty() && con.top() == order[answer])
        {
            answer++;
            con.pop();
        }
    }
    
    return answer;
}