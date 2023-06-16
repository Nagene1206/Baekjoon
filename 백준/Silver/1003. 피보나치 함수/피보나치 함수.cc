#include <stdio.h>

int dp[41];

int fibonacci(int n) {
    if (n == 0) {
        dp[0] = 0;
        return 0;
    } else if (n == 1) {
        dp[1] = 1;
        return 1;
    }
    if(dp[n] != 0)
    {
        return dp[n];
    }
    else
    {
        return dp[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int Tcase,num;
    
    scanf("%d",&Tcase);
    
    for(int i=0;i<Tcase;i++)
    {
        scanf("%d",&num);
        if(num==0)
        {
            printf("1 0\n");
        }
        else if(num==1)
        {
            printf("0 1\n");
        }
        else
        {
            fibonacci(num);
            printf("%d %d\n",dp[num-1],dp[num]);
        }
    }
    
    return 0;
}