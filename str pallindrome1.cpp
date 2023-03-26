#include<iostream>
using namespace std;
int length(char str[])
{
	int count = 0, i;

	for(i = 0; str[i] != '\0'; i++)
		count += 1;
	
	return count;
}

int main()
{
	char str[10];
	cout<<"Enter The Word: ";
	cin>>str;

	//Write your code here
	int len = length(str);
	int lastIndex = len-1;
	int flag = 1;

	for(int i = 0; i < len/2; i++)
		if(str[i] != str[lastIndex-i])
		{
			flag = 0;
			break;
		}

	if(flag == 1)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";

	return 0;
}
