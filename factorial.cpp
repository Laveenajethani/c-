/*program to calculate factorial of a number*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,fact=1,num;
    num=n;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n!=1)
    {
        fact=fact*n;
        n--;
    }
    cout<<"factorial of: "<<num<<"\t"<<"is "<<fact<<endl;
    return 0;
}
