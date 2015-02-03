#include "include/RSFile.h"

int main()
{
  RSFile writer("test.txt", "rw");

  printf("write to file\r\n");
  writer.Write("dit is een test");
  writer.Write('\r');
  writer.Write('\n');
  writer.Write('a');

  printf("read from file\r\n");
  // printf("%s",writer.ReadLine());
  writer.ReadLine();
  
  
  
  
  return 0;
  
}
