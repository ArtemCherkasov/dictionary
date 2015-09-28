/*
 * dictionary.cpp
 *
 *  Created on: 27 сент. 2015 г.
 *      Author: artemcherkasov
 */
#include "../headers/dictionary.h"

Dictionary::Dictionary(std::string path){
	this->path = path;
	std::ifstream file(path.c_str());
	std::string line;
	std::string output;
	if (file.is_open()) {
		while (getline(file, line)) {
			//output.append(line);
			getMaintAndOtherWords(line);
		}
		file.close();
	} else {
		std::cout << "ERROR FILE OPEN" << std::endl;
	}
}

std::string Dictionary::getPath(){
	return this->path;
}

void Dictionary::getMaintAndOtherWords(std::string line){
	std::string word;
	if (line[0] != '\t') {
		int i = 0;
		while (((line[i] >= 65) && (line[i] <= 90))
				|| ((line[i] >= 97) && (line[i] <= 122))) {
			word.push_back(line[i]);
			++i;
		}
		std::transform(word.begin(), word.end(), word.begin(), ::tolower);
		Word *word_ = new Word(word);
		this->words.push_back(*word_);
	} else {
		int i = 1;
		while (((line[i] >= 65) && (line[i] <= 90))
				|| ((line[i] >= 97) && (line[i] <= 122))) {
			word.push_back(line[i]);
			++i;
		}
		std::transform(word.begin(), word.end(), word.begin(), ::tolower);
		int current_index = this->words.size() - 1;
		this->words[current_index].putOtherWord(word);
		//std::cout << "---" << this->words[current_index].getWord() << std::endl;
	}
}

std::vector<Word> Dictionary::getWords(){
	return this->words;
}
