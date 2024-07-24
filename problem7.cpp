#include <iostream>
using namespace std;

double G = 6.673e-8;

double calcForce(double m1, double m2, double d); // The function for computing the formula takes the masses of the two bodies and the distance between them as inputs

double calcForce(double m1, double m2, double d)
{
    double force = 0;
    force = (G * m1 * m2) / (d * d);
    return force;
}

int main()
{
    char check;
    double m1;
    double m2;
    double d;

    do
    {
        cout << "Please enter the mass of the first object in grams: ";
        cin >> m1;
        cout << "Please enter the mass of the second object in grams: ";
        cin >> m2;
        cout << "Please enter the distance between the two objects in centimeters: ";
        cin >> d;
        cout << "The magnitude of the force of attraction between the two bodies in dynes is: " << calcForce(m1, m2, d) << endl;
        cout << "Do you want to compute this again? (Y(y)/N(n)): ";
        cin >> check;
    } while (check == 'Y' || check == 'y');

    return 0;
}