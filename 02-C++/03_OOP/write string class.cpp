#include <iostream>

class String
{
    public:
    String()=delete;
    String(int length, const char* text);
    String(int length);
    ~String();

    private:
    char* text;
    int length;

};

String::String(int length,const char* text): length(length)
{
    this->text = new char[length];
    for(int i=0; i<length ;i++)
    {
        this->text[i] = text[i];
    }
    this->text[5] = '\0';
}
String::String(int length): length(length), text(nullptr){}
String::~String()
{
    std::cout << this->text;
    delete[] this->text;
}

int main()
{
    char test[5]{'t','e','s','t'};
    std::cout << test << std::endl;
    String d{5,"strinsda"};
    return 0;
}