
// Generated from Expr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterNumber(ExprParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(ExprParser::NumberContext * /*ctx*/) override { }

  virtual void enterAddSub(ExprParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(ExprParser::AddSubContext * /*ctx*/) override { }

  virtual void enterMulDiv(ExprParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(ExprParser::MulDivContext * /*ctx*/) override { }

  virtual void enterParens(ExprParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(ExprParser::ParensContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

