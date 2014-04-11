#include "Folder.h"

Folder::Folder(const Folder &rhs)
{
  msg = rhs.msg; 
}

Folder &Folder::operator=(const Folder &rhs)
{
  if (this != &rhs)
  {
    msg = rhs.msg;
  }
  return *this;
}
