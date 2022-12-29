#include<iostream>
#include<cstdlib>
#include<string>
#include<time.h>
#include<ctime>
#include<vector>
#include"RandomText.h"
using namespace std;


RandomText::RandomText()
{
}


//D'tor
RandomText::~RandomText()
{

}

void RandomText::setWordLength(int wordLength)
{
	this->wordLength = wordLength;
}

int RandomText::getWordLength()
{
	return wordLength;
}


string RandomText::getWord(int wordSize, bool isFirstWord)
{

	vector<char> alphabet {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	vector<char> alphabetUpperCase { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	string word;
	//vector<string> word2;
	
	for (int i = 0; i < wordSize; i++)
	{
		if (isFirstWord == true && i == 0)
		{
			int letter = rand() % 26;
			word.push_back(alphabetUpperCase[letter]);
		}
		else
		{
			int letter = rand() % 26;
			word.push_back(alphabet[letter]);
		}
	}

	return word;
}


int RandomText::addCommaPos(int sentence)
{
	int position = 0;
	int rangeSize = sentence;

	if (sentence <= 6)
	{
		position = 3;
	}
	else if (sentence > 6 && sentence < 9)
	{
		position = rand() % 2 + 3;
	}
	else
	{
		position = rand() % 4 + 3;
	}

	return position;
}


vector<string> RandomText::getSentence()
{

	this->sentence = "";
	this->isFirstWord = false;
	int numberOfWordsPerSentence = rand() % 10 + 5;
	vector<string> theSentence;
	int commaPostition = RandomText::addCommaPos(numberOfWordsPerSentence);

	for (int i = 0; i < numberOfWordsPerSentence; i++)
	{
		if (i == 0)
		{
			isFirstWord = true;
		}
		else
		{
			isFirstWord = false;
		}
		int wordSize = rand() % 8 + 4;
		string word = RandomText::getWord(wordSize, isFirstWord);
		if (i == numberOfWordsPerSentence - 1)
		{
			word += ". ";
		}

		if (i == commaPostition)
		{
			word += ',';
		}


		//sentence += " ";
		word += " ";

		theSentence.push_back(word);
	}

	//return sentence;
	return theSentence;
}

void RandomText::createParagraph()
{
	int sentencesPerParagraph = rand() % 5 + 4;
	vector<string> theSentence;
	//vector<string> paragraph;

	for (int i = 0; i < sentencesPerParagraph; i++)
	{
		theSentence = RandomText::getSentence();
		for (string eachSentence : theSentence)
		{
			cout << eachSentence;
		}
		//paragraph.push_back(sentence);
	}

	//return paragraph;
}

void RandomText::generateText(int paragraphs)
{
	
	for (int i = 0; i <= paragraphs; i++)
	{
		
		RandomText::createParagraph();
		cout << endl << endl;

		//vector<string> aParagraph;

		//aParagraph = RandomText::createParagraph();

		//for (string para : aParagraph)
		//{
		//	cout << para << endl;
		//}

		//if (i < paragraphs)
		//{
		//	cout << endl << endl;
		//}
		//else
		//{
		//	cout << endl;
		//}
	}

}