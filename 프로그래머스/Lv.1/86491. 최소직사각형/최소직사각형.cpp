#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int zig = -1, zag = -1;
    
    for(int i=0;i<sizes.size();i++)
    {
        if(sizes[i][0] < sizes[i][1])
            swap(sizes[i][0], sizes[i][1]);
        
        if(zig < sizes[i][0]) zig = sizes[i][0];
        if(zag < sizes[i][1]) zag = sizes[i][1];
    }
    
    answer = zig*zag;
    
    return answer;
}