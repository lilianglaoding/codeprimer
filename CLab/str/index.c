int Index_String_BF(char *s, char *t)
{
  int i = 0, j = 0;
  while (s[i] != '\0')
  {
    while (t[j] != '\0' && t[j] == s[i + j])
    {
      ++j;
    }
    if (t[j] == '\0')
      break;
    j = 0;
    ++i;
  }
  return i;
}
