#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;

    unsigned long long a = stoull(p);
    
    for(int i=0;i<t.length()-p.length()+1;i++)
    {
        unsigned long long tmp = stoull(t.substr(i,p.length()));
        if(tmp<=a)
            answer++;
    }
    
    return answer;
}