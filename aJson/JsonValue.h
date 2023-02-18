#pragma once
#include <ostream>
#include <iostream>
#include <variant>
#include <string>
#include <optional>


#include "IJsonObject.h"
#include "IJsonArray.h"


class JsonValue
{
	std::variant<std::string, float, bool, std::shared_ptr<IJsonArray>, std::shared_ptr<IJsonObject> > m_variants;

public:
	JsonValue() = default;
	explicit JsonValue(std::string const& in_value);
	explicit JsonValue(float in_value);
	explicit JsonValue(bool in_value);
	explicit JsonValue(std::shared_ptr<IJsonArray> in_value);
	explicit JsonValue(std::shared_ptr<IJsonObject> in_value);

	std::optional<bool> asBool();
	std::optional<std::string> asString();
	std::optional<float> asNumber();
	std::optional<std::shared_ptr<IJsonArray>> asArray();
	std::optional<std::shared_ptr<IJsonObject>> asObject();
};

