// In this problem we have to distribute n books with given number of pages(in increasing order) to m students
// such that the maximum sum of pages given to a student must be minimum
#include<iostream>
#include<climits>
using namespace std;

bool isPossible(int arr[],int n,int m,int min)   //this function checks whether the min value(mid here) is the number of pages that can be divided into m students or not
{
    int studentsRequired=1,sum=0;  //starting from student count 1 and sum i.e no of page to a student as 0;
    for(int i=0;i<n;i++)   //iterating through array
    {
        if(arr[i]>min)  //if(any single book has more pages than min,than definitely current min max is not feasible as how max can be less than pages of single book)
        {
            return false; //not possible so return false
        }
        if(sum+arr[i]>min)  //if adding current element to sum exceeds the min value that means we now need another student
        {
            studentsRequired++; //adding another student
            sum=arr[i];         //initializing sum with only current value as now previous student took early pages now pages for new student is being calculated 
            if(studentsRequired>m) //and if number of students in which book has to be divided increases beyond limits,this is not a feasible solution
            {
                return false;
            }
        }
        else
        {
            sum+=arr[i];   //normal case if adding current element to sum is still less than min than simple do it and iterate to next level until new students needs to be added or pages divided or any other condition
        }
    }
    return true;  //if loops completes successfully this means the answer is feasible and this min max pages can be divided in m students so after that we will do the same for the left of mid as done in below function to get a lower min max value
}

int allocateMin(int a[],int n,int m)  //function to find min max pages
{
    int sum=0;   //sum variable checks the number of pages allocated to a student
    if(n<m)      //if number of students is greater than number of books,distribution is not possible
    {
        return -1;
    }
    for(int i=0;i<n;i++)  //calculating the maximum number of pages that can be alloted to a students i.e. all books given to single student
    {
        sum+=a[i];
    }

    int start=0,end=sum,ans=INT_MAX;  //start is the min boundary i.e. no books to a student, end is the max boundary i.e. all books to single student & initially and is the max possible value so that it instantly resets 
    while(start<=end)     //until start is less than end
    {
        int mid=(start+end)/2;  //calculating mid and checking if is the min max pages that can be alloted
        if(isPossible(a,n,m,mid)) //checking feasibility
        {
            ans=min(ans,mid);  //if answer is feasible at mid,updating ans with min of ans and mid
            end=mid-1;    //again checking for smaller value in the left portion to get optimum solution
        }
        else
        {
            start=mid+1;  //if answer is not feasible that means mid value of pages can not be alloted to m students, we need more student therefore we increase number of pages per student and check the right portion i.e. start is changed
        }
    }
    return ans;  //return and at the end
}

int main()
{
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<"The minimum no of pages:"<<allocateMin(arr,n,m)<<endl;
    return 0;
}