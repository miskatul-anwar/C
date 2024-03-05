#include <stdio.h>
#include <unistd.h> // for usleep function (pause)

int main() {
    int i;
    const char line[] = "|/-\\"; // Characters representing the rotating line

    for (i = 0; ; i++) { 
        printf("\r%c", line[i % 4]); // Print the rotating character
        fflush(stdout); // Flush the output to ensure it appears immediately

        // Sleep to control the animation speed (adjust as needed)
        usleep(100000); // Sleep for 100 milliseconds (100000 microseconds)
    }

    printf("\n"); // Move to the next line after animation completes
    return 0;
}

