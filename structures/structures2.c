#include <stdio.h>

/*
* @author Lucasmellof, Lucas de Mello Freitas created on 01/08/2022
*/

struct user_registration {
    char name[50];
    char subject[30];
    float test1;
    float test2;
};

int main() {
    struct user_registration student;

    printf("\n---------- Cadastro de aluno -----------\n\n\n");
    printf("Nome do aluno ......: ");

    fflush(stdin);
    fgets(student.name, 40, stdin);
    printf("Disciplina ......: ");
    fflush(stdin);
    fgets(student.subject, 40, stdin);
    printf("Informe a 1a. nota ..: ");
    scanf("%f", &student.test1);
    printf("Informe a 2a. nota ..: ");
    scanf("%f", &student.test2);
    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome ...........: %s", student.name);
    printf("Disciplina .....: %s", student.subject);
    printf("Nota da Prova 1 ...: %.2f\n", student.test1);
    printf("Nota da Prova 2 ...: %.2f\n", student.test2);
    return 0;
}