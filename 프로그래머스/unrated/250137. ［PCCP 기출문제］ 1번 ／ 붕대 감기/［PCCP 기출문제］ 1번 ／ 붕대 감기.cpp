#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health;
    int atk_order = 0;  //몬스터 공격 순서
    int heal_time = 0;  //연속 회복 시간
    int ingame_time = 0;
    
    while(atk_order < attacks.size())
    {
        if(attacks[atk_order][0]==ingame_time)
        {
            answer -= attacks[atk_order][1];
            atk_order++;
            heal_time = 0;
            
            if(answer < 1)
            {
                answer = -1;
                break;
            }
        }
        else
        {
            answer += bandage[1];
            heal_time++;
            if(heal_time == bandage[0])
            {
                answer += bandage[2];
                heal_time = 0;
            }
            if(answer > health) answer = health;
        }
        
        ingame_time++;
    }
    
    return answer;
}