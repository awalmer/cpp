#include <iostream>
using namespace std; // std is within iostream, but this allows you to ref features implicitly

int main() {
    cout << "More C++ practice!" << endl;

    cout << "🟣If/Else Statements:" << endl;
    int age = 33; // defining it for ease
    // cin >> age // normally you'd take user input and print conditional output
    if (age >= 18) {
        cout << "Congrats, you're an adult.🙄" << endl;
        if (age >= 30 && age <= 45) { cout << "Gasp! *And* you're a millennial!" << endl; }
        else { cout << "Shoot, you old." << endl; } // nested conditions
    }
    else { cout << "You silly child." << endl; }

    cout << "🟣Switch Statements:" << endl;
    // Take an input value and convert it to a different output
    int trafficLight = 1; // Say it takes values of 1, 2, or 3 // could be user input instead
    switch (trafficLight) {
        case 1: cout << "🚦Stop" << endl; break;
        case 2: cout << "🚦Slow" << endl; break;
        case 3: cout << "🚦Go" << endl; break;
        default: cout << "Traffic light defunct."; break;
    }

    cout << "🟣Arrays and Strings:" << endl;

    return 0;
}