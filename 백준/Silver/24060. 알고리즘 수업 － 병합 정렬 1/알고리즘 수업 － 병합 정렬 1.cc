#include <iostream>
#include <cmath>
using namespace std;

int cnt=0;
int k;
int A[500001] = { 0, };
int tmp[500001] = { 0, };
bool flag = false;

void merge(int A[], int p, int q, int r) {
    int i = p, j = q + 1, t = 1;

    while (i <= q and j <= r) {
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p;
    t = 1;
    while (i <= r)
    {
        A[i++] = tmp[t++];
        cnt++;
        if (k == cnt)
        {
            cout << A[i - 1];
            flag = true;
            return;
        }
    }
}

void merge_sort(int A[], int p, int r)
{
    if (p < r) 
    {
        int q = floor((p + r) / 2);      
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r); 
        merge(A, p, q, r);
    }
}

int main() 
{
    int n;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    merge_sort(A, 0, n - 1);
    if (!flag)
        cout << -1;
}