#include<stdio.h>
#include<string.h>

int main()
{
	char password[100];
	int hasDigit=0;
	int hasUpper=0;
	int hasLower=0;
	int hasSpecial=0;
	int score=0;
	
	printf("enter your password: ");
	fgets(password,sizeof(password),stdin);
	
	if(strlen(password)>=8)
	{
	
	printf("your password has minimum 8 characters");
	score=score+1;
}
	else
	{
	
	printf("password too short");
}

	for(int i=0;password[i]!='\0';i++)
	{
	   if(password[i]>='0'&&password[i]<='9')
	   	hasDigit=1;
	   	if(password[i]>='A'&& password[i]<='Z')
	   	hasUpper=1;
	   	if(password[i]>='a'&& password[i]<='z')
	   	hasLower=1;
	   	if(password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='!'||password[i]=='%')
	   	hasSpecial=1;
	}
	   if(hasDigit==1)
	   {
	   	printf("password contains digit!\n");
	   	score++;
	   }
	   else
	   {
	   	printf("password has no digit");
	   }
	   if(hasUpper==1)
	   {
	   	printf("password has uppercase");
	   	score++;
	   }
	   else
	   {
	   	printf("password doesn't have any uppercase");
	   	
	   }
	   if(hasLower==1)
	   {
	   	printf("password has lowercase");
	   	score++;
	   }
	   else
	   {
	   	printf("password doesn't have any lowercase");
	   }
	if(hasSpecial==1)
	{
		printf("password has special character");
		score++;
	}
	else
	{
		printf("password has no special character");
	}
	printf("Password recieved successfully");
	if(score <=2)
	printf("strength: weak\n");
	else if(score<=4)
	printf("strenght: moderate\n");
	else
	printf("strenght:strong\n");
	
	printf("\nyour password score is: %d/5",score);
	printf("Thanks for using password Analyzer!\n");
	
	
	
	return 0;
}