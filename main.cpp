#include "headers/dictionary.h"
#include "headers/book.h"

#define MAIN_DIRECTIORY "/home/artemcherkasov/workspace/words_analiser/dictionary"
#define OUTPUT_DIRECTIORY "/home/artemcherkasov/workspace/words_analiser/output_directory"

int main() {
	Dictionary *dict = new Dictionary("/home/artemcherkasov/workspace/words_analiser/output_directory/db.txt");
	Book *book = new Book("/home/artemcherkasov/workspace/words_analiser/Book/harry.txt");
	delete (dict);
	delete (book);
	return 0;
}
