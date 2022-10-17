#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},key,flag=0;

    cout<<"Input a number to search : ";
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            flag++;
        }
    }

    if(flag==0)
    {
        cout<<"The number not found";
    }

    else
    {
        cout<<"The number occurs "<<flag<<" times in the array";
    }
}
