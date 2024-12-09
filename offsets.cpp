// implement character offsets function
#include "offsets.h"
#include <ctype.h>

char character(char start, int offset) {
	char target = start + offset;
	const int distance = offset;
	if (offset > 31 || offset < -32)
		throw "outOfBoundary"; // prevent case transition
	if (!isalpha(start))
		throw "invalidCharacterException";
	if (!isalpha(target))
		throw "invalidRangeException";
	return target;
}