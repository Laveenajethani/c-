/*taking input of three stdent and display it the information using array of object*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    string names;
    int marks;
public:
    void getname()
    {
        cin>>names;
    }
    void getmarks()
    {
        cin>>marks;
    }
    void display()
    {
        cout<<"name:"<<names<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main()
{
    student st[3];
    for(int i=0;i<3;i++)
    {
        cout<<"student"<<i+1<<endl;
        cout<<"enter name"<<endl;
        st[i].getname();
        cout<<"enter marks"<<endl;
        st[i].getmarks();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"student"<<i+1<<endl;
        st[i].display();
    }
    return 0;
}
