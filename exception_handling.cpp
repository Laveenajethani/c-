/*examle of exception handling*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a and b";
    cin>>a>>b;
    int x=(a-b);
    try
    {
        if(x!=0)
            cout<<"result="<<(a/(a-b));
        else
            throw(x);
    }
    catch(int i)
    {
        cout<<"\n division by ZERO";
    }
    return 0;
}
