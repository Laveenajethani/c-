/* class function define outside of class */
#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    char name[30];
    int age;
public:
    void getdata(void);
    void display(void);
};
void person::getdata(void)
{
    cout<<"enter name";
    cin>>name;
    cout<<"enter age";
    cin>>age;
}
void person::display(void)
{
    cout<<"\n name:"<<name;
    cout<<"\n age:"<<age;
}
int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}
