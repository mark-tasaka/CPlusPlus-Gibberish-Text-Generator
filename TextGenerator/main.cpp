#include<iostream>
#include<string>
#include<cstdlib>
#include<string>
#include<time.h>
#include<ctime>
#include"RandomText.h"
using namespace std;

int main()
{
	srand(time(nullptr));
	RandomText test1;
	test1.generateText(10);

	return 0;
}