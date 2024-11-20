#include <iostream>


// A pointer is a variable that stores the memory location of another variable
// You declare a pointer using the '*' operator
// You can change the location to where the pointer is
// A pointer can be null
// For better practices, always initilize your pointers
void pointerExample() {
	int x = 13;
	int* ptr = &x; // 'ptr' points to the 'x' memory location

	std::cout << "Address of x: " << &x << std::endl;
	std::cout << "Pointer ptr stores: " << ptr << std::endl;
	std::cout << "Value pointed by ptr: " << *ptr << std::endl;


	*ptr = 20;
	std::cout << "Updated value of x: " << x << std::endl;
}
