/*
E 
E D
E D C
E D C B
E D C B A
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'E';
        for (int j = 1; j <= i; j++){
            cout << ch << " ";
            ch -= 1;
        }
        cout << endl;
    }
}