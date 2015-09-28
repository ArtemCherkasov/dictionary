/*
 * book.h
 *
 *  Created on: 28 сент. 2015 г.
 *      Author: artemcherkasov
 */

#ifndef HEADERS_BOOK_H_
#define HEADERS_BOOK_H_

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <map>

class Book{
private:
	std::string path;
	std::string book;
	std::vector<std::string> words;
	std::map<std::string, int> unicume_words;
public:
	Book(std::string path);
	std::string getBook();
	std::vector<std::string> getWords();
};
#endif /* HEADERS_BOOK_H_ */
