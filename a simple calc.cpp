#include<iostream>
using namespace std;
int main()
{
	/*the essense of the break is to terminate the flow
	int i = 2;*/
	int a,b;
	char operation;
	cout<<"Calculator to perform a simple operation between 2 numbers\n";
	cout<<"What do you want to do?\n";
	
	cin>>a>>operation>>b;
	switch(operation)
	{
		case '+': cout<<a+b<<endl;break;
		case '-': cout<<a-b<<endl;break;
		case '*': cout<<a*b<<endl;break;
		case '/': cout<<a/b<<endl;break;
		case '%': cout<<a%b<<endl;break;
		default: cout<<"invalid input"<<endl;
	}
	
}
