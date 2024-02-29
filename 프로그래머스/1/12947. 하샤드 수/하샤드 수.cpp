#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int origin = x;
    int ha = 0;
    
    while(origin >= 10)
    {
        ha += origin%10;
        origin=origin/10;
    }
    
    ha += origin%10;
    
    if(x%ha!=0) answer = false;
    
    return answer;
}