#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    
    int num_arr = 2997;
    int num[2998];
    
    for(int i=0;i<=num_arr;i++)
    {
        if(i==0||i==1) num[i] = 0;
        else num[i] = i;
    }
    
    for(int i=2;i<=sqrt(num_arr);i++)
    {
        if(num[i] == 0) continue;
        for(int j=i*i;j<=num_arr;j+=i) num[j]=0;
    }

    for(int i=0;i<nums.size()-2;i++)
    {
        for(int j=i+1;j<nums.size()-1;j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                if(num[nums[i]+nums[j]+nums[k]]!=0) answer++;
            }
        }
    }

    return answer;
}