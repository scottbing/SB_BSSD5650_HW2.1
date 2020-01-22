/* Dog.hpp */
#ifndef Dog_hpp
#define Dog_hpp

#include <iostream>
#include "Animal.hpp"

class Dog:public Animal {
public:
    void speak(){std::cout << "Growl Bark Woof" << std::endl;};
    void eat(){std::cout << "Ate Kibble" << std::endl;};
};
#endif /* Dog_hpp */
