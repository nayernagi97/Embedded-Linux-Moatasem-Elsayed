class String
{
    public:
    String()=delete;
    String(int length, char text[]);
    String(int length);
    ~String();
    private:
    char* text;
    int length;

};