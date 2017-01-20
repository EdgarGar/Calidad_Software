#include "cifrado.h"

class Cesar : public Cifrado{
public:
	Cesar() {}
	~Cesar() {}
	int decrypt(string word);
};

int Cesar::decrypt(string word) {
	int offset = 0;
	string tempWord = word;
	string line;
	ifstream dictionary ("diccionario.txt");
	if (dictionary.is_open()) {
		while (offset < 26) {
			for (int i = 0; i < word.length(); i++) {
				tempWord[i] = (word[i] + offset)%26;
			}
			while (getline(dictionary, line)) {
				if (tempWord.compare(line)) {
					dictionary.close();
					return offset;
				}
			}
			offset++;
			dictionary.clear();
			dictionary.seekg(0, ios::beg);
		}
		dictionary.close();
	} else {
		cout << "Could not open dictionary" << endl;
		return -1;
	}
}
