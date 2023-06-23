#include <iostream>
using namespace std;

int arr[101]={0,};

void swap(int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main() {
    int N,M,a,b;

    for(int i=0;i<=100;i++)
        arr[i]=i;
    
    cin >> N >> M;
    
    for(int i=0;i<M;i++)
    {
        cin >> a >> b;
        for(int j=0;j<=(b-a)/2;j++)
        {
            swap(a+j,b-j);
        }
    }
    
    for(int i=1;i<=N;i++)
        cout << arr[i] << " ";
    
    return 0;
}