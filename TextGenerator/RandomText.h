#ifndef RANDOM_TEXT_H
#define RANDOM_TEXT_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class RandomText {
	public:
		RandomText();
		~RandomText();
		string getWord(int wordSize, bool isFirstWord);
		vector<string> getSentence();
		int addCommaPos(int sentence);
		void createParagraph();
		void setWordLength(int wordLength);
		int getWordLength();
		void generateText(int paragraphs);

	private:
		string sentence;
		string theParagraph;
		int wordLength;
		bool isFirstWord;
};

#endif // !RANDOM_TEXT_H

