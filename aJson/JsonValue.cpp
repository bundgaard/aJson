#include "JsonValue.h"

JsonValue::JsonValue(std::string const& in_value) : m_variants{ in_value }
{
}

JsonValue::JsonValue(float in_value) : m_variants{ in_value }
{
}

JsonValue::JsonValue(bool in_value) : m_variants{ in_value }
{
}

JsonValue::JsonValue(std::shared_ptr<IJsonArray> in_value) : m_variants{ in_value }
{
}

JsonValue::JsonValue(std::shared_ptr<IJsonObject> in_value) : m_variants{ in_value }
{
}

std::optional<bool> JsonValue::asBool()
{
	try
	{
		return std::get<bool>(m_variants);
	}
	catch (...)
	{
		return std::nullopt;
	}
}

std::optional<std::string >JsonValue::asString()
{
	try
	{
		return std::get<std::string>(m_variants);
	}
	catch (...)
	{
		return std::nullopt;
	}
}

std::optional<float > JsonValue::asNumber()
{
	try
	{
		return std::get<float>(m_variants);
	}
	catch (...)
	{
		return std::nullopt;
	}

}

std::optional<std::shared_ptr<IJsonArray>> JsonValue::asArray()
{
	try {
		return std::get<std::shared_ptr<IJsonArray>>(m_variants);
	}
	catch (...)
	{
		return std::nullopt;
	}
}

std::optional<std::shared_ptr<IJsonObject>> JsonValue::asObject()
{
	try {
		return std::get<std::shared_ptr<IJsonObject>>(m_variants);
	}
	catch (...)
	{
		return std::nullopt;
	}
}
