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

using namespace std; 

// prototypes
string muhammadHaris(string fullname, string Registration);
string muzammilNisar(string fullname, string Registration);
string huzaifaAli(string fullname, string Registration);
string ozairAhmed(string fullname, string Registration);
string Azhar(string fullname, string Registration);
string samraSiddique(string fullname, string Registration);
string fizzahAhmed(string fullname, string Registration);
string osamaNaemm(string fullname, string Registration);
string Arhama(string fullname, string Registration);
string Nehal(string fullname, string Registration);
string Aiman(string fullname, string Registration);
string Rimsha(string fullname, string Registration);

// main program
int main()
{
	// declartion of variables 
	string Fname, Reg;
	int loop = 0;

	// main-loop
	while(loop == 0)
	{
		cout << " \n \n----------CIRCIS.INC----------- \n" << endl;
		cout << "-----------INSTRUCTIONS------------- \n";
		cout << "For Closing The Program Type 'close' \n";
		cout << "For Displaying All The Employeess Name And Reg Type 'data' \n";  
		cout << "Enter Your Full Name And Instead Of Space use '-' \nEg \n'1: Muhammad-Haris-Iqbal: Reg# 040'"<< endl;
		cout << "'2-Muzammil-Nisar Reg# 041'\n'3-Azhar-Mumtaz Reg# 044' \n";
		cout << "------------------------------------ \n \n";  
		cout << "Enter Your Full Name: ";
		cin >> Fname;
		cout << "Enter Your Registration Number: ";
		cin >> Reg;

		if (Fname == "Muhammad-Haris-Iqbal")
		{
			muhammadHaris(Fname, Reg);
			continue;
		}
		if (Fname == "Muzammil-Nisar")
		{
			muzammilNisar(Fname, Reg);
			continue;

		}
		if (Fname == "Huzaifa-Ali-Asif")
		{
			huzaifaAli(Fname, Reg);
			continue;
	
		}
		if (Fname == "Ozair-Ahmed")
		{
			ozairAhmed(Fname, Reg);
			continue;
			
		}
		if (Fname == "Azhar-Mumtaz")
		{
			Azhar(Fname, Reg);
			continue;
		
		}
		if (Fname == "Samra-Siqqique")
		{
			samraSiddique(Fname, Reg);
			continue;
			
		}
		if (Fname == "Fizzah-Ahmed")
		{
			fizzahAhmed(Fname, Reg);
			continue;
			
		}
		if (Fname == "Osama-Naeem")
		{
			osamaNaemm(Fname, Reg);
			continue;
			
		}
		if (Fname == "Arhama-Ansari")
		{
			Arhama(Fname, Reg);
			continue;
		}
		if (Fname == "Nehal-Ahmed")
		{
			Nehal(Fname, Reg);
			continue;
		}
		if (Fname == "Aiman-Khalid")
		{
			Aiman(Fname, Reg);
			continue;
		}
		if (Fname == "Rimsha-Naeem")
		{
			Rimsha(Fname, Reg);
			continue;
		}
		if (Fname == "close" || Fname == "Close" || Fname == "CLOSE")
		{
			cout << "PROGRAM HAS BEEN CLOSED BY USER. \n";
			loop = 1;
		}

		else
		{
			cout << "******NO DATA FOUND******" << endl;
			loop = 1;
		}

	}

	return 0;
	
}


// *************** EMPLOYEEES DATA********

// Good Performance Employeess Data 2020
string muhammadHaris(string fullname, string Registration)
{
	if (fullname == "Muhammad-Haris-Iqbal" && Registration == "040")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: 'Muhammad-Haris-Iqbal' \n";
		cout << "Registration: '040' \n";
		cout << "position: Manager 'M' \n";
		cout << "city: 'New-York' \n";
		cout << "Nationality: 'USA' \n";
		cout << "Basic Salary Per Month: '10,00,000' \n";

		cout << "Annual Bonus: '100,000' \n";
		cout << "Provident Fund 7%: '-70,000' \n";
		cout << "Medcial Allowance 5%: '-50,000' \n";
		cout << "House Allowance 10%: '-100,000' \n";
		cout << "Government Tax 10%: '-100,000' \n";
		cout << "Current Balance: '843,000' \n";
		cout << "Performance This Year: 'Good' \n";
		cout << "--------------------------------------------------- \n";

	}
}
string muzammilNisar(string fullname, string Registration)
{
	if (fullname == "Muzammil-Nisar" && Registration == "041")
	{
		cout << "\n \n------------\nEmployees Data\n------------\n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: Muzammil-Nisar \n";
		cout << "Registration: '041' \n";
		cout << "City: 'Loss Angles' \n";
		cout << "Nationality: 'USA' \n"; 
		cout << "Position: Team-Leader 'T' \n";
		cout << "Basic Salary Per Month: 500,000 \n";
		cout << "Annual Bonus: 50,000 \n";
		cout << "Provident Fund 6%: '-30,000' \n";
		cout << "Medical Allowance 5%: '-25,000' \n";
		cout << "House Allowance 6%: '-30,000' \n";
		cout << "Government Tax 7%: '-35,000' \n";
		cout << "Current Balance: '430,000' \n";
		cout << "Performance This Year: 'Good' \n";
		cout << "-------------------------------------------------- \n";

	}
}
string huzaifaAli(string fullname, string Registration)
{
	if (fullname == "Huzaifa-Ali-Asif" && Registration == "042")
	{
		cout << "\n \n------------\nEmployees Data\n------------\n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: Huzaifa-Ali-Asif \n";
		cout << "Registration: '042' \n";
		cout << "City: 'New Jersey' \n";
		cout << "Nationality: 'USA' \n";
		cout << "position: Senior 'S' \n";
		cout << "Basic Salary Per Month: 300,000 \n";
		cout << "Annual Bonus: 30,000 \n";
		cout << "Provident Fund 5%: '-15,000' \n";
		cout << "Medical Allowance 5%: '-15,000' \n";
		cout << "House Allowance 3%: '-9,000' \n";
		cout << "Government Tax 2%: '-6,000' \n";
		cout << "Current Balance: '285,000' \n";
		cout << "Performance This Year: 'Good' \n";
		cout << "-------------------------------------------------- \n";

	}
}
string ozairAhmed(string fullname, string Registration)
{
	if (fullname == "Ozair-Ahmed" && Registration == "043")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: Ozair-Ahmed \n";
		cout << "Registration: 043 \n";
		cout << "Position: Junior 'J' \n";
		cout << "City: 'Seattle' \n";
		cout << "Nationality: 'USA' \n";
		cout << "Basic Salary Per Month: 200,000 \n";
		cout << "Annual Bonus: 20,000 \n";
		cout << "Provident Fund 4%: '-8,000' \n";
		cout << "Medical Allowance 5%: '-10,000' \n";
		cout << "House Allowance 1%: '-2,000' \n";
		cout << "Government Tax 2%: '-4,000' \n";
		cout << "Current Balance: '196,000' \n";
		cout << "Performance This Year: 'Good' \n";
		cout << "-------------------------------------------------- \n";

	}
}

// Average performance employeesss data


string Azhar(string fullname, string Registration)
{
	if (fullname == "Azhar-Mumtaz" && Registration == "044")
	{
		cout << "\n \n------------\nEmployees Data\n------------\n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: 'Azhar-Mumtaz' \n";
		cout << "Registration: '044' \n";
		cout << "City: 'Boston' \n";
		cout << "Nationality: 'USA' \n";
		cout << "position: Manager 'M' \n";
		cout << "Basic Salary Per Month: '1,000,000' \n";
		cout << "Annual Bonus: '30,000' \n";
		cout << "Provident Fund 7%: '-70,000' \n";
		cout << "Medical Allowance 5%: '-50,000' \n";
		cout << "House Allowance 2%: '-20,000' \n";
		cout << "Government Tax 10%: '-100,000' \n";
		cout << "Current Balance: '790,000' \n";
		cout << "Performance This Year: 'Average' \n";
		cout << "--------------------------------------------------- \n";

	}
}
string samraSiddique(string fullname, string Registration)
{
	if (fullname == "Samra-Siqqique" && Registration == "045")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: Samra-Siqqique \n";
		cout << "Registration: '045' \n";
		cout << "City: 'Detroit' \n";
		cout << "Nationality: 'USA' \n";
		cout << "position: Team-Leader 'T' \n";
		cout << "Basic Salary Per Month: 500,000 \n";
		cout << "Annual Bonus: 15,000 \n";
		cout << "Provident Fund 6%: '-30,000' \n";
		cout << "Medical Allowance 5%: '-25,000' \n";
		cout << "House Allowance 8%: '-40,000' \n";
		cout << "Government Tax 7%: '-35,000' \n";
		cout << "Current Balance: '385,000' \n";
		cout << "Performance This Year: 'Average' \n";
		cout << "-------------------------------------------------- \n";

	}
}
string fizzahAhmed(string fullname, string Registration)
{
	if (fullname == "Fizzah-Ahmed" && Registration == "046")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: 'Fizzah-Ahmed' \n";
		cout << "Registration: '046' \n";
		cout << "City: 'Boston' \n";
		cout << "Nationality: 'USA' \n";
		cout << "position: Senior 'S' \n";
		cout << "Basic Salary Per Month: '300,000' \n";
		cout << "Annual Bonus: 7,000 \n";
		cout << "Provident Fund 5%: '-25,000' \n";
		cout << "Medical Allowance 5%: '-25,000' \n"; 
		cout << "House Allowance 1%: '-3,000' \n";
		cout << "Government Tax 2%: '-6,000' \n";
		cout << "Current Balance: '248,000' \n";
		cout << "Performance This Year: 'Average' \n";
		cout << "-------------------------------------------------- \n";

	}
}
string osamaNaemm(string fullname, string Registration)
{
	if (fullname == "Osama-Naeem" && Registration == "043")
	{
		cout << "\n \n------------\nEmployees Data\n------------\n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: Osama-Naeem \n";
		cout << "Registration: 043 \n";
		cout << "City: 'Washignton DC' \n";
		cout << "Nationality: 'USA' \n";
		cout << "Position: Junior 'J' \n";
		cout << "Basic Salary Per Month: 200,000 \n";
		cout << "Annual Bonus: 3,000 \n";
		cout << "Provident Fund 4%: '-8,000' \n";
		cout << "Medical Allowance 5%: '-10,000' \n";
		cout << "House Allowance 4%: '-8,000' \n";
		cout << "Government Tax 2%: '-4,000' \n";
		cout << "Total Salary This Month: 173,000 \n";
		cout << "Performance This Year: 'Average' \n";
		cout << "-------------------------------------------------- \n";

	}
}

// Bad Performance Employeese Data
string Arhama(string fullname, string Registration)
{
	if (fullname == "Arhama-Ansari" && Registration == "045")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: 'Arhama-Ansari' \n";
		cout << "Registration: '045' \n";
		cout << "City: 'Loss Angles' \n";
		cout << "Nationality: 'USA'";
		cout << "position: Manager 'M' \n";
		cout << "Basic Salary Per Month: '1,000,000' \n";
		cout << "Annual Bonus: '0' \n";
		cout << "Provident Fund 7%: '-70,000' \n";
		cout << "Medical Allowance 5%: '-50,000' \n";
		cout << "House Allowance 6%: '-60,000' \n";
		cout << "Government Tax 10%: '-100,000' \n";
		cout << "Current Balance: '-720,000' ";
		cout << "Performance This Year: 'Bad' \n";
		cout << "--------------------------------------------------- \n";

	}
}
string Nehal(string fullname, string Registration)
{
	if (fullname == "Nehal-Ahmed" && Registration == "046")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: 'Nehal-Ahmed' \n";
		cout << "Registration: '046' \n";
		cout << "City: 'Jersey' \n";
		cout << "Nationality: 'USA' \n";
		cout << "position: Team-Leader 'T' \n";
		cout << "Basic Salary Per Month: '500,000' \n";
		cout << "Annual Bonus: '0' \n";
		cout << "Provident Fund 6%: '-30,000' \n";
		cout << "Medical Allowance 5%: '-25,000' \n";
		cout << "House Allowance 3%: '-15,000' \n";
		cout << "Government Tax 7%: '-35,000' \n";
		cout << "Current Balance: '395,000' \n";
		cout << "Performance This Year: 'Bad' \n";
		cout << "-------------------------------------------------- \n";

	}
}
string Aiman(string fullname, string Registration)
{
	if (fullname == "Aiman-Khalid" && Registration == "047")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: 'Fizzah-Ahmed' \n";
		cout << "Registration: '047' ";
		cout << "City: 'New-York' \n";
		cout << "Nationality: 'USA' \n";
		cout << "position: Senior 'S' \n";
		cout << "Basic Salary Per Month: '300,000' \n";
		cout << "Annual Bonus: '0' \n";
		cout << "Provident Fund 5%: '-15,000' \n";
		cout << "Medical Allowance 5%: '-15,000' \n";
		cout << "House Allowance 10%: '-30,000' \n";
		cout << "Government Tax 2%: '-4,000' \n";
		cout << "Current Balance: '-236,000' \n";
		cout << "Performance This Year: 'Bad' \n";
		cout << "-------------------------------------------------- \n";

	}
}
string Rimsha(string fullname, string Registration)
{
	if (fullname == "Rimsha-Naeem" && Registration == "048")
	{
		cout << "\n \n------------\nEmployees Data\n------------ \n";
		cout << "-------------------------------------------------- \n";
		cout << "Name: Rimsha-Naeem \n";
		cout << "Registration: 048 \n";
		cout << "City: 'Detroit' \n";
		cout << "Nationality: 'USA' \n";
		cout << "Position: Junior 'J' \n";
		cout << "Basic Salary Per Month: 200,000 \n";
		cout << "Annual Bonus: '0' \n";
		cout << "Provident Fund 4%: '-8,000' \n";
		cout << "Medical Allowance 5%: '-10,000' \n";
		cout << "House Allowance 8%: '-16,000' \n";
		cout << "Government Tax 2%: '-4,000' \n";
		cout << "Current Balance: '162,000' \n";
		cout << "Performance This Year: 'Bad' \n";
		cout << "-------------------------------------------------- \n";

	}
}

