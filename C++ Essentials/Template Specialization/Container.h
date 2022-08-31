#pragma once
template <class T>

// simple container class
class Container {
private:
    T element;

public:
    Container(T element) { this->element = element; }
    T increase() { return ++element; }
};


// for char type input, the increase() method will not work
// so instead implementing a methd to simply change the case
template <>
class Container<char> {
private:
    char element;

public:
    Container(char element) { this->element = element; }
    char changeCase() {
        if (element >= 'a' && element <= 'z')
            element += 'A' - 'a';
        else if (element >= 'A' && element <= 'Z')
            element -= 'A' - 'a';
        return element;
    }
};