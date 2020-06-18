/*
PROGRAM CREATED BY 
MUHAMMAD-HARIS-IQBAL
02-192132-040
BCE-2A
CP-LAB
OPEN HANDED LAB
*/

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <bits/stdc++.h> 
using namespace std;


// Protoypes
void reverse(const string& a);
int paldindrom(char string1[20]);
int main()
{ 

	// Variables Declarations
	string data, data2, data3, data4;
	char c[116];
	string str;
	int wordcount = 1, sencount = 0, len, totalwords = 0;


	// Importing Files
	ifstream myfile("data.txt");
	ifstream myfile2("data.txt");
	ifstream myfile3("data.txt");
	ifstream myfile4("data.txt");
	ifstream myfile5("data.txt");



	// Loop For Total Words In Paragraph.
	while(myfile >> data)
	{
		totalwords++;
	}

	cout << endl;
	// Loop for total number of sentences present. 
	while (getline(myfile2, data2 ,'.'))
	{
		sencount++;
	}


	// Loop for total numbers of words karachi occurences.
	while (myfile3 >> data3)
	{
		if (data3 == "Karachi")
		{
			wordcount++;
		}
	}

	//Palindrome
	char string1[20] = "rotor";
	char string2[20] = "level";
	char string3[20] = "radar";
	char string4[20] = "civic";
	cout << "\n=====================\nPalindrome\n=====================\n";
	paldindrom(string1);
	paldindrom(string2);
	paldindrom(string3);
	paldindrom(string4);
	cout << "=====================" << endl;
	


	// Output Information 
	cout << "\n \n------------------\nBASIC INFORMATION\n------------------\n";
	cout << "====================================\n";
	cout << "Total Sentances: " << sencount << endl;
	cout << "Total Words: " << totalwords << endl;
	cout << "Total Occurence Of Word 'Karachi': " << wordcount << endl;
	cout << "====================================\n";


	// Reversing The Whole Paragraph. 
	cout << "\n \n------------------\nRERVERSE PARARAPGH\n------------------\n";
	cout << "====================================\n";
	getline(myfile4, data4);
	reverse(data4);

 	
 	cout << "\n==================================\n";


	myfile.close();
	return 0;

}

// functions 
void reverse(const string& str)
{
    size_t numOfChars = str.size();

    if(numOfChars == 1)
       cout << str << endl;
    else
    {
       cout << str[numOfChars - 1];
       reverse(str.substr(0, numOfChars - 1));
    }
}

int paldindrom(char string1[20])
{
    string1[20] = {};
    int i, length;
    int flag = 0;
    
    length = strlen(string1);
    // radar
    for(i=0;i < length ;i++)
    {
        if(string1[i] != string1[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) 
    {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else 
    {
        cout << string1 << " is a palindrome" << endl;
    }
}