//
// Created by Julian on 2018-10-19.
//

#ifndef LAB_05_OPERATION_HPP
#define LAB_05_OPERATION_HPP

class Operation {
    public:
        virtual ~Operation() = 0;
        virtual char get_Code() = 0;
        virtual int perform(int, int) = 0;

};

#endif //LAB_05_OPERATION_HPP
