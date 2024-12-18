#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member {
    char name [20];
    int age ;
    char gender [2];
} member ;

member user;
int new_user = 1;

int main_data(int new_user) {
    int option;
    printf("=------------------------------=\n");
    printf("            User Data           \n");
    printf("=------------------------------=\n");
    if (new_user == 1) {
        printf("    Name   : "); scanf("%s", user.name);
        printf("    Age    : "); scanf("%d", &user.age);
        printf("    Gender (M/F): "); scanf("%s", user.gender);
    } else {
        printf("    Name   : %s\n", user.name);
        printf("    Age    : %d\n", user.age);
        printf("    Gender (M/F): %s\n", user.gender);
    }
    }

int main(){


};