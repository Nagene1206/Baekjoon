#include <stdio.h>
#include <cmath>

int main() {
    int T,x1,y1,x2,y2,P,Touch;
    double D2,D3;
    
    scanf("%d",&T);
    
    for(int i = 0;i<T;i++)
    {
        Touch = 0;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&P);
        for(int j = 0;j<P;j++)
        {
            int cx,cy,r;
            scanf("%d %d %d",&cx,&cy,&r);
            D2 = sqrt(pow(x1-cx,2)+pow(y1-cy,2));
            D3 = sqrt(pow(x2-cx,2)+pow(y2-cy,2));
            if((D2<r&&D3>r)||(D2>r&&D3<r))
                Touch++;
        }
        printf("%d\n",Touch);
    }
}