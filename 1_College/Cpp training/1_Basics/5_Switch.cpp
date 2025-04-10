// Day of the week
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter day number of week:";
    cin >> day;
    if (day > 0 && day < 8)
    {
        switch (day)
        {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        default:
            cout << "Any other day";
        }
    }
    else
    {
        cout << "Invalid Input";
    }
}