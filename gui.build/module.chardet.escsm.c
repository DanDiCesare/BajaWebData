/* Generated code for Python module 'chardet.escsm'
 * created by Nuitka version 0.6.6
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_chardet$escsm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$escsm;
PyDictObject *moduledict_chardet$escsm;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_HZ_SM_MODEL;
static PyObject *const_str_plain_ISO2022CN_CHAR_LEN_TABLE;
static PyObject *const_str_plain_ISO2022KR_CLS;
static PyObject *const_str_plain_ISO2022JP_CLS;
extern PyObject *const_str_plain_Japanese;
static PyObject *const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple;
extern PyObject *const_str_plain_state_table;
static PyObject *const_str_plain_ISO2022CN_CLS;
extern PyObject *const_str_plain_ISO2022JP_SM_MODEL;
extern PyObject *const_str_plain_ISO2022CN_SM_MODEL;
extern PyObject *const_str_plain_class_factor;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde;
extern PyObject *const_str_plain_Korean;
extern PyObject *const_tuple_str_plain_MachineState_tuple;
static PyObject *const_str_plain_ISO2022JP_CHAR_LEN_TABLE;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_START;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_enums;
static PyObject *const_str_plain_HZ_ST;
static PyObject *const_str_digest_bd4a3823b6f1c241acc38b88f786e152;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_pos_9;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_class_table;
static PyObject *const_str_digest_63bfaeb074d98b627aa3253727ce36ed;
extern PyObject *const_str_plain_Chinese;
extern PyObject *const_str_plain_char_len_table;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_b563cc4e87000d93652e0cd29e7e2700;
extern PyObject *const_int_pos_6;
static PyObject *const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_ITS_ME;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple;
static PyObject *const_str_plain_HZ_CLS;
static PyObject *const_str_plain_ISO2022KR_ST;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_ISO2022CN_ST;
extern PyObject *const_str_plain_MachineState;
extern PyObject *const_str_plain_ISO2022KR_SM_MODEL;
static PyObject *const_str_plain_ISO2022JP_ST;
static PyObject *const_str_digest_90c42f6e30c6f09ce540f2a252bf7819;
static PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
static PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
static PyObject *const_str_plain_ISO2022KR_CHAR_LEN_TABLE;
static PyObject *const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e;
static PyObject *const_str_plain_HZ_CHAR_LEN_TABLE;
static PyObject *const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple;
static PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_ISO2022CN_CHAR_LEN_TABLE = UNSTREAM_STRING(&constant_bin[ 291221 ], 24, 1);
    const_str_plain_ISO2022KR_CLS = UNSTREAM_STRING(&constant_bin[ 16024 ], 13, 1);
    const_str_plain_ISO2022JP_CLS = UNSTREAM_STRING(&constant_bin[ 15989 ], 13, 1);
    const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 291245 ], 1285);
    const_str_plain_ISO2022CN_CLS = UNSTREAM_STRING(&constant_bin[ 15954 ], 13, 1);
    const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde = UNSTREAM_STRING(&constant_bin[ 292530 ], 11, 0);
    const_str_plain_ISO2022JP_CHAR_LEN_TABLE = UNSTREAM_STRING(&constant_bin[ 292541 ], 24, 1);
    const_str_plain_HZ_ST = UNSTREAM_STRING(&constant_bin[ 292565 ], 5, 1);
    const_str_digest_bd4a3823b6f1c241acc38b88f786e152 = UNSTREAM_STRING(&constant_bin[ 292570 ], 22, 0);
    const_str_digest_63bfaeb074d98b627aa3253727ce36ed = UNSTREAM_STRING(&constant_bin[ 292592 ], 10, 0);
    const_str_digest_b563cc4e87000d93652e0cd29e7e2700 = UNSTREAM_STRING(&constant_bin[ 292602 ], 11, 0);
    const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 292613 ], 1285);
    const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 293898 ], 1285);
    const_str_plain_HZ_CLS = UNSTREAM_STRING(&constant_bin[ 15926 ], 6, 1);
    const_str_plain_ISO2022KR_ST = UNSTREAM_STRING(&constant_bin[ 295183 ], 12, 1);
    const_str_plain_ISO2022CN_ST = UNSTREAM_STRING(&constant_bin[ 295195 ], 12, 1);
    const_str_plain_ISO2022JP_ST = UNSTREAM_STRING(&constant_bin[ 295207 ], 12, 1);
    const_str_digest_90c42f6e30c6f09ce540f2a252bf7819 = UNSTREAM_STRING(&constant_bin[ 295219 ], 16, 0);
    const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 0, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 1, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 2, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 3, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 4, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 5, const_int_0); Py_INCREF(const_int_0);
    const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 0, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 1, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 2, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 3, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 4, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 5, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 6, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 7, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 8, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 9, const_int_0); Py_INCREF(const_int_0);
    const_str_plain_ISO2022KR_CHAR_LEN_TABLE = UNSTREAM_STRING(&constant_bin[ 295235 ], 24, 1);
    const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e = UNSTREAM_STRING(&constant_bin[ 295259 ], 11, 0);
    const_str_plain_HZ_CHAR_LEN_TABLE = UNSTREAM_STRING(&constant_bin[ 295270 ], 17, 1);
    const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 295287 ], 1285);
    const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 0, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 1, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 2, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 3, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 4, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 5, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 6, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 7, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple, 8, const_int_0); Py_INCREF(const_int_0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$escsm(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_20f0d7d1a1773ea8108b02e7d2736c77;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_90c42f6e30c6f09ce540f2a252bf7819);
    codeobj_20f0d7d1a1773ea8108b02e7d2736c77 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_bd4a3823b6f1c241acc38b88f786e152, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$escsm =
{
    PyModuleDef_HEAD_INIT,
    NULL,                /* m_name, filled later */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_chardet$escsm[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyErr_Format(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_chardet$escsm;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyErr_Format(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_chardet$escsm) || offset < 0) {
        PyErr_Format(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_chardet$escsm[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_chardet$escsm,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_chardet$escsm(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$escsm;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.escsm: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.escsm: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.escsm: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$escsm\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$escsm = Py_InitModule4(
        module_full_name,        // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    mdef_chardet$escsm.m_name = module_full_name;
    module_chardet$escsm = PyModule_Create(&mdef_chardet$escsm);
#endif

    moduledict_chardet$escsm = MODULE_DICT(module_chardet$escsm);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL)
        {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SetItem(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SetItem(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet$escsm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$escsm,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$escsm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$escsm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$escsm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$escsm);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$escsm);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___name__),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF(module_spec_class);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_20f0d7d1a1773ea8108b02e7d2736c77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_20f0d7d1a1773ea8108b02e7d2736c77 = MAKE_MODULE_FRAME(codeobj_20f0d7d1a1773ea8108b02e7d2736c77, module_chardet$escsm);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_20f0d7d1a1773ea8108b02e7d2736c77);
    assert(Py_REFCNT(frame_20f0d7d1a1773ea8108b02e7d2736c77) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_enums;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$escsm;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_MachineState_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_20f0d7d1a1773ea8108b02e7d2736c77->m_frame.f_lineno = 28;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_MachineState);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_5cc0bb764b46a8071c8c3bd7abd18f73_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_CLS, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_source_name_28;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_source_name_31;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_source_name_32;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_source_name_33;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_source_name_34;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_source_name_35;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyTuple_New(48);
        PyTuple_SET_ITEM(tmp_assign_source_5, 0, tmp_tuple_element_1);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_3;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 2, tmp_tuple_element_1);
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 3, tmp_tuple_element_1);
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 4, tmp_tuple_element_1);
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 5, tmp_tuple_element_1);
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 6, tmp_tuple_element_1);
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 7, tmp_tuple_element_1);
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_8 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_8;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 8, tmp_tuple_element_1);
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_9;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 9, tmp_tuple_element_1);
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_10;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 10, tmp_tuple_element_1);
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_11;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 11, tmp_tuple_element_1);
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_12;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_ITS_ME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 12, tmp_tuple_element_1);
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_13;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_ITS_ME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 13, tmp_tuple_element_1);
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_14 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_14;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_ITS_ME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 14, tmp_tuple_element_1);
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_15 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_15;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_ITS_ME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 15, tmp_tuple_element_1);
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_16 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_16;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_ITS_ME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 16, tmp_tuple_element_1);
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_17 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_17;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_ITS_ME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 17, tmp_tuple_element_1);
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_18 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_18;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 18, tmp_tuple_element_1);
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_19 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_19;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 19, tmp_tuple_element_1);
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_20 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_20;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 20, tmp_tuple_element_1);
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_21 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_21;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 21, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 22, tmp_tuple_element_1);
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_22 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_22;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 23, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_5;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 24, tmp_tuple_element_1);
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_23 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_23;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 25, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_6;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 26, tmp_tuple_element_1);
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_24 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_24;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 27, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_5;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 28, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_5;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 29, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 30, tmp_tuple_element_1);
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_25 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_25;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 31, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 32, tmp_tuple_element_1);
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_26 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_26;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 33, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 34, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 35, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 36, tmp_tuple_element_1);
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_27 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_27;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 37, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 38, tmp_tuple_element_1);
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_28 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }

        tmp_source_name_28 = tmp_mvar_value_28;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_ERROR);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 39, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_5, 40, tmp_tuple_element_1);
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_29 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_29;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_ITS_ME);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 41, tmp_tuple_element_1);
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_30 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_30 = tmp_mvar_value_30;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 42, tmp_tuple_element_1);
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_31 == NULL)) {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_31 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_31 = tmp_mvar_value_31;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 43, tmp_tuple_element_1);
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_32 == NULL)) {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_32 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = tmp_mvar_value_32;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 44, tmp_tuple_element_1);
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_33 == NULL)) {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_33 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_33 = tmp_mvar_value_33;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_33, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 45, tmp_tuple_element_1);
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_34 == NULL)) {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_34 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_34 = tmp_mvar_value_34;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_34, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 46, tmp_tuple_element_1);
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_35 == NULL)) {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_35 == NULL) {
            Py_DECREF(tmp_assign_source_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_35 = tmp_mvar_value_35;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_35, const_str_plain_START);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_5);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_5, 47, tmp_tuple_element_1);
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_ST, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_CHAR_LEN_TABLE, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_CLS);

        if (unlikely(tmp_mvar_value_36 == NULL)) {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HZ_CLS);
        }

        if (tmp_mvar_value_36 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15920 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = tmp_mvar_value_36;
        tmp_dict_key_1 = const_str_plain_class_table;
        tmp_assign_source_7 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_value_2 = const_int_pos_6;
        tmp_dict_key_2 = const_str_plain_class_factor;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_ST);

        if (unlikely(tmp_mvar_value_37 == NULL)) {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HZ_ST);
        }

        CHECK_OBJECT(tmp_mvar_value_37);
        tmp_dict_value_3 = tmp_mvar_value_37;
        tmp_dict_key_3 = const_str_plain_state_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_CHAR_LEN_TABLE);

        if (unlikely(tmp_mvar_value_38 == NULL)) {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HZ_CHAR_LEN_TABLE);
        }

        CHECK_OBJECT(tmp_mvar_value_38);
        tmp_dict_value_4 = tmp_mvar_value_38;
        tmp_dict_key_4 = const_str_plain_char_len_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_value_5 = const_str_digest_63bfaeb074d98b627aa3253727ce36ed;
        tmp_dict_key_5 = const_str_plain_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_value_6 = const_str_plain_Chinese;
        tmp_dict_key_6 = const_str_plain_language;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_HZ_SM_MODEL, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_tuple_d0c1ed4ef96187d2fdeff4f4a0885eb4_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_CLS, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_36;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_source_name_37;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_source_name_38;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_source_name_39;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_source_name_40;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_source_name_41;
        PyObject *tmp_mvar_value_44;
        PyObject *tmp_source_name_42;
        PyObject *tmp_mvar_value_45;
        PyObject *tmp_source_name_43;
        PyObject *tmp_mvar_value_46;
        PyObject *tmp_source_name_44;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_source_name_45;
        PyObject *tmp_mvar_value_48;
        PyObject *tmp_source_name_46;
        PyObject *tmp_mvar_value_49;
        PyObject *tmp_source_name_47;
        PyObject *tmp_mvar_value_50;
        PyObject *tmp_source_name_48;
        PyObject *tmp_mvar_value_51;
        PyObject *tmp_source_name_49;
        PyObject *tmp_mvar_value_52;
        PyObject *tmp_source_name_50;
        PyObject *tmp_mvar_value_53;
        PyObject *tmp_source_name_51;
        PyObject *tmp_mvar_value_54;
        PyObject *tmp_source_name_52;
        PyObject *tmp_mvar_value_55;
        PyObject *tmp_source_name_53;
        PyObject *tmp_mvar_value_56;
        PyObject *tmp_source_name_54;
        PyObject *tmp_mvar_value_57;
        PyObject *tmp_source_name_55;
        PyObject *tmp_mvar_value_58;
        PyObject *tmp_source_name_56;
        PyObject *tmp_mvar_value_59;
        PyObject *tmp_source_name_57;
        PyObject *tmp_mvar_value_60;
        PyObject *tmp_source_name_58;
        PyObject *tmp_mvar_value_61;
        PyObject *tmp_source_name_59;
        PyObject *tmp_mvar_value_62;
        PyObject *tmp_source_name_60;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_source_name_61;
        PyObject *tmp_mvar_value_64;
        PyObject *tmp_source_name_62;
        PyObject *tmp_mvar_value_65;
        PyObject *tmp_source_name_63;
        PyObject *tmp_mvar_value_66;
        PyObject *tmp_source_name_64;
        PyObject *tmp_mvar_value_67;
        PyObject *tmp_source_name_65;
        PyObject *tmp_mvar_value_68;
        PyObject *tmp_source_name_66;
        PyObject *tmp_mvar_value_69;
        PyObject *tmp_source_name_67;
        PyObject *tmp_mvar_value_70;
        PyObject *tmp_source_name_68;
        PyObject *tmp_mvar_value_71;
        PyObject *tmp_source_name_69;
        PyObject *tmp_mvar_value_72;
        PyObject *tmp_source_name_70;
        PyObject *tmp_mvar_value_73;
        PyObject *tmp_source_name_71;
        PyObject *tmp_mvar_value_74;
        PyObject *tmp_source_name_72;
        PyObject *tmp_mvar_value_75;
        PyObject *tmp_source_name_73;
        PyObject *tmp_mvar_value_76;
        PyObject *tmp_source_name_74;
        PyObject *tmp_mvar_value_77;
        PyObject *tmp_source_name_75;
        PyObject *tmp_mvar_value_78;
        PyObject *tmp_source_name_76;
        PyObject *tmp_mvar_value_79;
        PyObject *tmp_source_name_77;
        PyObject *tmp_mvar_value_80;
        PyObject *tmp_source_name_78;
        PyObject *tmp_mvar_value_81;
        PyObject *tmp_source_name_79;
        PyObject *tmp_mvar_value_82;
        PyObject *tmp_source_name_80;
        PyObject *tmp_mvar_value_83;
        PyObject *tmp_source_name_81;
        PyObject *tmp_mvar_value_84;
        PyObject *tmp_source_name_82;
        PyObject *tmp_mvar_value_85;
        PyObject *tmp_source_name_83;
        PyObject *tmp_mvar_value_86;
        PyObject *tmp_source_name_84;
        PyObject *tmp_mvar_value_87;
        PyObject *tmp_source_name_85;
        PyObject *tmp_mvar_value_88;
        PyObject *tmp_source_name_86;
        PyObject *tmp_mvar_value_89;
        PyObject *tmp_source_name_87;
        PyObject *tmp_mvar_value_90;
        PyObject *tmp_source_name_88;
        PyObject *tmp_mvar_value_91;
        PyObject *tmp_source_name_89;
        PyObject *tmp_mvar_value_92;
        PyObject *tmp_source_name_90;
        PyObject *tmp_mvar_value_93;
        PyObject *tmp_source_name_91;
        PyObject *tmp_mvar_value_94;
        PyObject *tmp_source_name_92;
        PyObject *tmp_mvar_value_95;
        PyObject *tmp_source_name_93;
        PyObject *tmp_mvar_value_96;
        PyObject *tmp_source_name_94;
        PyObject *tmp_mvar_value_97;
        PyObject *tmp_source_name_95;
        PyObject *tmp_mvar_value_98;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_39 == NULL)) {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_39 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_36 = tmp_mvar_value_39;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_36, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = PyTuple_New(64);
        PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = const_int_pos_3;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_9, 1, tmp_tuple_element_2);
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_40 == NULL)) {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_40 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_37 = tmp_mvar_value_40;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_37, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 2, tmp_tuple_element_2);
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_41 == NULL)) {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_41 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_38 = tmp_mvar_value_41;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_38, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 3, tmp_tuple_element_2);
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_42 == NULL)) {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_42 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_39 = tmp_mvar_value_42;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_39, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 4, tmp_tuple_element_2);
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_43 == NULL)) {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_43 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_40 = tmp_mvar_value_43;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_40, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 5, tmp_tuple_element_2);
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_44 == NULL)) {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_44 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_41 = tmp_mvar_value_44;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_41, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 6, tmp_tuple_element_2);
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_45 == NULL)) {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_45 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_42 = tmp_mvar_value_45;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_42, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 7, tmp_tuple_element_2);
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_46 == NULL)) {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_46 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_43 = tmp_mvar_value_46;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_43, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 8, tmp_tuple_element_2);
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_47 == NULL)) {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_47 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_44 = tmp_mvar_value_47;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_44, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 9, tmp_tuple_element_2);
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_48 == NULL)) {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_48 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_45 = tmp_mvar_value_48;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_45, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 10, tmp_tuple_element_2);
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_49 == NULL)) {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_49 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_46 = tmp_mvar_value_49;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_46, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 11, tmp_tuple_element_2);
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_50 == NULL)) {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_50 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_47 = tmp_mvar_value_50;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_47, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 12, tmp_tuple_element_2);
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_51 == NULL)) {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_51 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_48 = tmp_mvar_value_51;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_48, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 13, tmp_tuple_element_2);
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_52 == NULL)) {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_52 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_49 = tmp_mvar_value_52;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_49, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 14, tmp_tuple_element_2);
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_53 == NULL)) {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_53 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_50 = tmp_mvar_value_53;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_50, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 15, tmp_tuple_element_2);
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_54 == NULL)) {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_54 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_51 = tmp_mvar_value_54;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_51, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 16, tmp_tuple_element_2);
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_55 == NULL)) {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_55 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_52 = tmp_mvar_value_55;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_52, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 17, tmp_tuple_element_2);
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_56 == NULL)) {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_56 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_53 = tmp_mvar_value_56;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_53, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 18, tmp_tuple_element_2);
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_57 == NULL)) {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_57 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_54 = tmp_mvar_value_57;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_54, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 19, tmp_tuple_element_2);
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_58 == NULL)) {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_58 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_55 = tmp_mvar_value_58;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_55, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 20, tmp_tuple_element_2);
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_59 == NULL)) {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_59 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_56 = tmp_mvar_value_59;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_56, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 21, tmp_tuple_element_2);
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_60 == NULL)) {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_60 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_57 = tmp_mvar_value_60;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_57, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 22, tmp_tuple_element_2);
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_61 == NULL)) {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_61 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_58 = tmp_mvar_value_61;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_58, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 23, tmp_tuple_element_2);
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_62 == NULL)) {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_62 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_59 = tmp_mvar_value_62;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_59, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 24, tmp_tuple_element_2);
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_63 == NULL)) {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_63 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_60 = tmp_mvar_value_63;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_60, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 25, tmp_tuple_element_2);
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_64 == NULL)) {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_64 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_61 = tmp_mvar_value_64;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_61, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 26, tmp_tuple_element_2);
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_65 == NULL)) {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_65 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_62 = tmp_mvar_value_65;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_62, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 27, tmp_tuple_element_2);
        tmp_mvar_value_66 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_66 == NULL)) {
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_66 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_63 = tmp_mvar_value_66;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_63, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 28, tmp_tuple_element_2);
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_67 == NULL)) {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_67 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_64 = tmp_mvar_value_67;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_64, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 29, tmp_tuple_element_2);
        tmp_tuple_element_2 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_9, 30, tmp_tuple_element_2);
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_68 == NULL)) {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_68 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_65 = tmp_mvar_value_68;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_65, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 31, tmp_tuple_element_2);
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_69 == NULL)) {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_69 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_66 = tmp_mvar_value_69;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_66, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 32, tmp_tuple_element_2);
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_70 == NULL)) {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_70 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_67 = tmp_mvar_value_70;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_67, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 33, tmp_tuple_element_2);
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_71 == NULL)) {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_71 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_68 = tmp_mvar_value_71;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_68, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 34, tmp_tuple_element_2);
        tmp_mvar_value_72 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_72 == NULL)) {
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_72 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_69 = tmp_mvar_value_72;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_69, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 35, tmp_tuple_element_2);
        tmp_mvar_value_73 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_73 == NULL)) {
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_73 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_70 = tmp_mvar_value_73;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_70, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 36, tmp_tuple_element_2);
        tmp_mvar_value_74 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_74 == NULL)) {
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_74 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_71 = tmp_mvar_value_74;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_71, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 37, tmp_tuple_element_2);
        tmp_mvar_value_75 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_75 == NULL)) {
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_75 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_72 = tmp_mvar_value_75;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_72, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 38, tmp_tuple_element_2);
        tmp_mvar_value_76 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_76 == NULL)) {
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_76 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_73 = tmp_mvar_value_76;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_73, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 39, tmp_tuple_element_2);
        tmp_tuple_element_2 = const_int_pos_5;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_9, 40, tmp_tuple_element_2);
        tmp_tuple_element_2 = const_int_pos_6;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_9, 41, tmp_tuple_element_2);
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_77 == NULL)) {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_77 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_74 = tmp_mvar_value_77;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_74, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 42, tmp_tuple_element_2);
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_78 == NULL)) {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_78 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_75 = tmp_mvar_value_78;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_75, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 43, tmp_tuple_element_2);
        tmp_mvar_value_79 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_79 == NULL)) {
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_79 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_76 = tmp_mvar_value_79;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_76, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 44, tmp_tuple_element_2);
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_80 == NULL)) {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_80 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_77 = tmp_mvar_value_80;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_77, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 45, tmp_tuple_element_2);
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_81 == NULL)) {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_81 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_78 = tmp_mvar_value_81;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_78, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 46, tmp_tuple_element_2);
        tmp_mvar_value_82 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_82 == NULL)) {
            tmp_mvar_value_82 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_82 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_79 = tmp_mvar_value_82;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_79, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 47, tmp_tuple_element_2);
        tmp_mvar_value_83 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_83 == NULL)) {
            tmp_mvar_value_83 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_83 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_80 = tmp_mvar_value_83;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_80, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 48, tmp_tuple_element_2);
        tmp_mvar_value_84 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_84 == NULL)) {
            tmp_mvar_value_84 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_84 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_81 = tmp_mvar_value_84;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_81, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 49, tmp_tuple_element_2);
        tmp_mvar_value_85 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_85 == NULL)) {
            tmp_mvar_value_85 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_85 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_82 = tmp_mvar_value_85;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_82, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 50, tmp_tuple_element_2);
        tmp_mvar_value_86 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_86 == NULL)) {
            tmp_mvar_value_86 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_86 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_83 = tmp_mvar_value_86;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_83, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 51, tmp_tuple_element_2);
        tmp_mvar_value_87 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_87 == NULL)) {
            tmp_mvar_value_87 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_87 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_84 = tmp_mvar_value_87;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_84, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 52, tmp_tuple_element_2);
        tmp_mvar_value_88 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_88 == NULL)) {
            tmp_mvar_value_88 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_88 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_85 = tmp_mvar_value_88;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_85, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 53, tmp_tuple_element_2);
        tmp_mvar_value_89 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_89 == NULL)) {
            tmp_mvar_value_89 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_89 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_86 = tmp_mvar_value_89;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_86, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 54, tmp_tuple_element_2);
        tmp_mvar_value_90 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_90 == NULL)) {
            tmp_mvar_value_90 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_90 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_87 = tmp_mvar_value_90;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_87, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 55, tmp_tuple_element_2);
        tmp_mvar_value_91 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_91 == NULL)) {
            tmp_mvar_value_91 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_91 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_88 = tmp_mvar_value_91;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_88, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 56, tmp_tuple_element_2);
        tmp_mvar_value_92 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_92 == NULL)) {
            tmp_mvar_value_92 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_92 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_89 = tmp_mvar_value_92;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_89, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 57, tmp_tuple_element_2);
        tmp_mvar_value_93 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_93 == NULL)) {
            tmp_mvar_value_93 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_93 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_90 = tmp_mvar_value_93;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_90, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 58, tmp_tuple_element_2);
        tmp_mvar_value_94 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_94 == NULL)) {
            tmp_mvar_value_94 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_94 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_91 = tmp_mvar_value_94;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_91, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 59, tmp_tuple_element_2);
        tmp_mvar_value_95 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_95 == NULL)) {
            tmp_mvar_value_95 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_95 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_92 = tmp_mvar_value_95;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_92, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 60, tmp_tuple_element_2);
        tmp_mvar_value_96 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_96 == NULL)) {
            tmp_mvar_value_96 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_96 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_93 = tmp_mvar_value_96;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_93, const_str_plain_ITS_ME);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 61, tmp_tuple_element_2);
        tmp_mvar_value_97 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_97 == NULL)) {
            tmp_mvar_value_97 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_97 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_94 = tmp_mvar_value_97;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_94, const_str_plain_ERROR);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 62, tmp_tuple_element_2);
        tmp_mvar_value_98 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_98 == NULL)) {
            tmp_mvar_value_98 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_98 == NULL) {
            Py_DECREF(tmp_assign_source_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_95 = tmp_mvar_value_98;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_95, const_str_plain_START);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_9);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_9, 63, tmp_tuple_element_2);
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_ST, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_CHAR_LEN_TABLE, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_99;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_mvar_value_100;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_mvar_value_101;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_mvar_value_99 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_CLS);

        if (unlikely(tmp_mvar_value_99 == NULL)) {
            tmp_mvar_value_99 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022CN_CLS);
        }

        if (tmp_mvar_value_99 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15948 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_7 = tmp_mvar_value_99;
        tmp_dict_key_7 = const_str_plain_class_table;
        tmp_assign_source_11 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_value_8 = const_int_pos_9;
        tmp_dict_key_8 = const_str_plain_class_factor;
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_mvar_value_100 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_ST);

        if (unlikely(tmp_mvar_value_100 == NULL)) {
            tmp_mvar_value_100 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022CN_ST);
        }

        CHECK_OBJECT(tmp_mvar_value_100);
        tmp_dict_value_9 = tmp_mvar_value_100;
        tmp_dict_key_9 = const_str_plain_state_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_mvar_value_101 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_CHAR_LEN_TABLE);

        if (unlikely(tmp_mvar_value_101 == NULL)) {
            tmp_mvar_value_101 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022CN_CHAR_LEN_TABLE);
        }

        CHECK_OBJECT(tmp_mvar_value_101);
        tmp_dict_value_10 = tmp_mvar_value_101;
        tmp_dict_key_10 = const_str_plain_char_len_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_value_11 = const_str_digest_14d38da3e7e6ea8d316a25a29d33fc5e;
        tmp_dict_key_11 = const_str_plain_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_value_12 = const_str_plain_Chinese;
        tmp_dict_key_12 = const_str_plain_language;
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022CN_SM_MODEL, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_tuple_9f1cf13b115a0dbece9a4213c7d83f55_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_CLS, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_96;
        PyObject *tmp_mvar_value_102;
        PyObject *tmp_source_name_97;
        PyObject *tmp_mvar_value_103;
        PyObject *tmp_source_name_98;
        PyObject *tmp_mvar_value_104;
        PyObject *tmp_source_name_99;
        PyObject *tmp_mvar_value_105;
        PyObject *tmp_source_name_100;
        PyObject *tmp_mvar_value_106;
        PyObject *tmp_source_name_101;
        PyObject *tmp_mvar_value_107;
        PyObject *tmp_source_name_102;
        PyObject *tmp_mvar_value_108;
        PyObject *tmp_source_name_103;
        PyObject *tmp_mvar_value_109;
        PyObject *tmp_source_name_104;
        PyObject *tmp_mvar_value_110;
        PyObject *tmp_source_name_105;
        PyObject *tmp_mvar_value_111;
        PyObject *tmp_source_name_106;
        PyObject *tmp_mvar_value_112;
        PyObject *tmp_source_name_107;
        PyObject *tmp_mvar_value_113;
        PyObject *tmp_source_name_108;
        PyObject *tmp_mvar_value_114;
        PyObject *tmp_source_name_109;
        PyObject *tmp_mvar_value_115;
        PyObject *tmp_source_name_110;
        PyObject *tmp_mvar_value_116;
        PyObject *tmp_source_name_111;
        PyObject *tmp_mvar_value_117;
        PyObject *tmp_source_name_112;
        PyObject *tmp_mvar_value_118;
        PyObject *tmp_source_name_113;
        PyObject *tmp_mvar_value_119;
        PyObject *tmp_source_name_114;
        PyObject *tmp_mvar_value_120;
        PyObject *tmp_source_name_115;
        PyObject *tmp_mvar_value_121;
        PyObject *tmp_source_name_116;
        PyObject *tmp_mvar_value_122;
        PyObject *tmp_source_name_117;
        PyObject *tmp_mvar_value_123;
        PyObject *tmp_source_name_118;
        PyObject *tmp_mvar_value_124;
        PyObject *tmp_source_name_119;
        PyObject *tmp_mvar_value_125;
        PyObject *tmp_source_name_120;
        PyObject *tmp_mvar_value_126;
        PyObject *tmp_source_name_121;
        PyObject *tmp_mvar_value_127;
        PyObject *tmp_source_name_122;
        PyObject *tmp_mvar_value_128;
        PyObject *tmp_source_name_123;
        PyObject *tmp_mvar_value_129;
        PyObject *tmp_source_name_124;
        PyObject *tmp_mvar_value_130;
        PyObject *tmp_source_name_125;
        PyObject *tmp_mvar_value_131;
        PyObject *tmp_source_name_126;
        PyObject *tmp_mvar_value_132;
        PyObject *tmp_source_name_127;
        PyObject *tmp_mvar_value_133;
        PyObject *tmp_source_name_128;
        PyObject *tmp_mvar_value_134;
        PyObject *tmp_source_name_129;
        PyObject *tmp_mvar_value_135;
        PyObject *tmp_source_name_130;
        PyObject *tmp_mvar_value_136;
        PyObject *tmp_source_name_131;
        PyObject *tmp_mvar_value_137;
        PyObject *tmp_source_name_132;
        PyObject *tmp_mvar_value_138;
        PyObject *tmp_source_name_133;
        PyObject *tmp_mvar_value_139;
        PyObject *tmp_source_name_134;
        PyObject *tmp_mvar_value_140;
        PyObject *tmp_source_name_135;
        PyObject *tmp_mvar_value_141;
        PyObject *tmp_source_name_136;
        PyObject *tmp_mvar_value_142;
        PyObject *tmp_source_name_137;
        PyObject *tmp_mvar_value_143;
        PyObject *tmp_source_name_138;
        PyObject *tmp_mvar_value_144;
        PyObject *tmp_source_name_139;
        PyObject *tmp_mvar_value_145;
        PyObject *tmp_source_name_140;
        PyObject *tmp_mvar_value_146;
        PyObject *tmp_source_name_141;
        PyObject *tmp_mvar_value_147;
        PyObject *tmp_source_name_142;
        PyObject *tmp_mvar_value_148;
        PyObject *tmp_source_name_143;
        PyObject *tmp_mvar_value_149;
        PyObject *tmp_source_name_144;
        PyObject *tmp_mvar_value_150;
        PyObject *tmp_source_name_145;
        PyObject *tmp_mvar_value_151;
        PyObject *tmp_source_name_146;
        PyObject *tmp_mvar_value_152;
        PyObject *tmp_source_name_147;
        PyObject *tmp_mvar_value_153;
        PyObject *tmp_source_name_148;
        PyObject *tmp_mvar_value_154;
        PyObject *tmp_source_name_149;
        PyObject *tmp_mvar_value_155;
        PyObject *tmp_source_name_150;
        PyObject *tmp_mvar_value_156;
        PyObject *tmp_source_name_151;
        PyObject *tmp_mvar_value_157;
        PyObject *tmp_source_name_152;
        PyObject *tmp_mvar_value_158;
        PyObject *tmp_source_name_153;
        PyObject *tmp_mvar_value_159;
        PyObject *tmp_source_name_154;
        PyObject *tmp_mvar_value_160;
        PyObject *tmp_source_name_155;
        PyObject *tmp_mvar_value_161;
        PyObject *tmp_source_name_156;
        PyObject *tmp_mvar_value_162;
        PyObject *tmp_source_name_157;
        PyObject *tmp_mvar_value_163;
        PyObject *tmp_source_name_158;
        PyObject *tmp_mvar_value_164;
        PyObject *tmp_source_name_159;
        PyObject *tmp_mvar_value_165;
        PyObject *tmp_source_name_160;
        PyObject *tmp_mvar_value_166;
        PyObject *tmp_source_name_161;
        PyObject *tmp_mvar_value_167;
        PyObject *tmp_source_name_162;
        PyObject *tmp_mvar_value_168;
        PyObject *tmp_source_name_163;
        PyObject *tmp_mvar_value_169;
        tmp_mvar_value_102 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_102 == NULL)) {
            tmp_mvar_value_102 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_102 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_96 = tmp_mvar_value_102;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_96, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = PyTuple_New(72);
        PyTuple_SET_ITEM(tmp_assign_source_13, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_int_pos_3;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_assign_source_13, 1, tmp_tuple_element_3);
        tmp_mvar_value_103 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_103 == NULL)) {
            tmp_mvar_value_103 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_103 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_97 = tmp_mvar_value_103;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_97, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 2, tmp_tuple_element_3);
        tmp_mvar_value_104 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_104 == NULL)) {
            tmp_mvar_value_104 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_104 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_98 = tmp_mvar_value_104;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_98, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 3, tmp_tuple_element_3);
        tmp_mvar_value_105 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_105 == NULL)) {
            tmp_mvar_value_105 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_105 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_99 = tmp_mvar_value_105;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_99, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 4, tmp_tuple_element_3);
        tmp_mvar_value_106 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_106 == NULL)) {
            tmp_mvar_value_106 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_106 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_100 = tmp_mvar_value_106;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_100, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 5, tmp_tuple_element_3);
        tmp_mvar_value_107 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_107 == NULL)) {
            tmp_mvar_value_107 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_107 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_101 = tmp_mvar_value_107;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_101, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 6, tmp_tuple_element_3);
        tmp_mvar_value_108 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_108 == NULL)) {
            tmp_mvar_value_108 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_108 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_102 = tmp_mvar_value_108;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_102, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 7, tmp_tuple_element_3);
        tmp_mvar_value_109 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_109 == NULL)) {
            tmp_mvar_value_109 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_109 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_103 = tmp_mvar_value_109;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_103, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 8, tmp_tuple_element_3);
        tmp_mvar_value_110 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_110 == NULL)) {
            tmp_mvar_value_110 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_110 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_104 = tmp_mvar_value_110;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_104, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 9, tmp_tuple_element_3);
        tmp_mvar_value_111 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_111 == NULL)) {
            tmp_mvar_value_111 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_111 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_105 = tmp_mvar_value_111;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_105, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 10, tmp_tuple_element_3);
        tmp_mvar_value_112 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_112 == NULL)) {
            tmp_mvar_value_112 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_112 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_106 = tmp_mvar_value_112;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_106, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 11, tmp_tuple_element_3);
        tmp_mvar_value_113 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_113 == NULL)) {
            tmp_mvar_value_113 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_113 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_107 = tmp_mvar_value_113;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_107, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 12, tmp_tuple_element_3);
        tmp_mvar_value_114 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_114 == NULL)) {
            tmp_mvar_value_114 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_114 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_108 = tmp_mvar_value_114;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_108, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 13, tmp_tuple_element_3);
        tmp_mvar_value_115 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_115 == NULL)) {
            tmp_mvar_value_115 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_115 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_109 = tmp_mvar_value_115;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_109, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 14, tmp_tuple_element_3);
        tmp_mvar_value_116 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_116 == NULL)) {
            tmp_mvar_value_116 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_116 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_110 = tmp_mvar_value_116;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_110, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 15, tmp_tuple_element_3);
        tmp_mvar_value_117 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_117 == NULL)) {
            tmp_mvar_value_117 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_117 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_111 = tmp_mvar_value_117;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_111, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 16, tmp_tuple_element_3);
        tmp_mvar_value_118 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_118 == NULL)) {
            tmp_mvar_value_118 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_118 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_112 = tmp_mvar_value_118;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_112, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 17, tmp_tuple_element_3);
        tmp_mvar_value_119 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_119 == NULL)) {
            tmp_mvar_value_119 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_119 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_113 = tmp_mvar_value_119;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_113, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 18, tmp_tuple_element_3);
        tmp_mvar_value_120 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_120 == NULL)) {
            tmp_mvar_value_120 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_120 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_114 = tmp_mvar_value_120;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_114, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 19, tmp_tuple_element_3);
        tmp_mvar_value_121 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_121 == NULL)) {
            tmp_mvar_value_121 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_121 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_115 = tmp_mvar_value_121;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_115, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 20, tmp_tuple_element_3);
        tmp_mvar_value_122 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_122 == NULL)) {
            tmp_mvar_value_122 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_122 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_116 = tmp_mvar_value_122;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_116, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 21, tmp_tuple_element_3);
        tmp_mvar_value_123 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_123 == NULL)) {
            tmp_mvar_value_123 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_123 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_117 = tmp_mvar_value_123;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_117, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 22, tmp_tuple_element_3);
        tmp_mvar_value_124 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_124 == NULL)) {
            tmp_mvar_value_124 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_124 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_118 = tmp_mvar_value_124;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_118, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 23, tmp_tuple_element_3);
        tmp_mvar_value_125 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_125 == NULL)) {
            tmp_mvar_value_125 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_125 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_119 = tmp_mvar_value_125;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_119, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 24, tmp_tuple_element_3);
        tmp_mvar_value_126 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_126 == NULL)) {
            tmp_mvar_value_126 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_126 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_120 = tmp_mvar_value_126;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_120, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 25, tmp_tuple_element_3);
        tmp_mvar_value_127 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_127 == NULL)) {
            tmp_mvar_value_127 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_127 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_121 = tmp_mvar_value_127;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_121, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 26, tmp_tuple_element_3);
        tmp_mvar_value_128 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_128 == NULL)) {
            tmp_mvar_value_128 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_128 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_122 = tmp_mvar_value_128;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_122, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 27, tmp_tuple_element_3);
        tmp_mvar_value_129 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_129 == NULL)) {
            tmp_mvar_value_129 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_129 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_123 = tmp_mvar_value_129;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_123, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 28, tmp_tuple_element_3);
        tmp_mvar_value_130 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_130 == NULL)) {
            tmp_mvar_value_130 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_130 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_124 = tmp_mvar_value_130;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_124, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 29, tmp_tuple_element_3);
        tmp_mvar_value_131 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_131 == NULL)) {
            tmp_mvar_value_131 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_131 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_125 = tmp_mvar_value_131;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_125, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 30, tmp_tuple_element_3);
        tmp_mvar_value_132 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_132 == NULL)) {
            tmp_mvar_value_132 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_132 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_126 = tmp_mvar_value_132;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_126, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 31, tmp_tuple_element_3);
        tmp_mvar_value_133 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_133 == NULL)) {
            tmp_mvar_value_133 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_133 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_127 = tmp_mvar_value_133;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_127, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 32, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_int_pos_5;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_assign_source_13, 33, tmp_tuple_element_3);
        tmp_mvar_value_134 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_134 == NULL)) {
            tmp_mvar_value_134 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_134 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_128 = tmp_mvar_value_134;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_128, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 34, tmp_tuple_element_3);
        tmp_mvar_value_135 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_135 == NULL)) {
            tmp_mvar_value_135 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_135 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_129 = tmp_mvar_value_135;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_129, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 35, tmp_tuple_element_3);
        tmp_mvar_value_136 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_136 == NULL)) {
            tmp_mvar_value_136 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_136 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_130 = tmp_mvar_value_136;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_130, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 36, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_assign_source_13, 37, tmp_tuple_element_3);
        tmp_mvar_value_137 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_137 == NULL)) {
            tmp_mvar_value_137 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_137 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_131 = tmp_mvar_value_137;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_131, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 38, tmp_tuple_element_3);
        tmp_mvar_value_138 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_138 == NULL)) {
            tmp_mvar_value_138 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_138 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_132 = tmp_mvar_value_138;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_132, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 39, tmp_tuple_element_3);
        tmp_mvar_value_139 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_139 == NULL)) {
            tmp_mvar_value_139 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_139 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_133 = tmp_mvar_value_139;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_133, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 40, tmp_tuple_element_3);
        tmp_mvar_value_140 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_140 == NULL)) {
            tmp_mvar_value_140 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_140 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_134 = tmp_mvar_value_140;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_134, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 41, tmp_tuple_element_3);
        tmp_mvar_value_141 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_141 == NULL)) {
            tmp_mvar_value_141 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_141 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_135 = tmp_mvar_value_141;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_135, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 42, tmp_tuple_element_3);
        tmp_tuple_element_3 = const_int_pos_6;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_assign_source_13, 43, tmp_tuple_element_3);
        tmp_mvar_value_142 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_142 == NULL)) {
            tmp_mvar_value_142 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_142 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_136 = tmp_mvar_value_142;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_136, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 44, tmp_tuple_element_3);
        tmp_mvar_value_143 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_143 == NULL)) {
            tmp_mvar_value_143 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_143 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_137 = tmp_mvar_value_143;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_137, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 45, tmp_tuple_element_3);
        tmp_mvar_value_144 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_144 == NULL)) {
            tmp_mvar_value_144 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_144 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_138 = tmp_mvar_value_144;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_138, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 46, tmp_tuple_element_3);
        tmp_mvar_value_145 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_145 == NULL)) {
            tmp_mvar_value_145 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_145 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_139 = tmp_mvar_value_145;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_139, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 47, tmp_tuple_element_3);
        tmp_mvar_value_146 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_146 == NULL)) {
            tmp_mvar_value_146 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_146 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_140 = tmp_mvar_value_146;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_140, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 48, tmp_tuple_element_3);
        tmp_mvar_value_147 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_147 == NULL)) {
            tmp_mvar_value_147 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_147 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_141 = tmp_mvar_value_147;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_141, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 49, tmp_tuple_element_3);
        tmp_mvar_value_148 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_148 == NULL)) {
            tmp_mvar_value_148 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_148 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_142 = tmp_mvar_value_148;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_142, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 50, tmp_tuple_element_3);
        tmp_mvar_value_149 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_149 == NULL)) {
            tmp_mvar_value_149 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_149 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_143 = tmp_mvar_value_149;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_143, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 51, tmp_tuple_element_3);
        tmp_mvar_value_150 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_150 == NULL)) {
            tmp_mvar_value_150 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_150 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_144 = tmp_mvar_value_150;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_144, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 52, tmp_tuple_element_3);
        tmp_mvar_value_151 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_151 == NULL)) {
            tmp_mvar_value_151 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_151 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_145 = tmp_mvar_value_151;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_145, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 53, tmp_tuple_element_3);
        tmp_mvar_value_152 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_152 == NULL)) {
            tmp_mvar_value_152 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_152 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_146 = tmp_mvar_value_152;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_146, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 54, tmp_tuple_element_3);
        tmp_mvar_value_153 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_153 == NULL)) {
            tmp_mvar_value_153 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_153 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_147 = tmp_mvar_value_153;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_147, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 55, tmp_tuple_element_3);
        tmp_mvar_value_154 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_154 == NULL)) {
            tmp_mvar_value_154 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_154 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_148 = tmp_mvar_value_154;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_148, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 56, tmp_tuple_element_3);
        tmp_mvar_value_155 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_155 == NULL)) {
            tmp_mvar_value_155 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_155 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_149 = tmp_mvar_value_155;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_149, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 57, tmp_tuple_element_3);
        tmp_mvar_value_156 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_156 == NULL)) {
            tmp_mvar_value_156 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_156 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_150 = tmp_mvar_value_156;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_150, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 58, tmp_tuple_element_3);
        tmp_mvar_value_157 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_157 == NULL)) {
            tmp_mvar_value_157 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_157 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_151 = tmp_mvar_value_157;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_151, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 59, tmp_tuple_element_3);
        tmp_mvar_value_158 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_158 == NULL)) {
            tmp_mvar_value_158 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_158 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_152 = tmp_mvar_value_158;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_152, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 60, tmp_tuple_element_3);
        tmp_mvar_value_159 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_159 == NULL)) {
            tmp_mvar_value_159 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_159 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_153 = tmp_mvar_value_159;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_153, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 61, tmp_tuple_element_3);
        tmp_mvar_value_160 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_160 == NULL)) {
            tmp_mvar_value_160 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_160 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_154 = tmp_mvar_value_160;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_154, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 62, tmp_tuple_element_3);
        tmp_mvar_value_161 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_161 == NULL)) {
            tmp_mvar_value_161 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_161 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_155 = tmp_mvar_value_161;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_155, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 63, tmp_tuple_element_3);
        tmp_mvar_value_162 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_162 == NULL)) {
            tmp_mvar_value_162 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_162 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_156 = tmp_mvar_value_162;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_156, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 64, tmp_tuple_element_3);
        tmp_mvar_value_163 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_163 == NULL)) {
            tmp_mvar_value_163 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_163 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_157 = tmp_mvar_value_163;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_157, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 65, tmp_tuple_element_3);
        tmp_mvar_value_164 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_164 == NULL)) {
            tmp_mvar_value_164 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_164 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_158 = tmp_mvar_value_164;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_158, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 66, tmp_tuple_element_3);
        tmp_mvar_value_165 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_165 == NULL)) {
            tmp_mvar_value_165 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_165 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_159 = tmp_mvar_value_165;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_159, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 67, tmp_tuple_element_3);
        tmp_mvar_value_166 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_166 == NULL)) {
            tmp_mvar_value_166 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_166 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_160 = tmp_mvar_value_166;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_160, const_str_plain_ITS_ME);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 68, tmp_tuple_element_3);
        tmp_mvar_value_167 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_167 == NULL)) {
            tmp_mvar_value_167 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_167 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_161 = tmp_mvar_value_167;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_161, const_str_plain_ERROR);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 69, tmp_tuple_element_3);
        tmp_mvar_value_168 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_168 == NULL)) {
            tmp_mvar_value_168 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_168 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_162 = tmp_mvar_value_168;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_162, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 70, tmp_tuple_element_3);
        tmp_mvar_value_169 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_169 == NULL)) {
            tmp_mvar_value_169 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_169 == NULL) {
            Py_DECREF(tmp_assign_source_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_163 = tmp_mvar_value_169;
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_163, const_str_plain_START);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_13);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_13, 71, tmp_tuple_element_3);
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_ST, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_CHAR_LEN_TABLE, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_mvar_value_170;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_mvar_value_171;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_mvar_value_172;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_mvar_value_170 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_CLS);

        if (unlikely(tmp_mvar_value_170 == NULL)) {
            tmp_mvar_value_170 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022JP_CLS);
        }

        if (tmp_mvar_value_170 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15983 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_13 = tmp_mvar_value_170;
        tmp_dict_key_13 = const_str_plain_class_table;
        tmp_assign_source_15 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_value_14 = const_int_pos_10;
        tmp_dict_key_14 = const_str_plain_class_factor;
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_mvar_value_171 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_ST);

        if (unlikely(tmp_mvar_value_171 == NULL)) {
            tmp_mvar_value_171 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022JP_ST);
        }

        CHECK_OBJECT(tmp_mvar_value_171);
        tmp_dict_value_15 = tmp_mvar_value_171;
        tmp_dict_key_15 = const_str_plain_state_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_mvar_value_172 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_CHAR_LEN_TABLE);

        if (unlikely(tmp_mvar_value_172 == NULL)) {
            tmp_mvar_value_172 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022JP_CHAR_LEN_TABLE);
        }

        CHECK_OBJECT(tmp_mvar_value_172);
        tmp_dict_value_16 = tmp_mvar_value_172;
        tmp_dict_key_16 = const_str_plain_char_len_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_value_17 = const_str_digest_b563cc4e87000d93652e0cd29e7e2700;
        tmp_dict_key_17 = const_str_plain_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_value_18 = const_str_plain_Japanese;
        tmp_dict_key_18 = const_str_plain_language;
        tmp_res = PyDict_SetItem(tmp_assign_source_15, tmp_dict_key_18, tmp_dict_value_18);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022JP_SM_MODEL, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_tuple_ce5f341c81c23af7ea8f582778c33afe_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_CLS, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_source_name_164;
        PyObject *tmp_mvar_value_173;
        PyObject *tmp_source_name_165;
        PyObject *tmp_mvar_value_174;
        PyObject *tmp_source_name_166;
        PyObject *tmp_mvar_value_175;
        PyObject *tmp_source_name_167;
        PyObject *tmp_mvar_value_176;
        PyObject *tmp_source_name_168;
        PyObject *tmp_mvar_value_177;
        PyObject *tmp_source_name_169;
        PyObject *tmp_mvar_value_178;
        PyObject *tmp_source_name_170;
        PyObject *tmp_mvar_value_179;
        PyObject *tmp_source_name_171;
        PyObject *tmp_mvar_value_180;
        PyObject *tmp_source_name_172;
        PyObject *tmp_mvar_value_181;
        PyObject *tmp_source_name_173;
        PyObject *tmp_mvar_value_182;
        PyObject *tmp_source_name_174;
        PyObject *tmp_mvar_value_183;
        PyObject *tmp_source_name_175;
        PyObject *tmp_mvar_value_184;
        PyObject *tmp_source_name_176;
        PyObject *tmp_mvar_value_185;
        PyObject *tmp_source_name_177;
        PyObject *tmp_mvar_value_186;
        PyObject *tmp_source_name_178;
        PyObject *tmp_mvar_value_187;
        PyObject *tmp_source_name_179;
        PyObject *tmp_mvar_value_188;
        PyObject *tmp_source_name_180;
        PyObject *tmp_mvar_value_189;
        PyObject *tmp_source_name_181;
        PyObject *tmp_mvar_value_190;
        PyObject *tmp_source_name_182;
        PyObject *tmp_mvar_value_191;
        PyObject *tmp_source_name_183;
        PyObject *tmp_mvar_value_192;
        PyObject *tmp_source_name_184;
        PyObject *tmp_mvar_value_193;
        PyObject *tmp_source_name_185;
        PyObject *tmp_mvar_value_194;
        PyObject *tmp_source_name_186;
        PyObject *tmp_mvar_value_195;
        PyObject *tmp_source_name_187;
        PyObject *tmp_mvar_value_196;
        PyObject *tmp_source_name_188;
        PyObject *tmp_mvar_value_197;
        PyObject *tmp_source_name_189;
        PyObject *tmp_mvar_value_198;
        PyObject *tmp_source_name_190;
        PyObject *tmp_mvar_value_199;
        PyObject *tmp_source_name_191;
        PyObject *tmp_mvar_value_200;
        PyObject *tmp_source_name_192;
        PyObject *tmp_mvar_value_201;
        PyObject *tmp_source_name_193;
        PyObject *tmp_mvar_value_202;
        PyObject *tmp_source_name_194;
        PyObject *tmp_mvar_value_203;
        PyObject *tmp_source_name_195;
        PyObject *tmp_mvar_value_204;
        PyObject *tmp_source_name_196;
        PyObject *tmp_mvar_value_205;
        PyObject *tmp_source_name_197;
        PyObject *tmp_mvar_value_206;
        PyObject *tmp_source_name_198;
        PyObject *tmp_mvar_value_207;
        PyObject *tmp_source_name_199;
        PyObject *tmp_mvar_value_208;
        PyObject *tmp_source_name_200;
        PyObject *tmp_mvar_value_209;
        tmp_mvar_value_173 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_173 == NULL)) {
            tmp_mvar_value_173 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_173 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_164 = tmp_mvar_value_173;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_164, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = PyTuple_New(40);
        PyTuple_SET_ITEM(tmp_assign_source_17, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = const_int_pos_3;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_17, 1, tmp_tuple_element_4);
        tmp_mvar_value_174 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_174 == NULL)) {
            tmp_mvar_value_174 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_174 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_165 = tmp_mvar_value_174;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_165, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 2, tmp_tuple_element_4);
        tmp_mvar_value_175 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_175 == NULL)) {
            tmp_mvar_value_175 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_175 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_166 = tmp_mvar_value_175;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_166, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 3, tmp_tuple_element_4);
        tmp_mvar_value_176 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_176 == NULL)) {
            tmp_mvar_value_176 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_176 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_167 = tmp_mvar_value_176;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_167, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 4, tmp_tuple_element_4);
        tmp_mvar_value_177 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_177 == NULL)) {
            tmp_mvar_value_177 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_177 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_168 = tmp_mvar_value_177;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_168, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 5, tmp_tuple_element_4);
        tmp_mvar_value_178 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_178 == NULL)) {
            tmp_mvar_value_178 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_178 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_169 = tmp_mvar_value_178;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_169, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 6, tmp_tuple_element_4);
        tmp_mvar_value_179 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_179 == NULL)) {
            tmp_mvar_value_179 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_179 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_170 = tmp_mvar_value_179;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_170, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 7, tmp_tuple_element_4);
        tmp_mvar_value_180 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_180 == NULL)) {
            tmp_mvar_value_180 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_180 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_171 = tmp_mvar_value_180;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_171, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 8, tmp_tuple_element_4);
        tmp_mvar_value_181 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_181 == NULL)) {
            tmp_mvar_value_181 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_181 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_172 = tmp_mvar_value_181;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_172, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 9, tmp_tuple_element_4);
        tmp_mvar_value_182 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_182 == NULL)) {
            tmp_mvar_value_182 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_182 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_173 = tmp_mvar_value_182;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_173, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 10, tmp_tuple_element_4);
        tmp_mvar_value_183 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_183 == NULL)) {
            tmp_mvar_value_183 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_183 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_174 = tmp_mvar_value_183;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_174, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 11, tmp_tuple_element_4);
        tmp_mvar_value_184 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_184 == NULL)) {
            tmp_mvar_value_184 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_184 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_175 = tmp_mvar_value_184;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_175, const_str_plain_ITS_ME);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 12, tmp_tuple_element_4);
        tmp_mvar_value_185 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_185 == NULL)) {
            tmp_mvar_value_185 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_185 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_176 = tmp_mvar_value_185;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_176, const_str_plain_ITS_ME);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 13, tmp_tuple_element_4);
        tmp_mvar_value_186 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_186 == NULL)) {
            tmp_mvar_value_186 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_186 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_177 = tmp_mvar_value_186;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_177, const_str_plain_ITS_ME);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 14, tmp_tuple_element_4);
        tmp_mvar_value_187 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_187 == NULL)) {
            tmp_mvar_value_187 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_187 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_178 = tmp_mvar_value_187;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_178, const_str_plain_ITS_ME);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 15, tmp_tuple_element_4);
        tmp_mvar_value_188 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_188 == NULL)) {
            tmp_mvar_value_188 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_188 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_179 = tmp_mvar_value_188;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_179, const_str_plain_ITS_ME);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 16, tmp_tuple_element_4);
        tmp_mvar_value_189 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_189 == NULL)) {
            tmp_mvar_value_189 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_189 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_180 = tmp_mvar_value_189;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_180, const_str_plain_ITS_ME);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 17, tmp_tuple_element_4);
        tmp_mvar_value_190 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_190 == NULL)) {
            tmp_mvar_value_190 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_190 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_181 = tmp_mvar_value_190;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_181, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 18, tmp_tuple_element_4);
        tmp_mvar_value_191 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_191 == NULL)) {
            tmp_mvar_value_191 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_191 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_182 = tmp_mvar_value_191;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_182, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 19, tmp_tuple_element_4);
        tmp_mvar_value_192 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_192 == NULL)) {
            tmp_mvar_value_192 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_192 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_183 = tmp_mvar_value_192;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_183, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 20, tmp_tuple_element_4);
        tmp_tuple_element_4 = const_int_pos_4;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_17, 21, tmp_tuple_element_4);
        tmp_mvar_value_193 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_193 == NULL)) {
            tmp_mvar_value_193 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_193 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_184 = tmp_mvar_value_193;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_184, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 22, tmp_tuple_element_4);
        tmp_mvar_value_194 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_194 == NULL)) {
            tmp_mvar_value_194 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_194 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_185 = tmp_mvar_value_194;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_185, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 23, tmp_tuple_element_4);
        tmp_mvar_value_195 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_195 == NULL)) {
            tmp_mvar_value_195 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_195 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_186 = tmp_mvar_value_195;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_186, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 24, tmp_tuple_element_4);
        tmp_mvar_value_196 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_196 == NULL)) {
            tmp_mvar_value_196 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_196 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_187 = tmp_mvar_value_196;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_187, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 25, tmp_tuple_element_4);
        tmp_mvar_value_197 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_197 == NULL)) {
            tmp_mvar_value_197 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_197 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_188 = tmp_mvar_value_197;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_188, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 26, tmp_tuple_element_4);
        tmp_mvar_value_198 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_198 == NULL)) {
            tmp_mvar_value_198 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_198 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_189 = tmp_mvar_value_198;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_189, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 27, tmp_tuple_element_4);
        tmp_tuple_element_4 = const_int_pos_5;
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_17, 28, tmp_tuple_element_4);
        tmp_mvar_value_199 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_199 == NULL)) {
            tmp_mvar_value_199 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_199 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_190 = tmp_mvar_value_199;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_190, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 29, tmp_tuple_element_4);
        tmp_mvar_value_200 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_200 == NULL)) {
            tmp_mvar_value_200 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_200 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_191 = tmp_mvar_value_200;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_191, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 30, tmp_tuple_element_4);
        tmp_mvar_value_201 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_201 == NULL)) {
            tmp_mvar_value_201 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_201 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_192 = tmp_mvar_value_201;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_192, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 31, tmp_tuple_element_4);
        tmp_mvar_value_202 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_202 == NULL)) {
            tmp_mvar_value_202 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_202 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_193 = tmp_mvar_value_202;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_193, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 32, tmp_tuple_element_4);
        tmp_mvar_value_203 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_203 == NULL)) {
            tmp_mvar_value_203 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_203 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_194 = tmp_mvar_value_203;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_194, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 33, tmp_tuple_element_4);
        tmp_mvar_value_204 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_204 == NULL)) {
            tmp_mvar_value_204 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_204 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_195 = tmp_mvar_value_204;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_195, const_str_plain_ERROR);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 34, tmp_tuple_element_4);
        tmp_mvar_value_205 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_205 == NULL)) {
            tmp_mvar_value_205 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_205 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_196 = tmp_mvar_value_205;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_196, const_str_plain_ITS_ME);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 35, tmp_tuple_element_4);
        tmp_mvar_value_206 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_206 == NULL)) {
            tmp_mvar_value_206 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_206 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_197 = tmp_mvar_value_206;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_197, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 36, tmp_tuple_element_4);
        tmp_mvar_value_207 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_207 == NULL)) {
            tmp_mvar_value_207 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_207 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_198 = tmp_mvar_value_207;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_198, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 37, tmp_tuple_element_4);
        tmp_mvar_value_208 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_208 == NULL)) {
            tmp_mvar_value_208 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_208 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_199 = tmp_mvar_value_208;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_199, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 38, tmp_tuple_element_4);
        tmp_mvar_value_209 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_209 == NULL)) {
            tmp_mvar_value_209 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_209 == NULL) {
            Py_DECREF(tmp_assign_source_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15331 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_200 = tmp_mvar_value_209;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_source_name_200, const_str_plain_START);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_17);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_17, 39, tmp_tuple_element_4);
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_ST, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_tuple_int_0_int_0_int_0_int_0_int_0_int_0_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_CHAR_LEN_TABLE, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_mvar_value_210;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_mvar_value_211;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_mvar_value_212;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        tmp_mvar_value_210 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_CLS);

        if (unlikely(tmp_mvar_value_210 == NULL)) {
            tmp_mvar_value_210 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022KR_CLS);
        }

        if (tmp_mvar_value_210 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 16018 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_19 = tmp_mvar_value_210;
        tmp_dict_key_19 = const_str_plain_class_table;
        tmp_assign_source_19 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_19, tmp_dict_value_19);
        assert(!(tmp_res != 0));
        tmp_dict_value_20 = const_int_pos_6;
        tmp_dict_key_20 = const_str_plain_class_factor;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        tmp_mvar_value_211 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_ST);

        if (unlikely(tmp_mvar_value_211 == NULL)) {
            tmp_mvar_value_211 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022KR_ST);
        }

        CHECK_OBJECT(tmp_mvar_value_211);
        tmp_dict_value_21 = tmp_mvar_value_211;
        tmp_dict_key_21 = const_str_plain_state_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_21, tmp_dict_value_21);
        assert(!(tmp_res != 0));
        tmp_mvar_value_212 = GET_STRING_DICT_VALUE(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_CHAR_LEN_TABLE);

        if (unlikely(tmp_mvar_value_212 == NULL)) {
            tmp_mvar_value_212 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022KR_CHAR_LEN_TABLE);
        }

        CHECK_OBJECT(tmp_mvar_value_212);
        tmp_dict_value_22 = tmp_mvar_value_212;
        tmp_dict_key_22 = const_str_plain_char_len_table;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_value_23 = const_str_digest_3b47d1a318c4d7181d14513b7ccdbfde;
        tmp_dict_key_23 = const_str_plain_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_23, tmp_dict_value_23);
        assert(!(tmp_res != 0));
        tmp_dict_value_24 = const_str_plain_Korean;
        tmp_dict_key_24 = const_str_plain_language;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$escsm, (Nuitka_StringObject *)const_str_plain_ISO2022KR_SM_MODEL, tmp_assign_source_19);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_20f0d7d1a1773ea8108b02e7d2736c77);
#endif
    popFrameStack();

    assertFrameObject(frame_20f0d7d1a1773ea8108b02e7d2736c77);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_20f0d7d1a1773ea8108b02e7d2736c77);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_20f0d7d1a1773ea8108b02e7d2736c77, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_20f0d7d1a1773ea8108b02e7d2736c77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20f0d7d1a1773ea8108b02e7d2736c77, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_chardet$escsm;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
