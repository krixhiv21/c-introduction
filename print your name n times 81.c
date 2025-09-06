#include <stdio.h>

int main() {
    int n;

    // Ask user for input
    printf("Enter how many times to print 'Krishiv': ");
    scanf("%d", &n);

    // Print 'Krishiv' n times
    for (int i = 0; i < n; i++) {
        printf("Krishiv\n");
    }

    return 0;
}
