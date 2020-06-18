/*  Program Created BY 
Muhmmad Haris Iqbal
02-132192-040
BCE-2A
CP-LAB
OPEN HANDED
*/

#include <iostream>
#include <string>
using namespace std;

// Structure of Items
struct  item
{
	string Name;
	string type;
	int modelNumber;
	string price;

};

// Functions Prototypes
string menu();
int data(string choose);
int output(item input);

// main
int main()
{

	// Variables declarations
	item input[6];
	item as;
	int loop = 0;
	int select;
	string choose;

	// Main loop
	while (loop == 0)
	{
		menu();
		cin >> select;

		// For Searching In Database 
		if (select == 1)
		{
			cout << "Enter Your Item Type Name: ";
			cin >> choose;
			data(choose);
			continue;
		}

		// For Input UserEntries
		if (select == 2)
		{
			int b = 5;
			for (int i = 1; i < 6; i++)
			{
				cout << "-----------\nADD ITEM " << i << "-" << b-- << "\n-----------\n"; 
				cout << "Enter An Item Name: ";
				cin >> input[i].Name;
				cout << "Enter An Item Type: ";
				cin >> input[i].type;
				cout << "Enter An Item Model Number: ";
				cin >> input[i].modelNumber;
				cout << "Enter An Item Price: ";
				cin >> input[i].price;
			}
			continue;
		}

		// For UserEntries Output
		if (select == 3)
		{

			cout << "\n1-Display Item-1 \n";
			cout << "2-Display Item-2 \n";
			cout << "3-Display Item-3 \n";
			cout << "4-Display Item-4 \n";
			cout << "5-Display Item-5 \n";
			cout << "6-Display All \n";

			int Schoose;
			cin >> Schoose;
			if (Schoose == 1)
			{
				cout << "\n============\nItem-1\n============\n";
				output(input[1]);
				continue;
			}
			if (Schoose == 2)
			{
				cout << "\n============\nItem-2\n============\n";
				output(input[2]);
				continue;
			}
			if (Schoose == 3)
			{
				cout << "\n============\nItem-3\n============\n";
				output(input[3]);
				continue;
			}
			if (Schoose == 4)
			{
				cout << "\n============\nItem-4\n============\n";
				output(input[4]);
				continue;
			}
			if (Schoose == 5)
			{
				cout << "\n============\nItem-5\n============\n";
				output(input[5]);
				continue;
			}
			if (Schoose == 6)
			{
				cout << "\n============\nItem-1\n============\n";
				output(input[1]);
				cout << "\n============\nItem-2\n============\n";
				output(input[2]);
				cout << "\n============\nItem-3\n============\n";
				output(input[3]);
				cout << "\n============\nItem-4\n============\n";
				output(input[4]);
				cout << "\n============\nItem-5\n============\n";
				output(input[5]);
				continue;
			}
		}
		if (select == 4)
		{
			loop = 1;
			continue;
		}
		else
		{
			cout << "\n\n*******INVALID INPUT****** \n";
		}
	}
	
	return 0;

}



// Functions
// Menu
string menu()
{
	cout << "-----------\nCircis.inc\n-----------\n";
	cout << "======================= \n";
	cout << "1-Search Item \n";
	cout << "2-Add Item \n";
	cout << "3-Display Your Item \n";
	cout << "4-Close \n";
	cout << "======================= \n";


}


// Internal Data-Base
int data(string choose)
{

	// Mobile Phone
	item i, i2, i3, i4, i5, l1, l2, l3, l4, l5, c1, c2, c3, c4, c5;
	i.Name = "Name: Iphone 7 \n";
	i.type = "Type: Cell Phone \nModel Number: ";
	i.modelNumber = 7547;
	i.price = "\nPrice: 800$ \n";

	i2.Name = "Name: Iphone 8 \n";
	i2.type = "Type: Cell Phone \nModel Number: ";
	i2.modelNumber = 1394;
	i2.price = "\nPrice: 850$ \n";

	i3.Name = "Name: Iphone 9 \n";
	i3.type = "Type: Cell Phone \nModel Number: ";
	i3.modelNumber = 1384;
	i3.price = "\nPrice: 900$ \n";

	i4.Name = "Name: Iphone X \n";
	i4.type = "Type: Cell Phone \nModel Number: ";
	i4.modelNumber = 1041;
	i4.price = "\nPrice: 1000$ \n";

	i5.Name = "Name: Iphone 11 \n";
	i5.type = "Type: Cell Phone \nModel Number: ";
	i5.modelNumber = 2015;
	i5.price = "\nPrice: 1200$ \n";

	// Gaming-Laptop
	l1.Name = "Name: Dell G502 \n";
	l1.type = "Type: Gaming Laptop \nModel Number: ";
	l1.modelNumber = 1264;
	l1.price = "\nPrice: 1900$ \n";

	l2.Name = "Name: Dell Alien Ware \n";
	l2.type = "Type: Gaming Laptop \nModel Number: ";
	l2.modelNumber = 1512;
	l2.price = "\nPrice: 4950$ \n";

	l3.Name = "Name: Lenovo L340 \n";
	l3.type = "Type: Gaming Laptop \nModel Number: ";
	l3.modelNumber = 1252;
	l3.price = "\nPrice: 1900$ \n";

	l4.Name = "Name: Hp Omen 3  \n";
	l4.type = "Type: Gaming Laptop \nModel Number: ";
	l4.modelNumber = 1215;
	l4.price = "\nPrice: 1100$ \n";

	l5.Name = "Name: Hp Omen 4 \n";
	l5.type = "Type: Gaming Laptop \nModel Number: ";
	l5.modelNumber = 2324;
	l5.price = "\nPrice: 2500$ \n";

	// Gaming Console
	c1.Name = "Name: Dell G502 \n";
	c1.type = "Type: Gaming Laptop \nModel Number: ";
	c1.modelNumber = 1264;
	c1.price = "\nPrice: 1900$ \n";

	c2.Name = "Name: Dell Alien Ware \n";
	c2.type = "Type: Gaming Laptop \nModel Number: ";
	c2.modelNumber = 1512;
	c2.price = "\nPrice: 4950$ \n";

	c3.Name = "Name: Lenovo L340 \n";
	c3.type = "Type: Gaming Laptop \nModel Number: ";
	c3.modelNumber = 1252;
	c3.price = "\nPrice: 1900$ \n";

	c4.Name = "Name: Hp Omen 3  \n";
	c4.type = "Type: Gaming Laptop \nModel Number: ";
	c4.modelNumber = 1215;
	c4.price = "\nPrice: 1100$ \n";

	c5.Name = "Name: Hp Omen 4 \n";
	c5.type = "Type: Gaming Laptop \nModel Number: ";
	c5.modelNumber = 2324;
	c5.price = "\nPrice: 2500$ \n";

	// Selecting
	if (choose == "mobile" || choose == "MOBILE" || choose == "Mobile")
	{
		cout << "======================\n \n";
		cout << i.Name << i.type << i.modelNumber << i.price << endl;
		cout << i2.Name << i2.type << i2.modelNumber << i2.price << endl;
		cout << i3.Name << i3.type << i3.modelNumber << i3.price << endl;
		cout << i4.Name << i4.type << i4.modelNumber << i4.price << endl;
		cout << i5.Name << i5.type << i5.modelNumber << i5.price << endl;
		cout << "=======================\n";
	}
	if (choose == "laptop" || choose == "LAPTOP" || choose == "Laptop")
	{
		cout << "======================\n \n";
		cout << l1.Name << l1.type << l1.modelNumber << l1.price << endl;
		cout << l2.Name << l2.type << l2.modelNumber << l2.price << endl;
		cout << l3.Name << l3.type << l3.modelNumber << l3.price << endl;
		cout << l4.Name << l4.type << l4.modelNumber << l4.price << endl;
		cout << l5.Name << l5.type << l5.modelNumber << l5.price << endl;
		cout << "=======================\n";
	
	}
	if (choose == "console" || choose == "CONSOLE" || choose == "Console")
	{
		cout << "======================\n \n";
		cout << c1.Name << c1.type << c1.modelNumber << c1.price << endl;
		cout << c2.Name << c2.type << c2.modelNumber << c2.price << endl;
		cout << c3.Name << c3.type << c3.modelNumber << c3.price << endl;
		cout << c4.Name << c4.type << c4.modelNumber << c4.price << endl;
		cout << c5.Name << c5.type << c5.modelNumber << c5.price << endl;
		cout << "=======================\n";
	}

	return 0;

}

int output(item input)
{
	
		cout << "Name: " << input.Name << endl;
		cout << "Type: " << input.type << endl;
		cout << "Model Number: " << input.modelNumber << endl;
		cout << "Price: " << input.price << endl;
}