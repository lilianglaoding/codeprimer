#include "Message.h"

Message::Message(const Message &m):
  contents(m.contents), folders(m.folders)
{
  put_Msg_in_Folders(folders);
}

void put_Msg_in_Folders(const set<Folders *> &rhs)
{
  for (std::set<Folders *>::const_iterator beg = rhs.begin();
       beg != rhs.end(); ++beg)
    (*beg)->addMsg(this);
}

Message &Message::operator=(const Message &rhs)
{
  if (this != &rhs)
  {
    remove_Msg_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    put_Msg_into_Folders(rhs.folders);
  }
  return *this;
}

void remove_Msg_from_Folders()
{
  for (std::set<Folders *>::const_iterator beg = folders.begin();
       beg != folders.end(); ++beg)
    (*beg)->remMsg(this);
}

Message::~Message()
{
  remove_Msg_from_Folders();
}

void save(Folder & flr)
{
  addFlr(&flr);
  flr.addMsg(this);
}

void remove(Folder &flr)
{
  frl.remMsg(this);
}

void addFlr(Folder *flr)
{
  folders.insert(flr);
}

void remFlr(Folder *flr)
{
  folders.erase(flr);
}
