//The remove function
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <map>
#include <unordered_map>
using namespace std;

void remove()
{
string line, name, word, info;
unordered_map<string, string> newNames;
ifstream myfile;
myfile.open("outfile.txt");
cout << "Please Enter the name of record you want to delete: ";
cin >> name;
 while(!myfile.eof())
 {
    myfile>>word;
    myfile.ignore();
    getline(myfile, info);
    if (name != word)
    newNames.insert(pair<string, string>(word, info));
}
myfile.close();
ofstream outfile;
outfile.open("outfile.txt");
    for (auto itr = newNames.begin() ; itr != newNames.end(); ++itr)
 {
     outfile<<itr->first<<" "<< itr->second<<endl;
 }
 } 
