///
///@date   2016-04-15 22:04:46
///
 
 
 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void fun(int &c,int &d)
{
	cout<<"c is:"<<c<<endl;
	cout<<"d is:"<<d<<endl;
	c++;
	d++;
}


int main()
{
	int a=0,b=0;
	cout<<"a is:"<<a<<endl<<"b is:"<<b<<endl;
	int &c=a;
	int &d=b;
	fun(c,d);
	cout<<"a is:"<<a<<endl<<"b is:"<<b<<endl;
	return 0;
}
