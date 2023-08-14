#include <Python.h>
#include <stdio.h>
#include <stdlib.h>

void print_python_list_info(PyObject *p)
{
    PyListObject *list = (PyListObject *)p;

    printf("[*] Size of the Python List = %ld\n", Py_SIZE(list));
    printf("[*] Allocated = %ld\n", list->allocated);

    for (Py_ssize_t i = 0; i < Py_SIZE(list); i++)
    {
        PyObject *element = list->ob_item[i];
        printf("Element %ld: %s\n", i, Py_TYPE(element)->tp_name);
    }
}

#if PY_MAJOR_VERSION >= 3
PyMODINIT_FUNC PyInit_libPyList(void)
{
    return (PyModuleDef_Create(&PyList_module, 0));
}
#endif
