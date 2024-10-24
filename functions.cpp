//
// Created by Jawad Khadra on 10/23/24.
//

#include "header.h"

/*
 * push - Push a person onto the stack
 * @param top - Pointer to the top of the stack
 * @param name - Name of the person
 * @param gender - Gender of the person
 * @param age - Age of the person
 * @return void
 */
void push(Person*& top, const string& name, char gender, int age) {
    Person* newPerson = new Person;
    newPerson -> name = name;
    newPerson -> gender = gender;
    newPerson -> age = age;
    newPerson -> next = top; // Point the new person to the current top
    top = newPerson;       // Make the new person the top of the stack
}

/*
 * pop - Pop a person from the stack
 * @param top - Pointer to the top of the stack
 * @return void
 */
Person* pop(Person*& top) {
    if (top == nullptr) {
        cout << "Can't POP from an empty stack!" << endl;
        return nullptr;
    } else {
        Person* temp = top;
        top = top->next;
        return temp;
    }
}

/*
 * isEmpty - Check if the stack is empty
 * @param top - Pointer to the top of the stack
 * @return bool - True if the stack is empty, false otherwise
 */
bool isEmpty(Person* top) {
    return top == nullptr;
}

/*
 * peek - Peek at the top person of the stack
 * @param top - Pointer to the top of the stack
 * @return Person* - Pointer to the top person of the stack
 */
Person* peek(Person* top) {
    if (isEmpty(top)) {
        cout << "There is nobody to PEEK at!" << endl;
        return nullptr;
    } else return top;
}

/*
 * size - Get the size of the stack
 * @param top - Pointer to the top of the stack
 * @return int - Size of the stack
 */
int size(Person* top) {
    int count = 0;
    Person* current = top;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}
