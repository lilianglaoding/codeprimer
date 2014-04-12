#ifndef POINTER_H
#define POINTER_H
class HasPtr
{
 public:
  HasPtr(int *p, int i): ptr(p), val(i) { };
  //change the value ptr pinted to, ptr and val didn't change
  void set_ptr_val(int val) const { *ptr = val; }
  int get_ptr_val() const { return *ptr; }
 private:
  int *ptr;
  int val;
};
#endif
