#include "antlr/ExprLexer.h"
#include "antlr/ExprParser.h"
#include "visitor.h"
#include <any>
#include <iostream>

int main() {
    std::string input;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, input);

    antlr4::ANTLRInputStream inputStream(input);
    ExprLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);

    auto tree = parser.expr();
    EvalVisitor visitor;
    int result = std::any_cast<int>(visitor.visit(tree));
    std::cout << "Result: " << result << std::endl;

    return 0;
}

