#include "JsonValue.h"

JsonValue::JsonValue()
{

}

[[noreturn]] std::string JsonValue::asString() const
{
	throw std::runtime_error{ "not implemented" };
}

