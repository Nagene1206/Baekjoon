#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> axis;

int main() {
    int N;
    cin >> N;
    int x,y;
    
    for(int i=0;i<N;i++)
    {
        cin >> x >> y;
        axis.push_back({x,y});
    }
    sort(axis.begin(),axis.end());
    
    for(int i=0;i<N;i++)
        cout << axis[i].first << " " << axis[i].second << "\n";
    
    return 0;
}