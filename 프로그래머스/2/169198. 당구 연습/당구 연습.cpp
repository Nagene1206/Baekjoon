#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int m, int n, int startX, int startY, vector<vector<int>> balls) {
    vector<int> answer;
    
    for(int i=0;i<balls.size();i++)
    {
        int endX = balls[i][0];
        int endY = balls[i][1];
        
        if(startX == endX)
        {
            int d1 = (endY-startY)*(endY-startY)+4*startX*startX;   //왼쪽 벽에 튕길때
            int d2 = (endY-startY)*(endY-startY)+4*(m-startX)*(m-startX);   //오른쪽
            int d3;
            
            if(startY<endY) d3 = (startY+endY)*(startY+endY);
            else d3 = (2*n-startY-endY)*(2*n-startY-endY);
            
            answer.push_back(min(min(d1,d2),d3));
        }
        else if(startY == endY)
        {
            int d1 = (endX-startX)*(endX-startX)+4*startY*startY;
            int d2 = (endX-startX)*(endX-startX)+4*(n-startY)*(n-startY);
            int d3;
            
            if(startX<endX) d3 = (startX+endX)*(startX+endX);
            else d3 = (2*m-startX-endX)*(2*m-startX-endX);
            
            answer.push_back(min(min(d1,d2),d3));
        }
        else
        {
            int d1 = (endX-startX)*(endX-startX) + (endY+startY)*(endY+startY);
            int d2 = (endX+startX)*(endX+startX) + (endY-startY)*(endY-startY);
            int d3 = (endY-startY)*(endY-startY) + (2*m-startX-endX)*(2*m-startX-endX);
            int d4 = (endX-startX)*(endX-startX) + (2*n-startY-endY)*(2*n-startY-endY);
            
            answer.push_back(min(min(d1,d2),min(d3,d4)));
        }
    }
    
    return answer;
}