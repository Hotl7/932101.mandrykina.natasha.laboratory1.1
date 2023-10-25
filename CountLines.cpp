#include "CountLines.h"



int CountLines(){
	int count = 0;
	
	ifstream file;
	file.open(filename);
	string str;
	while (getline(file, str)) count++;
	file.close();

	return count;

}