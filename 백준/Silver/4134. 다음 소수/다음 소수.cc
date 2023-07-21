#include <iostream>
using namespace std;

bool next_dec(long long a)
{
    if(a<=1)
        return false;
    if(a==2 || a==3)
        return true;
    if(a%2==0 || a%3==0)
        return false;
    for(long long i=5;i*i<=a;++i)
    {
        if (a % i == 0 || a % (i + 2) == 0) 
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long t,num;
    
    cin >> t;
    
    for(int i=0;i<t;i++)
    {
        cin >> num;
        while(!next_dec(num))
            num++;
        cout << num << "\n";
    }
    
    return 0;
}