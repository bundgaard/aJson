#pragma once
#include <map>
#include <ostream>
#include "IJsonObject.h"
#include "JsonValue.h"


class JsonObject : public IJsonObject
{

public:

	JsonObject() = default;
	void add(std::string const& key, JsonValue const& value);
	size_t size();
	std::ostream& operator<<(std::ostream& os); // TODO::: Need to decide how I want this, but for now less important we should finish the reader part

	// virtual void Baz() = 0;
	virtual void Baz() override;
private:
	std::map<std::string, JsonValue> m_values;
};

