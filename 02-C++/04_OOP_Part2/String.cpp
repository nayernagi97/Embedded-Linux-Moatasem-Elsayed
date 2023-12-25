#include "String.h"
#include "iostream"

String::String(const char *text) {
  this->Lenghth = 0;
  while (text[this->Lenghth] != '\0') {
    this->Lenghth++;
  };
  this->String_Ptr = new char[this->Lenghth];
  for (int i = 0; i <= Lenghth; i++) {
    this->String_Ptr[i] = text[i];
    std::cout << this->String_Ptr[i];
  }
  std::cout << std::endl;
}

String::String() {
  this->Lenghth = 0;
  this->String_Ptr = new char('\0');
}

String::~String() { delete[] this->String_Ptr; }

String::String(const String &RHS_Object) {
  std::cout << "in copy constructor" << std::endl;
  this->Lenghth = RHS_Object.Lenghth;
  this->String_Ptr = new char[RHS_Object.Lenghth];
  for (int i = 0; i <= Lenghth; i++) {
    this->String_Ptr[i] = RHS_Object.String_Ptr[i];
    std::cout << this->String_Ptr[i];
  }
  std::cout << std::endl;
}

String::String(String &&RHS_Object) {
  std::cout << "in Move constructor" << std::endl;
  this->Lenghth = RHS_Object.Lenghth;
  this->String_Ptr = RHS_Object.String_Ptr;
  RHS_Object.String_Ptr = nullptr;
}

void String::operator=(const char *text) {
  this->Lenghth = 0;
  while (text[this->Lenghth] != '\0') {
    this->Lenghth++;
  };
  this->String_Ptr = new char[this->Lenghth];
  for (int i = 0; i <= Lenghth; i++) {
    this->String_Ptr[i] = text[i];
    std::cout << this->String_Ptr[i];
  }
  std::cout << std::endl;
}