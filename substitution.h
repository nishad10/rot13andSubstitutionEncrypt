#ifndef SUBSTITUTION_H_
#define SUBSTITUTION_H_ 

#include <string>
#include "cypher.h"

using namespace std;

class Substitution: public Cypher{

private:

	string key;
	string dekey;

public:
	
	Substitution(string key);
	 string encrypt(string unencrypted);
	 string decrypt(string encrypted);
	 string substitute(string original,string key);

};

#endif