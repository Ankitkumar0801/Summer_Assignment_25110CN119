#include <iostream>
using namespace std;

int main() {
    int rollNo, hindi, english, math, comp, total, per;
    string name;

    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Name: ";
    cin >> name;

    // Input and validate marks
    cout << "Enter marks of Hindi (0-100): ";
    cin >> hindi;
    if (hindi < 0 || hindi > 100) {
        cout << "Invalid marks!" << endl;
        return 1;
    }

    cout << "Enter marks of English (0-100): ";
    cin >> english;
    if (english < 0 || english > 100) {
        cout << "Invalid marks!" << endl;
        return 1;
    }

    cout << "Enter marks of Maths (0-100): ";
    cin >> math;
    if (math < 0 || math > 100) {
        cout << "Invalid marks!" << endl;
        return 1;
    }

    cout << "Enter marks of Computer (0-100): ";
    cin >> comp;
    if (comp < 0 || comp > 100) {
        cout << "Invalid marks!" << endl;
        return 1;
    }

    // Calculate results
    total = hindi + english + math + comp;
    per = total / 4;

    // Display Marksheet
    cout << "\n--------------------------------\n";
    cout << "Roll No: " << rollNo << "\n";
    cout << "Name: " << name << "\n";
    cout << "Total Marks: " << total << "\n";
    cout << "Percentage: " << per << "%\n";

    // Determine Division
    if (per < 35)
        cout << "Result: Fail\n";
    else if (per >= 35 && per < 45)
        cout << "Division: III Division\n";
    else if (per >= 45 && per < 60)
        cout << "Division: II Division\n";
    else if (per >= 60)
        cout << "Division: I Division\n";
    cout << "--------------------------------\n";

    return 0;
}   