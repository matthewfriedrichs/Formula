/**
 *
 * Copyright (c) 2001, Frank Bu�
 *
 * project: Formula
 * version: $Revision: 1.3 $ $Name:  $
 *
 * The Formula class is the facade class for accessing the fomula system.
 */

#include "Formula.h"
#include "Parser.h"

Formula::Formula()
{
	m_parser = new Parser("");
}

Formula::Formula(string expression)
{
	m_parser = new Parser(expression);
}

Formula::~Formula()
{
	delete m_parser;
}

void Formula::setExpression(string expression) throw(SyntaxError, TooManyArgumentsError)
{
	m_parser->setExpression(expression);
}


void Formula::setVariable(string name, float value)
{
	m_parser->setVariable(name, value);
}



void Formula::removeVariable(string name)
{
	m_parser->removeVariable(name);
}



void Formula::removeAllVariables()
{
	m_parser->removeAllVariables();
}



void Formula::setFunction(string name, float(*function)())
{
	m_parser->setFunction(name, function);
}



void Formula::setFunction(string name, float(*function)(float))
{
	m_parser->setFunction(name, function);
}



void Formula::setFunction(string name, float(*function)(float, float))
{
	m_parser->setFunction(name, function);
}



void Formula::removeFunction(string name)
{
	m_parser->removeFunction(name);
}



void Formula::removeAllFunctions()
{
	m_parser->removeAllFunctions();
}



float Formula::eval() throw(FunctionNotFound, VariableNotFound, StackUnderflow, MathError)
{
	return m_parser->eval();
}
