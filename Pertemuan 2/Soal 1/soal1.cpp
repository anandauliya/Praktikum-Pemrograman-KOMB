#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double baseSalary, percentage, installment, insurance;
    double grossSalary, tax, netSalary;
    cout << "Enter employee name: ";
    getline(cin,name);

    cout << "Enter base salary: ";
    cin >> baseSalary;

    cout << "Enter gross salary percentage: ";
    cin >> percentage;

    cout << "Enter fixed installment amount: ";
    cin >> installment;

    cout <<"Enter fixed insurance amount: ";
    cin >> insurance;

    grossSalary = (percentage / 100) * baseSalary;
    tax = 0.20 * grossSalary;
    netSalary = grossSalary - tax - installment - insurance;

    cout << "========== PAYSLIP ==========" << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Gross Salary: " << fixed << setprecision(2) << grossSalary << endl;
    cout << "Tax: " << fixed << setprecision(2) << tax << endl;
    cout << "Installment: " << fixed << setprecision(2) << installment << endl;
    cout << "Insurance: " << fixed << setprecision(2) << insurance << endl; 
    cout << "Net Salary: " << fixed <<setprecision(2) << netSalary << endl;
    cout << "=============================" << endl;

    return 0;
}
