#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long a;
    long long cnt = 0;
    
    cin >> a;
    
    while(a!=0)
    {
        vector<int> arr(a*2+1,0);
        
        for(int i=2;i<=a*2;i++)
            arr[i] = i;
        
        for(int i=2; i*i<=a*2;i++)
        {
            if(i==0)    continue;
            for(int j=2*i;j<=a*2;j+=i)
            {
                if(arr[j]==0)    continue;
                else arr[j]=0;
            }
        }
        
        for(int i=a+1;i<=a*2;i++)
        {
            if(arr[i]!=0)    cnt++;
        }
        cout << cnt << "\n";
        cnt = 0;
        cin >> a;
    }

    return 0;
}