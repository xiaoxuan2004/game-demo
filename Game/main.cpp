#include "Game.h"
#include <QtWidgets/QApplication>
//#include <Windows.h>
//#include <mmsystem.h>
//#pragma comment (lib, "winmm.lib")
int main(int argc, char *argv[])
{
   
  /* PlaySound(TEXT("C:\\Users\\x'x'xxx\\Documents\\GitHub\\xx\\Cpp\\go.wav"),NULL, SND_ASYNC);*/
    
    QApplication a(argc, argv);
    Game w;
    w.show();
    return a.exec();
}
