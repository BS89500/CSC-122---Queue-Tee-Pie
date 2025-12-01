//
// Created by ybsxm on 11/30/2025.
//

#ifndef QUEUE_TEE_PIE_PUPPY_H
#define QUEUE_TEE_PIE_PUPPY_H
#include "cutie.hpp"


class Puppy : public Cutie {
    public:
    Puppy() : Cutie("puppy", 100){} ;
    std::string get_description() override{
        return "puppy";
    }

    int get_cuteness_rating() override {
        return 100;
    }
};


#endif //QUEUE_TEE_PIE_PUPPY_H