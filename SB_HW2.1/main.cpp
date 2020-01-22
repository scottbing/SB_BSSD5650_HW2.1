/* main.cpp */
#include <iostream>

#include "Animal.hpp"
#include "Duck.hpp"
#include "Dog.hpp"

int main(int argc, const char * argv[]) {

  Animal* anims[2];
  anims[0] = new Duck();
  anims[1] = new Dog();

  for(int i=0; i<2; i++)
    anims[i]->eat();

  return 0;
}
