#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    bool arr[100001] = {true, };
    
    for(int i;i<section.size();i++)
    {
        arr[section[i]+1] = false;
    }
    
    for(int i;i<section.size();i++)
    {
        if(arr[section[i]+1]==true)
            continue;
        else
        {
            for(int j=0;j<m;j++)
            {
                if(section[i]+1+j < 100001)
                    arr[section[i]+1+j]=true;
                else
                    break;
            }
            answer++;
        }
    }
    
    return answer;
}