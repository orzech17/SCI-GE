#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <sci/Enums.hpp>

class Manager
{
public:
    virtual ~Manager() = default;
    virtual MenagerType::Enum get_type() const = 0;

    void initialize();
    void terminate();

protected:
    Manager() = default;
    Manager(Manager&&) = delete;
    Manager(const Manager&) = delete;
    Manager& operator=(Manager&&) = delete;
    Manager& operator=(const Manager&) = delete;

    virtual void on_initialize();
    virtual void on_terminate();

private:
};

#endif // MANAGER_HPP
