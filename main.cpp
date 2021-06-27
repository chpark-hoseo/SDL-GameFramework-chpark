#include "Game.h"

int main(int argc, char* argv[])
{
  if (TheGame::Instance()->init("Game Class", 
               100, 100, 640, 480, false)) 
  {
      while (TheGame::Instance()->running()) {
     	TheGame::Instance()->handleEvents();
      	TheGame::Instance()->update();
      	TheGame::Instance()->render();
      	SDL_Delay(10);
      }
  }  else {
      printf("game init failure %s\n" , SDL_GetError());
      return -1;
  }
  TheGame::Instance()->clean();
  return 0;
}