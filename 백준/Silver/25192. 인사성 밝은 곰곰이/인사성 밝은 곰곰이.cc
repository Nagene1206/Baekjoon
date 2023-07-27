#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,sum=0;
    vector<string> str;
    string name;
    
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        cin >> name;
        if(name == "ENTER")
        {
            sort(str.begin(),str.end());
            str.erase(unique(str.begin(),str.end()),str.end());
            sum += str.size();
            str.clear();
        }
        else
        {
            str.push_back(name);
        }
    }
    
    sort(str.begin(),str.end());
    str.erase(unique(str.begin(),str.end()),str.end());
    sum += str.size();
    
    cout << sum;
    
    return 0;
}