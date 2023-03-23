#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std; 

int main ()
{
    string word;
    fstream file; 
    map< string, int> upprep; 
    file.open("hitchhikersguide"); 
 
    while (file>>word)
        { for(int i = 0 ; i < word.length(); i++ )
                {
                    word[i]=tolower(word[i]);
                    if (word[i]>'a' || word[i] <'z')
                    {   word.erase(i,1);
                        i--;
                    }
                }

            if (word.length()== 0)
                word.erase(); 
            else 
            {
                upprep[word]++;
            }
        }
             multimap<int, string> wordCount;
            map <int, string> :: iterator itr; 
            for(itr=upprep.begin(); itr!=upprep.end(); itr++)
    {
            wordCount.insert(pair<int, string>(itr->second, it->first)); 
		
    }

            cout<< "skriv antal n "<<endl; 
            int n = 0; 
            cin>>n; 
            
            for (auto itr2 = wordCount.rbegin(); itr2 != wordCount.rend(); itr2++)
            cout << itr2->second << " " << itr2->first << endl; 
            n--;
         
    return 0; 

}