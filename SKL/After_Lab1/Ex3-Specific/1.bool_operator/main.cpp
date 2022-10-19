#include <iostream>

/* 
 * Peek at the strange world of operators, specifically, operator bool()!
 */

class MyC {
	private:
		int i = 0;
	public:
		operator bool () { 
			std::cout << "bool operator called! (i=" << i << "):  ";
			i++;
			return (i % 2) == 0;
		}	
};

int main() {
	MyC anObj;

	for (int i = 0; i < 3; i++) {
		if (anObj) std::cout << "True!\n";
		else  std::cout << "False!\n";
	}

	// note, I can also do this ...
	if (anObj.operator bool())
		std::cout << "True!\n";
	else  std::cout << "False!\n";
	return 0;
}
