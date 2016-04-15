///
///@date   2016-04-15 22:39:12
///
 
 
 
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("hello ");
	string s2("world!\n");
	string s3=s1+s2;
	cout<<s3<<endl;
	cout<<s3.substr(6)<<endl;
	cout<<s3.substr(0,6)<<endl;
	for(auto c :s3)
		cout<<c<<endl;
	return 0;
}
