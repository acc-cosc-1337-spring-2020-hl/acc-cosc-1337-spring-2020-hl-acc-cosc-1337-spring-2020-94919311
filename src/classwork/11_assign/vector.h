//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
	Vector(size_t sz);
	Vector (const Vector& v); // copy constructor 
	Vector& operator=(const Vectoe)
	size_t Size() const { return size; }
	void set_size(size_t s) { size = s; }
	int& operator[] (int i) { return nums[i]; }
	int& operator[] (int i) const { return nums[i]; }
	~Vector(); // destructor
private:
	size_t size;
	int* nums;
};

#endif 

void use_vector();