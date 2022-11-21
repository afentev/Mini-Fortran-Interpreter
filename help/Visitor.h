#ifndef PARSEREXAMPLE_VISITOR_H
#define PARSEREXAMPLE_VISITOR_H

#include <iostream>
#include <memory>
#include "help/Statements/Interruptions/Interruptions.h"
#include "help/Identifiers/IDTable.h"
#include "help/ForwardDeclarations.h"


class Visitor {
 public:
  void visit (std::shared_ptr<Program> program);
  void visit (std::shared_ptr<Expression> expression);

  void visit (std::shared_ptr<Boolean> expression);
  void visit (std::shared_ptr<Integer> expression);
  void visit (std::shared_ptr<Float> expression);
  void visit (std::shared_ptr<String> expression);

  void visit (std::shared_ptr<NotExpression> expression);
  void visit (std::shared_ptr<AndExpression> expression);
  void visit (std::shared_ptr<OrExpression> expression);
  void visit (std::shared_ptr<DivExpression> expression);
  void visit (std::shared_ptr<MulExpression> expression);
  void visit (std::shared_ptr<ModExpression> expression);
  void visit (std::shared_ptr<PlusExpression> expression);
  void visit (std::shared_ptr<MinusExpression> expression);
  void visit (std::shared_ptr<UnaryMinusExpression> expression);
  void visit (std::shared_ptr<GreaterExpression> expression);
  void visit (std::shared_ptr<GreaterEqExpression> expression);
  void visit (std::shared_ptr<EqualExpression> expression);
  void visit (std::shared_ptr<NotEqualExpression> expression);
  void visit (std::shared_ptr<LessEqExpression> expression);
  void visit (std::shared_ptr<LessExpression> expression);
  void visit (std::shared_ptr<IDExpression> expression);
  void visit (std::shared_ptr<AsExpression> expression);

  void visit (std::shared_ptr<Statements> statement);
  void visit (std::shared_ptr<VariableDeclaration> statement);
  void visit (std::shared_ptr<VariableDeclInit> statement);
  void visit (std::shared_ptr<TypelessVariableDecl> statement);
  void visit (std::shared_ptr<WhileStatement> statement);
  void visit (std::shared_ptr<IfStatement> statement);
  void visit (std::shared_ptr<IfElseStatement> statement);
  void visit (std::shared_ptr<ForStatement> statement);
  void visit (std::shared_ptr<AssignmentStatement> statement);
  void visit (std::shared_ptr<ExpressionList> statement);
  void visit (std::shared_ptr<PrintStatement> statement);
  void visit (std::shared_ptr<BreakStatement> statement);
  void visit (std::shared_ptr<ContinueStatement> statement);
  void visit (std::shared_ptr<ReturnStatement> statement);

  ~Visitor ();

 private:
  std::shared_ptr<Object> object;
  IDTable variables;
};


#endif //PARSEREXAMPLE_VISITOR_H
