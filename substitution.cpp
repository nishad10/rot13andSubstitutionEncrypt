#include "substitution.h"
#include <cstring>

using namespace std;



Substitution::Substitution(string l) : key(l){}


string Substitution::encrypt(string unencrypted)
{
		string out;
		out=substitute(unencrypted,key);
		return out;
}

string Substitution::decrypt(string encrypted)
{	string fout;
	string output="abcdefghijklmnopqrstuvwxyz";
	string nkey=key;
	char temp;
	char temp1;
	for(int i=0;i<nkey.length()-2;i++)
	{
		for(int j=0;j<nkey.length()-2-i;j++)
		{
			if(nkey[j]>nkey[j+1])
			{
				temp = output[j];
				output[j]=output[j+1];
				output[j+1]=temp;
				temp1=nkey[j];
				nkey[j]=nkey[j+1];
				nkey[j+1]=temp1;


			}
		}

	}
fout=substitute(encrypted,output);

return fout;
}
string Substitution::substitute(string original,string key)

{
	for(int i=0;i<original.length();i++)
	{
		if(original[i]==32)
		{
			original[i]=32;
		}
		if(original[i]>64&&original[i]<91) 	//Uppercase
		{
			original[i]=key[original[i]-65];	//find substitution
			original[i]-=32;				//change the substitution to uppercase
			if(original[i]<65&&!32)
			{
				original[i]+=64;			//if substitution was already uppercase change to lowercase
			}
		}
		if(original[i]>96&&original[i]<123)
		{
			original[i]=key[original[i]-97];
		}
	}

return original;
}
