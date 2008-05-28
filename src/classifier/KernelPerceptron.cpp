/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 1999-2008 Soeren Sonnenburg
 * Copyright (C) 1999-2008 Fraunhofer Institute FIRST and Max-Planck-Society
 */

#include "classifier/KernelPerceptron.h"
#include "features/Labels.h"
#include "lib/Mathematics.h"

CKernelPerceptron::CKernelPerceptron()
: CKernelMachine()
{
}


CKernelPerceptron::~CKernelPerceptron()
{
}

bool CKernelPerceptron::train()
{
	ASSERT(labels);
	//CLabels* train_labels=labels->get_int_labels(num_train_labels);

//
//# compute output activation y = f(w x)
//# If y = t, don't change weights
//# If y != t, update the weights:
//
//w(new) = w(old) + 2 m t x
	return false;

}

bool CKernelPerceptron::load(FILE* srcfile)
{
	return false;
}

bool CKernelPerceptron::save(FILE* dstfile)
{
	return false;
}


DREAL CKernelPerceptron::classify_example(INT num)
{
	return 0;
}
