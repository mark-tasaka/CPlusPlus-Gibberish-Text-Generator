#ifndef RANDOM_TEXT_H
#define RANDOM_TEXT_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class RandomText {
	public:
		RandomText(int numberParagraphs);
		~RandomText();
		string getWord(int wordSize, bool isFirstWord);
		string getSentence();
		int addCommaPos(int sentence);
		string createParagraph();
		void setWordLength(int wordLength);
		int getWordLength();
		string generateText(int paragraphs);

	private:
		//string sentence;
		//string theParagraph;
		int wordLength;
		bool isFirstWord;
		int numberParagraphs;
		string text;
};

#endif // !RANDOM_TEXT_H

