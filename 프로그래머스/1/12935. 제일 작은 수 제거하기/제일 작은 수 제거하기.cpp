#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int num;
    
    if(arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    
    answer = arr;
    
    sort(arr.begin(),arr.end());
    
    num = arr[0];
    
    for(int i=0;i<answer.size();i++)
    {
        if(answer[i]==arr[0])
        {
            answer.erase(answer.begin()+i);
            break;
        }
    }
    
    return answer;
}