#include "cypher.h"

using namespace std;


Cypher::Cypher(){};

int Cypher::chars_processed()
{
	return chars;
}

void Cypher::chars_processed(int num)
{
		chars+=num;
}