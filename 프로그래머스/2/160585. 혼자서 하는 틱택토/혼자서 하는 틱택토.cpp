#include <string>
#include <vector>

using namespace std;

int solution(vector<string> board) {
    int answer = -1;
    
    int o_line = 0, x_line = 0;
    int o_cnt = 0, x_cnt = 0;
    
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].length();j++)
        {
            if(board[i][j]=='O') o_cnt++;
            else if(board[i][j]=='X') x_cnt++;
        }
    }
    
    for(int i=0;i<board.size();i++)
    {
        if(board[i]=="OOO") o_line++;
        else if(board[i]=="XXX") x_line++;
    }
    
    for(int i=0;i<3;i++)
    {
        if(board[0][i]=='O'&&board[1][i]=='O'&&board[2][i]=='O') o_line++;
        else if(board[0][i]=='X'&&board[1][i]=='X'&&board[2][i]=='X') x_line++;
    }
    
    if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O') o_line++;
    if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X') x_line++;
    
    if(board[2][0]=='O'&&board[1][1]=='O'&&board[0][2]=='O') o_line++;
    if(board[2][0]=='X'&&board[1][1]=='X'&&board[0][2]=='X') x_line++;
    
    //판별
    
    int dif = o_cnt - x_cnt;
    
    //if(o_line>1||x_line>1) return 0;    //한줄보다 많을 때
    
    if(o_line == 1 && x_line == 1) return 0;    //O가 완성되었으나 X도 있을때
    
    if(dif < 0 || dif > 1) return 0;   //X가 O보다 많을 때, O가 X보다 2개 많을 때
    
    if(dif == 0 && o_line == 1) return 0; //O가 완성되었으나 X가 수를 더 놓은 경우
    
    if(dif == 1 && x_line == 1) return 0; //X가 완성되었으나 O가 X의 수와 맞지 않은 경우
    
    answer = 1;
    
    return answer;
}