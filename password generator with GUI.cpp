#include<bits/stdc++.h>
using namespace std;

int rand(int limit)		//Generating random number in range (limit)
{
	static int x=3251;
	x=((x*x)/100)%10000;
	return x%limit;
}
void gen_pass(int len)
{
	string pass = "";
	string alpha = "qwertyuioplkjhgfdsazxcvbnm";
	string Alpha = "QWERTYUIOPLKJHGFDSAZXCVBNM";
	string spchar = "!@#$%&*";
	string nums = "1234567890";

	int count=0, acount=0, Acount=0, scount=0, ncount=0;

	int temp=rand(26);
	pass+=alpha[temp];
	acount++;

	while(count<len-2)
	{
		int flag=rand(4);
		switch(flag)
		{
			case 0:	//min 1 upper case letter
			{
				if((Acount==1) && (acount<2 || scount<1 || ncount<1))	//first fulfilling basic condition after then we will complete the limit of the password
				break;
				else
				{
					temp=rand(26);
					pass+=Alpha[temp];
					count++;
					Acount++;
					break;
				}
			}
			case 1:	//min 2 lower case letters
			{
				if((acount==2) && (Acount<1 || ncount<1 || scount<1))
				break;
				else
				{
					temp=rand(26);
					pass+=alpha[temp];
					count++;
					acount++;
					break;
				}
			}
			case 2:	//min 1 numeric character
			{
				if((ncount==1) && (Acount<1 || acount<2 || scount<1))
				break;
				else
				{
					temp=rand(10);
					pass+=nums[temp];
					count++;
					ncount++;
					break;
				}
			}
			case 3:	//min 1 special character
			{
				if((scount==1) && (Acount<1 || acount<2 || ncount<1))
					break;
				else
				{
					temp=rand(7);
					pass+=spchar[temp];
					count++;
					scount++;
					break;
				}
			}
		}
	}
	temp=rand(26);	//ending with Upper Case
	pass+=Alpha[temp];
	cout<<endl<<"Password Generated: "<<pass<<endl; 	//final password
	system("PAUSE");
	system("cls");
	
}
int main()
{
	int op, len;
	system("cls");
	do{
		cout<<"1. Generate Password"<<endl;
		cout<<"2. Exit"<<endl;
		cin>>op;
		if(op==1)
		{
			cout << "\n\tEnter Required Length: ";
            cin >> len;
            if(len < 12 || len > 32){   //  required length parameters check
                cout << "\n\t\tERROR!!\n\t(Password should contain at least 6 characters and at max 32 characters) \n\t";
                system("PAUSE");
                system("cls");
            }
            else
            gen_pass(len);			// function call
		}
		else if(op!=1 && op!=2)
		{
			cout<<"Invalid Input"<<endl;
			system("PAUSE");
    	    system("cls");
		}
	}while(op!=2);
}
