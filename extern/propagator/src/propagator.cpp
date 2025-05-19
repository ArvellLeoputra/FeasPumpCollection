/**
 * \file propagator.cpp
 *
 * @author Domenico Salvagnin dominiqs@gmail.com
 * 2008-2012
 */

#include "propagator/propagator.h"

using namespace dominiqs;

const char* PropagatorStateName[] = {
	"unknown",
	"entailed",
	"strong entailed",
	"infeasible"
};

PropagatorFactory::PropagatorFactory() : numCreated(0) {}  // default constructor

void PropagatorFactory::reset()
{
	numCreated = 0;
}
