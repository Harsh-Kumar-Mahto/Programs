/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << ch;
            ch += 1;
        }
        ch -= 1;
        for (int j = 1; j <= i - 1; j++){
            ch -= 1;
            cout << ch;
        }
        cout << "\n";
    }
}