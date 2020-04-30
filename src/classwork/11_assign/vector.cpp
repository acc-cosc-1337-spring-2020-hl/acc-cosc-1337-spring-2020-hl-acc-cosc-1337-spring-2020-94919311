#include "vector.h"
#include "vector.h"
#include "vector.h"
#include "vector.h"


Vector::Vector(size_t sz) : size{ sz }, nums {new int[sz]}
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

Vector::Vector(const Vector & v) 
	: size{v.size}, nums {new int [v.size]}
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}

Vector::~Vector()
{
	delete[] nums;
}

void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}
	int* temp = new int[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}

	delete[] nums;
	nums = temp;

	space = new_allocation;

}
