#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<string> str;
    string fir,sec;
    
    str.push_back("ChongChong");
    
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        cin >> fir >> sec;
        if(find(str.begin(),str.end(),fir)!=str.end() || find(str.begin(),str.end(),sec)!=str.end())
        {
            str.push_back(fir);
            str.push_back(sec);
        }
    }
    
    sort(str.begin(),str.end());
    str.erase(unique(str.begin(),str.end()),str.end());
    
    cout << str.size();
    
    return 0;
}