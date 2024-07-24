#include <stdio.h>

const double acceleration = 32.0;
double distance = 0;

void Transformation() {
    double time;
    printf("Please Enter The Time In seconds \n");
    scanf("%lf", &time); 
    
    double power = time * time; 

    double product = power * acceleration;

    distance = product / 2;

    printf("The Distance is %.2f when time is %.2f\n", distance, time);
}

int main() {
    Transformation();
    return 0;
}
