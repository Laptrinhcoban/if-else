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
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",b);
	if(a==b)
	{
		printf("a bang b");
	}
	else if(a>b)
	{
		printf("a lon hon b ");
	}
	else
	{
		printf(" a nho hon b");
	}
    return 0;
}

