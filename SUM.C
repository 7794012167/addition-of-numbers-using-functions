#include<stdio.h>
#include<conio.h>

void sum();     //function prototype
void main()
{
	clrscr();
	sum(); //function call,   calling function
	getch();
}
void sum()  //function definition,  called function
{
	int num1,num2;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("sum of %d and %d is %d\n",num1,num2,num1+num2);

}