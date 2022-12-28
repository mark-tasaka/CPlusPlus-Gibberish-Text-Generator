#ifndef RANDOM_TEXT_H
#define RANDOM_TEXT_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class RandomText {
	public:
		RandomText();
		RandomText(int paragraphs);
		~RandomText();
		//void setNumberOfParagraphs(int paragraphs);
		//int getNumberOfParagaphs();
		string getWord(int wordSize, bool isFirstWord);
		vector<string> getSentence();
		vector<string> createParagraph();
		void setWordLength(int wordLength);
		int getWordLength();
		void generateText(int paragraphs);

	private:
		//int paragraphs;
		string sentence;
		string theParagraph;
		int wordLength;
		bool isFirstWord;
		//vector<string> text;
};

#endif // !RANDOM_TEXT_H

