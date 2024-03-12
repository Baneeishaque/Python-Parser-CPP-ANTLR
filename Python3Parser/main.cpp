#include <iostream>

#include "antlr4-runtime.h"
#include "Python3Lexer.h"
#include "Python3Parser.h"
#include "Python3BaseListener.h"
#include "Python3BaseVisitor.h"

#include "tree/ParseTreeWalker.h"

int main(int argc, const char* argv[]) {
    
    // Create an input file stream
    std::ifstream infile("test.py");

    // Create an ANTLR stream from the file stream
    antlr4::ANTLRInputStream input(infile);

    // Create a lexer from the ANTLR stream
    Python3Lexer lexer(&input);

    // Create a token stream from the lexer
    antlr4::CommonTokenStream tokens(&lexer);

    // Create a parser from the token stream
    Python3Parser parser(&tokens);    

    // Associate a visitor with the suite context
    Python3BaseVisitor visitor;
    std::string str = visitor.visitSuite(parser.suite()).as<std::string>();
    std::cout << "Visitor output: " << str << std::endl;

    // Associate a listener with the file_input context
    std::cout << "Listener output" << std::endl;
    antlr4::tree::ParseTreeWalker walker;
    antlr4::ParserRuleContext* fileInput = parser.file_input();
    Python3BaseListener* listener = new Python3BaseListener();
    walker.walk(listener, fileInput);

    return 0;
}