#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	for (int i = 1; i < 101; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FizzBuzz" << endl;
		else if (i % 3 == 0)
			cout << "Fizz" << endl;
		else if (i % 5 == 0)
			cout << "Buzz" << endl;
		else
			cout << i << endl;
	}
}