#include<iostream>
using namespace std;
int main()
{
    int m,n,l=0;

    int array1[5]={1,8,3,4,5},array2[5]={5,3,8,6,7},array3[10];



    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            if(array1[i]==array2[j])
        {
            array3[l]=array2[j];
            l++;
        }
    }

    if(l==0)
    {
        cout<<"No common element! ";
    }
    else
    {
        cout<<"The common elements in both of the arrays are : ";
        for(int i=0;i<l;i++)
        {
            cout<<array3[i]<<" ";
        }
    }
}
