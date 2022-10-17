#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,10},arr3[10];


    for(int i=0,j=0;i<10;i++)
    {
        if(i<5)
        {
            arr3[i]=arr1[i];
        }
        else
        {
            arr3[i]=arr2[j];
            j++;
        }
    }

    cout<<"The array after merging is : "<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse of the merged array is : "<<endl;

    for(int i=(10)-1;i>=0;i--)
    {
        cout<<arr3[i]<<" ";
    }
}
