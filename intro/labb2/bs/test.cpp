#include <iostream>
#include <sstream>
#include<fstream>
using namespace std;

int main()
{
ifstream myfile;
ofstream outfile;
myfile.open("names.txt");
outfile.open("resultat.txt");
string firstname,lastname,adress,personnummer,gender;
while(!myfile.eof())
{
myfile>>firstname;
myfile>>lastname;
myfile>>personnummer;
int genders=personnummer[8];
if (genders%2==0)
{
gender="[W]";
}
else
{
gender="[M]";
}
myfile.ignore();
getline(myfile,adress);
if (myfile.fail ())
{
break;

}
outfile<<lastname<<' '<<firstname<<' '<<gender<<endl;
outfile<<adress<<endl;



}


outfile.close();
myfile.close();


return 0;
}