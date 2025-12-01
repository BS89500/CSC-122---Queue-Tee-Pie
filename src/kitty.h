//
// Created by ybsxm on 11/30/2025.
//

#ifndef QUEUE_TEE_PIE_KITTY_H
#define QUEUE_TEE_PIE_KITTY_H

class Kitty : public Cutie {
public:
        Kitty() : Cutie("kitty cat", 100){} ;
        std::string get_description() override{
                return "kitty cat";
        }

        int get_cuteness_rating() override {
                return 100;
        }

};

#endif //QUEUE_TEE_PIE_KITTY_H