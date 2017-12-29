#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 100
char infix[max];
char s[max];
int top=-1;
char ch;
int v,i;
void push(char ch)
{
s[++top]=ch;
}
int pop()
{
	v=s[top--];
	switch(v)
	{
		case 1:
			ch='+';break;
		case 2: 	ch='-';break;
		case 3: 	ch='*';break;
		case 4: 	ch='/';break;
		case 5 :  	ch='^';break;
	 }
	 return (ch);
}
void convert()
{
	printf("enter any infix exp\n");
	gets(infix);
	for(i=0;infix[i]!='\0';i++)
	{
		ch=infix[i];
		switch(ch)
		{
			case '(':push(0);break;
			case ')':while(s[top]!=0)
					{printf("%c",pop());
					top--;
					}
					break;
			case '+':while(s[top]>1)
					{
						printf("%c",pop());
					}
					push(1);break;
			case '-': while(s[top]>1)
					{
						printf("%c",pop());
					}
					push(2);break;
			case '*': while(s[top]>3)
					{
						printf("%c",pop());
					}
					push(3);break;
			case '/':while(s[top]>3)
					{
						printf("%c",pop());
					}
					push(4);break;
			case '^': while(s[top]>4)
					{
						printf("%c",pop());
					}
					push(5);break;
			default :printf("%c",ch);

		}
	}
}
void main()
{
 convert();
 getch();
}