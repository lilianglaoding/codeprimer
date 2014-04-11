#ifndef FOLDER_H
#define FOLDER_H
#include "Message.h"
class Folder
{
 public:
  Folder();
  Folder(const Folder &);
  Folder & operator=(const Folder &);
  ~Folder();
  void addMsg(Message *);
  void remMsg(Message *);

 private:
  std::set<Message *> msg;
}
#endif
