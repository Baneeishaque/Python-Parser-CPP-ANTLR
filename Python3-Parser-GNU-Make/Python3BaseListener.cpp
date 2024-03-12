#include "Python3BaseListener.h"

void Python3BaseListener::enterFor_stmt(Python3Parser::For_stmtContext* forCtx) {

	// Display text of for statement context
	std::cout << "For statement text: " << forCtx->getText() << std::endl;

	// Display text of expr context
	Python3Parser::ExprContext* exprCtx = forCtx->testlist()->test()[0]->or_test()[0]->and_test()[0]->not_test()[0]->comparison()->expr()[0];
	std::cout << "Expr text: " << exprCtx->getText() << std::endl;

	// Display text of atom context
	Python3Parser::AtomContext* atomCtx = exprCtx->xor_expr()[0]->and_expr()[0]->shift_expr()[0]->arith_expr()[0]->term()[0]->factor()[0]->power()->atom_expr()->atom();
	std::cout << "Atom text: " << atomCtx->getText() << std::endl;
}
