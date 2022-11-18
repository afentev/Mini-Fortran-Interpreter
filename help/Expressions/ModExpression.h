#ifndef PARSEREXAMPLE_MODEXPRESSION_H
#define PARSEREXAMPLE_MODEXPRESSION_H

#include <memory>
#include "help/Expression.h"

class ModExpression: public Expression {
public:
    ModExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right);
    std::shared_ptr<Expression> get_left_exp();
    std::shared_ptr<Expression> get_right_exp();
    void accept(Visitor* visitor) override;

    ~ModExpression() override;
private:
    std::shared_ptr<Expression> left;
    std::shared_ptr<Expression> right;
};



#endif //PARSEREXAMPLE_MODEXPRESSION_H