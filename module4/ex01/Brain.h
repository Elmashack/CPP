//
// Created by Nakloz Luya on 3/16/22.
//

#ifndef MODULE4_BRAIN_H
#define MODULE4_BRAIN_H

# include <iostream>


class Brain {
private:
    std::string *ideas;
public:
    Brain();
    Brain(Brain const &src);
    Brain & operator=(Brain const &src);
    ~Brain();

};


#endif //MODULE4_BRAIN_H
