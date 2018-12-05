#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <sci/Manager.hpp>

class Logger final
    : public Manager
{
public:
    Logger() = default;
    virtual ~Logger() = default;

    virtual MenagerType::Enum get_type() const;

    void log(const std::string& msg) const;

protected:
private:
};

#endif // !LOGGER_HPP
