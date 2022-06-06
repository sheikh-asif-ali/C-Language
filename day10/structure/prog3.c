#include<stdio.h>
#include<string.h>

struct employee
{
        int id;
        char name[20];
        float salary;
        char gender;
};
int print_detail(struct employee *e)
{
	e->id=002;
	e->name={"Pinky"};
	e->salary=989.01;
	e->gender='F';
	printf("..Printing in function call..\n");
	printf("Emp id is: %d\n",e->id);
        printf("Emp Name is: %s\n",e->name);
        printf("Emp Salary is: %f\n",e->salary);
        printf("Emp Gender is: %c\n",e->gender);
}
int main()
{
        struct employee emp1={001,"Sonu",999.99,'M'};
	
	printf("..Printing in main..");
        printf("Emp id is: %d\n",emp1.id);
        printf("Emp Name is: %s\n",emp1.name);
        printf("Emp Salary is: %f\n",emp1.salary);
        printf("Emp Gender is: %c\n",emp1.gender);
	printf("\n");
	
	print_detail(&emp1);
        
	printf("..Main after function call..\n");
	printf("Emp id is: %d\n",emp1.id);
        printf("Emp Name is: %s\n",emp1.name);
        printf("Emp Salary is: %f\n",emp1.salary);
        printf("Emp Gender is: %c\n",emp1.gender);


        return 0;
}
