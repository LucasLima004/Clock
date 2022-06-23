#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
  
while (true)
{
  time_t timer;
  struct tm *horarioLocal;

  time(&timer); 
  horarioLocal = localtime(&timer); 

  
  int hora = horarioLocal->tm_hour;
  int min  = horarioLocal->tm_min;
  int sec  = horarioLocal->tm_sec;
  cout << "Horário: \n";
  cout << "Hora(s) " << hora << "\n";
  cout << "Minuto(s): " << min << "\n";
  cout << "Segundo(s): "<< sec <<"\n";
  system("cls");
}

}
