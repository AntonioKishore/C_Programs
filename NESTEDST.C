#include<stdio.h>
#include<conio.h>
struct A
{
int a;
struct D
	{
		int d;
	}k;
};

struct B
{
int b;
};

struct C
{
int c;
struct A x;
struct B y;
};

void main(){

struct C z;
z.x.a=10;
z.y.b=20;
z.c=30;
z.x.k.d=50;
printf("\n%d",z.x.a);
printf("\n%d",z.y.b);
printf("\n%d",z.c);
printf("\n%d",z.x.k.d);


getch();
}
