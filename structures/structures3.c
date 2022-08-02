#include "stdio.h"

/*
* @author Lucasmellof, Lucas de Mello Freitas created on //
*/


typedef struct department {
    int id;
    char description[30];

} Department;


typedef struct role {
    int id;
    char description[30];

} Role;


typedef struct employee {
    int id;
    char name[30];
    float salary;
    Department department;
    Role role;

} Employee;

typedef struct {

} A;

int main() {
    Employee employee = {1, "teste", 3.0f, {1, "teste"}, {2, "testerole"}};


    printf("%s\n", employee.department.description);

    return 0;
}