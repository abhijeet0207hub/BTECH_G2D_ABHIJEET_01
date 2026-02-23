#include <stdio.h>

int main() {
    int age;

    printf("Enter the person's age: ");
    
  
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a numerical age.\n");
        return 1;
    }

  
    if (age < 0) {
        printf("Age cannot be negative.\n");
    } 
    else if (age <= 12) {
        printf("Category: Child\n");
    } 
    else if (age >= 13 && age <= 19) {
        printf("Category: Teen\n");
    } 
    else {
        printf("Category: Adult\n");
    }

    return 0;
}
