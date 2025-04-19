#ifndef GUI_FACTORY_H
#define GUI_FACTORY_H

#include <memory>
#include <string>

class Window {
public:
    virtual ~Window() = default;
    virtual std::string render() = 0;
};

class Scrollbar {
public:
    virtual ~Scrollbar() = default;
    virtual std::string render() = 0;
};

class GUIFactory {
public:
    virtual ~GUIFactory() = default;
    virtual std::unique_ptr<Window> createWindow() = 0;
    virtual std::unique_ptr<Scrollbar> createScrollbar() = 0;
};

class WindowsWindow : public Window {
public:
    std::string render() override;
};

class WindowsScrollbar : public Scrollbar {
public:
    std::string render() override;
};

class LinuxWindow : public Window {
public:
    std::string render() override;
};

class LinuxScrollbar : public Scrollbar {
public:
    std::string render() override;
};

class WindowsFactory : public GUIFactory {
public:
    std::unique_ptr<Window> createWindow() override;
    std::unique_ptr<Scrollbar> createScrollbar() override;
};

class LinuxFactory : public GUIFactory {
public:
    std::unique_ptr<Window> createWindow() override;
    std::unique_ptr<Scrollbar> createScrollbar() override;
};

#endif // GUI_FACTORY_H
