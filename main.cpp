#include <iostream> 
#include "memory_management/allocator.h"
#include "memory_management/pointers_and_references.h"

int main() {
	std::cout << "Hello World" << std::endl;
	stackExample();
	heapExample();
	
	std::cout << "Simulating the stack...\n";
	stackSimulation(10);
	stackSimulation(26);
	stackSimulation(41);
	stackSimulation(18);
	
	heapArrayExample(5);
	
	std::cout << "Pointers example" << std::endl;
	pointerExample();
    referenceExample();

	return 0;
}
