// Here the code use a structure to determine the time it took to a cyclist
// to complete the stage, using pointers, there are two options define the 
// pointer inside the structure or define the pointer inside the main using
// new of stdlib.h

//There will be only 3 stages

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Time {
    int seconds;
    int minutes;
    int hours;
};

struct Stage {
    Time *time;
};

void askTimeOfEachStage(Stage *);
void addTimeOfEachStage(Stage *);

int main(){
    Stage *stage = new Stage[3]; //Create a pointer to the external structure
    for (int i = 0; i < 3; i++) {
        (stage + i)->time = new Time; //Assing dynamic memory to the pointer
    }

    askTimeOfEachStage(stage);
    addTimeOfEachStage(stage);

    for (int i = 0; i < 3; i++) { //Free allocated memory
        delete (stage + i)->time;
    }
    delete[] stage;

    return 0;
}

void askTimeOfEachStage(Stage *stage) {
    for (int i = 0; i < 3; i++) {
        cout << "\nThe time the cyclist took in the stage #" << i + 1 << ":" << endl;
        cout << "Enter the hours he took: ";
        cin >> (stage + i)->time->hours;
        cout << "Enter the minutes he took: ";
        cin >> (stage + i)->time->minutes;
        cout << "Enter the seconds he took: ";
        cin >> (stage + i)->time->seconds;

        // Verfy that the time was input in the correct format
        if ((stage + i)->time->minutes > 60) {
            (stage + i)->time->minutes -= 60;
            (stage + i)->time->hours += 1;
        }
        if ((stage + i)->time->seconds > 60) {
            (stage + i)->time->seconds -= 60;
            (stage + i)->time->minutes += 1;
        }
    }
}

void addTimeOfEachStage(Stage *stage) {
    cout << "\nThe cyclist took this time in each stage: \n" << endl;
    for (int i = 0; i < 3; i++) { // Printing each time for separate
        cout << "\nStage #" << i + 1 << endl;
        cout << "Hours: " << (stage + i)->time->hours << endl;
        cout << "Minutes: " << (stage + i)->time->minutes << endl;
        cout << "Seconds: " << (stage + i)->time->seconds << endl; 
    }

    // Adding each time to the first position of stage time to ease the output
    stage->time->hours += (stage + 1)->time->hours + (stage + 2)->time->hours; // Adding hours
    stage->time->minutes += (stage + 1)->time->minutes + (stage + 2)->time->minutes; // Adding minutes
    stage->time->seconds += (stage + 1)->time->seconds + (stage + 2)->time->seconds; // Adding seconds

    // Organizing the time correctly
    if (stage->time->minutes > 60) {
        stage->time->minutes -= 60;
        stage->time->hours += 1;
    }
    if (stage->time->seconds > 60) {
        stage->time->seconds -= 60;
        stage->time->minutes += 1;
    }

    cout << "\nThe total time the cyclist took was: " << endl;
    cout << "Hours: " << stage->time->hours << endl;
    cout << "Minutes: " << stage->time->minutes << endl;
    cout << "Seconds: " << stage->time->seconds << endl;
}