#pragma once
#include <string>

class Token
{

public:
	enum class Type {
		EOf,
		Error,
		OpenParen,
		CloseParen,
		OpenBracket,
		CloseBracket,
		OpenCurly,
		CloseCurly,
		Integer,
		Float,
		String,
		Comma,
		Colon
	};
	Token() = default;
	explicit Token(Type type, std::string const& value);
	// Copy
	Token(Token const&) = default;
	Token& operator=(Token const&) = delete;
	// Move
	Token(Token&&) = default;
	Token& operator=(Token&&) = default;

	Type GetType() const;
	std::string GetValue() const;

private:
	std::string m_value;
	Type m_type;

};

