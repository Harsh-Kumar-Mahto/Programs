#include<iostream>
using namespace std;

void primefactor(int n)
{
    int spf[n+1]={0};  //making array to contain numbers from 0 to n
    for(int i=2;i<=n;i++)
    {
        spf[i]=i;   //giving values to each indice
    }
    for(int i=2;i<=n;i++)  //iterating to each element
    {
        if(spf[i]==i)  //checking whether the value and indice are equal 
        {
            for(int j=i*i;j<=n;j+=i)  //if yes,iterating over its multiple
            {
                if(spf[j]==j)  //if the indices and value of multiple are equal i.e. not changed earlier by other smaller number
                {
                    spf[j]=i;   //change the value at that indice to the smallest factor
                }
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";  //printing the value at the indice(that is smallest factor of it)
        n=n/spf[n];   //updating the value of number after dividing it by spf and then again repeating the loop and printing the value at the new indice that will be its smallest factor 
    }
}

int main()
{
    int n;
    cout<<"Enter number to find its spf:";
    cin>>n;
    primefactor(n);
    return 0;
}