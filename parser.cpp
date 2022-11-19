// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.hh"


// Unqualified %code blocks.
#line 57 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"

    #include "driver.hh"
    #include "location.hh"

    #include "help/Visitor.h"
    #include "help/Program.h"
    #include "help/Types/Boolean.h"
    #include "help/Types/Integer.h"
    #include "help/Types/String.h"
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

    #include "help/Statements/WhileStatement.h"
    #include "help/Statements/IfStatement.h"
    #include "help/Statements/IfElseStatement.h"
    #include "help/Statements/ForStatement.h"
    #include "help/Statements/Iterator.h"
    #include "help/Statements/VariableDeclaration.h"
    #include "help/Statements/VariableDeclInit.h"
    #include "help/Statements/AssignmentStatement.h"
    #include "help/Statements/ExpressionList.h"
    #include "help/Statements/PrintStatement.h"

    /* Redefine parser to use our function from scanner */
    static yy::parser::symbol_type yylex(Scanner &scanner) {
        return scanner.ScanToken();
    }

#line 89 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 181 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"

  /// Build a parser object.
  parser::parser (Scanner &scanner_yyarg, Driver &driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_NUMBER: // "number"
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expression: // expression
        value.YY_MOVE_OR_COPY< std::shared_ptr<Expression> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expression_list: // expression_list
        value.YY_MOVE_OR_COPY< std::shared_ptr<ExpressionList> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_iterator: // iterator
        value.YY_MOVE_OR_COPY< std::shared_ptr<Iterator> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_print_statement: // print_statement
        value.YY_MOVE_OR_COPY< std::shared_ptr<PrintStatement> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.YY_MOVE_OR_COPY< std::shared_ptr<Program> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement: // statement
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_let_statement: // let_statement
      case symbol_kind::S_mut_let_statement: // mut_let_statement
      case symbol_kind::S_const_let_statement: // const_let_statement
        value.YY_MOVE_OR_COPY< std::shared_ptr<Statement> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statements: // statements
        value.YY_MOVE_OR_COPY< std::shared_ptr<Statements> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRLITERAL: // "string_literal"
      case symbol_kind::S_type: // type
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_NUMBER: // "number"
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expression: // expression
        value.move< std::shared_ptr<Expression> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expression_list: // expression_list
        value.move< std::shared_ptr<ExpressionList> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_iterator: // iterator
        value.move< std::shared_ptr<Iterator> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_print_statement: // print_statement
        value.move< std::shared_ptr<PrintStatement> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.move< std::shared_ptr<Program> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement: // statement
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_let_statement: // let_statement
      case symbol_kind::S_mut_let_statement: // mut_let_statement
      case symbol_kind::S_const_let_statement: // const_let_statement
        value.move< std::shared_ptr<Statement> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statements: // statements
        value.move< std::shared_ptr<Statements> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRLITERAL: // "string_literal"
      case symbol_kind::S_type: // type
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_NUMBER: // "number"
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_expression: // expression
        value.copy< std::shared_ptr<Expression> > (that.value);
        break;

      case symbol_kind::S_expression_list: // expression_list
        value.copy< std::shared_ptr<ExpressionList> > (that.value);
        break;

      case symbol_kind::S_iterator: // iterator
        value.copy< std::shared_ptr<Iterator> > (that.value);
        break;

      case symbol_kind::S_print_statement: // print_statement
        value.copy< std::shared_ptr<PrintStatement> > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.copy< std::shared_ptr<Program> > (that.value);
        break;

      case symbol_kind::S_statement: // statement
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_let_statement: // let_statement
      case symbol_kind::S_mut_let_statement: // mut_let_statement
      case symbol_kind::S_const_let_statement: // const_let_statement
        value.copy< std::shared_ptr<Statement> > (that.value);
        break;

      case symbol_kind::S_statements: // statements
        value.copy< std::shared_ptr<Statements> > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRLITERAL: // "string_literal"
      case symbol_kind::S_type: // type
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_NUMBER: // "number"
        value.move< int > (that.value);
        break;

      case symbol_kind::S_expression: // expression
        value.move< std::shared_ptr<Expression> > (that.value);
        break;

      case symbol_kind::S_expression_list: // expression_list
        value.move< std::shared_ptr<ExpressionList> > (that.value);
        break;

      case symbol_kind::S_iterator: // iterator
        value.move< std::shared_ptr<Iterator> > (that.value);
        break;

      case symbol_kind::S_print_statement: // print_statement
        value.move< std::shared_ptr<PrintStatement> > (that.value);
        break;

      case symbol_kind::S_program: // program
        value.move< std::shared_ptr<Program> > (that.value);
        break;

      case symbol_kind::S_statement: // statement
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_let_statement: // let_statement
      case symbol_kind::S_mut_let_statement: // mut_let_statement
      case symbol_kind::S_const_let_statement: // const_let_statement
        value.move< std::shared_ptr<Statement> > (that.value);
        break;

      case symbol_kind::S_statements: // statements
        value.move< std::shared_ptr<Statements> > (that.value);
        break;

      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRLITERAL: // "string_literal"
      case symbol_kind::S_type: // type
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        switch (yykind)
    {
      case symbol_kind::S_IDENTIFIER: // "identifier"
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::string > (); }
#line 501 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_NUMBER: // "number"
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < int > (); }
#line 507 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_STRLITERAL: // "string_literal"
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::string > (); }
#line 513 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_program: // program
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Program> > (); }
#line 519 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_statements: // statements
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Statements> > (); }
#line 525 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_statement: // statement
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Statement> > (); }
#line 531 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_print_statement: // print_statement
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<PrintStatement> > (); }
#line 537 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_if_statement: // if_statement
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Statement> > (); }
#line 543 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_let_statement: // let_statement
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Statement> > (); }
#line 549 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_mut_let_statement: // mut_let_statement
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Statement> > (); }
#line 555 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_const_let_statement: // const_let_statement
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Statement> > (); }
#line 561 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_iterator: // iterator
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Iterator> > (); }
#line 567 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_type: // type
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::string > (); }
#line 573 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_expression: // expression
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<Expression> > (); }
#line 579 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      case symbol_kind::S_expression_list: // expression_list
#line 172 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 { yyo << yysym.value.template as < std::shared_ptr<ExpressionList> > (); }
#line 585 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
        break;

      default:
        break;
    }
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (scanner));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_NUMBER: // "number"
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_expression: // expression
        yylhs.value.emplace< std::shared_ptr<Expression> > ();
        break;

      case symbol_kind::S_expression_list: // expression_list
        yylhs.value.emplace< std::shared_ptr<ExpressionList> > ();
        break;

      case symbol_kind::S_iterator: // iterator
        yylhs.value.emplace< std::shared_ptr<Iterator> > ();
        break;

      case symbol_kind::S_print_statement: // print_statement
        yylhs.value.emplace< std::shared_ptr<PrintStatement> > ();
        break;

      case symbol_kind::S_program: // program
        yylhs.value.emplace< std::shared_ptr<Program> > ();
        break;

      case symbol_kind::S_statement: // statement
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_let_statement: // let_statement
      case symbol_kind::S_mut_let_statement: // mut_let_statement
      case symbol_kind::S_const_let_statement: // const_let_statement
        yylhs.value.emplace< std::shared_ptr<Statement> > ();
        break;

      case symbol_kind::S_statements: // statements
        yylhs.value.emplace< std::shared_ptr<Statements> > ();
        break;

      case symbol_kind::S_IDENTIFIER: // "identifier"
      case symbol_kind::S_STRLITERAL: // "string_literal"
      case symbol_kind::S_type: // type
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // program: "fn" "main" "(" ")" "{" statements "}"
#line 178 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                           {
    yylhs.value.as < std::shared_ptr<Program> > () = std::make_shared<Program>(yystack_[1].value.as < std::shared_ptr<Statements> > ());
    driver.program = yylhs.value.as < std::shared_ptr<Program> > ();
    }
#line 883 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 3: // statements: %empty
#line 184 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
           {yylhs.value.as < std::shared_ptr<Statements> > () = std::make_shared<Statements>();}
#line 889 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 4: // statements: statements statement
#line 185 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                           {yystack_[1].value.as < std::shared_ptr<Statements> > ()->add_statement(yystack_[0].value.as < std::shared_ptr<Statement> > ()); yylhs.value.as < std::shared_ptr<Statements> > () = yystack_[1].value.as < std::shared_ptr<Statements> > ();}
#line 895 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 5: // statement: "{" statements "}"
#line 188 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                       {yylhs.value.as < std::shared_ptr<Statement> > () = yystack_[1].value.as < std::shared_ptr<Statements> > ();}
#line 901 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 6: // statement: ";"
#line 189 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
          {}
#line 907 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 7: // statement: print_statement
#line 190 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                      {yylhs.value.as < std::shared_ptr<Statement> > () = yystack_[0].value.as < std::shared_ptr<PrintStatement> > ();}
#line 913 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 8: // statement: let_statement
#line 191 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                    {yylhs.value.as < std::shared_ptr<Statement> > () = yystack_[0].value.as < std::shared_ptr<Statement> > ();}
#line 919 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 9: // statement: "identifier" "=" expression ";"
#line 192 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                      {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<AssignmentStatement>(yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::shared_ptr<Expression> > ());}
#line 925 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 10: // statement: expression ";"
#line 193 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                     {yylhs.value.as < std::shared_ptr<Statement> > () = yystack_[1].value.as < std::shared_ptr<Expression> > ();}
#line 931 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 11: // statement: if_statement
#line 194 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                   {yylhs.value.as < std::shared_ptr<Statement> > () = yystack_[0].value.as < std::shared_ptr<Statement> > ();}
#line 937 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 12: // statement: "while" expression "{" statements "}"
#line 195 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                            {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<WhileStatement>(yystack_[3].value.as < std::shared_ptr<Expression> > (), yystack_[1].value.as < std::shared_ptr<Statements> > ());}
#line 943 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 13: // statement: "for" "identifier" "in" iterator "{" statements "}"
#line 196 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                                          {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<ForStatement>(yystack_[5].value.as < std::string > (), yystack_[3].value.as < std::shared_ptr<Iterator> > (), yystack_[1].value.as < std::shared_ptr<Statements> > ());}
#line 949 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 14: // statement: "return" ";"
#line 197 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                   {}
#line 955 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 15: // print_statement: "print!" "(" "string_literal" expression_list ")" ";"
#line 200 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                                          {yylhs.value.as < std::shared_ptr<PrintStatement> > () = std::make_shared<PrintStatement>(yystack_[3].value.as < std::string > (), yystack_[2].value.as < std::shared_ptr<ExpressionList> > (), false);}
#line 961 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 16: // print_statement: "println!" "(" "string_literal" expression_list ")" ";"
#line 201 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                                              {yylhs.value.as < std::shared_ptr<PrintStatement> > () = std::make_shared<PrintStatement>(yystack_[3].value.as < std::string > (), yystack_[2].value.as < std::shared_ptr<ExpressionList> > (), true);}
#line 967 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 17: // if_statement: "if" expression "{" statements "}"
#line 204 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                       {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<IfStatement>(yystack_[3].value.as < std::shared_ptr<Expression> > (), yystack_[1].value.as < std::shared_ptr<Statements> > ());}
#line 973 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 18: // if_statement: "if" expression "{" statements "}" "else" if_statement
#line 205 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                                             {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<IfElseStatement>(yystack_[5].value.as < std::shared_ptr<Expression> > (), yystack_[3].value.as < std::shared_ptr<Statements> > (), yystack_[0].value.as < std::shared_ptr<Statement> > ());}
#line 979 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 19: // if_statement: "if" expression "{" statements "}" "else" "{" statements "}"
#line 206 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                                                   {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<IfElseStatement>(yystack_[7].value.as < std::shared_ptr<Expression> > (), yystack_[5].value.as < std::shared_ptr<Statements> > (), yystack_[1].value.as < std::shared_ptr<Statements> > ());}
#line 985 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 20: // let_statement: const_let_statement
#line 209 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                        {yylhs.value.as < std::shared_ptr<Statement> > () = yystack_[0].value.as < std::shared_ptr<Statement> > ();}
#line 991 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 21: // let_statement: mut_let_statement
#line 210 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                        {yylhs.value.as < std::shared_ptr<Statement> > () = yystack_[0].value.as < std::shared_ptr<Statement> > ();}
#line 997 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 22: // mut_let_statement: "let" "mut" "identifier" ":" type "=" expression ";"
#line 213 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                                         {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<VariableDeclInit>(yystack_[5].value.as < std::string > (), yystack_[3].value.as < std::string > (), false, yystack_[1].value.as < std::shared_ptr<Expression> > ());}
#line 1003 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 23: // mut_let_statement: "let" "mut" "identifier" ":" type ";"
#line 214 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                            {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<VariableDeclaration>(yystack_[3].value.as < std::string > (), yystack_[1].value.as < std::string > ());}
#line 1009 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 24: // const_let_statement: "let" "identifier" ":" type "=" expression ";"
#line 217 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                                   {yylhs.value.as < std::shared_ptr<Statement> > () = std::make_shared<VariableDeclInit>(yystack_[5].value.as < std::string > (), yystack_[3].value.as < std::string > (), true, yystack_[1].value.as < std::shared_ptr<Expression> > ());}
#line 1015 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 25: // iterator: expression ".." expression
#line 220 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                               {}
#line 1021 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 26: // iterator: expression "..=" expression
#line 221 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                  {}
#line 1027 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 27: // iterator: expression
#line 222 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                 {}
#line 1033 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 28: // type: "i32"
#line 225 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
          {yylhs.value.as < std::string > () = "i32";}
#line 1039 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 29: // type: "String"
#line 226 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
               {yylhs.value.as < std::string > () = "String";}
#line 1045 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 30: // type: "bool"
#line 227 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
             {yylhs.value.as < std::string > () = "bool";}
#line 1051 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 31: // expression: "number"
#line 230 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
             {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<Integer> (yystack_[0].value.as < int > ());}
#line 1057 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 32: // expression: "false"
#line 231 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
              {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<Boolean> (false);}
#line 1063 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 33: // expression: "true"
#line 232 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
             {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<Boolean> (true);}
#line 1069 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 34: // expression: "identifier"
#line 233 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                   {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<IDExpression> (yystack_[0].value.as < std::string > ());}
#line 1075 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 35: // expression: "!" expression
#line 234 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                     {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<NotExpression> (yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1081 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 36: // expression: "(" expression ")"
#line 235 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                         {yylhs.value.as < std::shared_ptr<Expression> > () = yystack_[1].value.as < std::shared_ptr<Expression> > ();}
#line 1087 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 37: // expression: "-" expression
#line 236 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                     {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<UnaryMinusExpression> (yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1093 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 38: // expression: expression "<" expression
#line 237 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<LessExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1099 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 39: // expression: expression "<=" expression
#line 238 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                 {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<LessEqExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1105 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 40: // expression: expression "==" expression
#line 239 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                 {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<EqualExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1111 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 41: // expression: expression "!=" expression
#line 240 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                 {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<NotEqualExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1117 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 42: // expression: expression ">=" expression
#line 241 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                 {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<GreaterEqExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1123 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 43: // expression: expression ">" expression
#line 242 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<GreaterExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1129 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 44: // expression: expression "&&" expression
#line 243 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                 {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<AndExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1135 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 45: // expression: expression "||" expression
#line 244 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                 {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<OrExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1141 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 46: // expression: expression "*" expression
#line 245 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<MulExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1147 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 47: // expression: expression "/" expression
#line 246 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<DivExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1153 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 48: // expression: expression "%" expression
#line 247 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<ModExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1159 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 49: // expression: expression "+" expression
#line 248 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<PlusExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1165 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 50: // expression: expression "-" expression
#line 249 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                {yylhs.value.as < std::shared_ptr<Expression> > () = std::make_shared<MinusExpression> (yystack_[2].value.as < std::shared_ptr<Expression> > (), yystack_[0].value.as < std::shared_ptr<Expression> > ());}
#line 1171 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 51: // expression_list: %empty
#line 252 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
           {yylhs.value.as < std::shared_ptr<ExpressionList> > () = std::make_shared<ExpressionList>();}
#line 1177 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;

  case 52: // expression_list: expression_list "," expression
#line 253 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"
                                     {yystack_[2].value.as < std::shared_ptr<ExpressionList> > ()->add_expression(yystack_[0].value.as < std::shared_ptr<Expression> > ()); yylhs.value.as < std::shared_ptr<ExpressionList> > () = yystack_[2].value.as < std::shared_ptr<ExpressionList> > ();}
#line 1183 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"
    break;


#line 1187 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -27;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
       3,     2,     7,     0,   -27,    -9,     9,   -27,    -3,   225,
     -16,    -8,    -2,   225,   -27,   -27,   225,   225,   -27,   225,
     -27,   -27,    11,    15,    24,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   283,   -27,   359,    62,    29,    55,   -27,    26,
      77,   377,   -27,   395,    28,    30,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     -27,   -27,   225,    64,    31,   -27,   -27,   -27,   -27,   -27,
     302,    26,    26,   -27,   -27,   -27,   449,   431,   454,   454,
      32,    32,    32,    32,   114,    58,   265,    31,   -27,   -27,
     -27,    61,   150,   -21,   -19,   -27,   -27,   -27,   225,   225,
      -6,   225,    43,    50,   225,    51,   186,   413,   413,   225,
     -27,   321,   -10,   -27,   413,   -27,   -27,   340,   -27,   -27,
     -27,   -27,   222,   -27
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     0,     0,     1,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     3,     2,     0,     0,     6,     0,
      33,    32,     0,     0,    34,    31,     4,     7,    11,     8,
      21,    20,     0,    34,     0,     0,     0,     0,    14,    37,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     3,     0,     0,     0,     5,    36,     3,    51,    51,
       0,    50,    49,    46,    47,    48,    44,    45,    40,    41,
      43,    42,    38,    39,     0,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     9,    12,     3,     0,     0,
       0,     0,    17,     0,     0,     0,     0,    25,    26,     0,
      23,     0,     0,    15,    52,    16,    13,     0,    24,     3,
      18,    22,     0,    19
  };

  const signed char
  parser::yypgoto_[] =
  {
     -27,   -27,   -14,   -27,   -27,   -26,   -27,   -27,   -27,   -27,
       4,     8,    18
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     2,     8,    26,    27,    28,    29,    30,    31,    85,
      91,    32,    93
  };

  const signed char
  parser::yytable_[] =
  {
      40,     9,    10,   103,    36,   105,     1,     4,    11,   109,
      12,   119,     3,    13,   104,     6,   104,    34,    14,    15,
      16,    39,    17,     5,    41,    42,    19,    43,   110,    35,
       7,    18,    38,    19,    44,    20,    21,    37,    45,    46,
      22,    23,    24,    25,    49,    50,    51,    84,    47,    48,
      49,    50,    51,    92,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    62,    64,
      86,    88,    89,    90,    63,    68,   101,    69,    87,    97,
     112,     9,    10,   106,   113,   115,   120,    94,    11,     0,
      12,   100,     0,    13,     0,     0,     0,     0,    14,    65,
      16,     0,    17,     0,     0,   122,   107,   108,     0,   111,
       0,    18,   114,    19,     0,    20,    21,   117,     9,    10,
      22,    23,    24,    25,     0,    11,     0,    12,     0,     0,
      13,     0,     0,     0,     0,    14,    96,    16,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
      19,     0,    20,    21,     9,    10,     0,    22,    23,    24,
      25,    11,     0,    12,     0,     0,    13,     0,     0,     0,
       0,    14,   102,    16,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    19,     0,    20,    21,
       9,    10,     0,    22,    23,    24,    25,    11,     0,    12,
       0,     0,    13,     0,     0,     0,     0,    14,   116,    16,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,    19,     0,    20,    21,     9,    10,     0,    22,
      23,    24,    25,    11,     0,    12,     0,     0,    13,     0,
       0,    13,     0,    14,   123,    16,     0,    17,    16,     0,
      17,     0,     0,     0,     0,     0,    18,     0,    19,     0,
      20,    21,     0,    20,    21,    22,    23,    24,    25,     0,
      33,    25,    98,    99,     0,     0,     0,     0,     0,     0,
       0,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,    58,    59,    95,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    58,    59,   118,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    57,    58,    59,   121,    47,    48,    49,    50,    51,
      61,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,    59,    47,    48,    49,    50,    51,     0,     0,
       0,    66,     0,    52,    53,    54,    55,    56,    57,    58,
      59,    47,    48,    49,    50,    51,    67,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,    59,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,    52,
      53,    54,    55,    56,    57,    58,    59,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,    52,     0,    54,
      55,    56,    57,    58,    59,    47,    48,    49,    50,    51,
      47,    48,    49,    50,    51,     0,     0,    54,    55,    56,
      57,    58,    59,     0,    56,    57,    58,    59
  };

  const signed char
  parser::yycheck_[] =
  {
      14,     4,     5,    24,    12,    24,     3,     0,    11,    15,
      13,    21,    10,    16,    35,    24,    35,     9,    21,    22,
      23,    13,    25,    23,    16,    17,    36,    19,    34,    45,
      21,    34,    34,    36,    23,    38,    39,    45,    23,    15,
      43,    44,    45,    46,    18,    19,    20,    61,    16,    17,
      18,    19,    20,    67,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     6,    14,
      62,    40,    41,    42,    45,    47,    15,    47,    14,    21,
      37,     4,     5,    97,    34,    34,   112,    69,    11,    -1,
      13,    87,    -1,    16,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    -1,    -1,   119,    98,    99,    -1,   101,
      -1,    34,   104,    36,    -1,    38,    39,   109,     4,     5,
      43,    44,    45,    46,    -1,    11,    -1,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    38,    39,     4,     5,    -1,    43,    44,    45,
      46,    11,    -1,    13,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    38,    39,
       4,     5,    -1,    43,    44,    45,    46,    11,    -1,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    38,    39,     4,     5,    -1,    43,
      44,    45,    46,    11,    -1,    13,    -1,    -1,    16,    -1,
      -1,    16,    -1,    21,    22,    23,    -1,    25,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      38,    39,    -1,    38,    39,    43,    44,    45,    46,    -1,
      45,    46,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    24,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    30,    31,    32,    33,    16,    17,    18,    19,    20,
      16,    17,    18,    19,    20,    -1,    -1,    28,    29,    30,
      31,    32,    33,    -1,    30,    31,    32,    33
  };

  const signed char
  parser::yystos_[] =
  {
       0,     3,    49,    10,     0,    23,    24,    21,    50,     4,
       5,    11,    13,    16,    21,    22,    23,    25,    34,    36,
      38,    39,    43,    44,    45,    46,    51,    52,    53,    54,
      55,    56,    59,    45,    59,    45,    12,    45,    34,    59,
      50,    59,    59,    59,    23,    23,    15,    16,    17,    18,
      19,    20,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    21,     6,    45,    14,    22,    24,    21,    47,    47,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    50,    57,    59,    14,    40,    41,
      42,    58,    50,    60,    60,    34,    22,    21,     7,     8,
      58,    15,    22,    24,    35,    24,    50,    59,    59,    15,
      34,    59,    37,    34,    59,    34,    22,    59,    34,    21,
      53,    34,    50,    22
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    53,    53,    53,
      54,    54,    55,    55,    56,    57,    57,    57,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     7,     0,     2,     3,     1,     1,     1,     4,
       2,     1,     5,     7,     2,     6,     6,     5,     7,     9,
       1,     1,     8,     6,     7,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     3
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "\"fn\"", "\"while\"",
  "\"for\"", "\"in\"", "\"..\"", "\"..=\"", "\"\\\"\"", "\"main\"",
  "\"let\"", "\"mut\"", "\"return\"", "\":\"", "\"=\"", "\"-\"", "\"+\"",
  "\"*\"", "\"/\"", "\"%\"", "\"{\"", "\"}\"", "\"(\"", "\")\"", "\"!\"",
  "\"&&\"", "\"||\"", "\"==\"", "\"!=\"", "\">\"", "\">=\"", "\"<\"",
  "\"<=\"", "\";\"", "\",\"", "\"if\"", "\"else\"", "\"true\"",
  "\"false\"", "\"i32\"", "\"String\"", "\"bool\"", "\"print!\"",
  "\"println!\"", "\"identifier\"", "\"number\"", "\"string_literal\"",
  "$accept", "program", "statements", "statement", "print_statement",
  "if_statement", "let_statement", "mut_let_statement",
  "const_let_statement", "iterator", "type", "expression",
  "expression_list", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  parser::yyrline_[] =
  {
       0,   178,   178,   184,   185,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   200,   201,   204,   205,   206,
     209,   210,   213,   214,   217,   220,   221,   222,   225,   226,
     227,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   252,   253
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1805 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.cpp"

#line 264 "/Users/user/Documents/Физтех/3 семестр/FormalLangs/Mini-Fortran-Interpreter/parser.y"


void
yy::parser::error(const location_type& l, const std::string& m)
{
  std::cerr << l << ": " << m << '\n';
}
