#include <iostream>
using namespace std;

int main() {
    unsigned int n; //맨 밑 사각형의 개수
    cin >> n;
    
    //윗면 + 좌측 우측 + 아랫면
    cout << 4*n;
    
    return 0;
}