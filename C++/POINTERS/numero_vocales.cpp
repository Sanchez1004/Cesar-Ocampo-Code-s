#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void askData();
int amountVocals(char *);

char nameUser[30];

int main() {
    askData();
    cout << "The number of vocals of the name is: " << amountVocals(nameUser) << endl;

    return 0;
}

void askData() {
    cout << "Input you name: ";
    cin.getline(nameUser, 30, '\n');

    strupr(nameUser); //Convert to uppercase the name
}

int amountVocals(char *name) {
    int count = 0;

    while(*name) { //Until "name" isn't null
        switch(*name) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': count++;
        }
        name++;
    }
    return count;
}
