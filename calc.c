/*
Student Name:Milan Gahatraj
Subject: Programming Fundamentals
Lab no:08
Date:2016/10/18
*/
#include<stdio.h>
//#include<conio.h>
int main(){
	float a,b,add,sub,mul,div;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	add=a+b;
	printf("Use of '+' operator:\n");
	printf("%f + %f=%f",a,b,add);
	sub=a-b;
	printf("\nUse of '-' operator:\n");
	printf("%f - %f=%f",a,b,sub);
	mul=a*b;
	printf("\nUse of '*' operator:\n");
	printf("%f * %f=%f",a,b,mul);
	div=a/b;
	printf("\nUse of '/' operator:\n");
	printf("%f / %f=%f",a,b,div);
	
	 
return 0;	
}
	
		
