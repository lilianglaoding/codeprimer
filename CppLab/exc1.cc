#include <iostream>
#include <stdexcept>
#include <exception>
#include <new>
#include <cassert>

//#define NDEBUG  //define NDEBUG in compile option
//CC -DNDEBUG 

using namespace std;

int main()
{
  /*#ifndef NDEBUG
  cerr << "*starting main*" << endl;
  cerr << "Error: " << __FILE__
       << " : line " << __LINE__ << endl
       << "     compiled on " << __DATE__
       << " at " << __TIME__ << endl;
  #endif
  try {
    throw runtime_error("Data must refer to the same ISBN!");
  } catch (runtime_error error) {
    cout << error.what() << endl;
  }
  return 0;*/
  try 
  {
    throw runtime_error("this is a test");
  }
  catch (runtime_error err)
  {
    cout << err.what() << endl;
  }
}
