/**
 *
 * Copyright (c) 2001, Frank Bu�
 *
 * project: Formula
 * version: $Revision: 1.3 $ $Name:  $
 *
 * The Formula class is the facade class for accessing the fomula system.
 */

#ifndef FORMULA_H
#define FORMULA_H

#include "Exception.h"

using namespace std;

class Parser;

class Formula
{
public:
	Formula();
	Formula(string formula);
	~Formula();
	void setExpression(string expression) throw(SyntaxError, TooManyArgumentsError);
	void setVariable(string name, float value);
	void removeVariable(string name);
	void removeAllVariables();
	void setFunction(string name, float(*function)());
	void setFunction(string name, float(*function)(float));
	void setFunction(string name, float(*function)(float, float));
	void removeFunction(string name);
	void removeAllFunctions();
	float eval() throw(FunctionNotFound, VariableNotFound, StackUnderflow, MathError);

private:
	Parser* m_parser;
};


#endif
