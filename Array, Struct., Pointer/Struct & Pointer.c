#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student_Tag {
	char name[20];
	char major[20];
	int age;
	double GPA;

}Student;

int main() {
	Student* A = (Student*)malloc(sizeof(Student));

	sprintf(A->name, "YoonSung");
	strcpy(A->major, "Computer Science");

	A->age = 27;
	(*A).GPA = 3.7;	//same with A->GPA;

	printf("%s\n", A->name);
	printf("%s\n", A->major);

	printf("%d\n", A->age);
	printf("%.2lf\n", A->GPA);

	return 0;
}