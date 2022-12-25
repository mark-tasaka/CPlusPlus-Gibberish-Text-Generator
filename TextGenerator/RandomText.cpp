#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include"RandomText.h"
using namespace std;

RandomText::RandomText()
{
}

RandomText::RandomText(int paragraphs)
{
	this->paragraphs = paragraphs;
}

//D'tor
RandomText::~RandomText()
{

}

int RandomText::getNumberOfParagaphs() const
{
	return paragraphs;
}


string RandomText::getWord()
{
	srand((unsigned int)time(NULL));

	const int wordLength = rand() % 9 + 3;

	vector<char> alphabet {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'w', 'x', 'y', 'z'};

	vector<char> word;

	int letter;

	for (int i = 0; i < wordLength; i++)
	{
		srand((unsigned int)time(NULL));
		letter = rand() % 26;
		word.push_back(alphabet[letter]);
	}

	string theWord(word.begin(), word.end());

	return theWord;
}

string RandomText::getSentence()
{
	string sentence = "";

	for (int i = 0; i < 10; i++)
	{
		string word = RandomText::getWord();
		sentence += word;
		sentence += " ";
	}

	return sentence;
}