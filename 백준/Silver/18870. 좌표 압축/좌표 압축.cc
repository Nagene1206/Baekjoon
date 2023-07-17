#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> axis(n);
    
    for(int i=0;i<n;i++)
    {
        cin >> axis[i];
    }
    
    vector<int> axis2(axis);
    sort(axis2.begin(),axis2.end());
    axis2.erase(unique(axis2.begin(),axis2.end()),axis2.end());
    
    for(int i=0;i<n;i++)
    {
        cout << lower_bound(axis2.begin(),axis2.end(),axis[i])-axis2.begin() << " ";
    }
    
    return 0;
}