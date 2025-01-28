
// Generated from Expr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterNumber(ExprParser::NumberContext *ctx) = 0;
  virtual void exitNumber(ExprParser::NumberContext *ctx) = 0;

  virtual void enterAddSub(ExprParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(ExprParser::AddSubContext *ctx) = 0;

  virtual void enterMulDiv(ExprParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(ExprParser::MulDivContext *ctx) = 0;

  virtual void enterParens(ExprParser::ParensContext *ctx) = 0;
  virtual void exitParens(ExprParser::ParensContext *ctx) = 0;


};

