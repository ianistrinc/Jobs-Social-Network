#pragma once
#include <string>
#include "Account.h"

namespace Data {
	class List
	{
	public:
		Account* first;
		Account* last;
		unsigned int m_Size;

	public:
		List();
		~List();
		void Add(const Account&);
		void Remove(const unsigned int&);
	};
}