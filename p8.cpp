#include <iostream>

#define HRA 0.1  // House Rent Allowance
#define DA 0.05   // Dearness Allowance

using namespace std;

int main() {
    float basic, salary;

    cout << "Enter the basic pay amount: Rs ";
    cin >> basic;

    salary = basic + DA * basic + HRA * basic;

    cout << "The final salary is: Rs " << salary;

    return 0;
}
