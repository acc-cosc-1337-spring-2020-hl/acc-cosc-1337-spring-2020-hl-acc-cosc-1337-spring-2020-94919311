//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
	Vector(size_t sz);
	Vector (const Vector& v); // copy constructor RULE OF 3
	Vector& operator=(const Vector& v); // copy assignment RULE OF 3
	Vector(Vector && v); //move constructor RULE OF 5
	Vector& operator=(Vector&& v); //move assignment RULE OF 5
	size_t Size() const { return size; }
	void set_size(size_t s) { size = s; }
	int& operator[] (int i) { return nums[i]; }
	int& operator[] (int i) const { return nums[i]; }
	~Vector(); // destructor
	void Reserve(size_t new_allocation);
private:
	size_t size; //tracks space that is ready to use
	size_t space; // tracks reserved space
	int* nums;
};

#endif 

void use_vector();