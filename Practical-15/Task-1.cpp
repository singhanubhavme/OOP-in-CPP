#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("text.txt");
	myfile << "This text is written into the file named text";
	myfile.close();
	ifstream readfile;
	string data;
	readfile.open("text.txt");
	while (1)
	{
		readfile >> data;
		if (readfile.eof())
		{
			cout << data << endl;
			break;
		}
		else
			cout << data << " ";
	}
	readfile.close();
	return 0;
}
