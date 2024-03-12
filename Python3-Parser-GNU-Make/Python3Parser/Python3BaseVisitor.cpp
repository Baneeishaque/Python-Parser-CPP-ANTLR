
#include "Python3BaseVisitor.h"

antlrcpp::Any Python3BaseVisitor::visitSuite(Python3Parser::SuiteContext* ctx) {
    return ctx->getText();
}


