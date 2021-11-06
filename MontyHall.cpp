#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

    int car_pos, show_pos, select_pos;

    int win_original = 0, win_switch = 0;

    int total_trial = 1000;

    for(int i = 0; i < total_trial; i++) {
        // Randomly generate car position,
        car_pos = rand() % 3;

        // Randomly select one gate
        select_pos = rand() % 3;

        // Choose a sheep gate from the remaining not selected gates
        do{
            show_pos = rand() % 3;
        }while(show_pos == car_pos || show_pos == select_pos);

        // Count the times to win when sticking or switching
        if(select_pos == car_pos) {
            win_original++;
        } else {
            win_switch++;
        }
    }

    cout << "Probability to win when not switching: " << (double)win_original/total_trial << endl;
    cout << "Probabilty to win when switching: " << (double)win_switch/total_trial << endl;


}
