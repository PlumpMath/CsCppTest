#include <iostream>

#if defined (_WIN32) 
  #if defined(anvil_EXPORTS)
    #define  ANVIL_EXPORT __declspec(dllexport)
  #else
    #define  ANVIL_EXPORT __declspec(dllimport)
  #endif /* MyLibrary_EXPORTS */
#else /* defined (_WIN32) */
 #define ANVIL_EXPORT
#endif

extern "C"
{
void ANVIL_EXPORT Initialize()
{
    std::cout << "test" << std::endl;
}
}