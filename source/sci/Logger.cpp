#include "Logger.hpp"

#include <iostream>

MenagerType::Enum Logger::get_type() const
{
    return MenagerType::Logger;
}

void Logger::log(const std::string& msg) const
{
    std::cout << msg << std::endl;
}
