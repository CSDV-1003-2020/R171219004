#include<iostream>
#include<cmaths>
using namespace std;
float substract(float x,float y);
int main()
{
float first_no;
float second_no;
float diff_of_nos;

cout<<"enter the 2 numbers"<<endl;
cin>>first_no>>second_no;
diff_of_nos= substract(first_no, second_no);
cout<<"difference of two numbers"<<diff_of_nos<<endl;
return 0;
}
float substract(float x,float y)
{
if(x>y)
	return (x-y);
if(y>x)
	return (y-x);
}

