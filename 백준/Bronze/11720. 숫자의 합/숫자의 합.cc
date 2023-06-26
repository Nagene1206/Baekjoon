#include <iostream>
using namespace std;

int main() {
    string str;
    int N;
    int sum=0;
    
    cin >> N;
    cin >> str;
    
    for(int i=0;i<N;i++)
    {
        sum+=(int)str[i]-48;
    }
    
    cout << sum;
    
    return 0;
}