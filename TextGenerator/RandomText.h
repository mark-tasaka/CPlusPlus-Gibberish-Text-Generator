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
		int getNumberOfParagaphs() const;
		string getWord();
		string getSentence();

	private:
		int paragraphs;
		string sentence;
};

#endif // !RANDOM_TEXT_H

