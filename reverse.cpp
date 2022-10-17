#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,k=0;
    char a[25];
    cout<<"enter=";
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        k++;
    }
    cout<<"reverse string is-->";
    for(i=k-1;i>=0;i--)
    {
        cout<<a[i];
    }
}

