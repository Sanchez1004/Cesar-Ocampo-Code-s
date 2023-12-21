#include <iostream>
#include <string.h>
using namespace std;

void askData(string *);
void countVocals(string *, short *);
void printNumberVocals(short *);

int main() {
    string text;
    short numberVocals[5] = {0, 0, 0, 0, 0}; //Don't fotget to initialize variables in 0 if you are going to change those values later

    askData(&text);
    countVocals(&text, numberVocals);
    printNumberVocals(numberVocals);

    return 0;
}

void askData(string *textPos) {
    cout << "Input the text you want to count vocals of: " << endl;
    getline(cin, *textPos);
    for (short i = 0; i < textPos->length(); i++) { // We use short because we aren't going to handle numbers greater than 32767 and less than -32767
        (*textPos)[i] = toupper((*textPos)[i]); //This function converts letters on by one character to uppercase
    }
}

void countVocals(string *textPos, short *count) {
    for (short i = 0; i < textPos->length(); i++){ // We use short because we aren't going to handle numbers greater than 32767 and less than -32767
        switch((*textPos)[i]) { // this is the right way to handle a pointer of a string 
            case 'A':
                *(count) += 1;
                break;
            case 'E':
                *(count + 1) += 1;
                break;
            case 'I':
                *(count + 2) += 1;
                break;
            case 'O':
                *(count + 3) += 1;
                break;
            case 'U':
                *(count + 4) += 1;
                break;
        }
    }
}

void printNumberVocals(short *count) {
    cout << "Number of A's : " << *(count) << endl;
    cout << "Number of E's : " << *(count + 1) << endl;
    cout << "Number of I's : " << *(count + 2) << endl;
    cout << "Number of O's : " << *(count + 3) << endl;
    cout << "Number of U's : " << *(count + 4) << endl;
}