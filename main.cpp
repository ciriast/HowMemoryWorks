#include <iostream> 
#include "memory_management/allocator.h"

int main() {
	std::cout << "Hello World" << std::endl;
	stackExample();
	heapExample();
	
	std::cout << "Simulating the stack...\n";
	stackSimulation(10);
	stackSimulation(26);
	stackSimulation(41);
	stackSimulation(18);

	return 0;
}
