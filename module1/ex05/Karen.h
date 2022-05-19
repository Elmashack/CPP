//
// Created by Nakloz Luya on 2/26/22.
//

#ifndef MODULE1_KAREN_H
#define MODULE1_KAREN_H

#include <iostream>

class Karen {
private:
    void debug(void);
    void info(void );
    void warning(void );
    void error(void );
public:
    Karen();
    ~Karen();
    void complain(std::string level);
    typedef void (Karen::*func_ptr)(void );
};


#endif //MODULE1_KAREN_H
