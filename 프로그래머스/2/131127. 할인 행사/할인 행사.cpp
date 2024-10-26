#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    map<string,int> basket;
    map<string,int> goal;
    
    for(int i=0;i<want.size();i++)  //원하는 내역 Map으로 만들기
    {
        goal.insert({want[i],number[i]});
    }
    
    for(int i=0;i<10;i++)   //처음 10일치 만들기
    {
        if(basket.find(discount[i]) == basket.end())
        {
            basket.insert({discount[i],1});
        }
        else
        {
            basket[discount[i]]++;
        }
    }
    
    if(basket == goal) answer++;
    
    int s = 0, e = 9;
    
    for(int i=10;i<discount.size();i++) //하나씩 넣고 빼면서 검사
    {
        basket[discount[s]]--;
        if(basket[discount[s]] == 0) basket.erase(discount[s]);    //없어지면 삭제
        s++;    //한칸 전진
        
        e++;    //한칸 전진
        if(basket.find(discount[e]) == basket.end())
        {
            basket.insert({discount[e],1});
        }
        else
        {
            basket[discount[e]]++;
        }
        
        if(basket == goal) answer++;
    }
    
    return answer;
}