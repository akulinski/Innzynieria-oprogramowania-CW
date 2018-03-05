/**
 * Project Untitled
 */


#ifndef _SSAK_H
#define _SSAK_H

#include "zwierze.h"


class ssak: public zwierze {
public: 
    
    /**
     * @param agr
     */
    void set_agresja(void agr);
private: 
    int agresja;
};

#endif //_SSAK_H