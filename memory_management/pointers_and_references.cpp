#include <iostream>


// A pointer is a variable that stores the memory location of another variable
// You declare a pointer using the '*' operator
// You can change the location to where the pointer is
// A pointer can be null
// For better practices, always initilize your pointers
void pointerExample() {
	int x = 13;
	int y = 14;
	y = x;
	int* ptr = &x; // 'ptr' points to the 'x' memory location

	std::cout << "Address of x: " << &x << std::endl;
	std::cout << "Pointer ptr stores: " << ptr << std::endl;
	std::cout << "Value pointed by ptr: " << *ptr << std::endl;
	std::cout << "Y value: " << y << std::endl;

	*ptr = 20;
	std::cout << "Updated value of x: " << x << std::endl;
	std::cout << "Y value after modified x: " << y << std::endl;

	int myNewInt = 1;
	char myNewChar = 'A';

	std::cout << "I would like to know how many memory uses my int variable: " << sizeof(myNewInt) << std::endl;
	std::cout << "I would like to know how many memory uses my char variable: " << sizeof(myNewChar) << std::endl;
}

// The reference can't be null
// You can't change the target
// You should initialize 
// You can access the value with the reference name
// You can't use it in dynamic structures
void referenceExample() {
    int x = 30;
    int& myXReference = x;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value myXReference: " << myXReference << std::endl;

    myXReference = 50;

    std::cout << "Updated value of X: " << x << std::endl;
}
