#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    
    cin >> n >> m;
    map<int,string> pokemon;
    map<string,int> pokemon2;
    
    for(int i=0;i<n;i++)
    {
        string name;
        
        cin >> name;
        
        pokemon.insert({i+1,name});
        pokemon2.insert({name,i+1});
    }

    for(int i=0;i<m;i++)
    {
        string str;
        cin >> str;
        if(str[0]<'A')
            cout << pokemon.at(stoi(str)) << "\n";
        else
            cout << pokemon2.at(str) << "\n";
    }
    
    return 0;
}