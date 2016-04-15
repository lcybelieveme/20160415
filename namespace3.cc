 ///
 /// @file    namespace.cc
 /// @date    2016-04-15 03:14:09
 ///
 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

namespace B
{
	int num=20;
}

namespace A
{
	int num=0;
	void display()
	{
		int num=10;
		cout<<"I'm in A the B::num = "<<B::num<<endl;
	}
}

namespace B
{
	void display()
	{
		cout<<"I'm in B the A::num = "<<A::num<<endl;;
	}
}




using A::display;

int main()
{
	display();
	B::display();
	

}
