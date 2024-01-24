#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    stack<int> basket;
    
    for(int i=0;i<moves.size();i++)
    {
        int grab = moves[i]-1;
        for(int j=0;j<board.size();j++)
        {
            if(board[j][grab] != 0)
            {
                int num = board[j][grab];
                board[j][grab] = 0;
                if(!basket.empty() && basket.top() == num)
                {
                    basket.pop();
                    answer += 2;
                }
                else
                {
                    basket.push(num);
                }
                break;
            }
        }
    }
    
    return answer;
}