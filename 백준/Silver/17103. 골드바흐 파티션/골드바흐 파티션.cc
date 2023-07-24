#include <iostream>
#include <vector>
#define MAX 1000001
using namespace std;

vector<int> arr(MAX,0);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long t;
    long long cnt = 0;
    
    for(int i=2;i<=MAX;i++)
            arr[i] = i;
        
        for(int i=2; i*i<MAX;i++)
        {
            if(i==0)    continue;
            for(int j=2*i;j<=MAX;j+=i)
            {
                if(arr[j]==0)    continue;
                else arr[j]=0;
            }
        }
    
    cin >> t;
    
    for(int i=0;i<t;i++)
    {
        long long a;
        cin >> a;
        
        for(int i=2;i<=a/2;i++)
        {
            if(arr[i]==0)    continue;
            else
            {
                if(arr[a-arr[i]]!=0) cnt++;
            }
                
        }
        cout << cnt << "\n";
        cnt = 0;
    }

    return 0;
}