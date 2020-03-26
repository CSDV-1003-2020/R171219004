#include<iostream>
#include<cmaths>
using namespace std;
int substract(int x,int y);
int main()
{
int first_no;
int second_no;
int diff_of_nos;

cout<<"enter the 2 numbers"<<endl;
cin>>first_no>>second_no;
diff_of_nos= substract(first_no, second_no);
cout<<"difference of two numbers"<<diff_of_nos<<endl;
return 0;
}
int substract(int x,int y)
{
if(x>y)
	return (x-y);
if(y>x)
	return (y-x);
}

