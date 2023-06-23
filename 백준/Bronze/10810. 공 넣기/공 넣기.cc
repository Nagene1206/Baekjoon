#include <iostream>
using namespace std;

int main() {
    int N,M,a,b,c;
    cin >> N >> M;
    
    int array[N+1]={0,};
    
    for(int i = 0; i < M; i++) {
        cin >> a >> b >> c;
        for(int k = a; k <= b; k++)
            array[k] = c;
    }

  for(int i = 1; i <= N; i++) {
    cout << array[i] << " ";
  }

    
    return 0;
}