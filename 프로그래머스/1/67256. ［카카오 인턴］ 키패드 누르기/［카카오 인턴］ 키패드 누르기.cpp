#include <string>
#include <vector>
#include <stdlib.h>
#include <map>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    vector<vector<int>> pad(4, vector<int>(3,0));
    
    map<string,vector<int>> mp;
    
    mp["left"] = {3,0};
    mp["right"] = {3,2};
    mp["middle"] = {1,1};
    
    for(int i=0;i<numbers.size();i++)
    {
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7)
        {
            if(numbers[i] == 1) mp["left"] = {0,0};
            if(numbers[i] == 4) mp["left"] = {1,0};
            if(numbers[i] == 7) mp["left"] = {2,0};
            
            answer += 'L';
        }
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9)
        {
            if(numbers[i] == 3) mp["right"] = {0,2};
            if(numbers[i] == 6) mp["right"] = {1,2};
            if(numbers[i] == 9) mp["right"] = {2,2};
            
            answer += 'R';
        }
        else
        {
            if(numbers[i] == 2) mp["middle"] = {0,1};
            if(numbers[i] == 5) mp["middle"] = {1,1};
            if(numbers[i] == 8) mp["middle"] = {2,1};
            if(numbers[i] == 0) mp["middle"] = {3,1};
            
            int left_sum = abs(mp["middle"][0] - mp["left"][0])+abs(mp["middle"][1] - mp["left"][1]);
            int right_sum = abs(mp["middle"][0] - mp["right"][0])+abs(mp["middle"][1] - mp["right"][1]);
            
            if(left_sum == right_sum)
            {
                if(hand == "left")
                {
                    mp["left"] = mp["middle"];
                    answer += 'L';
                }
                else
                {
                    mp["right"] = mp["middle"];
                    answer += 'R';
                }
            }
            else if(left_sum > right_sum)
            {
                mp["right"] = mp["middle"];
                answer += 'R';
            }
            else
            {
                mp["left"] = mp["middle"];
                answer += "L";
            }
        }
    }
    
    return answer;
}