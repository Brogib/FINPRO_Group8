#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct member {
    char *name ;
    int age ;
    char gender [2];
} member ;

member user;
int new_user = 1;
int ExerciseTracker[3][5] = {0}; //array for our exercise tracker (gaining muscle)

typedef enum {
    GAIN_MUSCLE = 1,
    LOSE_OR_GAIN_WEIGHT,
    END
}Menu_choice;

typedef enum {
    UPPER_BODY = 1,
    LOWER_BODY,
    CORE_BODY,
    BACK
}Exercise_option;

int main_data(int new_user, member *user) {
    int option;
    if (user -> name){
        user -> name = malloc(25);
    }
    printf("=------------------------------=\n");
    printf("            User Data           \n");
    printf("=------------------------------=\n");
    if (new_user == 1) {
        printf("    Name   : "); scanf("%s", user-> name);
        printf("    Age    : "); scanf("%d", &user-> age);
        printf("    Gender (M/F): "); scanf("%s", user->gender);
    } else {
        printf("    Name   : %s\n", user->name);
        printf("    Age    : %d\n", user->age);
        printf("    Gender (M/F): %s\n", user->gender);
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
int gain_muscle() {
    int option;
    printf("=---------------------------=\n");
    printf("|     Gain Muscle Exercise  |\n");
    printf("=---------------------------=\n");
    printf("|    1. Upper Body          |\n");
    printf("|    2. Lower Body          |\n");
    printf("|    3. Core Body           |\n");
    printf("|    4. (Back)              |\n");
    printf("=---------------------------=\n");
    printf("| Input your choice (1-4): "); scanf("%d", &option);
    printf("=---------------------------=\n");
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
    
    int choice;										//initializing variable "choice" 
    printf("Which exercise do you want to do?: ");	
    scanf("%d", &choice);
    ExerciseTracker[0][choice-1] = 1;				//storing the value from the user in "choice" to the assigned array memory
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
    
    int choice;										//initializing variable "choice" 
    printf("Which exercise do you want to do?: ");	
    scanf("%d", &choice);
    ExerciseTracker[1][choice-1] = 1;				//storing the value from the user in "choice" to the assigned array memory
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
    
    int choice;										//initializing variable "choice" 
    printf("Which exercise do you want to do?: ");	
    scanf("%d", &choice);
    ExerciseTracker[2][choice-1] = 1;				//storing the value from the user in "choice" to the assigned array memory
}

void display_exercises() {							//displaying the excercise recap function
    printf("\n=-----------------------------=\n");
    printf("     Exercises Done So Far    \n");
    printf("=-----------------------------=\n");
    if (ExerciseTracker[0][0] == 1) printf("1. Regular Push up\n");
    if (ExerciseTracker[0][1] == 1) printf("2. Triangle Push up\n");
    if (ExerciseTracker[0][2] == 1) printf("3. Wide Push up\n");
    if (ExerciseTracker[0][3] == 1) printf("4. Chair dips\n");

    if (ExerciseTracker[1][0] == 1) printf("5. Squad\n");
    if (ExerciseTracker[1][1] == 1) printf("6. Jump Squad\n");
    if (ExerciseTracker[1][2] == 1) printf("7. Lungees\n");
    if (ExerciseTracker[1][3] == 1) printf("8. Jumping rope\n");

    if (ExerciseTracker[2][0] == 1) printf("9. Plank\n");
    if (ExerciseTracker[2][1] == 1) printf("10. Side plank\n");
    if (ExerciseTracker[2][2] == 1) printf("11. Sit up\n");
    if (ExerciseTracker[2][3] == 1) printf("12. Knee in crunch\n");
    if (ExerciseTracker[2][4] == 1) printf("13. High knees\n");
    printf("=-----------------------------=\n");
}

void BMIFormula (){ 							//BMI formula function to determine your weight category
	float height, weight, bmi, idealweight;		//variables used in this function
	
	printf("Input your height (in cm): ");		// asking for input height & weight
	scanf("%f", &height);
	printf("Input your weight (in cm): ");
	scanf("%f", &weight);
	
    idealweight = (height - 100) - ((height - 100) * 0.1);	//ideal weight using broca index calculation
    height = height / 100;									//converting to meters
    bmi = weight / pow(height, 2);							// bmi formula
    
    printf("Your BMI analysis: \n");
	if (bmi<18.5){															//if condition for range of weight category
		printf ("=Body weight analysis=: You're at underweight category");
		printf ("We suggest You to increase calories intake and eat protein and carbs\n:");
		printf ("Food containing high protein:\n1. meats\n2. fish\n3. eggs\n 4. dairy products\n5. nuts");
		printf ("Food containing high carbs:\n1. oats\n2. quinoa\n3. fruits (oranges, banana, blueberries, etc.)\n4. sweet potato\n5. buckwheat");
	}
	else if (bmi>=18.5 && bmi<=22.9){										
		printf ("=Body weight analysis=: You're at normal weight category");
		printf ("Good work! keep it up\n");	
	}
	else if (bmi>22.9 && bmi>=24.9){
		printf ("=Body weight analysis=: You're at overweight category");
        printf("We suggest You to do this exercise in routine:\n");
        printf("1. Endurance Jogging for 15 minutes\n");
        printf("2. 3Km Jogging within average pace 7 or 8\n");
        printf("3. Easy run 3Km within average pace under 6\n");
        printf("In this program you have to push yourself.\n");
        printf("Also, tryout our other feature on how to gain muscle\n");
        printf("KEEP STRONG AND REMEMBER YOUR PURPOSE\n");
	}
	else if (bmi >= 25 && bmi <= 29.9){
        printf ("=Body weight analysis=: You're at obese level 1 category");
        printf(" We suggest You to do this exercise\n");
        printf(" 1. Endurance jogging 30 minutes\n");
        printf("    Note : In this exercise, you only need to do jogging at low pace or even walking\n");
        printf("    The most important is that yo have to maintain that pace till 30 minutes\n");
        printf(" 2. Tempo run 5Km\n");
        printf("    Note : In first Km you have need to jogging with your pace\n");
        printf("    In second Km you have lower your pace and for next Km you have to up your pace\n");
        printf("    Repeat the tempo until you reach 5Km\n");
	}
	else{
		printf ("=Body weight analysis=: You're at obese level 2 category");
        printf(" We suggest You to consule with nutrition specialist to avoid complication disease\n");
	}
}

int main(){
    Menu_choice option;
    Exercise_option muscle_exe;
    member user;
    char done[2];

	do{
		option = main_data(new_user, &user);
		switch (option){
			case GAIN_MUSCLE:
				do{
					new_user = 0;
					muscle_exe = gain_muscle();
					switch (muscle_exe){
						
						case UPPER_BODY:
						upperbody_exercise();
						display_exercises();						//calling exercise recap function to display user's exercise data for upperbody
						printf("\n done? input 'y' then enter...!");
						scanf("%s" , done);
						break;
						
						case LOWER_BODY:
	                    lowerbody_exercise();
	                    display_exercises();						//calling exercise recap function to display user's exercise data for lowerbody
	                    printf("\n Done? Input 'y' then Enter...! ");
	                    scanf("%s", done);
	                    break;
	                    
						case CORE_BODY:
	                    corebody_exercise();
	                    display_exercises();						//calling exercise recap function to display user's exercise data for corebody
	                    printf("\n Done? Input 'y' then Enter...! ");
	                    scanf("%s", done);
	                    break;
					}
				
				} while (muscle_exe !=4);
			break;
			
			case LOSE_OR_GAIN_WEIGHT:
				new_user =0;
				BMIFormula();
				printf("\n done? input 'y' then enter...!");
				scanf("%s" , done);
				break;
		}
	} while (option !=END);
    free (user.name);
	return 0;

};
