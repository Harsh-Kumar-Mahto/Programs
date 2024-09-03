#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter size of array:";
   cin>>n;
   cout<<"Enter the sentence:";
   cin.ignore();  //These are to accomodate spaces.
   char arr[n+1];

   cin.getline(arr,n);
   cin.ignore();

   int i=0;
   int count=0,maxi=0;
   int st=0,maxst=0;
   while(1)
   {
       if(arr[i]==' ' || arr[i]=='\0')
       {
           if(count>maxi)
           {
            maxi=count;
            maxst=st;
           }
           count=0;
           st=i+1;
       }
       else
       {
           count++;
       }
       if(arr[i]=='\0')
       {
        break;
       }
       i++;
   }
   cout<<maxi<<endl;
   for(int i=0;i<maxi;i++)
   {
      cout<<arr[i+maxst];
   }

   return 0;
}