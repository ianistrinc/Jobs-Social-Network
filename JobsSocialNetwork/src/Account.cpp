#include "Account.h"

using String = std::string;

namespace Data {
	Account::Account(const String& lastName, const String& firstName, const unsigned int& id, const String& password)
		: lastName(lastName), firstName(firstName), m_ID(id), m_Password(password), next(nullptr), prev(nullptr)
	{}

	Account::Account(const Account& other)
		: lastName(other.lastName), firstName(other.firstName), m_ID(other.m_ID), m_Password(other.m_Password)
	{}

	Account::~Account() {}

	const unsigned int& Account::GetID() { return m_ID; }
}