#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> v = {0};
    
    for(int i=0;i<ingredient.size();i++)
    {
        if(v.back()==1 && ingredient[i]==2)
        {
            v.back()=12;
        }
        else if(v.back()==12 && ingredient[i]==3)
        {
            v.back()=123;
        }
        else if(v.back()==123 && ingredient[i]==1)
        {
            answer++;
            v.pop_back();
        }
        else
        {
            v.push_back(ingredient[i]);
        }
    }
    
    return answer;
}