class String {
public:
  String();
  String(const char *text);
  String(const String &RHS_Object);
  String(String &&RHS_Object);
  void operator=(const char *text);
  ~String();

private:
  char *String_Ptr = nullptr;
  int Lenghth;
};