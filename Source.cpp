// * Notes for developers:
// * 1. Use camelCase for variables and functions.
// * 2. Use UpperCase for structures.
// * 3. Use comments to explain the code.

#include <iostream>
#include <string>
#include "lib/struct.h"
#include "lib/menu_functions.h"
#include "lib/registeration.h"
#include "lib/edit_functions.h"
#include "lib/addtional_features.h"
#include "lib/read_functions.h"
#include "lib/get_functions.h"

using namespace std;



int main()
{
	fstream myfile("customers.txt", ios::in | ios::out | ios::app);
    if (!myfile.is_open()) {
        cout << "Error opening the file.\n";
        return 1;
    }
	int id = 1;


    read_product_from_file(product,numOfCategories,numOfProducts);
    read_customer_from_file(customers,numOfCustomers,myfile);

    cout << R"(

⠀⠀⠈⠛⠻⠶⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⢻⣆⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢻⡏⠉⠉⠉⠉⢹⡏⠉⠉⠉⠉⣿⠉⠉⠉⠉⠉⣹⠇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠈⣿⣀⣀⣀⣀⣸⣧⣀⣀⣀⣀⣿⣄⣀⣀⣀⣠⡿⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⢸⡇⠀⠀⠀⠀⣿⠁⠀⠀⠀⣿⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣧⣤⣤⣼⣧⣤⣤⣤⣤⣿⣤⣤⣤⣼⡏⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠀⠀⢸⡇⠀⠀⠀⠀⣿⠀⠀⢠⡿⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣷⠤⠼⠷⠤⠤⠤⠤⠿⠦⠤⠾⠃⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢾⣷⢶⣶⠶⠶⠶⠶⠶⠶⣶⠶⣶⡶⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣧⣠⡿⠀⠀⠀⠀⠀⠀⢷⣄⣼⠇⠀⠀⠀⠀⠀⠀⠀

Welcome to the Grocery Store Management System
███████╗██╗   ██╗██████╗ ███████╗██████╗     ███╗   ███╗ █████╗ ██████╗ ██╗  ██╗ ██████╗ 
██╔════╝██║   ██║██╔══██╗██╔════╝██╔══██╗    ████╗ ████║██╔══██╗██╔══██╗██║ ██╔╝██╔═══██╗   
███████╗██║   ██║██████╔╝█████╗  ██████╔╝    ██╔████╔██║███████║██████╔╝█████╔╝ ██║   ██║
╚════██║██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗    ██║╚██╔╝██║██╔══██║██╔══██╗██╔═██╗ ██║   ██║
███████║╚██████╔╝██║     ███████╗██║  ██║    ██║ ╚═╝ ██║██║  ██║██║  ██║██║  ██╗╚██████╔╝
╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝    ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ 
                                                                 made by: real developers                                         

            )"
         << endl;

    
    int flag=menu_logging_in(customers, numOfCustomers,myfile,id);

	char number;
	char choice;
	
	if (!flag)
	{
		return 0;
	}
	do{
		number = bigmenu();
	switch (number)
	{
	case '1':
		cout << "\nYou selected: Edit your information\n";
		cout << "###################################################################################################################\n";
		editUserInformation(getCustomerbyID(id,customers,numOfCustomers));
        break;
	case '2':
		cout << "\nYou selected: View product menu\n";
		cout << "###################################################################################################################\n";
		Categories(product,numOfCategories,numOfProducts);
		break;

	case '3':
		cout << "\nYou selected: Add goods\n";
		cout << "###################################################################################################################\n";

		break;
	case '4':
		cout << "\nYou selected: Review your order\n";
		cout << "###################################################################################################################\n";

		break;
	case '5':
		cout << "\nYou selected: Modify your order\n";
		cout << "###################################################################################################################\n";

		break;
	case '6':
		cout << "\nYou selected: View total price\n";
		cout << "###################################################################################################################\n";
		break;
	case '7':
		cout << "\nLogging out...\n";
		cout << "###################################################################################################################\n";
		flag = menu_logging_in(customers, numOfCustomers,myfile,id);
		if (!flag)
			return 0;
		
		choice ='y';
		continue;
	default:
		cout << "\nInvalid input, please enter a number between 1 and 7.\n";
		cout << "###################################################################################################################\n";
		choice = 'y';
		continue;

	}
	cout << "Do you want anoter operation?";

	cin >> choice;

    } while (choice=='y'||choice=='Y');

   
	myfile.close();
    return 0;
}
