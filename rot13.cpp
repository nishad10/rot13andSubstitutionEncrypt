#include "rot13.h"

using namespace std;



Rot13::Rot13(){};
string Rot13::encrypt(string unencrypted)
{
	for(int i=0;i<unencrypted.length();i++)
	{
		if(unencrypted[i]==32)//space
		{
			unencrypted[i]=32;
		}
		if((unencrypted[i]>64&&unencrypted[i]<78)||(unencrypted[i]>96&&unencrypted[i]<110))
		{
			unencrypted[i]+=13;
			
		}

		else if((unencrypted[i]>77&&unencrypted[i]<91)||(unencrypted[i]>109&&unencrypted[i]<123))
		{
			unencrypted[i]-=13;
		

		}
		if(i==(unencrypted.length()-1))
		{
			chars_processed((i+1));
		}

	}
	return unencrypted;
}

string Rot13::decrypt(string encrypted)
{
	string out;
	out=encrypt(encrypted);
	/*for(int i=0;i<encrypted.length();i++)
	{
		if(encrypted[i]>64&&encrypted[i]<97)
		{
			encrypted[i]-=13;
			

		}

		else if(encrypted[i]>96&&encrypted[i]<123)
		{
			encrypted[i]+=13;
			
			
		}
	}*/
return out;
}
