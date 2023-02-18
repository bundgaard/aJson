#pragma once
#include "JsonValue.h"
#include <vector>
#include <initializer_list>
#include "IJsonArray.h"

class JsonArray : public IJsonArray
{
public:
	JsonArray() = default;
	void add(JsonValue const& value);
	void add(std::initializer_list<JsonValue> items);
	size_t size();

	JsonValue operator[](int i);

	virtual void Foo() override;

private:
	std::vector<JsonValue> m_items;
};

