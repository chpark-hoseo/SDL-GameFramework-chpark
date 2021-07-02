#include "PlayState.h"
const std::string PlayState::s_playID = "PLAY";
void PlayState::update()
{
  printf( "update\n");
    // nothing for now
}
void PlayState::render()
{
    printf( "render\n");

    // nothing for now
}
bool PlayState::onEnter()
{
    printf( "entering PlayState\n");
    return true;
}
bool PlayState::onExit()
{
    printf("exiting PlayState\n");
    return true;
}