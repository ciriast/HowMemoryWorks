#include <iostream>

// Let's learn about the stack
// For temporary variables
// If we know the length in compilation time
// Is very fast
// The memory management is automatic when we left the scope
// The length is limited and is tipically is used for local variables
void stackExample() {
	int stackVar = 42; // A variable in the stack
	std::cout << "Value in the stack: " << stackVar <<std::endl;
}

// Let's learn about the heap
// The variables are not linked to the scope where were created.
// You can access to them in any place, if you have a valid pointer.
// You have to free the memory, if not, it will stay alive until the execution finish.
// Are usefull when you need the values in differents scopes
// You can use it to store dinamic and big data
// You have to be carefull with the memory leak
void heapExample() {
	int* heapVar = new int(42);
	std::cout << "Value in the heap: " << *heapVar <<std::endl;

	delete heapVar; // Free up the memory
}
