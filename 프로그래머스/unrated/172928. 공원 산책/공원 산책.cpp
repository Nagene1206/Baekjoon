#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int x,y;
    bool flag = true;
    
    char arr[50][50] = {'X',};
    
    for(int i=0;i<park.size();i++)
    {
        for(int j=0;j<park[i].length();j++)
        {
            arr[i][j] = park[i][j];
            if(arr[i][j] == 'S')
            {
                x = j;
                y = i;
            }
        }
    }
    
    for(int i=0;i<routes.size();i++)
    {
        if(routes[i][0] == 'E')
        {
            for(int j=1;j<=routes[i][2]-'0';j++)
            {
                if(x+j>=park[0].length())
                {
                    flag = false;
                    break;
                }
                if(arr[y][x+j]=='X')
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                x += routes[i][2] - '0';
        }
        if(routes[i][0] == 'W')
        {
            for(int j=1;j<=routes[i][2]-'0';j++)
            {
                if(x-j<0)
                {
                    flag = false;
                    break;
                }
                if(arr[y][x-j]=='X')
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                x -= routes[i][2] - '0';
        }
        if(routes[i][0] == 'S')
        {
            for(int j=1;j<=routes[i][2]-'0';j++)
            {
                if(y+j>=park[0].length())
                {
                    flag = false;
                    break;
                }
                if(arr[y+j][x]=='X')
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                y += routes[i][2] - '0';
        }
        if(routes[i][0] == 'N')
        {
            for(int j=1;j<=routes[i][2]-'0';j++)
            {
                if(y-j<0)
                {
                    flag = false;
                    break;
                }
                if(arr[y-j][x]=='X')
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                y -= routes[i][2] - '0';
        }
        flag = true;
    }
    
    answer.push_back(y);
    answer.push_back(x);
    
    return answer;
}