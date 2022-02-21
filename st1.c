#include<stdio.h>  
struct student
{
	int ID;
	int age;
	char name[100];
	char com[100];
}emp;

int main()
{
	struct student emp,*ptr;
	ptr=emp;
	struct student *ptr={0210355,22,"krishnaveni","ThunderSoft"};
	printf("Employee details:\n");
	printf("ID:%d\n",(*ptr).ID);
	printf("Age:%d\n",(*ptr).age);
	printf("Name:%s\n",(*ptr).name);
	printf("Company_Name:%s\n",(*ptr).com);
	return 0;
}
