///
///@date   2016-04-15 23:19:57
///
 
 
 
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("0123456789ABCDEF");
	string result;
	cout<<s1<<endl;
	int n;
	while(cin>>n)
	{
		if(n<s1.size())
		{
			result+=s1[n];
		}
	}
	cout<<result<<endl;
	return 0;
}
