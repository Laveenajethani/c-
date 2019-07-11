/* make a box class for assign and display the length and width */
#include<iostream>
#include<conio.h>
using namespace std;
class box
{
    int l,w;
public:
    void assign(int x,int y)
    {
        l=x;
        w=y;
    }
    void display()
    {
        cout<<l<<"\t"<<w;
    }
};
int main()
{
    box b1;
    b1.assign(10,20);
    b1.display();
    return 0;
}
