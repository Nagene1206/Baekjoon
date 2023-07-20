#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    cin >> str;

    vector<string> word;

    for (int i=0; i<str.length(); i++)
    {
        for(int j=0; j<str.length()-i; j++)
        {
            word.push_back(str.substr(j,i+1));
        }
    }

    sort(word.begin(), word.end());
    word.erase(unique(word.begin(),word.end()),word.end());

    cout << word.size();

    return 0;
}