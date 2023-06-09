#include <Python.h>
#include <stdio.h>

/* prototype */
void print_python_list_info(PyObject *p);

/**
 * print_python_list_info - LETS WRITE FUCNTION.
 * THAT WILL GIVE THE  DATA OF PYLISTOBJECTIVES.
 * @p: IT'S A FUNCTIONS OF THE THE PYOBJECTIVES.
 */

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size = 0;
	int w = 0;

	if (PyList_CheckExact(p))
	{
		size = PyList_Size(p);

		printf("[*] Size of the Python List = %zd\n", size);
		printf("[*] Allocated = %lu\n",	((PyListObject *)p)->allocated);

		while (w < size)
		{
			printf("Element %d: %s\n", w, Py_TYPE(PyList_GetItem(p, w))->tp_name);
			w++;
		}
	}
}
