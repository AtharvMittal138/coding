#include <stdio.h>
#include <math.h>
#include <windows.h> // For Sleep() and SetConsoleTextAttribute()

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set text color to bright red (12)
    SetConsoleTextAttribute(hConsole, 12);

    for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {
            float a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0.0f)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        Sleep(100); // Wait 100 ms before printing the next line
    }

    // Reset text color to white (default)
    SetConsoleTextAttribute(hConsole, 7);

    return 0;
}