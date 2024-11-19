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
