#include <iostream>
using namespace std;

double calcInterest(double balance);       // To compute the interest according to the rate schedules
double calcTotalAmountDue(double balance); // To compute the total amount due after interest
double calcMinPayment(double balance);     // To compute the minimum amount that must be paid

double calcInterest(double balance)
{
    double interest = 0;
    if (balance <= 1000)
    {
        interest = 0.015 * balance; // 1.5% of the balance
    }
    else
    {
        interest = 0.015 * 1000 + 0.01 * (balance - 1000); // 1.5% of $1000 + 1% of any further amount
    }
    return interest;
}

double calcTotalAmountDue(double balance)
{
    return calcInterest(balance) + balance;
}

double calcMinPayment(double balance)
{
    double totalDue = calcTotalAmountDue(balance);
    double minimumPayment = 0;
    if (totalDue <= 10)
    {
        minimumPayment = totalDue; // Less than or equal to $10 so the minimum is the amount owed
    }
    else
    {
        minimumPayment = 0.1 * totalDue; // More than $10 so 10% of the amount owed
    }
    return minimumPayment;
}

int main()
{
    double balance;
    char check;

    do
    {
        cout << "Please enter your balance in digits: $";
        cin >> balance;
        cout << "Your total interest is: $" << calcInterest(balance) << endl;
        cout << "Your total outstanding amount (due) is: $" << calcTotalAmountDue(balance) << endl;
        cout << "Your minimum payment is: $" << calcMinPayment(balance) << endl;

        cout << "Do you want to compute this again? (Y(y)/N(n)): ";
        cin >> check;
    } while (check == 'Y' || check == 'y');

    return 0;
}