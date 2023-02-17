#pragma once
#include <ostream>
#include <iostream>

class JsonValue
{
public:
	JsonValue();

public:
	virtual std::string asString() const;
};

