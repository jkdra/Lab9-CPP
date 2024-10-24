//
// Created by Jawad Khadra on 10/23/24.
//

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
using namespace std;

// Person - Struct to represent a person
struct Person {
    string name;
    char gender;
    int age;
    Person* next;
};

/*
 * printHeading - Print the heading of the lab
 * @return void
 */
void printHeading();

/*
 * InitializeStack - Initialize the stack
 * @param top - Pointer to the top of the stack
 * @return void
 */
// void initializeStack(Person*& top);

/*
 * Push - Push a person onto the stack
 * @param top - Pointer to the top of the stack
 * @param name - Name of the person
 * @param gender - Gender of the person
 * @param age - Age of the person
 * @return void
 */
void push(Person*& top, const string& name, char gender, int age);

/*
 * Pop - Pop a person from the stack
 * @param top - Pointer to the top of the stack
 * @return void
 */
Person* pop(Person*& top);

/*
 * IsEmpty - Check if the stack is empty
 * @param top - Pointer to the top of the stack
 * @return bool - True if the stack is empty, false otherwise
 */
bool isEmpty(Person* top);

/*
 * Peek - Peek at the top person of the stack
 * @param top - Pointer to the top of the stack
 * @return Person* - Pointer to the top person of the stack
 */
Person* peek(Person* top);

/*
 * Size - Get the size of the stack
 * @param top - Pointer to the top of the stack
 * @return int - Size of the stack
 */
int size(Person* top);

#endif //HEADER_H
