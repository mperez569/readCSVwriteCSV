#include "employee.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

employee::employee(string inCSV, string outCSV)
{
	empIn.open(inCSV);
	empOut.open(outCSV);
}

void employee::ReadFromFile()
{
	string line;

	if (empIn.is_open())
	{
		while (getline(empIn, line))
		{

		}
	}
}

void employee::WriteToFile()
{
	
}

void employee::CloseFiles()
{
	empIn.close();
	empOut.close();
}

void employee::AddToRow(string)
{

}
void employee::AddToLine(string)
{

}
