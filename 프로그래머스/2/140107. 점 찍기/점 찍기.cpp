#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(int k, int d) {
    long long answer = 0;
    
    for(int x=0;x*k<=d;x++) //x마다 y의 최대값 구하기
    {
        int y = sqrt(pow(d,2)-pow(x*k,2));
        
        answer += y/k + 1;
    }
    
    return answer;
}