 /*   			 ____         ____ 
		        /   /\       /   /\
		       /   / /	    /	/ /
		      /   / /______/   / /
		     /   / _______    / /
		    /   / /------/   / /
		   /   / /      /   / /
		  /___/ /      /___/ /
	   	  \___\/       \___\/
    This tool is subjected to copyright. Please take care of that dear user.
    */
#include<stdio.h>
#include<string.h>
int spchar(char pass[])
{
	int i,count_spchars=0;
	for(i=0;i<strlen(pass);i++)
	{
		if(pass[i]>=33 && pass[i]<=47 || pass[i]>=58 && pass[i]<=64)
		count_spchars++;
	}
	return count_spchars;
}
int nums(char pass[])
{
	int i,count_nums=0;
	for(i=0;i<strlen(pass);i++)
	{
		if(pass[i]<=48 && pass[i]<=57)
		count_nums++;	
	}
	return count_nums;
}
int count_uc(char pass[])
{
	int i,count=0;
	for(i=0;i<strlen(pass);i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		count++;
	}
	return count;
}
int count_lc(char pass[])
{
	int i, count=0;
	for(i=0;i<strlen(pass);i++)
	{
		if(pass[i]>=97 && pass[i]<=122)
		count++;
	}
	return count;
 } 
int main()
{
	label:;
	printf("\t\t******Password Validator********\n");
	char pass[50],c;			
	printf("Enter your password:");
	scanf("%s",pass);							//input pass
	int uc=count_uc(pass);						//count upper case
	int lc=count_lc(pass);						//count lower case
	int count_spchar=spchar(pass);				//count special chars
	int count_nums=nums(pass);					//count nums
	if((count_spchar>=2)&&(count_nums>=2)&&(strlen(pass)>=8)&&(lc>1)&&(uc>1))
	{
		printf("\nSpecial characters: %d\n\nNumbers: %d\n\nUpper cases: %d\n\nLower cases: %d\n\nTotal Size: %d\n",count_spchar,count_nums,uc,lc,strlen(pass));
		printf("\n=======Strong=======\n");
	}
	else
	{
		printf("\nSpecial characters: %d\n\nNumbers: %d\n\nUpper cases: %d\n\nLower cases: %d\n\nTotal Size: %d\n",count_spchar,count_nums,uc,lc,strlen(pass));
		printf("\n=======Weak=======\n");
	}
	printf("Try Again?[Y/N]");
	fflush(stdin);
	scanf("%c",&c);
	if(c==89 || c==121)
	{
		system("cls");
		goto label;
	}
}
