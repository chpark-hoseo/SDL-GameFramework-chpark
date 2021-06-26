clang++  -g -std=c++17  -o a.out  *.cpp -I/home/runner/.apt/usr/include/SDL2  -lX11 -lSDL2 -lSDL2main -lSDL2_image -lpng -ljpeg -ltiff -lwebp
chmod 744 ./a.out
./a.out