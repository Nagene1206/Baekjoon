#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair <int, string>> people;

bool cmp(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}

int main() {
    int N;
    cin >> N;
    
    for(int i=0;i<N;i++)
    {
        int x;
        string y;
        
        cin >> x >> y;
        people.push_back({x,y});
    }
    
    stable_sort(people.begin(),people.end(),cmp);
    
    for(int i=0;i<N;i++)
        cout << people[i].first << " " << people[i].second << "\n";
    
    return 0;
}