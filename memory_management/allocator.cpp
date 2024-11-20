#include <iostream>

// Let's learn about the stack
// For temporary variables
// If we know the length in compilation time
// Is very fast
// The memory management is automatic when we left the scope
// The length is limited and is tipically is used for local variables
// The compiler assign an space in the stack for the variable
// The stack grows downwards
// When the scope ends {} all the associated variables are automatically deleted.
// The variable size is known in compilation time
// The compiler assign an space in the memory using an intern pointer know as stack pointer
// If you try to use memory and is there isn't memory available, it will throws a stack overflow issue, throws an error in execution time and the program usually stops.
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
// When you use heap, C++ ask the OS to allocate a memory block in the heap.
// This memory is dinamic, you decide when to free it
// Internally, new calls a OS function to allocate the memory block in the heap
// The assigned memory blocks are tracked by the heap manager, which maintain the register and the length of the assigned blocks.
// If you uses "new" to assign memory and there is not memory available in the heap, an std::bad_alloc exception is thrown, and the program stops
void heapExample() {
	int* heapVar = new int(42);
	std::cout << "Value in the heap: " << *heapVar <<std::endl;

	delete heapVar; // Free up the memory
}

void stackSimulation(int level) {
	int localVar = level;
}
