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
    printf("=----------------------------------=\n");
    printf("         FITNESS PURPOSE            \n");
    printf("=----------------------------------=\n");
    printf("     1. Gain Muscle                 \n");
    printf("     2. Lose Weight or gain weight  \n");
    printf("     3. (END)                       \n");
    printf("=----------------------------------=\n");
    printf("     Input your choice (1-3) : "); scanf("%d", &option);
    printf("=----------------------------------=\n");
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

void lowerbody_exercise() {
    printf("=-----------------------------------------------=\n");
    printf("      HOME EXERCISE PROGRAM FOR (LOWER BODY)     \n");
    printf("=-----------------------------------------------=\n");
    printf("  1. Squad 12 repetition x 3 sets.               \n");
    printf("     Rest per set 30 seconds                     \n");
    printf("  Rest 2 minutes                                 \n");
    printf("  2. Jump Squad 12 repetition x 3 sets.          \n");
    printf("     Rest per set 30 seconds                     \n");
    printf("  Rest 2 minutes                                 \n");
    printf("  3. Lungees 30 repetition x 3 sets.             \n");
    printf("     Rest per set 1 minutes                      \n");
    printf("  Rest 2 minutes                                 \n");
    printf("  4. Jumping rope 50 repetition x 3 sets.        \n");
    printf("     Rest per set 30 seconds                     \n");
    printf("=------------------------------------------------=\n");
}

void corebody_exercise() {
    printf("=------------------------------------------------=\n");
    printf("      HOME EXERCISE PROGRAM FOR (LOWER BODY)      \n");
    printf("=------------------------------------------------=\n");
    printf("  1. Plank for 1 minutes                          \n");
    printf("  Rest 2 minutes                                  \n");
    printf("  2. Side plank for 1 minutes                     \n");
    printf("     Both left and right side                     \n");
    printf("  Rest 2 minutes                                  \n");
    printf("  3. sit up 20 repetition x 3 sets.               \n");
    printf("     Rest per set 1 minutes                       \n");
    printf("  Rest 2 minutes                                  \n");
    printf("  4. Knee in crunch 20 repetition x 3 sets        \n");
    printf("  Rest 2 minutes                                  \n");
    printf("  5. High knees 20 repetition x 3 sets            \n");
    printf("     Rest per set 30 seconds                      \n");
    printf("=------------------------------------------------=\n");
}

void BMIFormula (){
	float height, weight, bmi, idealweight;
	
	printf("Input your height (in cm): ");
	scanf("%f", &height);
	printf("Input your weight (in cm): ");
	scanf("%f", &weight);
	
    idealweight = (height - 100) - ((height - 100) * 0.1);
    height = height / 100;
    bmi = weight / pow(height, 2);
    
    printf("Your BMI analysis: \n");
	if (bmi<18.5){
		printf ("=Body weight analysis=: You're at underweight category");
		printf ("We suggest You to increase calories intake and eat protein and carbs\n:");
		printf ("Food containing high protein:\n1. meats\n2. fish\n3. eggs\n 4. dairy products\n5. nuts");
		printf ("Food containing high carbs:\n1. oats\n2. quinoa\n3. fruits (oranges, banana, blueberries, etc.)\n4. sweet potato\n5. buckwheat");
	}
	else if (bmi>=18.5 && bmi<=22.9){
		printf ("=Body weight analysis=: You're at normal weight category");
		printf ("Good work! keep it up\n");	
	}
}

int main(){


};
