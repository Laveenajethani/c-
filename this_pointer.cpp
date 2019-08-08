/* initializing values using this pointer */
#include<iostream>
using namespace std;
class student
{
	int a,b;
	public:
		void max(int a,int b)
		{
			this->a=a;
			this->b=b;
			cout<<a<<b;
		}
};
int main()
{
	student s;
	int a,b;
	cout<<"enter a and b";
	cin>>a>>b;
	s.max(a,b);
	return 0;
}
