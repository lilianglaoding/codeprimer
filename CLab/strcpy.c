char *strcpy(char *strDest, char *strSrc)
{
  if (strDest == NULL || strSrc == NULL)
    return NULL;
  if (strDest == strSrc)
    return strDest;
  char *strtemp = strDest;
  while ((*strDest++ = *strSrc) != '\0')
    ;
  return strtemp;
}
