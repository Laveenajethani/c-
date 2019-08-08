/* this pointer examle */
#include<iostream>
#include<string.h>
using namespace std;
class person
{
	char name[20];
	float age;
	public:
		person(char *s,float a)
		{
			strcpy(name,s);
			age=a;
		}
		int person::greater(person &x)
		{
			if(x.age>=age)
			{
				return x;
			}
			else
			{
				return(*this);
			}	
		}
		void display(void)
			{
				cout<<"name:"<<name;
				cout<<"age:"<<age;
			}
};
int main()
{
	person p1("ram",37.5),p2("shayam",68.20),p3("mohan",78.30);
	person p=p1.greater(p3);
	cout<<"elder person";
	p.display();
	p=p1.greater(p2);
	cout<<"elder person\n";
	p.display();
	return 0;
}
