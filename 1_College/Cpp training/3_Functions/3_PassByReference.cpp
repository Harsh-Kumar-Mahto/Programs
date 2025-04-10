#include <iostream>
using namespace std;

void func(int &a, int &b)
{
    a = 3;
    b = 4;
}
int main()
{
    int x = 1, y = 2;
    cout << x << y;
    func(x, y);
    cout << x << y;
    return 0;
}