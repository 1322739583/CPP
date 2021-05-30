#include<iostream>

class Screen {
public:

    typedef std::string::size_type size;

    //直接实现
    char get() const { return contents[cursor]; }

    //只是声明
    char get(size h, size w) const;

    Screen() : contents("this is text") {}

    Screen(const std::string &contents, size height, size width) : contents(contents), height(height), width(width) {}

    Screen(const std::string &contents, unsigned long cursor, size height, size width) : contents(contents),
                                                                                         cursor(cursor), height(height),
                                                                                         width(width) {}

private:
    std::string contents;
    std::string::size_type cursor;
    //std::string::size_type height,width;
    size height, width;
};

int main() {
    Screen screen;
    char ch = screen.get();
    std::cout << ch << std::endl;
    ch = screen.get(0, 0);
}

