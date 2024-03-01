#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long test = num;
    
    if(num == 1) return 0;
    
    while(test != 1)
    {
        if(answer>500) break;
        
        if(test%2==0)
            test/=2;
        else
            test=test*3+1;
        
        answer++;
    }
    
    if(answer>500) answer = -1;
    
    return answer;
}