#include "JsonString.h"

JsonString::JsonString(std::string const& str) : m_value(str)
{
}

std::string JsonString::asString() const
{
	return m_value;
}
