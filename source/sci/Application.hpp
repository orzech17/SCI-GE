#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <array>
#include <sci/Manager.hpp>

class Application final
{
public:
    static Application* create_instance();
    static Application* get_instance() { return m_instance; }

protected:
    Application();
    ~Application();

private:
    static Application* m_instance;
    std::array<Manager*, MenagerType::__MAX> m_managers;
};

#endif
