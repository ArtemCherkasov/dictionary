/*
 * dictionary.h
 *
 *  Created on: 27 сент. 2015 г.
 *      Author: artemcherkasov
 */

#ifndef HEADERS_DICTIONARY_H_
#define HEADERS_DICTIONARY_H_
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <fstream>
#include <algorithm>
#include "word.h"
#include <exception>

class Dictionary{
private:
	std::string path;
	std::vector<Word> words;
	Dictionary();
	void getMaintAndOtherWords(std::string line);
public:
	Dictionary(std::string path);
	std::string getPath();
	std::vector<Word> getWords();
};

#endif /* HEADERS_DICTIONARY_H_ */
