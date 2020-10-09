#include <stdio.h>
#include <string.h>
char name[10];
char surname[20];
void connectstring()
{
	printf("Enter your name here:-\n");
	scanf("%s",name);
	printf("Now enter your surname:-\n");
	scanf("%s",surname);	
	strcat(name,surname);
	printf("Welcome %s\n",name);
}

void find_char_in_string()
{
	char x, a;
	printf("Enter your name here:-\n");
	scanf("%s",name);
	printf("Now enter your surname:-\n");
	scanf("%s",surname);
	strcat(name,surname);
	printf("Enter the character you wanted to find in the name.\n");
	scanf("%s",x);
	a = strchr(name,x);
	printf("The character you entered to find is %c and it's located %s \n",x,a); 
}

void authority()
{
	char name;
	int result;
	char authority[] = "devam";
	printf("Enter your name:-\n");
	scanf("%s",name);
	/*result = strcmp(authority, name);
	if (result<0 , result>0)
	{
		printf("you are nit authorised %s\n",name);
	}
	else
	{
		printf("Welcome Mr.%s to string operations\n",name);
	}*///i am not sure for this code myabe this is the reason to segmentation fault.but apart from this the code run perfectly.
}
void main()
{
	authority();
	connectstring();
	find_char_in_string();
}
