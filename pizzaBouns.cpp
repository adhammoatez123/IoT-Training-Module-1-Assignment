#include <stdio.h>

double compute_price_per_square_inch(double diameter, double price) {
    double radius = diameter / 2;
    double area = 3.14 * radius * radius; 
    double price_per_square_inch = price / area;
    return price_per_square_inch;
}

void Comparison(double diameter1, double diameter2, double price_per_square_inch1, double price_per_square_inch2) {
    if (price_per_square_inch1 < price_per_square_inch2) {
        printf("The First Pizza is the better buy.\n");
    } else if (price_per_square_inch1 > price_per_square_inch2) {
        printf("The Second Pizza is the better buy.\n");
    } else {
        if (diameter1 < diameter2) {
            printf("The First Pizza is the better buy.\n");
        } else {
            printf("The Second Pizza is the better buy.\n");
        }
    }
}

int main() {
    double diameter1, diameter2, price1, price2;

    printf("Enter the diameter of the first pizza: ");
    scanf("%lf", &diameter1);
    printf("Enter the price of the first pizza: ");
    scanf("%lf", &price1);

    printf("Enter the diameter of the second pizza: ");
    scanf("%lf", &diameter2);
    printf("Enter the price of the second pizza: ");
    scanf("%lf", &price2);

    double price_per_square_inch1 = compute_price_per_square_inch(diameter1, price1);
    double price_per_square_inch2 = compute_price_per_square_inch(diameter2, price2);

    printf("The price per square inch for the first pizza is: %.2lf\n", price_per_square_inch1);
    printf("The price per square inch for the second pizza is: %.2lf\n", price_per_square_inch2);

    Comparison(diameter1, diameter2, price_per_square_inch1, price_per_square_inch2);

    return 0;
}
