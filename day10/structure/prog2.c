#include<stdio.h>
#include<string.h>
int main()
{
struct employee
{
        int id;
        char name[20];
        float salary;
        char gender;
};

        struct employee emp1={001,"Sonu",999.99,'M'};
	struct employee emp2={002,"Kavi",836.11,'M'};

        printf("Emp id is: %d\n",emp1.id);
        printf("Emp Name is: %s\n",emp1.name);
        printf("Emp Salary is: %f\n",emp1.salary);
        printf("Emp Gender is: %c\n",emp1.gender);
	printf("\n");
	printf("Emp id is: %d\n",emp2.id);
        printf("Emp Name is: %s\n",emp2.name);
        printf("Emp Salary is: %f\n",emp2.salary);
        printf("Emp Gender is: %c\n",emp2.gender);


        return 0;
}
