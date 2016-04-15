///
///@date   2016-04-15 22:30:48
///
 
 
 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1;
	while(getline(cin,s1))
//		cout<<s1<<endl;
		if(s1.size()>10)
			cout<<s1<<endl;
			
		return 0;
}
