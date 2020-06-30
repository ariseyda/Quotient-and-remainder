#include<stdio.h>

//Define a function to compute results of division. 
//Remember that division has two results; quotient and remainder, return them both.

int main(){
	
	int n,m;
	printf("Enter number to divide:");
	scanf("%d",&n);
	printf("Enter dividing:");
	scanf("%d",&m);
	
	int quotient=n/m;
	int remainder=n%m;
	printf("Quotient:%d",quotient);
	printf("\nRemainder:%d",remainder);
	
	return 0;
}
