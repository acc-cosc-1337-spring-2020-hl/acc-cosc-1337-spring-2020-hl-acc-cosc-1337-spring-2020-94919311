#include "dna.h"
using std::string; using std::swap;


/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
	double sum = 0
		for (int i = 0; i < dna.length(); i++)
		{
			if (dna[i] == 'C' || dna[i] == 'G')
		}
	resturn sum / dna.length();
}
//how can I divide length? 


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string str)
{
	int n = str.length();


	for (int = 0; i < n / 2; i++)
	{
		{
			swap(str[i], str[n - i - 1]);

		}
	}
	return str;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
	replace A with T, T with A, C with G and G with C
c. return string

*/

string  get_dna_complement(string dna)
{
	string reversed_str = get_reverse_string(dna);
	for (char& i : reversed_str)
	{
		switch (i)
		{
		case 'A':
			i = 'T';
			break;
			 
		case 'T':
			i = 'A';
			break;
		case 'G':
			i = 'C';
			break;
		case 'C':
			i = 'G';
			break;
		}

	}
	return reversed_str();
}

