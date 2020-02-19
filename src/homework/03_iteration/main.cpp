//write include statements
#inlcude <iostream>
#include"dna.h"

//write using statements
using std::cout; using std::cout; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content,
or 2 for Get DNA Complement.  The program will prompt user for a
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as
user enters a y or Y.
*/

int main()
{
	char program_runs;

	do
	{
		string dna;
		int choice;
		cout << " enter 1 for Get GC Content, or 2 for Get DNA Complement \n";
		cin >> choice;

		cout << "'\n enter DNA string A,T, G, C \n";
		cin >> dna;

		if (choice == 1)
		{
			double result = get_gc_content(dna);
			cout << "\n GC content is;" << result << "\n";
		}
		else if (choice == 2) {
			string complement = get_dna_complement(dna);
			cout << "\n the complement is: " << complement << "\n";
		}

	}
	cout << "\n enter Y to try again\n";
	cin >> program_runs;
	while (program_runs == 'Y' || program_runs == 'y')

		return 0;
}



