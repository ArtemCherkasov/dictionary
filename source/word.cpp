/*
 * word.cpp
 *
 *  Created on: 27 сент. 2015 г.
 *      Author: artemcherkasov
 */
#include "../headers/word.h"

Word::Word(std::string word){
	this->word = word;
}

void Word::setWord(std::string word){
	this->word = word;
}

void Word::putOtherWord(std::string word){
	this->other_words.push_back(word);
}

std::vector<std::string> Word::getOtherWords(){
	return this->other_words;
}

std::string Word::getWord(){
	return this->word;
}
