#include <iostream>

class drawable
{   
    public:
        virtual void draw()=0;
};

class circle : public drawable
{
    void draw();
};

class rectangel : public drawable
{
    void draw();
};

void circle::draw()
{
    std::cout << "this is a circle" << std::endl;
}

void rectangel::draw()
{
    std::cout << "this is a rectangel" << std::endl;
}
int main()
{
    drawable* ptr=nullptr;
    circle circlle_obj{};
    ptr = &circlle_obj;
    ptr->draw();
    rectangel rectangel_obj{};
    ptr = &rectangel_obj;
    ptr->draw();
}