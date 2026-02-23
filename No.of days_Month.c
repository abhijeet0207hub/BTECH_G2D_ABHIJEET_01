#include <stdio.h>
#include <string.h>
#include <ctype.h>
void to_lowercase(char str[]) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char month[20];
    int year;

    printf("Enter the month name: ");
    scanf("%s", month);
    to_lowercase(month);

    if (strcmp(month, "january") == 0 || strcmp(month, "march") == 0 || 
        strcmp(month, "may") == 0 || strcmp(month, "july") == 0 || 
        strcmp(month, "august") == 0 || strcmp(month, "october") == 0 || 
        strcmp(month, "december") == 0) {
        printf("31 days\n");
    } 
    else if (strcmp(month, "april") == 0 || strcmp(month, "june") == 0 || 
             strcmp(month, "september") == 0 || strcmp(month, "november") == 0) {
        printf("30 days\n");
    } 
    else if (strcmp(month, "february") == 0) {
        printf("Enter the year to check for leap year: ");
        scanf("%d", &year);

      
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("29 days (Leap Year)\n");
        } else {
            printf("28 days\n");
        }
    } 
    else {
        printf("Invalid month name. Please check your spelling!\n");
    }

    return 0;
}
