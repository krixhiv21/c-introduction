#include <stdio.h>

int main() {
    unsigned long long bytes;
    double kilobytes, megabytes, gigabytes;

    // Prompt user to enter number of bytes
    printf("Enter the number of bytes: ");
    scanf("%llu", &bytes);

    // Perform conversions
    kilobytes = bytes / 1024.0;
    megabytes = kilobytes / 1024.0;
    gigabytes = megabytes / 1024.0;

    // Display results
    printf("\nConversions:\n");
    printf("Kilobytes (KB): %.2f\n", kilobytes);
    printf("Megabytes (MB): %.2f\n", megabytes);
    printf("Gigabytes (GB): %.2f\n", gigabytes);

    return 0;
}
