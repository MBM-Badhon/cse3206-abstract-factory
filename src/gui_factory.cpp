#include "gui_factory.h"
#include <memory>

std::string WindowsWindow::render() {
    return "Rendering Windows window";
}

std::string WindowsScrollbar::render() {
    return "Rendering Windows scrollbar";
}

std::string LinuxWindow::render() {
    return "Rendering Linux window";
}

std::string LinuxScrollbar::render() {
    return "Rendering Linux scrollbar";
}

std::unique_ptr<Window> WindowsFactory::createWindow() {
    return std::make_unique<WindowsWindow>();
}

std::unique_ptr<Scrollbar> WindowsFactory::createScrollbar() {
    return std::make_unique<WindowsScrollbar>();
}

std::unique_ptr<Window> LinuxFactory::createWindow() {
    return std::make_unique<LinuxWindow>();
}

std::unique_ptr<Scrollbar> LinuxFactory::createScrollbar() {
    return std::make_unique<LinuxScrollbar>();
}
