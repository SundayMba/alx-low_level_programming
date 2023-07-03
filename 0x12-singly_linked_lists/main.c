#include <stdio.h>
#include <stddef.h>

struct score
{
	char *name;
	int score;
	struct score *next;
};

int main()
{
	struct score student = {"mba", 80, NULL};
	printf("student: %p\n&student: %p\nstuden name %p\n", student, &student, student.name);
}
