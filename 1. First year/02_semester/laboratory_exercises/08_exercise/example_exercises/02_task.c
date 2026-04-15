#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[50];
    int citNo;
    float salary;
} person;


int main() {
    person p1;

    strcpy(p1.name, "Name 1");
    p1.citNo = 1;
    p1.salary = 1000.50;

    printf("Name: %s\n", p1.name);
    printf("CitNo: %d\n", p1.citNo);
    printf("Salary: %.2lf\n", p1.salary);

    return 0;
}