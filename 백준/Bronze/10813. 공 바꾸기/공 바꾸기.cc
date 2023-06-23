#include <iostream>
using namespace std;

int main() {
    int N,M,a,b,x;
    cin >> N >> M;
    
    int array[N+1]={0,};
    
    for(int i=1;i<=N;i++)
        array[i]=i;
    
    for(int i=0;i<M;i++)
    {
        cin >> a >> b;
        
        x=array[a];
        array[a]=array[b];
        array[b]=x;
    }
    
    for(int i=1;i<=N;i++)
        cout << array[i] << " ";
    
    return 0;
}