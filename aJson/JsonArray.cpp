#include "JsonArray.h"

void JsonArray::add(JsonValue const& value)
{
	m_items.push_back(value);
}

void JsonArray::add(std::initializer_list<JsonValue> items)
{
	for (auto& item : items)
	{
		m_items.push_back(item);
	}
}

size_t JsonArray::size()
{
	return m_items.size();
}

JsonValue JsonArray::operator[](int i)
{
	return m_items[i];
}

void JsonArray::Foo()
{
	std::cout << "Coca Cola\n";
}
