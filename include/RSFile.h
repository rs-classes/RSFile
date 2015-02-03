#ifndef RSFILE_H_
#define RSFILE_H_

#include <stdio.h>
#include <stdlib.h>

#define RSFILE_ERROR_START 1000
#define RSFILE_ERROR_WRITE (RSFILE_ERROR_START+1)

class RSFile{
 public:
  RSFile(const char* fileName, const char *mode);
  char* ReadLine();
  char ReadChar();
  
  int Write(const char* text);
  int Write(char text);
  
  bool IsOpen();
  
  ~RSFile();
  
 private:
  bool m_isOpen;
  const char* m_fileName;
  const char* m_mode;
  FILE* mp_fp;
};

#endif
