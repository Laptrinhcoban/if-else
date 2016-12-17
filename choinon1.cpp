#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("So lon nhat la a= %d",a);
	}
	else
	{
		printf("So lon nhat la b= %d",b);
	}
	return 0;
}

