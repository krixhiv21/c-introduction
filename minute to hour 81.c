#include <stdio.h>

int main() {
    int minutes, hours, remaining_minutes;

    // Ask the user to enter minutes
    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to hours and remaining minutes
    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    // Display the result
    printf("%d minute(s) is equal to %d hour(s) and %d minute(s).\n", minutes, hours, remaining_minutes);

    return 0;
}
