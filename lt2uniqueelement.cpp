#include<iostream>
using namespace std;
int main()
{
    int s,flag=0,i,j;

    int arr[5]={1,2,3,4,3};

    for( i=0;i<5;i++)
    {
        for( j=0;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(i==j)
        {
            cout<<arr[i]<<" ";
        }
    }

    if(flag == 0)
    {
        cout<<" Array already unique ";
    }
}
