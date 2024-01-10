#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    
    vector<int> x_num(10,0);    //0~9까지
    vector<int> y_num(10,0);    //0~9까지
    vector<int> correct_num;
    
    for(int i=0;i<X.size();i++)
    {
        x_num[X[i]-'0']++;
    }

    for(int i=0;i<Y.size();i++)
    {
        y_num[Y[i]-'0']++;
    }
    
    for(int i=0;i<10;i++)
    {
        int j=0;
        if(x_num[i]>y_num[i])
        {
            j = y_num[i];
        }
        else
        {
            j = x_num[i];
        }
        
        for(int k=0;k<j;k++)
        {
            correct_num.push_back(i);
        }
    }
    
    if(correct_num.empty())
    {
        answer = "-1";
    }
    else
    {
        sort(correct_num.begin(),correct_num.end(),greater<int>());
        
        if(correct_num[0] == 0) answer = "0";
        else
        {
            for(int i=0;i<correct_num.size();i++)
            {
                answer += correct_num[i]+'0';
            }
        }
    }
    
    return answer;
}