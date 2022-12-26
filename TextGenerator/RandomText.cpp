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

RandomText::RandomText(int paragraphs)
{
	
}

//D'tor
RandomText::~RandomText()
{

}

//void setNumberOfParagraphs(int paragraphs)
//{
//	this->paragraphs = paragraphs;
//}
//
//int RandomText::getNumberOfParagaphs()
//{
//	return paragraphs;
//}


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

string RandomText::getSentence()
{

	this->sentence = "";
	this->isFirstWord = false;
	int numberOfWordsPerSentence = rand() % 10 + 5;

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
		sentence += word;
		if (i == numberOfWordsPerSentence - 1)
		{
			sentence += ". ";
		}
		sentence += " ";
	}

	return sentence;
}

string RandomText::createParagraph()
{
	int sentencesPerParagraph = rand() % 5 + 4;
	string paragraph = "";

	for (int i = 0; i < sentencesPerParagraph; i++)
	{
		this->sentence = RandomText::getSentence();
		paragraph += sentence;
	}

	return paragraph;
}

string RandomText::generateText(int paragraphs)
{
	string text = "";

	for (int i = 0; i <= paragraphs; i++)
	{
		if (i < paragraphs)
		{
			text += RandomText::createParagraph();
			text += "\n\n";
		}
		else
		{
			text += RandomText::createParagraph();
		}
	}

	return text;
}