//
// Created by Nakloz Luya on 3/26/22.
//

#ifndef MODULE6_BASE_H
#define MODULE6_BASE_H

#include <iostream>
#include <exception>

class Base {
public:
    virtual ~Base();
};

Base::~Base() {}

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate();
void	identify(Base *p);
void	identify(Base &p);

#endif //MODULE6_BASE_H
