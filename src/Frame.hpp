#pragma once

#include <Python.h>

PyObject *py_Frame_new(PyObject *self, PyObject *args);
void py_Frame_destroy(PyObject *object);

PyObject *py_Frame_getHeight(PyObject *self, PyObject *args);
PyObject *py_Frame_getWidth(PyObject *self, PyObject *args);
PyObject *py_Frame_getData(PyObject *self, PyObject *args);