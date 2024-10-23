#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    
    map<int, int> a; //형 토핑, 개수
    map<int, int> b; //동생 토핑, 개수
    
    for(int i=0;i<topping.size();i++)   //일단 동생에게 모조리 넘긴다
    {
        if(!b.count(topping[i]))
            b.insert({topping[i],1});
        else
            b[topping[i]]++;
    }
    
    for(int i=0;i<topping.size();i++) //형 입장에서 차근차근 자른다
    {
        if(!a.count(topping[i]))
            a.insert({topping[i],1});
        else
            a[topping[i]]++;
        
        b[topping[i]]--;
        if(b[topping[i]]==0) b.erase(topping[i]);
        
        if(a.size()==b.size()) answer++;
    }
    
    return answer;
}