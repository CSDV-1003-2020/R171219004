#include<iostream>
#include<cmaths>
using namespace std;
float substract(float x,float y);
float add(float x, float y);
float multiply(float x, float y);
<<<<<<< HEAD
float divide(float x, float y);
=======
float modulo(float x, float y);
>>>>>>> origin/R171219005
int main()
{
float first_no;
float second_no;
float diff_of_nos;
float sum_of_numbers;
float product_of_numbers;
<<<<<<< HEAD
=======
float remainder;

>>>>>>> origin/R171219005
cout<<"enter the 2 numbers"<<endl;
cin>>first_no>>second_no;
diff_of_nos= substract(first_no, second_no);
sum_of_numbers=add(first_no, second_no);
division_of_numbers=divide(first_no, second_no);
cout<<"difference of two numbers"<<diff_of_nos<<endl;
cout<<"sum of two numbers "<<sum_of_numbers<<endl;
product_of_numbers=multiply(first_no, second_no);
remainder=modulo(first_no, second_no);
cout<<"difference of two numbers"<<diff_of_nos<<endl;
cout<<"product of two numbers"<<product_of_numbers<<endl;
<<<<<<< HEAD
cout<<"division of two numbers "<<division_of_numbers<<endl;
=======
cout<<"remainder is"<<remainder<<endl;
>>>>>>> origin/R171219005
return 0;
}
float substract(float x,float y)
{
if(x>y)
	return (x-y);
if(y>x)
	return (y-x);
}
float multiply(float x, float y)
{
	return (x*y);
}
float modulo(float x, float y)
{
	if(second_no==0)
		cout<<"INVALID";
	else
		return 0;

}

float add(float x, float y)
{
    return (x+y);
}

float divide(float x, float y)
{
	if(second_no==0)
	{
		cout<<"Invalid input for second number "<<endl;
	}

	else
	{
		return first_no/second_no;
	}
}
