/*
Student Name:Milan Gahatraj
Subject: Programming Fundamentals
Lab no:08
Date:2016/10/18
*/
#include<stdio.h>
//#include<conio.h>
int main(){
	int a,b;
	int c;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	printf("Use of '+' operator:\n");
	printf("%d + %d=%d",a,b,a+b);
	
	printf("\nUse of '-' operator:\n");
	printf("%d - %d=%d",a,b,a-b);
	
	printf("\nUse of '*' operator:\n");
	printf("%d * %d=%d",a,b,a*b);
	
	printf("\nUse of '/' operator:\n");
	printf("%d / %d=%d",a,b,a/b);
	
	printf("\nUse of '%%' operator");
	printf("%d %% %d=%d",a,b,a%b);
	printf("\nUse of '++a' increment\n");
	printf("\nEnter the value of c intger value:\n");
	scanf("%d",&c);
	printf("\n Original value of c:%d",c);
	printf("\nThe post-fix increment is:%d",c++);
	printf("\nThe pre-fix increment is:%d",++c);
	
	printf("\n Original value of c:%d",c);
	printf("\nThe post-fix decrement is:%d",c--);
	printf("\nThe pre-fix decrement is:%d",--c);
	
return 0;	
}
	
		
