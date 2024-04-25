#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<string> maps) {
    int answer = -1;
    
    vector<vector<int>> vis(maps.size(), vector<int>(maps[0].size(),0));
    queue<pair<int,int>> q;
    
    int start_x = -1, start_y = -1;
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,1,-1};
    bool lever = false;
    
    for(int i=0;i<maps.size();i++)
    {
        for(int j=0;j<maps[0].size();j++)
        {
            if(maps[i][j] == 'S')
            {
                start_x = j;
                start_y = i;
                break;
            }
        }
        if(start_x != -1)
            break;
    }
    
    q.push({start_x,start_y});
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        if(maps[y][x] == 'E' && lever)
        {
            answer = vis[y][x];
            break;
        }
        else if(maps[y][x] == 'L' && !lever)
        {
            lever = true;
            int time = vis[y][x];
            
            q = queue<pair<int,int>>();
            fill(vis.begin(),vis.end(),vector(vis[0].size(),0));
            
            vis[y][x] = time;
        }
        
        for(int i=0;i<4;++i)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            
            if(nx>=0 && ny>=0 && nx<maps[0].size() && ny<maps.size())
            {
                if(maps[ny][nx]!='X'&&vis[ny][nx]==0)
                {
                    q.push({nx,ny});
                    vis[ny][nx] = vis[y][x] + 1;
                }
            }
        }
    }
    
    return answer;
}