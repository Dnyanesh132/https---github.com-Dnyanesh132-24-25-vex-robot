#include "main.h"

void opcontrol() {
    while (true) {
        //kill previoustask at start
        // PLEASE ADD //
        //I ADDED THIS JUST TO SEE HOW GIT CHANGES//

    //some code to control drive-
    setDriveMotors();

    //some code to control intake/belt-
    setIntakeMotors();

    //some code to control mogo
    //
    // HOW DO YOU DO PNUEMATICS!!!

    pros::delay(10); //good to add delay becuz..
    }
}