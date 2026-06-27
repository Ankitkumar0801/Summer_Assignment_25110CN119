#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double basicSalary;
    double hra; // House Rent Allowance
    double da;  // Dearness Allowance
    double tax; // Tax Deduction

public:
    // Constructor
    Employee() : name(""), id(0), basicSalary(0), hra(0), da(0), tax(0) {}

    // Method to input employee details
    void inputData() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        
        // Calculate Allowances (Example: HRA 10%, DA 5%, Tax 15%)
        hra = basicSalary * 0.10;
        da = basicSalary * 0.05;
        tax = basicSalary * 0.15;
    }

    // Method to display salary slip
    void displayData() {
        cout << "\n--- Salary Slip ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << fixed << setprecision(2);
        cout << "Basic Salary: $" << basicSalary << endl;
        cout << "HRA (10%):    $" << hra << endl;
        cout << "DA (5%):      $" << da << endl;
        cout << "Gross Salary: $" << (basicSalary + hra + da) << endl;
        cout << "Tax (15%):    $" << tax << endl;
        cout << "Net Salary:   $" << (basicSalary + hra + da - tax) << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Employee emp;
    emp.inputData();
    emp.displayData();
    return 0;
}   