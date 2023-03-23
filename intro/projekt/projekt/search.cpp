//The search function
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void search()
 {

    string firstName , lastName , adress, number , email, age;
    bool found ;
    ifstream outFile("outfile.txt");
    string keyword;
    cout << "Enter the name of the contact: "<<endl;
    cin >> keyword;
    while (outFile >> firstName >> lastName ) 
    {   
        outFile>> number;
        outFile >>age;
        outFile >> email;
        outFile.ignore();
        getline(outFile, adress);
        if (keyword == firstName || keyword == lastName) {
            system("clear");
            cout << "\tContact details"<<endl;
            cout << "\nFirst Name : " << firstName;
            cout << "\nLast Name : " << lastName;
            cout << "\nPhone Number : " << number;
            cout << "\nage : " << age;
            cout << "\nEmail : " << email<<endl;
            cout << "adress : " << adress<<endl;
            
            found = true;
           
        }
    }
   outFile.close();
 }
