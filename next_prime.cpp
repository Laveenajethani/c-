/* program to find next prime number*/
#include<iostream>
using namespace std;
bool is_prime(int);
int main()
{
    int n,i;
    cout<<"enter a number";
    cin>>n;
    for(i=n;!is_prime(i);i++);
    cout<<i;
    return 0;
}
bool is_prime(int a)
{
    int count=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
            count++;
        if(count==0)
            return true;
        else
            return false;
    }
}

