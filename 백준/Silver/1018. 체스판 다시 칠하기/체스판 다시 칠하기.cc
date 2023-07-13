#include <iostream>
using namespace std;

int main() {
    int M,N,cnt_w,cnt_b,min=65;
    char arr[52][52];
    char wc[8][8];
    char bc[8][8];
    cin >> N >> M;
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if((i+j)%2==0)
            {
                wc[i][j] = 'W';
                bc[i][j] = 'B';
            }
            else
            {
                wc[i][j] = 'B';
                bc[i][j] = 'W';
            }
        }
    }
    
    for(int i=0;i<=N-8;i++)
    {
        for(int j=0;j<=M-8;j++)
        {
            for(int a=0;a<8;a++)
            {
                for(int b=0;b<8;b++)
                {
                    if(arr[i+a][j+b]!=wc[a][b])
                        cnt_w++;
                    if(arr[i+a][j+b]!=bc[a][b])
                        cnt_b++;
                }
            }
            if(cnt_w<cnt_b && min>cnt_w)
                min = cnt_w;
            else if(cnt_b<=cnt_w && min>cnt_b)
                min = cnt_b;
            
            cnt_w = 0;
            cnt_b = 0;
        }
    }
    
    cout << min;
    
    return 0;
}