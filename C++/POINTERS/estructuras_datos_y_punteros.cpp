#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

struct Atlet {
    string name;
    string country;
    int amountMedals;
};

void addAtlet(Atlet *, int);
void showAtlet(Atlet *, int);

int main() {
    int amountAtlets;
    cout << "How many atlets do you want to add: ";
    cin >> amountAtlets;

    Atlet *atlets = new Atlet[amountAtlets];

    addAtlet(atlets, amountAtlets);
    showAtlet(atlets, amountAtlets);

    delete[] atlets;

    return 0;
}

void addAtlet(Atlet *atlets, int amount) {
    for (int i = 0; i < amount; i++) {
        cout << "\nInput the name of the atlet [" << i << "]: ";
        cin >> (atlets + i)->name;
        cout << "Input the country of the atlet [" << i << "]: ";
        cin >> (atlets + i)->country;
        cout << "Input the amount of medals of the atlet [" << i << "]: ";
        cin >> (atlets + i)->amountMedals;
    }
}

void showAtlet(Atlet *atlets, int amount) {
    int moreMedals = 0;
    int maxMedals = atlets->amountMedals;

    for (int i = 0; i < amount; i++) {
        if ((atlets + i)->amountMedals > maxMedals) {
            maxMedals = (atlets + i)->amountMedals;
            moreMedals = i;
        }
    }
    cout << "\nThe atlet with more medals is atlet[" << moreMedals << "]: " << (atlets + moreMedals)->name << "\nHe was born on "<< (atlets + moreMedals)->country <<"\n------He have " << (atlets + moreMedals)->amountMedals << " medals------" << endl;
}