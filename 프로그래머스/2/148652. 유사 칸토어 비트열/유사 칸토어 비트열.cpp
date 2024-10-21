#include <string>
#include <vector>
#include <cmath>

using namespace std;

int answer = 0;

void cal(int n, long long l, long long r)
{
    long long range = 1LL * pow(5,n-1); //구간 나누기
    int s = l/range, e = r/range; //나눈 구간 분별
    
    if(n==1)
    {
        for(int i=l;i<=r;i++)
        {
            if(i!=2)
                answer++;
        } 
        return;
    }
    
    for(int i=s+1;i<e;i++)  //s부분보다 한칸 뒤, e부분보다 한칸 전 검사
    {
        if(i!=2)
            answer += (int)pow(4,n-1); //어차피 중앙 아니면 4개씩 산하에 있음
    }
    
    if(s==e)    //근데 만약 같다면?
        cal(n-1,l-range*s,r-range*e);   //한 단계 내려가서 계산
    else
    {
        if(s!=2)    //중앙이면 00000이라서
            cal(n-1,l-range*s,range-1); //어차피 한 구간이니까
        if(e!=2)    //중앙이면 00000이라서
            cal(n-1,0,r-range*e);   //구간 시작부터 e가 표시된 곳까지
    }
}

int solution(int n, long long l, long long r) {

    cal(n,--l,--r);
    
    return answer;
}