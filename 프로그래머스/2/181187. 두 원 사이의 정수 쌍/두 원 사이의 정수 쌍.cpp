#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int r1, int r2) {
    long long answer = 0;
    
    for(int i=1;i<r2;++i)
    {
        int max = 0;
        int min = 0;
        
        max = (int)floor(sqrt(pow(r2,2)-pow(i,2)));
        
        if(i<r1) min = (int)ceil(sqrt(pow(r1,2)-pow(i,2)));
        else min = 1;
        
        answer += max - min + 1;
    }
    
    return (answer+r2-r1+1)*4;
}