#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> fir = {1,2,3,4,5,1,2,3,4,5};
    vector<int> sec = {2,1,2,3,2,4,2,5};
    vector<int> trd = {3,3,1,1,2,2,4,4,5,5};
    
    int one = 0;
    int two = 0;
    int three = 0;
    
    for(int i=0;i<answers.size();i++)
    {
        if(answers[i] == fir[i%10]) one++;
        if(answers[i] == sec[i%8]) two++;
        if(answers[i] == trd[i%10]) three++;
    }
    
    if(one >= two)
    {
        if(one >= three)
        {
            answer.push_back(1);
            if(one == two) answer.push_back(2);
            if(one == three) answer.push_back(3);
        }
        else
        {
            answer.push_back(3);
        }
    }
    else
    {
        if(two >= three)
        {
            answer.push_back(2);
            if(two == three) answer.push_back(3);
        }
        else
        {
            answer.push_back(3);
        }
    }
    
    return answer;
}