/* Duck.hpp */
#ifndef Duck_hpp
#define Duck_hpp

#include <iostream>
#include "Animal.hpp"

class Duck:public Animal {
public:
    void speak(){std::cout << "Growl Bark Woof" << std::endl;};
    void eat(){std::cout << "Ate Corn" << std::endl;};

};
#endif /* Duck_hpp */
