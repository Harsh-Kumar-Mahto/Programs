/*
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = n; j >= 1; j--)
    //     {
    //         cout << max(i, j) << " ";
    //     }
    //     for (int j = 2; j <= n; j++)
    //     {
    //         cout << max(i, j) << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 2; i <= n; i++)
    // {
    //     for (int j = n; j >= 1; j--)
    //     {
    //         cout << max(i, j) << " ";
    //     }
    //     for (int j = 2; j <= n; j++)
    //     {
    //         cout << max(i, j) << " ";
    //     }
    //     cout << endl;
    // }
    int m = 2 * n - 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int up = i - 1;
            int down = m - i;
            int left = j - 1;
            int right = m - j;
            cout << (n - (min(up, min(left, min(down, right))))) << " ";
        }
        cout << endl;
    }
}