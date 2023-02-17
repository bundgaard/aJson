#include "Token.h"


Token::Token(Token::Type type, std::string const& value) : m_type(type), m_value(value)
{
}

Token::Type Token::GetType() const
{
	return m_type;
}

std::string Token::GetValue() const
{
	return m_value;
}
