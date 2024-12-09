// implement character offsets function
#include "offsets.h"
#include <ctype.h>

char character(char start, int offset) {
	char target = start + offset;
	const int distance = offset;
	
	if (!(isupper(start) == isupper(target)))
		throw "prohibitedCaseTransition"; // prevent case transition
	if (!isalpha(start))
		throw "invalidCharacterException";
	if (!isalpha(target))
		throw "invalidRangeException";
	return target;
}