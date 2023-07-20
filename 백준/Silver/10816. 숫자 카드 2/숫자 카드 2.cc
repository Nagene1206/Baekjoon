#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int arr[500000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    
    cin >> n;
    map<int,int> num;
    
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        
        if(num.find(a) == num.end())
            num.insert({a,1});
        else
            num[a]++;
    }

    cin >> m;
   
    for(int i=0;i<m;i++)
    {
        int b;
        cin >> b;
        if(num.find(b) == num.end())
            arr[i]=0;
        else
            arr[i]=num.at(b);
    }
    
    for(int i=0;i<m;i++)
        cout << arr[i] << " ";
    
    return 0;
}