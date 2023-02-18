#include "JsonObject.h"


void JsonObject::add(std::string const& key, JsonValue const& value)
{
    m_values[key] = value;
}

size_t JsonObject::size()
{
    return m_values.size();
}

std::ostream& JsonObject::operator<<(std::ostream& os)
{
    os << "{" << "\n";
    os << m_values.size() << "\n";
    os << "}" << "\n";
    return os;
}

void JsonObject::Baz()
{
    std::cout << "Sprite" << "\n";
}
