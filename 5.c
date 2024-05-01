#include <stdio.h>


struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int n;

    
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    
    struct Car cars[n];

    
    printf("\nEnter details of %d cars:\n", n);
    int i;
    for ( i = 0; i < n; i++) {
        printf("Car %d:\n", i + 1);
        printf("Enter model: ");
        scanf("%s", cars[i].model);
        printf("Enter year: ");
        scanf("%d", &cars[i].year);
        printf("Enter price: ");
        scanf("%f", &cars[i].price);
    }

    
    printf("\nDetails of all %d cars:\n", n);
    for ( i = 0; i < n; i++) {
        printf("Car %d:\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
    }

    return 0;
}

