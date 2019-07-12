/* wen take time input from user and display time using class concept*/
#include<iostream>
#include<conio.h>
using namespace std;
class time{
int hr,minute,sec;
public:
    void set_time(void);
    void show_time(void);
};
void time::set_time(void)
{
    cout<<"enter hr,min,sec";
    cin>>hr>>minute>>sec;
}
void time::show_time(void)
{
    cout<<"time is: ";
    cout<<hr<<":"<<minute<<":"<<sec;
}
int main()
{
    time t;
    t.set_time();
    t.show_time();
}
