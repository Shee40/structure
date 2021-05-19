#include<stdio.h>
#include<conio.h>
struct details
{
  char name[30];
  int age;
  int phn_no;
  float salary;
};
int main()
{
  struct details detail;
  clrscr();
  printf("\n enter name:\n");
  gets(detail.name);
  printf("\n enter age:\n");
  scanf("%d",& deatil.age);
  printf("\n enter phn_no:\n");
  scanf("%d",& detail.phn_no);
  printf("\n enter salary:\n");
  scanf("%f",& detail.salary);
  
  printf("\n\n\n");
  printf("name of the employee :%s\n",detail.name);
  printf("age of the employee :%d\n",detail.age);
  printf("phn_no of the employee :%d\n",detail.phn_no);
  printf("salary of the employee :%f\n",detail.slary);
}

