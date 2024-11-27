#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student 
{
	int    ID;
	char   name[10];
	double grade;
};

int main(int argc, char *argv[]) 
{
	struct student s = {20, "snowman", 4.2};
	s.ID = 24;
	strcpy(s.name, "snowball");
	s.grade = 4.3;
	
	printf("ID: %i\nname: %s\ngrade: %f\n", s.ID, s.name, s.grade);
	
	return 0;
}
