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

vector<string> RandomText::getSentence()
{

	this->sentence = "";
	this->isFirstWord = false;
	int numberOfWordsPerSentence = rand() % 10 + 5;
	vector<string> theSentence;

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
		//sentence += word;
		if (i == numberOfWordsPerSentence - 1)
		{
			//sentence += ". ";
			word += ". ";
		}
		//sentence += " ";
		word += " ";

		theSentence.push_back(word);
	}

	//return sentence;
	return theSentence;
}

vector<string> RandomText::createParagraph()
{
	int sentencesPerParagraph = rand() % 5 + 4;
	vector<string> theSentence;
	vector<string> paragraph;

	for (int i = 0; i < sentencesPerParagraph; i++)
	{
		theSentence = RandomText::getSentence();
		paragraph.push_back(sentence);
	}

	return paragraph;
}

void RandomText::generateText(int paragraphs)
{
	
	for (int i = 0; i <= paragraphs; i++)
	{

		vector<string> aParagraph;

		aParagraph = RandomText::createParagraph();

		for (string para : aParagraph)
		{
			cout << para << endl;
		}

		if (i < paragraphs)
		{
			cout << endl << endl;
		}
		else
		{
			cout << endl;
		}
	}

}