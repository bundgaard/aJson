#pragma once
#include "JsonValue.h"
#include <vector>
#include <initializer_list>

class JsonArray : public JsonValue
{
public: 
	JsonArray() = default;
	void add(JsonValue const& value);
	void add(std::initializer_list<JsonValue> items);
	size_t size();

private:
	std::vector<JsonValue> m_items;
};

