#include <iostream>
using namespace std;

struct Student {
    string name;
    int ID;
    char grade;
};

void displayStudent(const Student &s) {
    cout << "Student Name: " << s.name << "\nID: " << s.ID << "\nGrade: " << s.grade << endl;
}

int main() {
    Student student = {"Alice", 101, 'A'};
    displayStudent(student);
    return 0;
}
