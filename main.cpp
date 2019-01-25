#include "rot13.h"
#include "cypher.h"
#include "substitution.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//Cypher p;
	Rot13 c;
	string a;
	string b;
	int count=0;
	string enout;
	int i=0;
	int d;
	int e;
	string keyi;
	string dec;
	cout<<"Please enter they key for substitution encryption:"<<endl;
				cin>>keyi;
				Substitution s(keyi);
	while(i==0)
	{
	cout<<"Press 1> to Encrypt "<<endl;
	cout<<"Press 2> to Decrypt "<<endl;
	cout<<"Press 3> to Exit "<<endl;
	cin>>d;
		if(d==1)
		{
			cout<<"Enter type of decryption Press1.Rot13 Press2.Substitution:"<<endl;
			cin>>e;
			if(e==1)
			{
	cout<<"Enter the file name:"<<endl;
	cin.ignore(1000,'\n');
	getline(cin,a);
	ifstream infil {a};
	string rot=".rot13";
	ofstream outfil {a.append(rot)}; 
	while(getline(infil,b))
	{
	enout=c.encrypt(b);
	
	outfil<< enout <<endl;
	}
	infil.close();
	outfil.close();
			}
			else if(e==2)
			{
		string rot=".subst";
	
				cout<<"Enter file name:"<<endl;
	cin.ignore(1000,'\n');
	getline(cin,a);
	ifstream infil {a};
	
	ofstream outfil {a.append(rot)}; 
	while(getline(infil,b))
	{
		
	enout=s.encrypt(b);
	
	outfil<< enout <<endl;
	}
	infil.close();
	outfil.close();
			}
		}
		else if(d==2)
		{string subs=".subst";
	string rot=".rot13";
	cout<<"Enter file name:"<<endl;
	cin.ignore(1000,'\n');
	getline(cin,a);
	
	if(a.find(rot) != string::npos)
	{
	ifstream infilef {a};
	string test=a.erase((a.length()-6),a.length());
	ofstream outfilef {test}; //a.erase((a.length()-6),a.length())
	while(getline(infilef,b))
	{
		
	dec=c.decrypt(b);
	outfilef << dec << endl;
	}
	infilef.close();
	outfilef.close();
	}
	else if(a.find(subs) !=string::npos)
	{
		ifstream infilef {a};
	string test=a.erase((a.length()-6),a.length());
	ofstream outfilef {test}; //a.erase((a.length()-6),a.length())
	while(getline(infilef,b))
	{
		
	dec=s.decrypt(b);
	outfilef << dec << endl;
	}
	infilef.close();
	outfilef.close();
	}
	else
	{
		cout<<"File isnt encrypted by Rot13 or by Substitution";
	}
}
else if(d==3)
{
	i=1;
}
}	

/*int tot;
tot=p.chars_processed();*/

	return 0;

}