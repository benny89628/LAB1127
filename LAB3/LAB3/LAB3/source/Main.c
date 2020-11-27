#include<stdlib.h>
#include<stdio.h>
#include"information.h"

void sub(student *p);
int main() 
{
	int i;
	student stud[3] = { {"970101","ヒ","",61,71,81},
		{"970102","ヒ","┚动",92,82,72},
		{"970103","ヒ","眎Θ",73,63,83}};
	student *ps;
	ps = stud;
	printf("\n");
	printf("=================================================\n");
	printf("	厩腹	痁\t﹎\t   瓣ゅ   璣ゅ  计厩\n");
	printf("=================================================\n");
	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->class, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("㊣ㄧ计玡\n\n");
	sub(ps);
	printf("㊣ㄧ计\n\n");

	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->class, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}
	system("PAUSE");
	return 0;
}

void sub(student *p)
{
	for (int i = 0; i < 3; i++)
	{
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}