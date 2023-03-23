#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include "sort1.h"
using namespace std;

void merg (string file1, string file2, string fileOut)
{
    fstream filen(file1);
    fstream filen2(file2);
    fstream utFile(fileOut);
    int x = 0, y = 0;
    filen>>x;
    filen2>>y;
    while (!filen.eof()&&!filen2.eof())
    {
        if (x<y)
        {
            utFile<<x<<" ";
            filen>>x;
        }
        else
        {
            utFile<<y<<" ";
            filen2>>y;
        }
    }
    while(!filen.eof())
    {
        utFile<<x<<" ";
        filen>>x;
    }
    while(!filen2.eof())
    {
        utFile<<y<<" ";
        filen2>>y;
    }
}
