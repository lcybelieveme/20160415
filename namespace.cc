 ///
 /// @file    namespace.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-04-15 03:14:09
 ///haochung
 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

namespace A
{
	int num=0;
	void display()
	{
		int num=10;
		cout<<num<<endl;
	}
}

int main()
{
	A::display();
}
