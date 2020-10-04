#include<iostream>
#include"sum.h"
#include<ctime>
#include"dif.h"
using namespace std;

int main()
{
	srand(time(0));
	cout<<"Hello git"<<endl;
	
	int a, b;
	cout<<"Enter two numbers->";
	cin>>a>>b;
	int res = Sum(a,b);
	cout<<"Res = "<<res<<endl;
	res = Dif(a,b);
	cout<<"Res = "<<res<<endl;

}