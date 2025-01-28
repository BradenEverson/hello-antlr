
// Generated from Expr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual std::any visitNumber(ExprParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(ExprParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(ExprParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(ExprParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }


};

