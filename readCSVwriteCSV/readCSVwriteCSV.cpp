#include <iostream>
#include "employee.h"
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	employee files("employees.csv", "NewEmpFile.csv");
	files.ReadFromFile();
}