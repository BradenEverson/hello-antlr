#ifndef VISITOR_H
#define VISITOR_H

#include "antlr/ExprBaseVisitor.h"

class EvalVisitor : public ExprBaseVisitor {
public:
    antlrcpp::Any visitAddSub(ExprParser::AddSubContext *ctx) override;
    antlrcpp::Any visitMulDiv(ExprParser::MulDivContext *ctx) override;
    antlrcpp::Any visitParens(ExprParser::ParensContext *ctx) override;
    antlrcpp::Any visitNumber(ExprParser::NumberContext *ctx) override;
};

#endif

