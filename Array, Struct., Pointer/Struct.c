#include<stdio.h>

typedef struct Student_Tag {
	char name[20];
	char major[20];
	int age;
	double GPA;
	//double GPA = 3.7; Error
} student;


int main() {

	student A = { "YoonSung", "Computer science", 27, 3.7 };
	printf("%s\n", A.name);


	student B;
	B.age = 30;
	printf("B's age is %d\n", B.age);
	//printf("%d\n", B.GPA);	Error

	return 0;
}