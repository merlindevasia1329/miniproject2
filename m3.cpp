#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        setMarks(m);
    }

    int getRollNo() const
    {
        return rollNo;
    }

    string getName() const
    {
        return name;
    }

    float getMarks() const
    {
        return marks;
    }

    void setMarks(float m)
    {
        if (m >= 0 && m <= 100)
        {
            marks = m;
        }
        else
        {
            cout << "Invalid marks for " << name
                 << ", set to 0" << endl;
            marks = 0;
        }
    }

    void display() const
    {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }
};

void printResult(const Student& student)
{
    student.display();
}

int main()
{
    Student batch[3] = {
        Student(101, "Asha", 82),
        Student(102, "Rahul", 35),
        Student(103, "Meera", 105)
    };

    for (int i = 0; i < 3; i++)
    {
        batch[i].display();
    }

    batch[1].setMarks(45);  // Rahul's marks updated

    cout << "\nAfter re-evaluation:\n";

    for (int i = 0; i < 3; i++)
    {
        printResult(batch[i]);
    }

    return 0;
}



