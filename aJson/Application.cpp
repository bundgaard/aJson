#include "Token.h"
#include "Lexer.h"
#include "Json.h"

#include <iostream>
#include <vector>

using namespace std;
using TokenType = Token::Type;
int main()
{
	vector<Token> tokens{
		Token{TokenType::OpenCurly, "{"},
		Token{TokenType::String, "key"},
		Token{TokenType::Colon, ":"},
		Token{TokenType::Integer, "100"},
		Token{TokenType::CloseCurly, "}" }
	};

	for (Token const& token : tokens)
	{

		cout << token.GetValue().c_str() << "\n";
	}

	JsonObject obj{};
	obj.add(JsonString{ "key1" }, JsonString{ "foo" });
	obj.add(JsonString{ "key2" }, JsonString{ "foo" });
	obj << cout;

	JsonArray arr{};
	arr.add(JsonString{ "foo" }, JsonString{ "bar" }, JsonString{ "baz" });

	arr.add()
}