#include<stdio.h>
 int add(int,int);
 int sub(int,int);
 int main(){
 	int a,b,c;
 	printf("enter the value of a and b:");
 	scanf("%d,%d",&a,&b);
 	 add(a,b);
 	 sub(a,b);
return 0;
 
 }
 int add(int a,int b)
 {
  int c=a+b;
 	printf("the sum is %d",c);
 	return c;
 }
 int sub(int a,int b){
 	int c=a-b;
 	printf("the diff is %d",c);
 	return c;
 }
