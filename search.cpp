#include <iostream>
using namespace std;
int main()
{

    int x,n,pos,count=0;

    cout<<"enter array size";
    cin>>n;
    int *s=new int [n];
    for(int i=0;i<n;i++)
    {
        cout<<" ";
        cin>>s[i];
    }
    cout<<"enter elements to be searched: ";
    cin>>x;
    for (int i=0;i<n;i++)
    {
        if (count ==0)
        {
            cout<<"element not found";
        }
        else
        {
            cout<<"element"<<x<<"found at position" <<pos;
        }
    }

}
