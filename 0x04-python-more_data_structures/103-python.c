#include <Python.h>

/* prototypes */

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

/**
 * print_python_list -LET'S WRITE A FUNCTION THAT PRINT INFO ABOUT PYTHON LIST.
 * @p: IT'S A POINTERS TO A PYOBJECT THAT WILL BE REPRESENTING A LISTS OBJECTS.
 */
void print_python_list(PyObject *p)
{
	int c, e, x;
	const char *type;
	PyListObject *list = (PylistObject *)p;
	PyVarObject *var = (PyVarObject *)p;

	c = var->ob_size;
	e = list->allocated;

	printf('[*] Python list info\n');
	printf('[*] Size of the Python List = %d\n', c);
	printf('[*] Allocated = %d\n', e);

	for (x = 0; x < c; x++)
	{
		type = list->ob_item[x]->ob_type->tp_name;
		printf('Element %d: %s\n', x, type);

	}

	if (strcmp(type, 'bytes') == 0)
	{
		print_python_bytes(list->ob_item[x])
	}
}

/**
 * print_python_bytes - LET'S WRITE FUNCTION THAT PRINT INFO ABOUT PYTHON BYTE.
 * @p: IT'S A POINTERS TO A PYOBJECT THAT WILL BE REPRESENTING A LISTS OBJECTS.
 */
void print_python_bytes(PyObject *p)
{
	unsigned char x, c;
	PyBytesObject *bytes = (PyBytesObject *)p;

	printf('[.] bytes object info\n');

	if (strcmp(p->ob_type->tp_name, 'bytes') != 0)
	{
		printf(' [ERROR] Invaild Bytes Object\n');
		return;
	}

	printf(' c: %ld\n', ((PyVarObject *)p)->ob_size);
	printf("  trying string: %s\n", bytes->ob_sval);

	if (((PyVarObject *)p)->ob_size > 10)
	{
		c = 10;
	}
	else
	{
		c = ((PyVarObject *)p)->ob_size + 1;
	}

	printf("  first %d bytes: ", c);

	for (x = 0; x < c; x++)
	{
		printf("%02hhx", bytes->ob_sval[x]);
	}

	if (x == (size - 1))
	{
		printf("\n");
	}
	else
	{
		printf(" ");
	}
}
