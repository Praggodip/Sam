#include <iostream>
using namespace std;

int main()
{
    int key,i,j;


    int arr[10]={8,4,6,1,6,9,6,1,9,8}, flag[10];

    cout<<"Enter the element of the array: ";

    for(i=0; i<10; i++)
    {
        key = 1;
        flag[i] = 0;
        for(j=i+1; j<10; j++)
        {
            if(arr[i] == arr[j])
            {
                key++;
                flag[j] = -1;
            }
        }

        if(flag[i] == 0)
        {
            flag[i] = key;
        }
    }

    for(i=0; i<10; i++)
    {
        if(flag[i] != -1)
        {
            cout<< arr[i] <<" occurs = " << flag[i] << " times."<<endl;
        }
    }
}
