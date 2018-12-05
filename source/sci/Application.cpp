#include "Application.hpp"

#include <sci/Logger.hpp>

Application* Application::m_instance = nullptr;

Application* Application::create_instance()
{
    if (nullptr == m_instance) {
        m_instance = new Application();
        static_cast<Logger&>(*m_instance->m_managers[MenagerType::Logger]).log("Application::create_instance");
    }

    return m_instance;
}

Application::Application()
{
    m_managers[MenagerType::Logger] = new Logger();

    for (auto manager : m_managers) {
        manager->initialize();
    }
}

Application::~Application()
{
    for (auto manager : m_managers) {
        manager->terminate();
        delete manager;
    }
}
