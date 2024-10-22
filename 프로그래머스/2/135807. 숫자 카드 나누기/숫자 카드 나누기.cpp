#include <string>
#include <vector>

using namespace std;

int ucl(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return ucl(b,a%b);
}

int solution(vector<int> arrayA, vector<int> arrayB) {
    
    int a = arrayA[0];
    
    int b = arrayB[0];
    
    for(int i=1;i<arrayA.size();i++)    //최소공약수 찾기
    {
        a = ucl(arrayA[i],a);
        
        if(a == 1)
        {
            a = 0;
            break;   
        }
    }
    
    if(a!=0)    //반대편을 모두 나눌 수 없는지
    {
        for(int i=0;i<arrayB.size();i++)
        {
            if(arrayB[i]%a == 0)
            {
                a = 0;
                break;
            }
        }
    }
    
    for(int i=1;i<arrayB.size();i++)    //최소공약수 찾기
    {
        b = ucl(arrayB[i],b);
        
        if(b == 1)
        {
            b = 0;
            break;   
        }
    }
    
    if(b!=0)    //반대편을 모두 나눌 수 없는지
    {
        for(int i=0;i<arrayA.size();i++)
        {
            if(arrayA[i]%b == 0)
            {
                b = 0;
                break;
            }
        }
    }
    
    return max(a,b);
}