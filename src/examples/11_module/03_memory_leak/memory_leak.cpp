#include "memory_leak.h"

void memory_leak()
{

	int * ptr_num = new int(5);
	// some pther function code

	// we forget to delete and point to nullptr
}
