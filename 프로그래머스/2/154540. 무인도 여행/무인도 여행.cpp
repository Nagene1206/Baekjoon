#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int visited[101][101] = {0,};
    
    int n = maps.size();
    int m = maps[0].size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(maps[i][j]!='X'&&visited[i][j]==0)
            {
                queue<pair<int,int>> q;
                q.push({i,j});
                visited[i][j] = 1;
                int sum = (maps[i][j]-'0');
                
                while(!q.empty())
                {
                    int cx = q.front().first;
                    int cy = q.front().second;
                    q.pop();
                    
                    for(int k=0;k<4;k++)
                    {
                        int nx = cx+dx[k];
                        int ny = cy+dy[k];
                        
                        if(nx<0||nx>=n||ny<0||ny>=m)
                            continue;
                        if(maps[nx][ny]=='X'||visited[nx][ny]==1)
                            continue;
                        
                        q.push({nx,ny});
                        visited[nx][ny] = 1;
                        sum += maps[nx][ny] - '0';
                    }
                }
                
                answer.push_back(sum);
            }
        }
    }
    
    if(answer.size() == 0)
        answer.push_back(-1);
    
    sort(answer.begin(),answer.end());
    
    return answer;
}