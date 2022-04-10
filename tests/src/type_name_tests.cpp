#include <gtest/gtest.h>

#include "type_name/type_name.h"

using namespace std::string_view_literals;

TEST(TypeNameTests, intTypeName)
{
    constexpr auto kTypeSV = type_name::type_name<int>();
    static_assert(kTypeSV == "int"sv, "Invalid kTypeSV.");
}

TEST(TypeNameTests, floatTypeName)
{
    constexpr auto kTypeSV = type_name::type_name<float>();
    static_assert(kTypeSV == "float"sv, "Invalid kTypeSV.");
}
