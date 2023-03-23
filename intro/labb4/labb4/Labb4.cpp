#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main()
{
	fstream file("hitchhikersguide.txt");
	map<string, int> upprep; 
	string word;           
	
	while(!file.eof()) 
	{
		file>>word;
		for(int i=0; i<word.length(); i++) 
		{	
			word[i]=tolower(word[i]); 
			if(word[i]<97 || word[i] >122 )
			{
				word.erase(i,1);
				i--; 
			}
		} 
		if(word.length()==0)
		{
			word.erase();
		}
		else
		{
			upprep[word]++;
		
		}
	}
	multimap<int, string> wordCount; 
    map<string, int>::iterator itr; 
    for(itr=upprep.begin(); itr!=upprep.end(); itr++)
    {
        wordCount.insert(pair<int, string>(itr->second, itr->first));
    }
	cout<<"skriv n"<<endl; 
    int antal ;
	cin>>antal;  
	multimap<int, string>::reverse_iterator itr2; 
	for (itr2 = wordCount.rbegin(); itr2 != wordCount.rend() && antal>0; itr2++) 
	{
		cout << itr2->second << itr2->first << endl; 
        antal--;
	}
	

	return 0;
}
