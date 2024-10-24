/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * LAB #9 - Implementing a Stack
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : Oct. 23, 2024
 */

#include "header.h"

using namespace std;

// main
int main() {
    Person* stack = nullptr; // Initialize stack
    int menuSelection;
    string name;
    char gender;
    int age;

    printHeading();

    do {
        cout << "\nSTACK MENU:\n"
             << "1 – Add a person (PUSH)\n"
             << "2 – Remove a person (POP)\n"
             << "3 – Check if the stack is empty (ISEMPTY)\n"
             << "4 – Peek at the top person of the stack (PEEK)\n"
             << "5 – Get the size of the stack (SIZE)\n"
             << "0 – To Exit\n"
             << "Enter a command? ";
        cin >> menuSelection;

        // Invalid Input Check
        if (cin.fail()) cout << "\nPlease input a NUMBER between 0 and 5\n";

        // Clear the input buffer
        cin.clear();
        cin.ignore();

        switch (menuSelection) {
            case 1:
                cout << "\nWho would you like to add?\n";
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Gender: ";
                cin >> gender;
                cout << "Enter Age: ";
                cin >> age;
                push(stack, name, gender, age);
                break;
            case 2:
                if (Person* poppedPerson = pop(stack)) {
                    cout << "POPPING\n"
                         << "Name: " << poppedPerson -> name << "\n"
                         << "Gender: " << poppedPerson -> gender << "\n"
                         << "Age: " << poppedPerson -> age << endl;
                    delete poppedPerson;
                }
                break;
            case 3:
                cout << (isEmpty(stack) ? "The stack is empty." : "The stack is NOT empty.") << endl;
                break;
            case 4:
                if (Person* peekPerson = peek(stack)) {
                    cout << "PEEKING at\n"
                         << "Name: " << peekPerson->name << "\n"
                         << "Gender: " << peekPerson->gender << "\n"
                         << "Age: " << peekPerson->age << endl;
                }
                break;
            case 5:
                cout << "There are " << size(stack) << " people on the stack." << endl;
                break;
            case 0:
                exit(EXIT_SUCCESS);
            default:
                cout << "\nThe number " << menuSelection << " is not valid\n";
                break;
        }
    } while (menuSelection != 0);

    return 0;
}
