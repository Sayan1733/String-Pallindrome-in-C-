#include<stdio.h>
int main(){
	int i,j,n=0,f=0;
	char s[30],rs[30];
	printf("Enter The Word:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		n++;
	}
	for(i=0;i<(n/2);i++){
		if(s[i]!=s[(n-1)-i]){
			f=1;
			break;
		}
		
	}
	if(f==0){
		printf("The String IS Pallindrome!");
	}
	else
		printf("The String IS Not PAllindrome!");
	return 0;
}
