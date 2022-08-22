// "/usr/include/python3.8/" should be added to includePath in c_cpp_properties.json
// build with "g++ main.cpp -o app -I /usr/include/python3.8/ -lpython3.8"
// <curses.h> is a better replacement for <conio.h>
// a tutorial source: https://www.codeproject.com/Articles/820116/Embedding-Python-program-in-a-C-Cplusplus-code

#include <stdio.h>
#include <iostream>
#include <curses.h>
#include <Python.h>

using namespace std;

int main(){
	cout << "start\n";

	char filename[] = "main.py";
	FILE* fp;

	Py_Initialize();

	fp = _Py_fopen(filename, "r");
	PyRun_SimpleFile(fp, filename);

	Py_Finalize();

	cout << "end\n";
	return 0;
}