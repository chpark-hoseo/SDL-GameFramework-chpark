#include "MenuState.h"

const std::string MenuState::s_menuID = "MENU";

void MenuState::update()
{
}

void MenuState::render()
{
}

bool MenuState::onEnter()
{
    printf("entering MenuState\n");
    return true;
}

bool MenuState::onExit()
{
    printf("exiting MenuState\n");
    return true;
}