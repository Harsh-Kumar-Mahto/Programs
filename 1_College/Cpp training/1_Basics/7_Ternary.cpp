// WAP to print max of three nums using ternary operator
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers:";
    cin >> n1 >> n2 >> n3;
    cout << "Greater is:";
    cout << ((n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3));
    return 0; 
}