#include "include/RSFile.h"

RSFile::RSFile(const char* fileName, const char* mode)
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
  char c;
  char out[102];
  out[101] = '\0';

  for (int i = 0; i<100; i++)
   {
     c = ReadChar();
     if( c == EOF  )
	break ;
     if(c == '\n')
       break;
     //}
     printf("%c",c);
     //out[i] = c;
     //out[i+1] = '\n';
     //out[i+2] = '\0';
   }
   return out;
}
char RSFile::ReadChar()
{

  char c =  fgetc(mp_fp);
  //if( feof(fp) )
  //{ 
  //   break ;
  // }
  // printf("%c", c);
  //}
}

int RSFile::Write(const char* text)
{
  int count = fprintf(mp_fp, "%s",text);
  if(count > 0)
    return 0;
  return RSFILE_ERROR_WRITE;
}
int RSFile::Write(char text)
{
  int count = fprintf(mp_fp, "%c",text);
  if(count > 0)
    return 0;
  return RSFILE_ERROR_WRITE;
}

RSFile::~RSFile()
{
  if(m_isOpen)
    {
      fclose(mp_fp);
      m_isOpen = false;
    }
}

  
