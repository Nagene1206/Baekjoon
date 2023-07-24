#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n;
    long long cnt = 0;
    
    cin >> n;
    
    for(int i=1;i*i<=n;i++)
        cnt++;
    
    cout << cnt << "\n";
    
    return 0;
}