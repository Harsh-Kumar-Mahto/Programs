#include<iostream>
using namespace std;
class Box
{
    public:
    int side;
    void area(int side)
    {
        cout<<6*side*side;
    }
    void volume(int side)
    {
        cout<<side*side*side;
    }
    Box(int s)
    {
        side=s;
        area(side);
        volume(side);
    }
};
int main()
{
    Box b(2);
}