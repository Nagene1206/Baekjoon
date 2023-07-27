#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<string,int> a ,pair<string,int> b)
{
    if (a.second == b.second)
    {
        if (a.first.length() == b.first.length())
            return a.first < b.first;
        else
            return a.first.length() > b.first.length();
    }
    else
        return a.second > b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    string word;
    unordered_map<string, int> str;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word.length() >= m)
            str[word]++;
    }

    vector<pair<string, int>> vec(str.begin(), str.end());
    sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << "\n";
    }

    return 0;
}