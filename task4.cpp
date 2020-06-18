/*
PROGRAM CREATED BY 
MUHAMMAD-HARIS-IQBAL
02-192132-040
BCE-2A
CP-LAB
OPEN HANDED LAB
*/

#include <iostream>
using namespace std;

// Structure Of Customer
struct  customerDetail
{
	string fullName;
	string equipmentName; 
	int timeperiod;
	int equipmentQuantity;
	int quantityYear;
	string customerType;
	string companyName;
	string companyPnumber;
	string companyFnumber; 
	string companyaddress;

	
};

// Prototypes
int menu();
int equiment1(customerDetail cd);
int equiment2(customerDetail cd);
int equiment3(customerDetail cd);
int equiment4(customerDetail cd);
int equiment5(customerDetail cd);
int allEquipments();

int main()
{
	customerDetail cd;
	int Cost, RefDeposit;
	string customer, Discount, timeperiod, wayofbuy;
	int loop = 0;
	float totalcost, totalcost2;

	while (loop == 0)
	{
		menu();
		int select; 
		cin >> select;
		if (select == 1)
		{
			allEquipments();
			continue;
		}
		if (select == 2)
		{
			cout << "Enter Your Name: ";
			cin >> cd.fullName;
			cout << "Equipment Name: ";
			cin >> cd.equipmentName;
			if (equiment1(cd))
			{
				Cost = 2000;
				RefDeposit = 100;
				wayofbuy = "On-line \n";
				
			}
			if (equiment2(cd))
			{
				Cost = 1500;
				RefDeposit = 200;
				wayofbuy = "In-Person \n";
				
			}
			if (equiment3(cd))
			{
				Cost = 200;
				RefDeposit = 100;
				wayofbuy = "In-Person \n";
				
			}
			if (equiment4(cd))
			{
				Cost = 999;
				RefDeposit = 300;
				wayofbuy = "On-line \n";
				
			}
			if (equiment5(cd))
			{
				Cost = 300;
				RefDeposit = 100;
				wayofbuy = "In-Person \n";

			}
			else 
			{
				cout << "**** ITEM Not Found \n";
			}
			cout << "Equiment Time Period In Weeks: ";
			cin >> cd.timeperiod;
			if (cd.timeperiod < 8)
			{
				
			}
			else if (cd.timeperiod < 1 || cd.timeperiod > 8)
			{
				cout << "Time Range in 1-8 Weeks \n";
				cout << "Equiment Time Period In Weeks: ";
				cin >> cd.timeperiod;

			}
			cout << "Quantity Of Equipment: ";
			cin >> cd.equipmentQuantity;
			cout << "How Much Equipemts You Bought This Year: ";
			cin >> cd.quantityYear;
			if (cd.quantityYear >= 5)
			{
				Discount = "Discount Applied \n";
				float sum = (Cost + RefDeposit) * cd.equipmentQuantity;
				float sum2 = RefDeposit * cd.equipmentQuantity;
				float result2 = (sum2/100) * 5;
	 			float result = (sum/100) * 5;
				totalcost = sum - result;
				totalcost2 = sum2 - result2;


			}
			else if (cd.quantityYear < 5)
			{
				totalcost = (Cost + RefDeposit) * cd.equipmentQuantity;
				totalcost2 = RefDeposit;
				Discount = "NO Discount \n";
			
			}
			
			cout << "Are You Private Customer? y/n: ";
			cin >> cd.customerType;
			if (cd.customerType == "n")
			{
				cout << "Enter Your Company Name: ";
				cin >> cd.companyName;
				cout << "Enter Your Company Phone Number: ";
				cin >> cd.companyPnumber;
				cout << "Enter Your Company Fax Number: ";
				cin >> cd.companyFnumber;
				cout << "Enter Your Company Address: ";
				cin >> cd.companyaddress;

	
				customer = "Trade-Customer \n";
				cout << "\n \n================================\nDATA\n================================ \n";
				cout << customer << endl;
				cout << "Your Name: " << cd.fullName << endl;
				cout << "Company Name: " << cd.companyName << endl;
				cout << "Company Phone Number: " << cd.companyPnumber << endl;
				cout << "Company Fax Number: " << cd.companyFnumber << endl;
				cout << "Company Address: " << cd.companyaddress << endl; 
				cout << "Equipemt Name: " << cd.equipmentName << endl;
				cout << "Equipemt Time Period: " << "weeks-" << cd.timeperiod << endl;
				cout << "Quantity Of Equipment: " << cd.equipmentQuantity << endl;
				cout << "Equipemts Bought This Year: " << cd.quantityYear << endl;
				cout << "Before Discount: " << RefDeposit << endl;
				cout << "After Discount: " << totalcost2 << endl;
				cout << "Total = " << RefDeposit << endl;
				cout << Discount;
				cout << "Buy Method: " << wayofbuy;
				cout << "================================ \n";
				continue;

			}
			else if (cd.customerType == "y")
			{
				customer = "Private-Customer \n";
				cout << "\n \n================================\nDATA\n================================ \n";
				cout << customer << endl;
				cout << "Your Name: " << cd.fullName << endl;
				cout << "Equipemt Name: " << cd.equipmentName << endl;
				cout << "Equipemt Time Period: " << "weeks-" << cd.timeperiod << endl;
				cout << "Quantity Of Equipment: " << cd.equipmentQuantity << endl;
				cout << "Equipemts Bought This Year: " << cd.quantityYear << endl;
				cout << customer;  
				cout << "Total Cost = " << Cost << endl;
				cout << "Total RefDeposit = " << RefDeposit << endl;
				cout << "Before Discount Total = " << (Cost + RefDeposit) * cd.equipmentQuantity << endl;
				cout << "After Discount = " << totalcost << endl;
				cout << Discount;
				cout << "Buy Method: " << wayofbuy;
				cout << "================================ \n";
				continue;
		 	}	
	 	}
	 	if (select == 3)
	 	{
	 		cout << "****PROGRAM HAS BEEN CLOSED BY USER****** \n";
	 		loop = 1;
	 	}
	 	else
	 	{
	 		cout << "\n \n *****Invalid Input******* \n \n";

	 	}	
	}



}

int menu ()
{
	cout << "\n \n=========================\nINSTRUCTIONS\n=========================\n";
	cout << "1-Show All Available Equipments \n";
	cout << "2-Buy Item \n";
	cout << "3-close The program \n";
	cout << "========================= \n";
}
int equiment1(customerDetail cd)
{
	if (cd.equipmentName == "rages")
	{
		cout << "****ITEM FOUND**** \n";
	}
	if (cd.equipmentName == "mini-diggers")
	{
		cout << "****ITEM FOUND**** \n";
	}
}

int equiment2(customerDetail cd)
{
	if (cd.equipmentName == "outdoor-planters")
	{
		cout << "****ITEM FOUND**** \n";
	}
	if (cd.equipmentName == "ride-on")
	{
		cout << "****ITEM FOUND**** \n";
	}
	
}


int equiment3(customerDetail cd)
{
	if (cd.equipmentName == "lawnmowers")
	{
		cout << "****ITEM FOUND**** \n";
	}
	if (cd.equipmentName == "strimmers")
	{
		cout << "****ITEM FOUND**** \n";
	}
}
int equiment4(customerDetail cd)
{
	if (cd.equipmentName == "blowers")
	{
		cout << "****ITEM FOUND**** \n";
	}
	if (cd.equipmentName == "pressure-washer")
	{
		cout << "****ITEM FOUND**** \n";
	}
}

int equiment5(customerDetail cd)
{
	if (cd.equipmentName == "hammer")
	{
		cout << "****ITEM FOUND**** \n";
	}
	if (cd.equipmentName == "yager")
	{
		cout << "****ITEM FOUND**** \n";
	}
}

int allEquipments()
{
	cout << "\n \n===============\nDATA\n===============\n";
	cout << "1.rages" << endl;
	cout << "2.Mini-diggers" << endl;
	cout << "3.outdoor-planters" << endl;
	cout << "4.lawnmowers" << endl;
	cout << "5.strimmers" << endl;
	cout << "6.blowers" << endl;
	cout << "7.pressure-washer" << endl;
	cout << "8.hammer" << endl;
	cout << "9.yager" << endl;
	cout << "10.ride-on" << endl;
	cout << "=============== \n \n" << endl;
}
