//sreeram
//TIC TAC TOE (MULTIPLAYER)
//NEED TO GIVE 3 STRINGS AS INPUT( 1|2|3, 4|5|6, 7|8|9)
//NOW CHOOSE NUMBERS AS YOUR DESIRED POSITIONS TO MARK 'X' OR 'O';
//HAVE TO ENTER ONLY UPPERCASE 'X' OR 'O' AS CHOICE
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
char choice;
int flag,count,l,z=0,l1,l2,i,j,k,flag1,flag2;
char *ch,*ch1,*ch2,chocie2;
char *sh,*sh1,*sh2;
char s[20],s1[20],s2[20];
char choice1,choice2,*res;
int value;
int game();
char name1[30],name2[30];
void main()
{
	printf("Enter  strings\n");
	scanf("%s",&s);
	l=strlen(s);
	ch=(char*)malloc((l+1)*sizeof(char));
	strcpy(ch,s);
	scanf("%s",&s1);
	l1=strlen(s1);
	ch1=(char*)malloc((l1+1)*sizeof(char));
	strcpy(ch1,s1);
	scanf("%s",&s2);
	l2=strlen(s2);
	ch2=(char*)malloc((l2+1)*sizeof(char));
	strcpy(ch2,s2);
	printf("\n");
	printf("ENTER YOUR NAME(X)\n");
	scanf("%s", &name1);
	printf("ENTER YOUR NAME(O)\n");
	scanf("%s", &name2);
					
	while(1)
	{
		printf("choose between X and O\n");
		scanf(" %c",&choice);
		if(choice=='X')
		{
			printf("%s--->you use X\n",name1);
			count=0;
			break;
		}
		if(choice=='O')
		{
			printf("%s--->you use X\n",name2);
			count=1;
			break;
		}
		if(choice!='X'||choice!='O')
		{
			printf("choose from the choice given :)\n");
		}
	}
	value=game();
	while(value==2)
	{
		if(count==0)
		{
			printf("choose any valid position\n");
			scanf(" %c",&choice1);
			//printf("choice: %d",choice1);
			for(i=0;i<l;i++)
			{
				if(*(ch+i)==choice1)
				{
					*(ch+i)='X';
					flag1=0;
				}
				else
				{
					flag1=1;
				}
			}	
			for(i=0;i<l1;i++)
			{
				if(*(ch1+i)==choice1)
				{
					*(ch1+i)='X';
					flag1=0;
				}
				else
				{
				flag1=1;
				}
			}
			for(i=0;i<l2;i++)
			{
				if(*(ch2+i)==choice1)
				{
					*(ch2+i)='X';
						flag1=0;
				}
				else
				{
					flag1=1;
				}
			}
			count=1;
		}
		else
		{
			printf("choose any valid position\n");
		ad:	scanf(" %c",&choice2);
			//printf("choice: %d",choice1);
			if(choice2=='X')
			{
					printf("invalid chocie\n");
					printf("Re-enter your choice(any valid position)\n");
					goto ad;
			}
			else
			{
				for(i=0;i<l;i++)
				{
					if(*(ch+i)==choice2)
					{
						*(ch+i)='O';
						flag2=0;
					}
					else
					{
						flag2=1;
					}
				}	
				for(i=0;i<l1;i++)
				{	
					if(*(ch1+i)==choice2)
					{
						*(ch1+i)='O';
						flag2=0;
					}
					else
					{
					flag2=1;
				}
				}
				for(i=0;i<l2;i++)
				{	
					if(*(ch2+i)==choice2)
					{
						*(ch2+i)='O';
						flag2=0;
					}
					else
					{
						flag2=1;
					}
				}
					count=0;
			}
		}
		value=game();
		puts(ch);
		puts(ch1);
		puts(ch2);	
	}
	if(      ((*(ch+0)=='X'&&*(ch1+2)=='X'&&*(ch2+4)=='X') ||  (*(ch+0)=='X'&&*(ch1+0)=='X'&&*(ch2+0)=='X') || (*(ch+0)=='X'&&*(ch1+2)=='X'&&*(ch2+4)=='X') || (*(ch+0)=='X'&&*(ch+2)=='X'&&*(ch+4)=='X') || (*(ch1+0)=='X'&&*(ch1+2)=='X'&&*(ch1+4)=='X') ||  (*(ch2+0)=='X'&&*(ch2+2)=='X'&&*(ch2+4)=='X') ||  (*(ch+4)=='X'&&*(ch1+2)=='X'&&*(ch2+0)=='X') || (*(ch+0)=='X'&&*(ch+2)=='X'&&*(ch+4)=='X') || (*(ch+4)=='X'&&*(ch1+4)=='X'&&*(ch2+4)=='X') ||	(*(ch+2)=='X'&&*(ch1+2)=='X'&&*(ch2+2)=='X'))								||       									((*(ch+0)=='O'&&*(ch1+2)=='O'&&*(ch2+4)=='O') ||  (*(ch+0)=='O'&&*(ch1+0)=='O'&&*(ch2+0)=='O') || (*(ch+0)=='O'&&*(ch1+2)=='O'&&*(ch2+4)=='O') || (*(ch+0)=='O'&&*(ch+2)=='O'&&*(ch+4)=='O') || (*(ch1+0)=='O'&&*(ch1+2)=='O'&&*(ch1+4)=='O') ||  (*(ch2+0)=='O'&&*(ch2+2)=='O'&&*(ch2+4)=='O') ||  (*(ch+4)=='O'&&*(ch1+2)=='O'&&*(ch2+0)=='O') || (*(ch+0)=='O'&&*(ch+2)=='O'&&*(ch+4)=='O') || (*(ch+4)=='O'&&*(ch1+4)=='O'&&*(ch2+4)=='O') ||	(*(ch+2)=='O'&&*(ch1+2)=='O'&&*(ch2+2)=='O')   )          										 )
	{
		if(count==1)
		{
			printf("%s--->YOU EMERGED VICTORIOUS(X)\n",name1);
		}
		else
		{
			printf("%s--->YOU EMERGED VICTORIOUS(O)\n",name2);
		}
		
	}
	else
	{
		printf("TRY NEXT TIME :)\n");
	}
}

int game()
{
	int ga;
	if(      ((*(ch+0)=='X'&&*(ch1+2)=='X'&&*(ch2+4)=='X') ||  (*(ch+0)=='X'&&*(ch1+0)=='X'&&*(ch2+0)=='X') || (*(ch+0)=='X'&&*(ch1+2)=='X'&&*(ch2+4)=='X') || (*(ch+0)=='X'&&*(ch+2)=='X'&&*(ch+4)=='X') || (*(ch1+0)=='X'&&*(ch1+2)=='X'&&*(ch1+4)=='X') ||  (*(ch2+0)=='X'&&*(ch2+2)=='X'&&*(ch2+4)=='X') ||  (*(ch+4)=='X'&&*(ch1+2)=='X'&&*(ch2+0)=='X') || (*(ch+0)=='X'&&*(ch+2)=='X'&&*(ch+4)=='X') || (*(ch+4)=='X'&&*(ch1+4)=='X'&&*(ch2+4)=='X') ||	(*(ch+2)=='X'&&*(ch1+2)=='X'&&*(ch2+2)=='X'))								||       									((*(ch+0)=='O'&&*(ch1+2)=='O'&&*(ch2+4)=='O') ||  (*(ch+0)=='O'&&*(ch1+0)=='O'&&*(ch2+0)=='O') || (*(ch+0)=='O'&&*(ch1+2)=='O'&&*(ch2+4)=='O') || (*(ch+0)=='O'&&*(ch+2)=='O'&&*(ch+4)=='O') || (*(ch1+0)=='O'&&*(ch1+2)=='O'&&*(ch1+4)=='O') ||  (*(ch2+0)=='O'&&*(ch2+2)=='O'&&*(ch2+4)=='O') ||  (*(ch+4)=='O'&&*(ch1+2)=='O'&&*(ch2+0)=='O') || (*(ch+0)=='O'&&*(ch+2)=='O'&&*(ch+4)=='O') || (*(ch+4)=='O'&&*(ch1+4)=='O'&&*(ch2+4)=='O') ||	(*(ch+2)=='O'&&*(ch1+2)=='O'&&*(ch2+2)=='O')   )          										 )
	{
		return 1;
	}
	else
	{
		ga=tie();
		if(ga==1)
		{
			return 2;
		}
	}
}
int tie()
{
	while(1)
	{
		if(  ((*(ch+0)=='O' || *(ch+0)=='X') &&   (*(ch+2)=='O' || *(ch+2)=='X') &&  (*(ch+4)=='O' || *(ch+4)=='X'))   &&    ( (*(ch1+0)=='O' || *(ch1+0)=='X') &&   (*(ch1+2)=='O' || *(ch1+2)=='X') &&  (*(ch1+4)=='O' || *(ch1+4)=='X') )  &&  (*(ch2+0)=='O' || *(ch2+0)=='X') &&   (*(ch2+2)=='O' || *(ch2+2)=='X') &&  (*(ch2+4)=='O' || *(ch2+4)=='X') ) 
		{
					printf("TIE\n");
					printf("%s AND %s ARE EQUALLY GOOD AT THIS\n",name1,name2);
					exit(0);
		}
		else
		{
			return 1;
		}
	}
}


