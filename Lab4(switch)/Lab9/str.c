#include <stdio.h>
#include <string.h>

// Define the structure
struct Vehicle {
    char model[50];   // Vehicle model name
    int year;         // Year of manufacture
    float price;      // Price of the vehicle
};

int main() {
    struct Vehicle vehicles[10];
    int i, j;
    struct Vehicle temp;

    // Input details for 10 vehicles
    for (i = 0; i < 10; i++) {
        printf("Enter details for Vehicle %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", vehicles[i].model);
        printf("Year: ");
        scanf("%d", &vehicles[i].year);
        printf("Price: ");
        scanf("%f", &vehicles[i].price);
    }

    // Sort vehicles in descending order of price (Bubble Sort)
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (vehicles[j].price < vehicles[j + 1].price) {
                temp = vehicles[j];
                vehicles[j] = vehicles[j + 1];
                vehicles[j + 1] = temp;
            }
        }
    }

    // Display sorted vehicles
    printf("\nVehicles sorted by price (descending):\n");
    printf("%-15s %-10s %-10s\n", "Model", "Year", "Price");
    for (i = 0; i < 10; i++) {
        printf("%-15s %-10d %-10.2f\n", vehicles[i].model, vehicles[i].year, vehicles[i].price);
    }

    return 0;
}
