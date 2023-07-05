#include <stdio.h>

int main() {
    int space[100][100]={0,};
    int n,x,y,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        for(int j=x;j<x+10;j++)
            for(int k=y;k<y+10;k++)
                space[j][k]=1;
    }
    
    for(int j=0;j<100;j++)
        for(int k=0;k<100;k++)
            if(space[j][k]==1)
                count++;
    
    printf("%d",count);
}