#include<stdio.h>
int cal(int a,int b);
int main(){
	int a,b;
	printf("Enter two positive no:");
	scanf("%d %d",&a,&b);
	printf("GCD of %d and %d is %d",a,b,cal(a,b));
	return 0;
}
int cal(int a,int b){
	if(b!=0)
	return cal(b,a%b);
	else
	return a;
}

