#pragma once
#include <map>
#include <ostream>

#include "JsonValue.h"
class JsonValue;

class JsonObject : public JsonValue
{

public:
	
	JsonObject() = default;
	void add(JsonValue const& key, JsonValue const& value);
	size_t size();
	std::ostream& operator<<(std::ostream& os); // TODO::: Need to decide how I want this, but for now less important we should finish the reader part

private:
	std::map<std::string, JsonValue> m_values;
};

