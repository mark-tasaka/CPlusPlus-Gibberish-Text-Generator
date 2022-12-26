#ifndef RANDOM_TEXT_H
#define RANDOM_TEXT_H
#include<iostream>
#include<string>
using namespace std;

class RandomText {
	public:
		RandomText();
		RandomText(int paragraphs);
		~RandomText();
		//void setNumberOfParagraphs(int paragraphs);
		//int getNumberOfParagaphs();
		string getWord(int wordSize, bool isFirstWord);
		string getSentence();
		string createParagraph();
		void setWordLength(int wordLength);
		int getWordLength();
		string generateText(int paragraphs);

	private:
		//int paragraphs;
		string sentence;
		string theParagraph;
		int wordLength;
		bool isFirstWord;
};

#endif // !RANDOM_TEXT_H

