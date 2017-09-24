#include "SystemInfo.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

template<class T> void printSize(const string& name)
{
	const int nb = (sizeof(T));
	cout << name << ":" << nb << " " << ((nb==1) ? "byte" : "bytes") << endl;
}

void SystemInfo::printInfo()
{
	cout << "C++ standard: " << __cplusplus << endl;

	cout << endl << "Data types:" << endl;
//	cout << "Position: " << __FILE__ << ":" << __LINE__ << endl;
//	cout << "Function: " << __func__ << endl;

	printSize<char>    ("char  ");
	printSize<wchar_t> ("wchar ");
	printSize<char16_t>("char16");
	printSize<char32_t>("char32");
	printSize<short>   ("short ");
	printSize<int>     ("int   ");
	printSize<long>    ("long  ");
	printSize<float>   ("float ");
	printSize<double>  ("double");

}

