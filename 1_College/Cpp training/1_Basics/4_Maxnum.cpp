// WAP to find max of three numbers;
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter numbers:";
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << "Largest number is:" << n1;
        }
        else
        {
            cout << "Largest number is:" << n3;
        }
    }
    else
    {
        if (n2 > n3)
        {
            cout << "Largest number is:" << n2;
        }
        else
        {
            cout << "Largest number is:" << n3;
        }
    }
}