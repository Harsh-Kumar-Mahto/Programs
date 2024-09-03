// Add two given binary numbers
#include <iostream>
using namespace std;

int reverse(int n)
{
    int res=0;
    while(n>0)
    {
        res=res*10+(n%10);
        n/=10;
    }
    return res;
}

int addBin(int a, int b) {
    int carry = 0;
    int ans = 0;
    while (a > 0 || b > 0) {
        if (a % 2 == 0 && b % 2 == 0) {
            ans = ans * 10 + carry;
            carry = 0;
        } else if (a % 2 == 1 && b % 2 == 1) {
            ans = ans * 10 + carry;
            carry = 1;
        } else {
            ans = ans * 10 + (carry ^ 1); // XOR with 1 to flip the carry
        }
        a /= 10;
        b /= 10;
    }
    while(a>0)
    {
        if(carry==0){
            ans=ans*10+(a%2);
        }else{
            if(a%2==0)
            {
                ans=ans*10+1;
                carry=0;
            }
            else{
                ans=ans*10+0;
                carry=1;
            }
        }
        a/=10;
    }
    while(b>0)
    {
        if(carry==0){
            ans=ans*10+(b%2);
        }else{
            if(b%2==0)
            {
                ans=ans*10+1;
                carry=0;
            }
            else{
                ans=ans*10+0;
                carry=1;
            }
        }
        b/=10;
    }
    if (carry) {
        ans = ans * 10 + 1;
    }
    return reverse(ans);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << addBin(a, b);
    return 0;
}
