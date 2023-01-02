#include<iostream>
#include<string>
#include<cstdlib>
#include<string>
#include<time.h>
#include<ctime>
#include<fstream>
#include <iomanip>
#include"RandomText.h"
using namespace std;

void generateText();

int main()
{
	srand(time(nullptr));
	//RandomText test1 = RandomText(10);
	generateText();

	return 0;
}


void generateText()
{
	int paragraphs = 0;
	int printToTextFile = 0;
	ofstream file;
	int counter = 1;

	cout << "Welcome to the Random Text Generator." << endl;
	cout << "How many paragraphs of Random Text would you like to generate?  Please enter an integer value." << endl;
	cin >> paragraphs;
	cout << endl << endl;

	RandomText test1 = RandomText(paragraphs);

	cout << endl;

	//cout << "Do you wish to print the random text to a text file?  Please press 1 for generating the text file; press any other key" << endl;

	//cin >> printToTextFile;

	//if (printToTextFile == 1)
	//{
	//	file.open("output2.txt");
	//	file << test1 << endl;
	//}


}