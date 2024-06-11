#include<stdio.h>
void copy(char[],char[],int);
int main(){
	char a[20],b[20];
	printf("Enter a string:");
	scanf("%s",a);
	copy(a,b,0);
	printf("copied\n");
	printf("1st string is: %s\n",a);
	printf("2nd string is: %s\n",b);
	return 0;
}
void copy(char a[],char b[],int n){
	b[n]=a[n];
	if(a[n]=='\0')
	return;
	copy(a,b,n+1);
}
