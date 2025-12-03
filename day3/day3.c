#include <stdio.h>

int main() {
    //Declare a variable
    int age;

    //Get user input
    printf("Enter your age: ");
    scanf("%d", &age);

    //Make a decision based on the user's age
    if (age >= 18) {
        printf("Congratulations! You are eligible to vote.\n");
    } else {
        printf("Sorry, you are not eligible to vote yet.\n");
    }

    return 0;
}