#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    
    set<int> type;
    int s,e;
    int base = elements[0];
    
    for(int i=0;i<elements.size();i++)
    {
        type.insert(elements[i]);
    }
    
    for(int i=1;i<elements.size();i++)
    {
        s = 0;  //범위 지정
        e = i;
        
        base += elements[e];
        int tmp = base;
        type.insert(tmp);
        
        for(int j=0;j<elements.size();j++)
        {
            tmp -= elements[s++];   //앞쪽 빼주기
            
            e++;
            if(e>elements.size()-1) e = 0;
            tmp += elements[e];    //뒤쪽 더하기
            
            type.insert(tmp);
        }
    }
    
    answer = type.size();
    
    return answer;
}