#include<stdio.h>
#include<conio.h>
void main()
{
int P,R,N;
float sum;
clrscr();
printf("Enter a P:- ");
scanf("%d", &P);
printf("Enter a R:- ");
scanf("%d", &R);
printf("Enter a N:- ");
scanf("%d", &N);
sum= P*R*N/100;
printf("Ans = %f" , sum);
getch();
}