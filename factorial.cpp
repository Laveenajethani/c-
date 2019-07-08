/*program to calculate factorial of a number*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,fact=1,num;
    cout<<"enter a number"<<endl;
    cin>>n;
    num=n;
    while(num!=1)
    {
        fact=fact*num;
        num--;
    }
    cout<<"factorial of: "<<n<<"\t"<<"is "<<fact<<endl;
    return 0;
}
