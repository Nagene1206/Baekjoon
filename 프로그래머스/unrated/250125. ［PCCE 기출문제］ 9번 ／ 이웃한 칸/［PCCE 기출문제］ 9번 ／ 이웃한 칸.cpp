#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    
    int bh_max = board.size();  //보드 세로 크기
    int bw_max = board[0].size();   //보드 가로 크기
    
    string color = board[h][w];
    
    if(h>0)
    {
        if(board[h-1][w] == color) answer++;
    }
    if(w>0)
    {
        if(board[h][w-1] == color) answer++;
    }
    if(h<bh_max-1)
    {
        if(board[h+1][w] == color) answer++;
    }
    if(w<bw_max-1)
    {
        if(board[h][w+1] == color) answer++;
    }
    
    return answer;
}