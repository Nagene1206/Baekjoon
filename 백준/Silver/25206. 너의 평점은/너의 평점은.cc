#include <iostream>
using namespace std;

int main(){
    string name,score2;
    double score1,sum1=0,sum2=0;
    
    for(int i=0;i<20;i++)
    {
        cin >> name >> score1 >> score2;
        if(score2=="A+")
        {
            sum1 += score1*4.5;
            sum2 += score1;
        }
        else if(score2=="A0")
        {
            sum1 += score1*4.0;
            sum2 += score1;
        }
        else if(score2=="B+")
        {
            sum1 += score1*3.5;
            sum2 += score1;
        }
        else if(score2=="B0")
        {
            sum1 += score1*3.0;
            sum2 += score1;
        }
        else if(score2=="C+")
        {
            sum1 += score1*2.5;
            sum2 += score1;
        }
        else if(score2=="C0")
        {
            sum1 += score1*2.0;
            sum2 += score1;
        }
        else if(score2=="D+")
        {
            sum1 += score1*1.5;
            sum2 += score1;
        }
        else if(score2=="D0")
        {
            sum1 += score1*1.0;
            sum2 += score1;
        }
        else if(score2=="F")
        {
            sum1 += score1*0.0;
            sum2 += score1;
        }
    }
    
    sum1 = sum1/sum2;
    
    cout << sum1;
    
    return 0;
}