#include <iostream>
using namespace std;

void mainImpl();

int main() {
	cout << "===Start" << endl;
	try{
		mainImpl();
	}catch(const exception& e){
		cerr << "Error: " << e.what() << endl;
	}catch(...){
		cerr << "Unknown error - aborting" << endl;
	}

	cout << "===End" << endl;
	return 0;
}

void mainImpl()
{
	cout << "C++ standard: " << __cplusplus << endl;
	cout << "Position: " << __FILE__ << ":" << __LINE__ << endl;
	cout << "Function: " << __func__ << endl;

}

