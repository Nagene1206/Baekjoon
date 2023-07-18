#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str,h,io;
    
    cin >> n;
    set<string> scv;
    
    for(int i=0;i<n;i++)
    {
        cin >> h >> io;
        
        if(io=="enter")
        {
            scv.insert(h);
        }
        else
        {
            scv.erase(h);
        }
    }
    
    for(auto it = scv.rbegin(); it != scv.rend(); it++)
        cout << *it << "\n";
    
    return 0;
}