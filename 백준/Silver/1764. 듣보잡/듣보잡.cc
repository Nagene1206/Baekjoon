#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    
    cin >> n >> m;
    
    vector<string> peo(n);
    
    for(int i=0;i<n;i++)
        cin >> peo[i];
    
    sort(peo.begin(),peo.end());
    
    vector<string> nev;
    
    for(int i=0;i<m;i++)
    {
        string str;
        cin >> str;
        if(binary_search(peo.begin(),peo.end(),str))
            nev.push_back(str);
    }
    
    cout << nev.size() << "\n";
    sort(nev.begin(),nev.end());
    
    for(int i=0;i<nev.size();i++)
        cout << nev[i] << "\n";

    return 0;
}