#include <iostream>
using namespace std;

char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Grade: " << getGrade(marks) << endl;
    return 0;
}
