#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	struct bank
	{
		int acc,bal,menu,with,depo,pin;
		char name[50];
	}
	bnk[9];


		int i,j,k,l,choose,bal,with,depo,pin,acc;
		l=0;

		while(1)
		{
			printf("\n\nWELCOME TO BANK SIR\n");
			printf("\nwhat do you want to do");
			printf("\n1. to add an account ");
			printf("\n2.to display all account ");
			printf("\n3.to view your balance ");
			printf("\n4. to withdraw ");
			printf("\n5. to deposit ");
			printf("\n6. to exit\n ");
			scanf("%d",&choose);


			switch(choose)
			{
				case 1:
				printf("ENTER YOUR DETAILS SIR\n");

				for(i=l;i<=l;i++)
				{
					printf("\n\nENTER YOUR NAME  ");
					scanf("%s",&bnk[i].name);
					fflush(stdin);

					printf("\nENTER YOUR ACCOUNT NO.  ");
					scanf("%d",&bnk[i].acc);

					printf("\n ENTER THE MONEY YOU WANT TO ADD  ");
					scanf("%d",&bnk[i].bal);

				}

					l++;

					printf("\t\tSUCCESS\n*****YOUR ACC. IS SUCCESSFULLY CREATED*****");




			break;


			case 2:

				if(l==0)
				{
					printf("OPERATION TERMINATED\n");
					printf("\n*****YOU NEED TO CREATE AN ACCOUNT FIRST*****");
				}

				else
				{
					for(i=0;i<l;i++)
					{
						printf("\n\tINSERTED ACCOUNTS ARE \n");


						printf("\n\t ACCOUNT HOLDER NAME : %s",bnk[i].name);

						printf("\n\tACCOUNT NO. : %d\n",bnk[i].acc);

						printf("\n\t ACCOUNT BALANCE : %d",bnk[i].bal);

						printf("\n");

					}

						printf("\n");
				}

			break;

			case 3:

				if(l==0)
				{
					printf("OPERATION TERMINATED\n");
					printf("*****YOU NEED TO CREATE AN ACCOUNT FIRST*****");

				}
				else
				{
					printf("ENTER AN ACCOUNT NO.");
					scanf("%d",&j);

					for(i=0;i<=l;i++)
					{
						if(j==bnk[i].acc)
						{
							printf("\t\nACCOUNT NO.: %d",bnk[i].acc);

							printf("\t\nACCOUNT BALANCE :%d",bnk[i].bal);

						}
						printf("\n");
					}
				}
			break;


			case 4:

				if(l==0)
				{
					printf("OPERATION TERMINATED");
					printf("\n*****YOU NEED TO CREATE AN ACCOUNT FIRST*****");
				}

				else
				{
					printf("ENTER YOUR ACCOUNT NO. ");
					scanf("%d",&j);

					for(i=0;i<l;i++)
					{
						if(j==bnk[i].acc)
						{
							printf("\t\n ACCOUNT NO. :%d",bnk[i].acc);

							printf("\t\n ACCOUNT BALANCE : %d",bnk[i].bal);
						}
							printf("\n");



							printf("\n\nENTER THE AMOUNT TO BE WITHDRAWN  ");
							scanf("%d",&with);

						if(with>bnk[i].bal)
						{
							printf("INVALID BALANCE  ");

						}

						else
						{
							bnk[i].bal=bnk[i].bal-with;

							printf("\n\n\n\t YOUR WITHDRAWL HAS BEEN SUCCESSFUL!!!!!\n\n\n\t");
						}


					}
				}
			break;


			case 5:

				if(l==0)
				{
					printf("OPERATION TERMINATED\n");
					printf("*****YOU NEED TO CREATE AN ACCOUNT FIRST*****");
				}

				else
				{
					printf("ENTER THE ACCOUNT NO.  ");
					scanf("%d",&j);

						for(i=0;i<l;i++)
						{
							if(j==bnk[i].acc)
							{
								printf("\t\n ACCOUNT NO. : %d",bnk[i],acc);

								printf("\t\n ACCOUNT BALANCE : %d",bnk[i].bal);

								printf("\n\nENTER THE AMOUNT TO BE DEPOSITED :");
								scanf("%d",&depo);

								bnk[i].bal=bnk[i].bal+depo;

								printf("\n\n YOUR AMOUNT HAS BEEN SUCCESSFULLY DEPOSITED ");

							 }
								printf("\n");

						}

					}

			break;


			case 6:


			exit(0);

		}


       }
	   return 0;
}




















































