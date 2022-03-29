#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "CV.h"
#include "Account.h"
#include "LinkedList.h"


int main()
{
	unsigned int id = 235253;
	Data::List list;
	Data::Account account1("Trinc", "Ianis", id, "ianis.trinc");
	Data::Account account2("Trinc", "Gimi", 5325, "gimil.trinc");
	list.Add(account1);
	list.Add(account2);

	//std::cout << account.lastName << " " << account.firstName;
	std::cout << list.first->lastName << " " << list.first->firstName << "\n";
	std::cout << list.last->lastName << " " << list.last->firstName;
	std::cin.get();
}