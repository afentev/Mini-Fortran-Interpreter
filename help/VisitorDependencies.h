#ifndef PARSEREXAMPLE_VISITORDEPENDENCIES_H
#define PARSEREXAMPLE_VISITORDEPENDENCIES_H

#include "help/Statements/Statements.h"
#include "help/Program.h"
#include "help/Types/ObjectCreation.h"

#include "help/Expressions/NotExpression.h"
#include "help/Expressions/AndExpression.h"
#include "help/Expressions/OrExpression.h"
#include "help/Expressions/EqualExpression.h"
#include "help/Expressions/NotEqualExpression.h"
#include "help/Expressions/GreaterExpression.h"
#include "help/Expressions/GreaterEqExpression.h"
#include "help/Expressions/LessExpression.h"
#include "help/Expressions/LessEqExpression.h"
#include "help/Expressions/PlusExpression.h"
#include "help/Expressions/MinusExpression.h"
#include "help/Expressions/UnaryMinusExpression.h"
#include "help/Expressions/MulExpression.h"
#include "help/Expressions/ModExpression.h"
#include "help/Expressions/DivExpression.h"
#include "help/Expressions/IDExpression.h"
#include "help/Expressions/AsExpression.h"
#include "help/Expressions/SubscriptionExpression.h"
#include "help/Expressions/VectorEnumerationExpression.h"
#include "help/Expressions/VectorValueExpression.h"
#include "help/Expressions/SizeExpression.h"

#include "help/Statements/WhileStatement.h"
#include "help/Statements/IfStatement.h"
#include "help/Statements/IfElseStatement.h"
#include "help/Statements/ForStatement.h"
#include "help/Statements/ForIterableStatement.h"
#include "help/Statements/VariableDeclaration.h"
#include "help/Statements/VariableDeclInit.h"
#include "help/Statements/TypelessVariableDecl.h"
#include "help/Statements/AssignmentStatement.h"
#include "help/Statements/SubscriptionAssignment.h"
#include "help/Statements/PushStatement.h"
#include "help/Statements/PopStatement.h"
#include "help/Statements/ExpressionList.h"
#include "help/Statements/PrintStatement.h"
#include "help/Statements/Interruptions/ReturnStatement.h"
#include "help/Statements/Interruptions/BreakStatement.h"
#include "help/Statements/Interruptions/ContinueStatement.h"

#include "help/InterpretationExceptions/InterpretationExceptions.h"

#include "help/Functions/FunctionDeclarationList.h"
#include "help/Expressions/FunctionCall.h"

#endif //PARSEREXAMPLE_VISITORDEPENDENCIES_H