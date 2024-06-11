#include<stdio.h>
#include<math.h>
int Armstrong(int n){
	if(n>0)
	return(pow(n%10,3)+Armstrong(n/10));
}
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(Armstrong(n)==n)
	printf("it is an armstrong no");
	else
	printf("It is not a armstrong no");	
}
