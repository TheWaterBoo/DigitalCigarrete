#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>

using namespace std;

int main( int argc, char *argv[] ){
  int a = 1964;
  
  if( argc > 1 && string ( argv[1] ) == "n" ){
    cout<<"Hola "<<a<<endl;
  } else {
    cout<<"Hola sin argumentos "<<endl;
  }

  return 0;
}
