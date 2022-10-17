#include<iostream>
using namespace std;

void oddrange(int a,int b)
{
    int coun=0;
    for(int i=a;i<=b;i++)
    {

        if(i%2!=0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int a,b;
    cout<<"Starting value: ";
    cin>>a;
    cout<<"Ending value: ";
    cin>>b;
    oddrange(a,b);
}
