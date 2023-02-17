#pragma once
#include "JsonValue.h"
#include <string>

class JsonString : public JsonValue
{
public:
	JsonString(std::string const& str);

	std::string asString() const override;

private:
	std::string m_value;
};

