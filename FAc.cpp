#include<iostream>
using namespace std;

int facto(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

bool checker(int n)
{
    bool flag=true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag =false;
            break;
        }
    }
    return flag;
}
int main()
{
   int n;
   bool flag;
   cin>>n;
   flag=checker(n);
   if(flag==true)
   {
      cout<<facto(n);
   }
   else
   {
       cout<<"Error! Not a prime number";
   }

}
