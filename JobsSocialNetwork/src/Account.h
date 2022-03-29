#pragma once
#include <string>

using String = std::string;
namespace Data {
	class Account
	{
	public:
		String lastName, firstName;
		Account* next;
		Account* prev;
	private:
		unsigned int m_ID;
		String m_Password;

	public:
		const unsigned int& GetID();
		Account(const String&, const String&, const unsigned int&, const String&);
		Account(const Account&);
		~Account();
	};
}