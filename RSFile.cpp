#include "header/RSFile.h"

RSFile::RSFile(const char* fileName, const char* mode);
{
  m_fileName = fileName;
  m_isOpen = false;
  m_mode = mode;
  mp_fp = NULL;
  
  mp_fp = fopen(m_fileName, m_mode);
  if (mp_fp != NULL)
    m_isOpen = true;
}
char* RSFile::ReadLine()
{
}
char* RSFile::ReadChar()
{
  //FILE *fp;
  // int c;
  
  //fp = fopen("file.txt","r");
  //while(1)
  //{
  // c = fgetc(fp);
  //if( feof(fp) )
  //{ 
  //   break ;
  // }
  // printf("%c", c);
  //}
}

int RSFile::Write(const char* text);
{
  int chars = fprintf(mp_fp, "%s",text);
  if(chars > 0)
    return 0;
  return RSFILE_ERROR_WRITE;
}
int RSFile::Write(char text)
{
}

RSFile::~RSFile()
{
  if(m_isOpen)
    {
      fclose(mp_fp);
      m_isOpen = false;
    }
}

  
