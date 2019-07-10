/*program to add two complex number like 3+4i or 5+4i than output is 8+8i */
#include<iostream>
#include<conio.h>
struct complex
{
private:
    int a,b;
public:
  void set_data(int x,int y)
  {
      a=x;
      b=y;
  }
  void show_data()
  {
    std:: cout<<"\n"<<a<<"\n"<<b;
  }
  complex add(complex c)
  {
      complex temp;
      temp.a=a+c.a;
      temp.b=b+c.b;
      return temp;
  }

};
main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,4);
    c3=c1.add(c2);
    c3.show_data();
}
