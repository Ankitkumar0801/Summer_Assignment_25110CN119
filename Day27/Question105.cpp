#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    int rollNo;
    string name;
    double marks;
};

Student students[MAX_STUDENTS];
int count = 0;

void addStudent() {
    if (count >= MAX_STUDENTS) {
        cout << "Storage full.\n";
        return;
    }
    cout << "Enter Roll No: ";
    cin >> students[count].rollNo;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, students[count].name);
    cout << "Enter Marks: ";
    cin >> students[count].marks;
    count++;
    cout << "Student added.\n";
}

void displayAll() {
    if (count == 0) {
        cout << "No students recorded.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "Roll: " << students[i].rollNo 
             << ", Name: " << students[i].name 
             << ", Marks: " << students[i].marks << endl;
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll No to search: ";
    cin >> roll;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            cout << "Found: " << students[i].name << " with marks " << students[i].marks << endl;
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add\n2. Display\n3. Search\n4. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: cout << "Exit.\n"; break;
        }
    } while (choice != 4);
    return 0;
}   