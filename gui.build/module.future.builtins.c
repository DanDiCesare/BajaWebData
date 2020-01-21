/* Generated code for Python module 'future.builtins'
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

/* The "_module_future$builtins" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins;
PyDictObject *moduledict_future$builtins;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_newlist;
extern PyObject *const_str_plain_builtins;
extern PyObject *const_str_plain_hex;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_tuple_str_plain_utils_tuple;
static PyObject *const_str_digest_ac359c5815a472ac0dfc028c273ac8a1;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_newdict;
static PyObject *const_tuple_c1ac707d44f3393a13d39121a733050d_tuple;
extern PyObject *const_str_plain_future;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple;
static PyObject *const_list_a77bdbd618436fbe054b2e43e0e67735_list;
extern PyObject *const_str_plain_isinstance;
extern PyObject *const_str_plain_NUITKA_PACKAGE_future;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_pow;
static PyObject *const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_round;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_52a93a296e9cb904f4803e4c437b01b5;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_newrange;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_next;
extern PyObject *const_str_plain_newint;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_35567259d2afb422e342c2eb1620e11c;
extern PyObject *const_str_plain_newobject;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_oct;
static PyObject *const_tuple_74d32b3f8ae10fbdbe132849feca3ce4_tuple;
extern PyObject *const_str_plain_chr;
static PyObject *const_str_plain_NUITKA_PACKAGE_future_builtins;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_str;
static PyObject *const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_super;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_max;
extern PyObject *const_tuple_str_plain_PY3_tuple;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_newbytes;
extern PyObject *const_str_digest_96b7425961f73d341c56a14b3f3d9e23;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
extern PyObject *const_str_plain_range;
extern PyObject *const_tuple_ce5ef95e5f7bb584d1ea7349939dd02c_tuple;
extern PyObject *const_str_plain_newstr;
extern PyObject *const_str_plain_open;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_ac359c5815a472ac0dfc028c273ac8a1 = UNSTREAM_STRING(&constant_bin[ 789431 ], 24, 0);
    const_tuple_c1ac707d44f3393a13d39121a733050d_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 0, const_str_plain_newbytes); Py_INCREF(const_str_plain_newbytes);
    PyTuple_SET_ITEM(const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 1, const_str_plain_newdict); Py_INCREF(const_str_plain_newdict);
    PyTuple_SET_ITEM(const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 2, const_str_plain_newint); Py_INCREF(const_str_plain_newint);
    PyTuple_SET_ITEM(const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 3, const_str_plain_newlist); Py_INCREF(const_str_plain_newlist);
    PyTuple_SET_ITEM(const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 4, const_str_plain_newobject); Py_INCREF(const_str_plain_newobject);
    PyTuple_SET_ITEM(const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 5, const_str_plain_newrange); Py_INCREF(const_str_plain_newrange);
    PyTuple_SET_ITEM(const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 6, const_str_plain_newstr); Py_INCREF(const_str_plain_newstr);
    const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 0, const_str_plain_ascii); Py_INCREF(const_str_plain_ascii);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 1, const_str_plain_chr); Py_INCREF(const_str_plain_chr);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 2, const_str_plain_hex); Py_INCREF(const_str_plain_hex);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 3, const_str_plain_input); Py_INCREF(const_str_plain_input);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 4, const_str_plain_isinstance); Py_INCREF(const_str_plain_isinstance);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 5, const_str_plain_next); Py_INCREF(const_str_plain_next);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 6, const_str_plain_oct); Py_INCREF(const_str_plain_oct);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 7, const_str_plain_open); Py_INCREF(const_str_plain_open);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 8, const_str_plain_pow); Py_INCREF(const_str_plain_pow);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 9, const_str_plain_round); Py_INCREF(const_str_plain_round);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 10, const_str_plain_super); Py_INCREF(const_str_plain_super);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 11, const_str_plain_max); Py_INCREF(const_str_plain_max);
    PyTuple_SET_ITEM(const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple, 12, const_str_plain_min); Py_INCREF(const_str_plain_min);
    const_list_a77bdbd618436fbe054b2e43e0e67735_list = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 789455 ], 203);
    const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 0, const_str_plain_filter); Py_INCREF(const_str_plain_filter);
    PyTuple_SET_ITEM(const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 1, const_str_plain_map); Py_INCREF(const_str_plain_map);
    PyTuple_SET_ITEM(const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 2, const_str_plain_zip); Py_INCREF(const_str_plain_zip);
    const_str_digest_52a93a296e9cb904f4803e4c437b01b5 = UNSTREAM_STRING(&constant_bin[ 789658 ], 27, 0);
    const_str_digest_35567259d2afb422e342c2eb1620e11c = UNSTREAM_STRING(&constant_bin[ 789685 ], 20, 0);
    const_tuple_74d32b3f8ae10fbdbe132849feca3ce4_tuple = PyTuple_New(2);
    const_str_plain_NUITKA_PACKAGE_future_builtins = UNSTREAM_STRING(&constant_bin[ 789705 ], 30, 1);
    PyTuple_SET_ITEM(const_tuple_74d32b3f8ae10fbdbe132849feca3ce4_tuple, 0, const_str_plain_NUITKA_PACKAGE_future_builtins); Py_INCREF(const_str_plain_NUITKA_PACKAGE_future_builtins);
    PyTuple_SET_ITEM(const_tuple_74d32b3f8ae10fbdbe132849feca3ce4_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242); Py_INCREF(const_str_digest_5bfaf90dbd407b4fc29090c8f6415242);
    const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4 = UNSTREAM_STRING(&constant_bin[ 789735 ], 25, 0);
    const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd = UNSTREAM_STRING(&constant_bin[ 789760 ], 223, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c9cb0729cec6268ca88271b8e0967ff2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_52a93a296e9cb904f4803e4c437b01b5);
    codeobj_c9cb0729cec6268ca88271b8e0967ff2 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_ac359c5815a472ac0dfc028c273ac8a1, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins =
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

function_impl_code functable_future$builtins[] = {

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

    function_impl_code *current = functable_future$builtins;
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

    if (offset > sizeof(functable_future$builtins) || offset < 0) {
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
        functable_future$builtins[offset],
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
        module_future$builtins,
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
PyObject *modulecode_future$builtins(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$builtins;
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
    PRINT_STRING("future.builtins: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$builtins\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins = Py_InitModule4(
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
    mdef_future$builtins.m_name = module_full_name;
    module_future$builtins = PyModule_Create(&mdef_future$builtins);
#endif

    moduledict_future$builtins = MODULE_DICT(module_future$builtins);

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
        moduledict_future$builtins,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$builtins,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$builtins,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$builtins);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$builtins);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___name__),
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
#if 1
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_c9cb0729cec6268ca88271b8e0967ff2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd;
        UPDATE_STRING_DICT0(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c9cb0729cec6268ca88271b8e0967ff2 = MAKE_MODULE_FRAME(codeobj_c9cb0729cec6268ca88271b8e0967ff2, module_future$builtins);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c9cb0729cec6268ca88271b8e0967ff2);
    assert(Py_REFCNT(frame_c9cb0729cec6268ca88271b8e0967ff2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_2;
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_source_name_1 = PyObject_GetAttr(module, const_str_plain_path);
            } else {
                tmp_source_name_1 = NULL;
            }
        }

        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_dirname);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(3);
        PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_source_name_2 = PyObject_GetAttr(module, const_str_plain_path);
            } else {
                tmp_source_name_2 = NULL;
            }
        }

        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_join);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_called_instance_1 = PyObject_GetAttr(module, const_str_plain_environ);
            } else {
                tmp_called_instance_1 = NULL;
            }
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_ce5ef95e5f7bb584d1ea7349939dd02c_tuple, 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_builtins;
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_called_instance_2 = PyObject_GetAttr(module, const_str_plain_environ);
            } else {
                tmp_called_instance_2 = NULL;
            }
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_74d32b3f8ae10fbdbe132849feca3ce4_tuple, 0));

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4;
        tmp_globals_name_1 = (PyObject *)moduledict_future$builtins;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple;
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_filter);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_filter, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_map);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_map, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_zip);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_zip, tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_digest_35567259d2afb422e342c2eb1620e11c;
        tmp_globals_name_2 = (PyObject *)moduledict_future$builtins;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_ffb74c0f5e6eb4f022c78905c8cc03ab_tuple;
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 13;
        tmp_assign_source_8 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_ascii);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_ascii, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_chr);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_chr, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_hex);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_hex, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_input);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_input, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_isinstance);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_isinstance, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_next);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_next, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_oct);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_oct, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_open);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_open, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_pow);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_pow, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_round);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_round, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_super);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_super, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_max);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_max, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_min);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_min, tmp_assign_source_21);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_digest_118c8611317729818c37c760127e23b2;
        tmp_globals_name_3 = (PyObject *)moduledict_future$builtins;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PY3_tuple;
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 15;
        tmp_import_name_from_17 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_PY3);
        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_22);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_PY3);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_name_name_4;
            PyObject *tmp_globals_name_4;
            PyObject *tmp_locals_name_4;
            PyObject *tmp_fromlist_name_4;
            tmp_name_name_4 = const_str_plain_builtins;
            tmp_globals_name_4 = (PyObject *)moduledict_future$builtins;
            tmp_locals_name_4 = Py_None;
            tmp_fromlist_name_4 = Py_None;
            frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 18;
            tmp_assign_source_23 = IMPORT_MODULE4(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins, tmp_assign_source_23);
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins);
            }

            CHECK_OBJECT(tmp_mvar_value_2);
            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_bytes);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_24);
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 57810 ], 30, 0);
                exception_tb = NULL;

                exception_lineno = 20;

                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_dict);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_dict, tmp_assign_source_25);
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 57810 ], 30, 0);
                exception_tb = NULL;

                exception_lineno = 21;

                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_assign_source_26 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_int);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_26);
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 57810 ], 30, 0);
                exception_tb = NULL;

                exception_lineno = 22;

                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_5;
            tmp_assign_source_27 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_list);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_list, tmp_assign_source_27);
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 57810 ], 30, 0);
                exception_tb = NULL;

                exception_lineno = 23;

                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_6;
            tmp_assign_source_28 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_object);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_28);
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 57810 ], 30, 0);
                exception_tb = NULL;

                exception_lineno = 24;

                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_7;
            tmp_assign_source_29 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_range);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_29);
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 57810 ], 30, 0);
                exception_tb = NULL;

                exception_lineno = 25;

                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_8;
            tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_str);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_30);
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = PyList_New(0);
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_31);
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            tmp_name_name_5 = const_str_digest_96b7425961f73d341c56a14b3f3d9e23;
            tmp_globals_name_5 = (PyObject *)moduledict_future$builtins;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = const_tuple_c1ac707d44f3393a13d39121a733050d_tuple;
            frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 28;
            tmp_assign_source_32 = IMPORT_MODULE4(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_3__module == NULL);
            tmp_import_from_3__module = tmp_assign_source_32;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_import_name_from_18;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_18 = tmp_import_from_3__module;
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_newbytes);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_33);
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_import_name_from_19;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_19 = tmp_import_from_3__module;
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_newdict);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_dict, tmp_assign_source_34);
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_import_name_from_20;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_20 = tmp_import_from_3__module;
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_newint);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_35);
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_import_name_from_21;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_21 = tmp_import_from_3__module;
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_newlist);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_list, tmp_assign_source_36);
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_import_name_from_22;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_22 = tmp_import_from_3__module;
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_newobject);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_37);
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_import_name_from_23;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_23 = tmp_import_from_3__module;
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_newrange);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_38);
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_import_name_from_24;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_24 = tmp_import_from_3__module;
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain_newstr);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_39);
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
        Py_DECREF(tmp_import_from_3__module);
        tmp_import_from_3__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
        Py_DECREF(tmp_import_from_3__module);
        tmp_import_from_3__module = NULL;

        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = const_str_plain_future;
        tmp_globals_name_6 = (PyObject *)moduledict_future$builtins;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_utils_tuple;
        frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame.f_lineno = 35;
        tmp_import_name_from_25 = IMPORT_MODULE4(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_utils);
        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_40);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_utils);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_utils);
        }

        CHECK_OBJECT(tmp_mvar_value_9);
        tmp_source_name_10 = tmp_mvar_value_9;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_PY3);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = LIST_COPY(const_list_a77bdbd618436fbe054b2e43e0e67735_list);
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_41);
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = PyList_New(0);
            UPDATE_STRING_DICT1(moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_42);
        }
        branch_end_2:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9cb0729cec6268ca88271b8e0967ff2);
#endif
    popFrameStack();

    assertFrameObject(frame_c9cb0729cec6268ca88271b8e0967ff2);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c9cb0729cec6268ca88271b8e0967ff2);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_c9cb0729cec6268ca88271b8e0967ff2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c9cb0729cec6268ca88271b8e0967ff2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9cb0729cec6268ca88271b8e0967ff2, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_future$builtins;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
