#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    
    int left = 0;
    
    while(n+left>=a)
    {
        n += left;
        left = n%a;
        n -= left;
        
        n = n/a*b;
        answer += n;
    }
    
    
    return answer;
}