#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class employee
{
private:
	void AddToRow(string);
	void AddToLine(string);
	
public:
	employee(string, string);
	void ReadFromFile();
	void WriteToFile();
	void CloseFiles();

protected:
	ifstream empin;
	ofstream empout;
	vector<string> temp;
	vector<vector<string>> emp;
};

