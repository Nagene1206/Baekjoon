#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> str;

bool cmp(string a,string b)
{
    if(a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main() {
    int N;
    cin >> N;
    string word;
    
    for(int i=0;i<N;i++)
    {
        cin >> word;
        if(find(str.begin(),str.end(),word)==str.end())
            str.push_back(word);
    }
    
    sort(str.begin(),str.end(),cmp);
    
    for(int i=0;i<str.size();i++)
        cout << str[i]<< "\n";
    
    return 0;
}