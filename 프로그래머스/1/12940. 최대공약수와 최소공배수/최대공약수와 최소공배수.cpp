#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    if(n>m)
    {
        for(int i=m;i>0;i--)
        {
            if(n%i==0&&m%i==0)
            {
                answer.push_back(i);
                break;
            }
        }
        for(int i=n;;i+=n)
        {
            if(i%n==0&&i%m==0)
            {
                answer.push_back(i);
                break;
            }
        }
    }
    else
    {
        for(int i=n;i>0;i--)
        {
            if(n%i==0&&m%i==0)
            {
                answer.push_back(i);
                break;
            }
        }
        for(int i=m;;i+=m)
        {
            if(i%n==0&&i%m==0)
            {
                answer.push_back(i);
                break;
            }
        }
    }
    
    
    return answer;
}