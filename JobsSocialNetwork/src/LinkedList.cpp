#include "LinkedList.h"

namespace Data {
	List::List() : first(nullptr), last(nullptr), m_Size(0) {}
	List::~List()
	{
		while (first->next != nullptr)
		{
			Account* del = first;
			first = first->next;
			del->~Account();
		}
	}

	void List::Add(const Account& newAccount)
	{
		Account* newAcc = new Account(newAccount);
		if (m_Size == 0)
		{
			first = newAcc;
			last = newAcc;
			++m_Size;
		}
		else
		{
			newAcc->prev = last;
			last->next = newAcc;
			last = newAcc;
			++m_Size;
		}
	}

	void List::Remove(const unsigned int& id)
	{
		if (this->m_Size == 0)
			return;
		else if (this->m_Size == 1 && this->first->GetID() == id)
		{
			Account* delAccount = this->first;
			this->first = nullptr;
			delete delAccount;
		}
		else
		{
			Account* currentAccount;
			for (currentAccount = first; currentAccount->next->GetID() != id || currentAccount->next != NULL; currentAccount = currentAccount->next);

			if (currentAccount->GetID() == id)
			{
				Account* delAccount = currentAccount->next;
				currentAccount->next = currentAccount->next->next;
				delete delAccount;
			}
		}
	}

}