#include <stdio.h>

//algorithm
//对象栈和算符栈，依次入栈，若要入栈的算符优先级比栈顶元素低则从对象栈出栈两个元素，从算符栈出栈一个算符计算结果，然后将结果入对象栈；

//operand     in Stack priority     out Stack priority
// ^              3                          4
// * / %          2                          2
// + -            1                          1
// (              0                          4
// )             -1                         -1

//infix expression, the expression is end with the char '#'
int expr(char *A)
{
  SeqStack *s1;   //s1 is hold operand
  SeqStack *s2;   //s2 is hold operator character
  s1 = Init_Stack();
  s2 = Init_Stack();
  Push_Stack(s2, '(');
  int a, b, c;
  int result;
  char ch;
  char temp;
  ch = *A++;
  while (ch != '#')
  {
    // ch is operation character
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '(')
    {
      if (ch > Top_Stack(s2))     //out stack priority compare with in stack priority
      {
	Push_Stack(s2, ch);
      }
      else
      {
	Pop_Stack(s1, &b);
	Pop_Stack(s1, &a);
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
	case ')':
	  while ((temp = Top_Stack(s2)) != '(')
	  {
	    Pop_Stack(s2, &ch);
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
	      Push_Stack(s1, c);
	      Pop_Stack(s1, &b);
	      Pop_Stack(s1, &a);
	    }
	    Pop_Stack(s2, &ch);
	  }
	  Push_Stack(s1, c);
	}
    }
    else
    {
      Push_Stack(s1, ch);
    }
    ch = *A++;
  }
  Pop_Stack(s1, &result);
  return result;
}


//infix transfered to postfix

void infix_to_postfix(char *infix, char *postfix)
{
  
}

//postfix expression, the express is end with the char '#'

int expr(char *A)
{
  SeqStack *s;
  s = Init_Stack();
  int a, b, c;
  int result;      //here has a trap, may cause overflow
  char ch;
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
      Push_Stack(s, ch);
    ch = *A++;
  }
  
  Pop_Stack(s, &result);
  return result;
}
