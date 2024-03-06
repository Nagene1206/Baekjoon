#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    long long num =1;
    
    while(num*num<=n)
    {
        if(num*num==n)
        {
            answer = (num+1)*(num+1);
            return answer;
        }
        num++;
    }
    
    answer = -1;
    
    return answer;
}