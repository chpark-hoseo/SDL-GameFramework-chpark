#include "Game.h"
Game* g_game=0;

int main(int argc, char* args[])
{
  g_game=new Game();
  g_game->Init("Game Class",100,100,640,480,0);
  while(g_game->Running())
  {
    g_game->HandleEvents();
    g_game->Update();
    g_game->Render();
  }
  g_game->Clean();
  return 0;
}




//SDL_WINDOWPOS_CENTERED