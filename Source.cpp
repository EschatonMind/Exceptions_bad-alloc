#include <iostream>
#include "ExceptionCanGoWrong.h"
using namespace std;
// The Source of Exception in a seprate Class
int main() {
	// Try and Catch 
	try {
		ExceptionCanGoWrong GiWrong;
	}
	catch (bad_alloc& e) {
		cout << " Caught Exception :  " << e.what() << endl;
	}

	cout << " Still running " << endl;
	return 0;
}