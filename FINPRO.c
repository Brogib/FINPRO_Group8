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
    printf("=------------------------------=\n");
    printf("         FITNESS PURPOSE        \n");
    printf("=------------------------------=\n");
    printf("     1. Gain Muscle             \n");
    printf("     2. Lose Weight             \n");
    printf("     3. (END)                   \n");
    printf("=------------------------------=\n");
    printf("     Input your choice (1-3) : "); scanf("%d", &option);
    printf("=------------------------------=\n");
    return option;
}

void upperbody_exercise() {
    printf("=-----------------------------------------------=\n");
    printf("      HOME EXERCISE PROGRAM FOR (UPPER BODY)     \n");
    printf("=-----------------------------------------------=\n");
    printf("  1. Regular Push up 10 repetition x 3 sets.     \n");
    printf("     Rest per set 30 seconds                     \n");
    printf("  Rest 2 minutes                                 \n");
    printf("  2. Triangle Push up 10 repetition x 3 sets.    \n");
    printf("     Rest per set 30 seconds                     \n");
    printf("  Rest 2 minutes                                 \n");
    printf("  3. Wide Push up 10 repetition x 3 sets.        \n");
    printf("     Rest per set 30 seconds                     \n");
    printf("  4. Chair dips 20 repetition x 3 sets.          \n");
    printf("     Rest per set 30 seconds                     \n");
    printf("=-----------------------------------------------=\n");
}

int main(){


};