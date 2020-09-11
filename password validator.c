#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0,d=0,e=0;
	char pass[50];
	printf("Enter your password:");
	scanf("%s",pass);
	for(i=0;pass[i]!='\0';i++)
	{
		e=e+1;
		
		if((pass[i]=='!')||(pass[i]=='@')||(pass[i]=='#')||(pass[i]=='$')||(pass[i]=='%')||(pass[i]=='&')||(pass[i]=='*'))
		c++;
	
		if((pass[i]=='1')||(pass[i]=='2')||(pass[i]=='3')||(pass[i]=='4')||(pass[i]=='5')||(pass[i]=='6')||(pass[i]=='7')||(pass[i]=='8')||(pass[i]=='9')||(pass[i]=='0'))
		d++;
	}
	if((d>=2)&&(c>=2)&&(e>=8))
	printf("Strong");
	else
	printf("Weak");
}
