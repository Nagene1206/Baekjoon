#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    
    cin >> n;
    vector<int> card(n);
    
    for(int i=0;i<n;i++)
        cin >> card[i];
    
    sort(card.begin(),card.end());
    
    cin >> m;
    vector<int> num(m);
    
    for(int i=0;i<m;i++)
    {
        int test;
        cin >> test;
        
        if(binary_search(card.begin(),card.end(),test))
            num[i] = 1;
        else
            num[i] = 0;
    }
        
    
    for(int i=0;i<m;i++)
    {
        cout << num[i] << " ";
    }
    
    return 0;
}