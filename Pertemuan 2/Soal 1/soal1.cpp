#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name = "Mail";
    double baseSalary = 15000000;
    double percentage = 100;
    double installment = 200000;
    double insurance = 150000;

    double grossSalary = (percentage / 100) * baseSalary;
    double tax = 0.20 * grossSalary;
    double netSalary = grossSalary - tax - installment - insurance;

    cout << "========== PAYSLIP ==========" << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Gross Salary: " << fixed << setprecision(2) << grossSalary << endl;
    cout << "Tax: " << fixed << setprecision(2) << tax << endl;
    cout << "Installment: " << fixed << setprecision(2) << installment << endl;
    cout << "Insurance: " << fixed << setprecision(2) << insurance << endl; 
    cout << "Net Salary: " << fixed <<setprecision(2) << netSalary << endl;
    cout << "=============================" << endl;

    double expectedGrossSalary = 15000000;
    double expectedTax = 3000000;
    double expectedNetSalary = 11650000;

    
    if (grossSalary == expectedGrossSalary && tax == expectedTax && netSalary == expectedNetSalary) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    return 0;
}
