#include <stdio.h>
using namespace std;

int main() {
    int N;
    scanf("%d",&N);
    int num[10001]={0,};
    int number;
    
    for(int i=0;i<N;i++)
    {
        scanf("%d",&number);
        num[number]++;
    }
    
    for(int i=0;i<10001;i++)
    {
        while(num[i]!=0)
        {
            printf("%d\n",i);
            num[i]--;
        }
    }
    
    return 0;
}