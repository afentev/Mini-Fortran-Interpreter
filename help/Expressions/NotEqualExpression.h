#ifndef PARSEREXAMPLE_NOTEQUALEXPRESSION_H
#define PARSEREXAMPLE_NOTEQUALEXPRESSION_H

#include <memory>
#include "help/Expression.h"

class NotEqualExpression: public Expression {
public:
    NotEqualExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right);
    std::shared_ptr<Expression> get_left_exp();
    std::shared_ptr<Expression> get_right_exp();
    void accept(Visitor* visitor) override;

    ~NotEqualExpression() override;
private:
    std::shared_ptr<Expression> left;
    std::shared_ptr<Expression> right;
};


#endif //PARSEREXAMPLE_NOTEQUALEXPRESSION_H