// Augustus Gullett
// CIS 1202.501
// 12/8/2024
#include "offsets.h"
#include <iostream>
using namespace std;

int main() {
	// driver
	char result = ' ';

	result = character('a', 1);
	cout << "character('a', 1) returned: " << result << endl;
	result = character('a', -1);
	cout << "character('a', -1) returned: " << result << endl;
	result = character('Z', -1);
	cout << "character('Z', -1) returned: " << result << endl;
	result = character('?', -5);
	cout << "character('?', -5) returned: " << result << endl;
	result = character('A', 32);
	cout << "character('A', 32) returned: " << result << endl;
}