#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i <= n; i++)
    {
        a[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i+1] << " ";
    }
    return 0;
}