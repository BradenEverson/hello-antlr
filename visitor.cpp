#include "visitor.h"
#include <any>

antlrcpp::Any EvalVisitor::visitAddSub(ExprParser::AddSubContext *ctx) {
    auto left = std::any_cast<int>(visit(ctx->expr(0)));
    auto right = std::any_cast<int>(visit(ctx->expr(1)));
    if (ctx->PLUS()) {
        return left + right;
    } else {
        return left - right;
    }
}

antlrcpp::Any EvalVisitor::visitMulDiv(ExprParser::MulDivContext *ctx) {
    auto left = std::any_cast<int>(visit(ctx->expr(0)));
    auto right = std::any_cast<int>(visit(ctx->expr(1)));
    if (ctx->MUL()) {
        return left * right;
    } else {
        return left / right;
    }
}

antlrcpp::Any EvalVisitor::visitParens(ExprParser::ParensContext *ctx) {
    return visit(ctx->expr());
}

antlrcpp::Any EvalVisitor::visitNumber(ExprParser::NumberContext *ctx) {
    return std::stoi(ctx->NUMBER()->getText());
}

