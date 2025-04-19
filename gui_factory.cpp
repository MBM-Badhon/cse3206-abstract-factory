#include "gui_factory.h"

// Windows implementations
std::string WindowsWindow::render() {
    return "Rendering Windows window";
}

std::string WindowsScrollbar::render() {
    return "Rendering Windows scrollbar";
}

// Linux implementations
std::string LinuxWindow::render() {
    return "Rendering Linux window";
}

std::string LinuxScrollbar::render() {
    return "Rendering Linux scrollbar";
}


}
