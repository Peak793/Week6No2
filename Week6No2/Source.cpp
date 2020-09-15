#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortyear(struct album* p, int n);
struct album
{
	char name[30];
	int releaseyear = 0;
};
int main()
{
	int n;
	char bandname[30];
	struct album * p;
	printf("Band name : ");
	scanf("%s", bandname);
	printf("Number of albums : ");
	scanf("%d", &n);
	p = (album*)malloc(n * sizeof(struct album));

	for (int i = 0; i < n; i++)
	{
		scanf("%s",p[i].name);
		scanf("%d", &p[i].releaseyear);
	}
	sortyear(p, n);
	printf("\n\nBand : %s\nAll albums\n", bandname);
	for (int i = 0; i < n; i++)
	{
		printf("%s %d\n", p[i].name,p[i].releaseyear);
	}
}
void sortyear(struct album *p,int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (p[j].releaseyear > p[j + 1].releaseyear)
			{
				char temp[30];
				int tempp = 0;
				strcpy(temp, p[j].name);
				strcpy(p[j].name, p[j + 1].name);
				strcpy(p[j + 1].name, temp);
				tempp = p[j].releaseyear;
				p[j].releaseyear = p[j + 1].releaseyear;
				p[j + 1].releaseyear = tempp;
			}
		}
	}
}