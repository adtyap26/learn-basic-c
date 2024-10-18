#include <stdio.h>
#include <stdbool.h>
#include <string.h>  // Include the string.h header for strcpy

// Define a struct
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Integer data type
    int integerVar = 10;
    
    // Character data type
    char charVar = 'A';
    
    // Float data type
    float floatVar = 10.5;
    
    // Double data type
    double doubleVar = 20.123456;
    
    // Boolean data type
    bool boolVar = true;
    
    // String (character array)
    char stringVar[50];
    strcpy(stringVar, "Hello, World!");  // Copying the string into the array
    
    // Unsigned integer
    unsigned int unsignedIntVar = 50;
    
    // Short integer
    short shortIntVar = 5;
    
    // Long integer
    long longIntVar = 123456789;
    
    // Long long integer
    long long longLongIntVar = 123456789012345;

    // Define a struct variable
    struct Person person;
    person.age = 30;
    person.height = 5.9;
    strcpy(person.name, "John Doe");  // Copying the string into the struct's name field

    // Pointer to an integer
    int *ptrInt = &integerVar;

    // Pointer to a struct
    struct Person *ptrPerson = &person;

    // Print values of various data types
    printf("Integer: %d\n", integerVar);
    printf("Character: %c\n", charVar);
    printf("Float: %.2f\n", floatVar);
    printf("Double: %.6lf\n", doubleVar);
    printf("Boolean: %d\n", boolVar);  // true is represented as 1 in C
    printf("String: %s\n", stringVar);
    printf("Unsigned Integer: %u\n", unsignedIntVar);
    printf("Short Integer: %d\n", shortIntVar);
    printf("Long Integer: %ld\n", longIntVar);
    printf("Long Long Integer: %lld\n", longLongIntVar);

    // Print struct values
    printf("Struct Person - Name: %s, Age: %d, Height: %.1f\n", person.name, person.age, person.height);

    // Print pointer values
    printf("Pointer to Integer: %d\n", *ptrInt);
    printf("Pointer to Struct Person - Name: %s, Age: %d, Height: %.1f\n", ptrPerson->name, ptrPerson->age, ptrPerson->height);
  // -> operator is the same as (*pointer).type  
   printf("Pointer to Struct Person - Name: %s, Age: %d, Height: %.1f\n", (*ptrPerson).name, (*ptrPerson).age, (*ptrPerson).height);

    return 0;
}

