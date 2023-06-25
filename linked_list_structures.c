#include<stdio.h>
struct Student{
    char roll[20];
    char name[20];
    int age;
    float cgpa;
};

void read_student(struct Student *s){
  scanf("%s",s->roll);
  scanf("%s",s->name);
  scanf("%d",&s->age);
  scanf("%f",&s->cgpa);
}
void print_student(struct Student *s){
  printf("%s %s %d %.2f\n",s->roll,s->name,s->age,s->cgpa);
}

int main()
{
  struct Student s1,s2;
  struct Student *s1_ptr,*s2_ptr;
  s1_ptr=&s1;
  s2_ptr=&s2;
  read_student(s1_ptr);
  read_student(s2_ptr);
  print_student(s1_ptr);
  print_student(s2_ptr);
}