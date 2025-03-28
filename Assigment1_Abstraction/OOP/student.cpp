#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int ID;
    char grade;

public:
    Student(string n, int id, char g) : name(n), ID(id), grade(g) {}

    string getName() const { return name; }
    void setName(string n) { name = n; }

    int getID() const { return ID; }
    void setID(int id) { ID = id; }

    char getGrade() const { return grade; }
    void setGrade(char g) { grade = g; }

    void display() const {
        cout << "Student Name: " << name << "\nID: " << ID << "\nGrade: " << grade << endl;
    }
};

int main() {
    Student student("Alice", 101, 'A');
    student.display();
    return 0;
}
