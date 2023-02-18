#pragma once
#include <string>


class IJsonObject
{

public:
	virtual void Baz() = 0;
	/*virtual std::optional<IJsonObject> GetNamedObject() = 0;
	virtual std::optional<IJsonArray> GetNamedArray() = 0;
	virtual std::optional<bool> GetNamedBool() = 0;
	virtual std::optional<float> GetNamedNumber() = 0;
	virtual std::optional<std::string> GetNamedString() = 0;*/
};

