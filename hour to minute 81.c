#include <stdio.h>

int main() {
    int hours, minutes;

    // Ask the user to enter hours
    printf("Enter time in hours: ");
    scanf("%d", &hours);

    // Convert hours to minutes
    minutes = hours * 60;

    // Display the result
    printf("%d hour(s) is equal to %d minute(s).\n", hours, minutes);

    return 0;
}
