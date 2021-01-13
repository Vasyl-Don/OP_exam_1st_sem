#include "source.h"

int main()
{
	Matr pifagor;
	generate(pifagor);
	cout << "Pifagor matrix: " << endl;
	output(pifagor);
	max_in_column(pifagor);
	cout << endl;
	mirror(pifagor);
	cout << "Mirrored Pifagor matrix: " << endl;
	output(pifagor);
	max_in_column(pifagor);
	return 0;
}