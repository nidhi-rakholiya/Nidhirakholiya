#include<stdio.h>
#include<conio.h>
void main()
{
int l,h;
float sum;
clrscr();
printf("Enter a length:-  ");
scanf("%d", &l);
printf("Enter a height:-  ");
scanf("%d", &h);
sum= 0.5 * l * h;
printf("Ans.= %f",sum);
getch();
}