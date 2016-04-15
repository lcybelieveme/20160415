///
///@date   2016-04-15 21:35:38
///
 
 
 
#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;

class A
{
	private:
		char name[20];
		float price;
	public:
		void display();
		void setbrand(const char*s);
		void setprice(float p);
};

void A::display()
{
	cout<<A::name<<" price is:"<<A::price<<endl;
}

void A::setbrand(const char *s)
{
	strcpy(A::name,s);
}
void A::setprice(float p)
{
	A::price=p;
}

int main()
{
	A BMW;
	BMW.setprice(100.1);
	const char*const p="BMW";
	BMW.setbrand(p);
	BMW.display();
	return 0;
}
