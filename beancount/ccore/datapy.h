// Export data definitions for Python.
//
// Copyright (C) 2020  Martin Blais
// License: "GNU GPLv2"

#ifndef _BEANCOUNT_CCORE_DATAPY_H_
#define _BEANCOUNT_CCORE_DATAPY_H_

#include "pybind11/pybind11.h"

namespace beancount {

// Export data types to Python.
// TODO(blais): Make this auto-generated by a custom generator for protos.
void ExportDataTypesToPython(pybind11::module& mod);

}  // namespace beancount

#endif // _BEANCOUNT_CCORE_DATAPY_H_