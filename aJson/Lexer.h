#pragma once
#include <string>
#include <cstddef>

#include "Token.h"

class Lexer
{
	std::string m_jsonString;
	size_t m_pos;
	char m_last;
	bool m_peeking;
	char m_peek;


public:
	Lexer(std::string const& jsonString);

	Token NextToken();

private:
	void skipWhitespace();
	char readChar();

};

