#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m,a_size,b_size;

    cin >> n >> m;

    vector<int> A(n);
    vector<int> B(m);
    
    a_size=n;
    b_size=m;

    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    for (int i = 0; i < m; i++)
        cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < m; i++)
    {
        if (binary_search(A.begin(), A.end(), B[i]))
            a_size--;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (binary_search(B.begin(), B.end(), A[i]))
            b_size--;
    }

    cout << a_size+b_size;

    return 0;
}