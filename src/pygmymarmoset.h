//
// Created by ybsxm on 11/30/2025.
//

#ifndef QUEUE_TEE_PIE_PYGMYMARMOSET_H
#define QUEUE_TEE_PIE_PYGMYMARMOSET_H

class PygmyMarmoset : public Cutie {
public:
    PygmyMarmoset() : Cutie("Pygmy Marmoset", 65){} ;
    std::string get_description() override{
        return "Pygmy Marmoset";
    }

    int get_cuteness_rating() override {
        return 65;
    }
};


#endif //QUEUE_TEE_PIE_PYGMYMARMOSET_H