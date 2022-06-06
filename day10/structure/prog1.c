#include<stdio.h>
#include<string.h>

struct employee
{
	int id;
	char name[20];
	float salary;
	char gender;
};
/*void print_detail(struct employee e)
{
	printf("%d",e.id);
	printf("%s",e.name);
	printf("%f",e.salary);
	printf("%c",e.gender);
}*/
int main()
{
	struct employee emp;
	struct employee *ptr;
	emp.id=1;
	strcpy(emp.name,"Kavi");
	emp.salary=222222;
	emp.gender='M';
	ptr=&emp;
	//print_detail(&emp);

	printf("Emp id is: %d\n",ptr->id);
	printf("Emp Name is: %s\n",ptr->name);
	printf("Emp Salary is: %f\n",ptr->salary);
	printf("Emp Gender is: %c\n",ptr->gender);

	return 0;
}


