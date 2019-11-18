#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int x = 1;
    char intreadout[255] = "";
    double number = 0, smallest_number = 0;

    // printf shows a message asking you to enter a positive number
    printf("\nPlease enter 10 positive numbers (f.e. 202 or 45.98): ");

    while (x <= 10) {
        //scanf writes the input into a string (char array)
        scanf("%s", intreadout);
        // strspan checks how many of the specified character are inside the string and gives an integer
        // strlen checks how long the string (char array) is and gives an integer
        // if they are the same then there are only allowed characters in the string
        if (strspn(intreadout, "0123456789.") == strlen(intreadout)) {
            if (((double) atoll(intreadout)) < smallest_number) smallest_number = (double) atoll(intreadout);
            if (x == 1) smallest_number = (double) atoll(intreadout);
            number += (double) atoll(intreadout);
            x++;
        } else {
            printf("invalid input");
        }
    }
    printf("The arithmetic mean of your 10 numbers is: %lf\n The smallest number given was: %lf\n", number/10, smallest_number);
}