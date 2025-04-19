#include "gui_factory.h"
#include <gtest/gtest.h>

TEST(AbstractFactoryTest, WindowsProducts) {
    WindowsFactory factory;
    auto win   = factory.createWindow();
    auto sb    = factory.createScrollbar();

    EXPECT_EQ(win->render(), "Rendering Windows window");
    EXPECT_EQ(sb->render(),  "Rendering Windows scrollbar");
}

TEST(AbstractFactoryTest, LinuxProducts) {
    LinuxFactory factory;
    auto win   = factory.createWindow();
    auto sb    = factory.createScrollbar();

    EXPECT_EQ(win->render(), "Rendering Linux window");
    EXPECT_EQ(sb->render(),  "Rendering Linux scrollbar");
}
