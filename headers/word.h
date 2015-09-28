/*
 * word.h
 *
 *  Created on: 27 сент. 2015 г.
 *      Author: artemcherkasov
 */

#ifndef HEADERS_WORD_H_
#define HEADERS_WORD_H_
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>

class Word{
private:
	std::string word;
	std::vector<std::string> other_words;
	Word();
public:
	Word(std::string word);
	void setWord(std::string word);
	void putOtherWord(std::string word);
	std::vector<std::string> getOtherWords();
	std::string getWord();
};

#endif /* HEADERS_WORD_H_ */
