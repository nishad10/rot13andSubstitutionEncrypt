#ifndef ROT13_H_
#define ROT13_H_ 

#include <string>
#include "cypher.h"

using namespace std;

class Rot13:public Cypher{

public:
	
	Rot13();
	string encrypt(string unencrypted);
	string decrypt(string encrypted);


};

#endif