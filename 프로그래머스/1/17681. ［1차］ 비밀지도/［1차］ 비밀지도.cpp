#include <string>
#include <vector>
#include <stack>

using namespace std;


string toBinary(int a)
{
    string binary="";
    stack<int> stk;
    
    while(a!=1 && a!=0)
    {
        stk.push(a%2);
        a /= 2;
    }
    
    stk.push(a);
    
    while(!stk.empty())
    {
        binary += stk.top()+'0';
        stk.pop();
    }
    
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    vector<string> map1;
    vector<string> map2;
    
    int num = n;
    const int* ptr = &num;
    
    for(int i=0;i<n;i++)
    {
        string test1 = toBinary(arr1[i]);
        string test2 = toBinary(arr2[i]);
        
        while(test1.length()!=n)
        {
            test1 = '0'+test1;
        }
        
        while(test2.length()!=n)
        {
            test2 = '0'+test2;
        }
        
        map1.push_back(test1);
        map2.push_back(test2);
    }
    
    for(int i=0;i<n;i++)
    {
        string test = "";
        for(int j=0;j<n;j++)
        {
            if(map1[i][j]=='1'||map2[i][j]=='1')
                test += '#';
            else
                test += ' ';
        }
        answer.push_back(test);
    }
    
    return answer;
}