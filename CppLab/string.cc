#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class String
{
public:
    String(const char *str = NULL);
    String(const String &);
    String &operator =(const String &other);
    ~String();
private:
    char *ch;
};

String::String(const char *str)
{
    if (str == NULL)
    {
	ch = new char[1];
	*ch = '\0';
    }
    else
    {
	int len = strlen(str);
	ch = new char[len + 1];
	strcpy(ch, str);
    }
}

String::String(const String &s)
{
    //ch = (char *)malloc(strlen(s) + 1);
    //for (int i = 0; i < strlen(s); i++)
    //	ch[i] = s.ch[i];
    //ch[i] = '\0';
    int len = strlen(s.ch);
    ch = new char[len + 1];
    strcpy(ch, s.ch);
 }

String &String::operator =(const String &s)
{
    if (this == &s)
	return *this;
    delete[] ch;
    int len = strlen(s.ch);
    ch = new char[len + 1];
    strcpy(ch, s.ch);
    return *this;
}

String::~String()
{
    //free(ch);
    delete[] ch;
}



int main()
{
    String s("test");
    return 0;
//    cout << s.ch << endl;
}
