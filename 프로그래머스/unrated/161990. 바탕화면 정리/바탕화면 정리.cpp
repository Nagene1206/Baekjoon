#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    char arr[50][50] = {'.',};
    int lux=51,luy=51,rdx=-1,rdy=-1;
    
    for(int i=0;i<wallpaper.size();i++)
    {
        for(int j=0;j<wallpaper[i].length();j++)
        {
            arr[i][j] = wallpaper[i][j];
            if(arr[i][j] == '#')
            {
                if(lux>i)
                    lux=i;
                if(luy>j)
                    luy=j;
                if(rdx<i+1)
                    rdx=i+1;
                if(rdy<j+1)
                    rdy=j+1;
            }
        }
    }
    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    
    return answer;
}