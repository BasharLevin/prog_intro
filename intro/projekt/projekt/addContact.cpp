//Add contact function
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void add()
{
    fstream outFile;
    string firstName , lastName , adress, number , email, age;
    outFile.open("outfile.txt", fstream::app);
    cout<<"Enter first name : "<<endl;
    cin>> firstName;
    cout<<"Enter last name : "<<endl;
    cin >> lastName;
    outFile<<firstName<<" "<<lastName<<" ";
    cout<<"Enter user's number : "<<endl;
    cin >> number;
    outFile<<number<<" ";
    cout<<"Enter user's age : "<<endl;
    cin >> age;
    outFile<<age<<" ";
    cout<<"Enter user's email adress"<<endl;
    cin>>email;
    outFile<<email<<" ";
    cout<<"Enter user's adress : "<<endl;
    cin.ignore();
    getline(cin, adress); //Getline function to get the whole adress (post code and street number)
    outFile<<adress<<endl;
    outFile.close();
}
