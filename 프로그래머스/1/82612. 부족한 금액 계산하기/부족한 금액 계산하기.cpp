using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long enter_price = 0;
    
    for(int i=1;i<=count;i++)
    {
        enter_price += price * i;
    }
    
    answer = enter_price - money;
    
    if(answer < 0) answer = 0;
    
    return answer;
}