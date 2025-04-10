/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= i; j++)
        // {
        //     if ((i + j) % 2 == 0)
        //     {
        //         cout << "1" << " ";
        //     }
        //     else
        //     {
        //         cout << "0" << " ";
        //     }
        // }

        // Shorter way
        for (int j = 1; j <= i; j++)
        {
            cout << (1 - (i + j) % 2);
        }

        // Another way of doing the same thing
        // for(int j = i; j >= 1; j--)
        // {
        //     cout << j % 2;
        // }
        cout << "\n";
    }
}