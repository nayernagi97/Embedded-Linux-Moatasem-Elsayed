#include "string class.h"

String::String(int length, char* text): length(length){this->text = new char[length];}
String::String(int length): length(length), text(nullptr){}
String::~String(){delete[] this->text;}