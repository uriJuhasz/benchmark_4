#include <iostream>
using namespace std;

#include "SystemInfo.h"

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
	SystemInfo::printInfo();
}

