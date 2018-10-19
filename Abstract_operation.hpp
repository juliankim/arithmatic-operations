//
// Created by Julian on 2018-10-19.
//

#ifndef LAB_05_ABSTRACT_OPERATION_HPP
#define LAB_05_ABSTRACT_OPERATION_HPP

class Abstract_operation {
    public:
        char operation;
        Abstract_operation(char op) {
            operation = op;
        }

        char get_code() {
            return operation;
        }
        ~virtual abstract_operations{};

};

#endif //LAB_05_ABSTRACT_OPERATION_HPP
