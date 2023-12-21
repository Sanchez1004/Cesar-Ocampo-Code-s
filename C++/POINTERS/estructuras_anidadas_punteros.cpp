#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Average {
    float note1;
    float note2;
    float note3;
    float average;
};

struct Student {
    string name;
    string sex;
    int age;
    struct Average aver;
};

void addStudents(Student *, int);
void showStudents(Student *, int);

int main () {
    int amountStudents;

    cout << "How many students notes do you want to add: ";
    cin >> amountStudents;
    cin.ignore(); // to clear the input buffer before cin

    Student *students = new Student[amountStudents];

    addStudents(students, amountStudents);
    showStudents(students, amountStudents);

    delete[] students;

    return 0;
}

void addStudents(Student *students, int amount) {
    for (int i = 0; i < amount; i++) {
        cout << "\nInput student [" << i << "] name: ";
        getline(cin, (students + i)->name);
        // cin.ignore() // to clear the input buffer before calling getline()
        // this cin.ignore isn't necesary, but if there is a proble in the input
        // of names, try using this function
        cout << "Input student [" << i << "] sex: ";
        cin >> (students + i)->sex;
        cout << "Input student [" << i << "] age: ";
        cin >> (students + i)->age;
        cout << "Input student [" << i << "] Note 1: ";
        cin >> (students + i)->aver.note1;
        cout << "Input student [" << i << "] Note 2: ";
        cin >> (students + i)->aver.note2;
        cout << "Input student [" << i << "] Note 3: ";
        cin >> (students + i)->aver.note3;

        (students + i)->aver.average = ((students + i)->aver.note1 + (students + i)->aver.note2 + (students + i)->aver.note3) / 3;
        cin.ignore(); // to clear the input buffer before cin
    }
}

void showStudents(Student *students, int amount) {
    float maxAverage = students->aver.average;
    int maxAveragePosition = 0;
    for (int i = 0; i < amount; i++) {
        cout << "\nStudent [" << i << "] name: " << (students + i)->name << endl;
        cout << "Student [" << i << "] sex: " << (students + i)->sex << endl;
        cout << "Student [" << i << "] age: " << (students + i)->age << endl;
        cout << "Average note of student [" << i << "] is: " << (students + i)->aver.average << endl;

        if ((students + i)->aver.average > maxAverage) {
            maxAverage = (students + i)->aver.average;
            maxAveragePosition = i;
        }
    }
    cout << "\nThe best average between students was the average of student [" << maxAveragePosition << "] and his name is " << (students + maxAveragePosition)->name << "\nHis average was: " << (students + maxAveragePosition)->aver.average << endl;
}