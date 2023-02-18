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
	obj.add("key1", JsonValue{ std::string{ "foo" } });
	obj.add("key2", JsonValue{ std::string{"foo"} });
	obj << cout;
	JsonArray arr1{};

	JsonArray arr{};
	arr.add({
		JsonValue{ std::string{"foo"} },
		JsonValue{ 2.0f },
		JsonValue{ true},
		JsonValue{ std::make_shared<JsonObject>(obj) },
		JsonValue{ std::make_shared<JsonArray>(arr1) },
		}); // TODO implement iterator for our JsonValue container
	std::cout << "Array size " << arr.size() << "\n";
	if (arr[0].asBool().has_value())
	{
		std::cout << "arr[0] has bool" << "\n";
	}

	if (arr[0].asNumber().has_value())
	{
		std::cout << "arr[0] has number" << "\n";
	}

	if (arr[0].asString().has_value())
	{
		std::cout << "arr[0] has string" << "\n";
		std::cout << arr[0].asString().value().c_str() << "\n"; // TODO: override () operator to simplify this
	}


	if (arr[2].asObject().has_value())
	{
		std::cout << "arr[2] has object\n";
		arr[2].asObject().value().get()->Baz();
	}

	if (arr[3].asArray().has_value())
	{
		std::cout << "arr[3] has array\n";
		arr[3].asArray().value().get()->Foo();
	}

}