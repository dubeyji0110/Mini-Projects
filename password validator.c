#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0,d=0,e=0;
	char n[50];
	printf("Enter your password:");
	scanf("%s",n);
	for(i=0;n[i]!='\0';i++)
	{
		e=e+1;
		
		if((n[i]=='!')||(n[i]=='@')||(n[i]=='#')||(n[i]=='$')||(n[i]=='%')||(n[i]=='&')||(n[i]=='*'))
		c++;
	
		if((n[i]=='1')||(n[i]=='2')||(n[i]=='3')||(n[i]=='4')||(n[i]=='5')||(n[i]=='6')||(n[i]=='7')||(n[i]=='8')||(n[i]=='9')||(n[i]=='0'))
		d++;
	}
	if((d>=2)&&(c>=2)&&(e>=8))
	printf("Strong");
	else
	printf("Weak");
}
