#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> axis;

bool cmp(const pair<int, int> &a,const pair<int, int> &b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    else
        return a.second < b.second;
}

int main() {
    int N;
    cin >> N;
    int x,y;
    
    for(int i=0;i<N;i++)
    {
        cin >> x >> y;
        axis.push_back({x,y});
    }
    sort(axis.begin(),axis.end(),cmp);
    
    for(int i=0;i<N;i++)
        cout << axis[i].first << " " << axis[i].second << "\n";
    
    return 0;
}