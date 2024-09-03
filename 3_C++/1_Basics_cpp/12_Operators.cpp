/*   Pre and Post increment/decrement operator
#include<iostream>
using namespace std;
int main()
{
    int i=1,j=2,k;
      //1  2  1->2  2->3   3     4
    k= i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<endl;
    return 0;
}
*/

/*   Relational Operator
#incude<iostream>
using namespace std;
int main()
{
    int a=5,b=7,c=5;
    cin>>a>>b;
    1.a==b  False
    2.a!=b  True
    3.a>b   False
    4.a<b   True
    5.a>=b  False
    6.a<=b  True
    7.a<=c  True
    8.a>=c  True
}
*/

/*   Logical Operator

1.&&  (AND)
2.||  (OR)
3.!   (NOT)
*/

/*   Bitwise Operator
1.AND operator     0101 & 0110 -> 0100
2.OR operator      0101 | 0110 -> 0111
3.XOR operator     0101 ^ 0110 -> 0011
4.Ones complement  0101 ~ -> 1010
5.Left shift       4(0100)<<1  -> 1000(8)     a<<n -> a*2^n
6.Right shift      4(0100)>>1  -> 0010(2)     a>>n -> a/2^n
*/

/*   Assignment Operator
1. a=b   (Assign value)
2. a+=b  (a=a+b)
3. a-=b  (a=a-b)
4. a*=b  (a=a*b)
5. a/=b  (a=a/b)
*/

/*   Miscellaneous Operators
1.Size            sizeof()
2.Ternary         condition?X:Y      X->if true   Y->if false
3.Cast            char ch='a'   int(ch)->97
4.Comma(,)        performs sequence of operations
5.Ampersent(&)    gives address of a variable
6.Pointer(*)      gives memory location
*/