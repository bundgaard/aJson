#include "Lexer.h"
#include <cstddef>
Lexer::Lexer(std::string const& jsonString) : m_jsonString(jsonString), m_pos(0), m_last(0), m_peeking(false), m_peek(0)
{
}

Token Lexer::NextToken()
{
	char r = readChar();
	skipWhitespace();
	if (r == 0)
	{
		return {};
	}
}

void Lexer::skipWhitespace()
{
}

char Lexer::readChar()
{
	return 0;
}
