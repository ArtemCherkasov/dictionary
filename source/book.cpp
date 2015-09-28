/*
 * book.cpp
 *
 *  Created on: 28 сент. 2015 г.
 *      Author: artemcherkasov
 */
#include "../headers/book.h"
Book::Book(std::string path){
	this->path = path;
	std::ifstream file(path.c_str());
	std::string line;
	std::string output;
	if (file.is_open()) {
		while (getline(file, line)) {
			this->book.append(line);
		}
		file.close();
	} else {
		std::cout << "ERROR FILE OPEN" << std::endl;
	}
	int size_book = this->book.size();
	std::cout << "size file " << size_book << std::endl;
	bool new_word = false;
	int SIZE_PROGRESS_BAR = 100;

	for(int i = 0; i < SIZE_PROGRESS_BAR; ++i){
		std::cout << "|";
	}
	std::string word_to_add;
	for (int i = 0; i < size_book; ++i){
		if (((this->getBook()[i] >= 65) && (this->getBook()[i] <= 90)) || ((this->getBook()[i] >= 97) && (this->getBook()[i] <= 122)) || (this->getBook()[i] == 39)){
			new_word = true;
			word_to_add.push_back(this->getBook()[i]);
			//word_to_add.append();
		} else {
			if (new_word){
				new_word = false;
				this->words.push_back(word_to_add);
				//std::cout << word_to_add << std::endl;
				word_to_add.erase();
			}
		}
	}
}

std::string Book::getBook(){
	return this->book;
}

std::vector<std::string> Book::getWords(){
	return this->words;
}
