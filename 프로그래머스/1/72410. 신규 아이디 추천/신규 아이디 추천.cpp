#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    for(int i=0;i<new_id.length();i++)
    {
        if(new_id[i]>='A'&&new_id[i]<='Z')  //1단계
        {
            new_id[i] += 32;
        }
        else if(!((new_id[i]>='a'&&new_id[i]<='z')||(new_id[i]>='0'&&new_id[i]<='9')||new_id[i]=='-'||new_id[i]=='_'||new_id[i]=='.'))    //2단계
        {
            new_id.erase(new_id.begin()+i);
            i--;
        }
    }
    
    for(int i=0;i<new_id.length();i++)
    {
        if(i<new_id.length()-1)
        {
            if(new_id[i]=='.' && new_id[i+1]=='.')  //3단계
            {
                new_id.erase(new_id.begin()+i);
                i--;
            }
        }
    }
    
    if(new_id.length()>0)
    {
        if(new_id[0]=='.')  new_id.erase(new_id.begin());
        if(new_id[new_id.size()-1]=='.') new_id.erase(new_id.end()-1);
    }
    
    if(new_id == "") new_id += 'a';
    if(new_id.length()>15)
    {
        new_id = new_id.substr(0,15);
        if(new_id[new_id.size()-1]=='.')
            new_id.erase(new_id.end()-1);
    }
    
    while(new_id.length()<3)
    {
        new_id += new_id[new_id.size()-1];
    }
    
    answer = new_id;
    
    return answer;
}