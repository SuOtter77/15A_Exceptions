// implement character offsets function
#include "offsets.h"
#include <ctype.h>
#include <iostream>
using namespace std;

char character(char start, int offset) {
	char target = start + offset;
	const int distance = offset;
	try {
		if (!(isupper(start) == isupper(target)))
			throw "prohibitedCaseTransition"; // prevent case transition
		if (!isalpha(start))
			throw "invalidCharacterException";
		if (!isalpha(target))
			throw "invalidRangeException";
	}
	catch (const char* exc) {
		cout << "Error: " << exc << endl;
		return '?';
	}
	return target;
}