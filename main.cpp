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