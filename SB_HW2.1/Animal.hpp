/* Animal.hpp */
#ifndef Animal_h
#define Animal_h

#include <iostream>

class Animal {
public:
  // virtual void speak() {std::cout << "Generic Sound" << std::endl;};
  // virtual void eat() {std::cout << "Generic Food" << std::endl;};
  
  virtual void speak() = 0;
  virtual void eat() = 0;
};

#endif /* Animal_h */
