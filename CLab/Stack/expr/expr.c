#include <stdio.h>

//algorithm
//对象栈和算符栈，依次入栈，若要入栈的算符优先级比栈顶元素低则从对象栈出栈两个元素，从算符栈出栈一个算符计算结果，然后将结果入对象栈；

//the express is end with the char '#'

int expr(char *A)
{
  SeqStack *s;
  s = Init_Stack();
  int a, b, c;
  int result;      //here has a trap
  ch = *A++;
  while (ch != '#')
  {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
    {
      Pop_Stack(s, &b);
      Pop_Stack(s, &a);
      switch (ch)
      {
      case '+': 
	c = a + b; break;
      case '-':
	c = a - b; break;
      case '*':
	c = a * b; break;
      case '/':
	c = a / b; break;
      case '%':
	c = a % b; break;
      }
      Push_Stack(s, c);
    }
    else
      Push_Stack(s, *A);
    ch = *A++;
  }
  
  Pop_Stack(s, &result);
  return result;
}
