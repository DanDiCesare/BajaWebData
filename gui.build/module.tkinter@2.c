/* Generated code for Python module 'tkinter'
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

/* The "_module_tkinter" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tkinter;
PyDictObject *moduledict_tkinter;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_ImportError;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_digest_3e25de7d3afc8969945b14ac29b34526;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain__setit;
static PyObject *const_str_plain__default_root;
static PyObject *const_str_plain__cnfmerge;
static PyObject *const_str_plain_NUITKA_PACKAGE_tkinter;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain__support_default_root;
static PyObject *const_str_digest_70535a1df1c311fca13d2221d3c096bb;
static PyObject *const_tuple_str_plain__stringify_tuple;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain__flatten;
static PyObject *const_str_plain__stringify;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
static PyObject *const_tuple_e3c23e4d470b6682c8e58316486d8117_tuple;
static PyObject *const_str_plain__join;
static PyObject *const_tuple_str_plain__join_tuple;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_Tkinter;
static PyObject *const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain__test;
static PyObject *const_str_digest_f2f61ff622683b355a193c37ba0cf25c;
extern PyObject *const_tuple_str_digest_3e25de7d3afc8969945b14ac29b34526_tuple;
static PyObject *const_tuple_str_plain__splitdict_tuple;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain__splitdict;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_plain__tkinter;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain__setit = UNSTREAM_STRING(&constant_bin[ 666332 ], 6, 1);
    const_str_plain__default_root = UNSTREAM_STRING(&constant_bin[ 1129581 ], 13, 1);
    const_str_plain__cnfmerge = UNSTREAM_STRING(&constant_bin[ 1129594 ], 9, 1);
    const_str_plain_NUITKA_PACKAGE_tkinter = UNSTREAM_STRING(&constant_bin[ 1129603 ], 22, 1);
    const_str_plain__support_default_root = UNSTREAM_STRING(&constant_bin[ 1129625 ], 21, 1);
    const_str_digest_70535a1df1c311fca13d2221d3c096bb = UNSTREAM_STRING(&constant_bin[ 1129646 ], 19, 0);
    const_tuple_str_plain__stringify_tuple = PyTuple_New(1);
    const_str_plain__stringify = UNSTREAM_STRING(&constant_bin[ 1116441 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain__stringify_tuple, 0, const_str_plain__stringify); Py_INCREF(const_str_plain__stringify);
    const_str_plain__flatten = UNSTREAM_STRING(&constant_bin[ 1129665 ], 8, 1);
    const_tuple_e3c23e4d470b6682c8e58316486d8117_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_e3c23e4d470b6682c8e58316486d8117_tuple, 0, const_str_plain_NUITKA_PACKAGE_tkinter); Py_INCREF(const_str_plain_NUITKA_PACKAGE_tkinter);
    PyTuple_SET_ITEM(const_tuple_e3c23e4d470b6682c8e58316486d8117_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242); Py_INCREF(const_str_digest_5bfaf90dbd407b4fc29090c8f6415242);
    const_str_plain__join = UNSTREAM_STRING(&constant_bin[ 1111030 ], 5, 1);
    const_tuple_str_plain__join_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain__join_tuple, 0, const_str_plain__join); Py_INCREF(const_str_plain__join);
    const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple, 0, const_str_plain__cnfmerge); Py_INCREF(const_str_plain__cnfmerge);
    PyTuple_SET_ITEM(const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple, 1, const_str_plain__default_root); Py_INCREF(const_str_plain__default_root);
    PyTuple_SET_ITEM(const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple, 2, const_str_plain__flatten); Py_INCREF(const_str_plain__flatten);
    PyTuple_SET_ITEM(const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple, 3, const_str_plain__support_default_root); Py_INCREF(const_str_plain__support_default_root);
    const_str_plain__test = UNSTREAM_STRING(&constant_bin[ 797817 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple, 4, const_str_plain__test); Py_INCREF(const_str_plain__test);
    const_str_plain__tkinter = UNSTREAM_STRING(&constant_bin[ 1126915 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple, 5, const_str_plain__tkinter); Py_INCREF(const_str_plain__tkinter);
    PyTuple_SET_ITEM(const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple, 6, const_str_plain__setit); Py_INCREF(const_str_plain__setit);
    const_str_digest_f2f61ff622683b355a193c37ba0cf25c = UNSTREAM_STRING(&constant_bin[ 1129673 ], 16, 0);
    const_tuple_str_plain__splitdict_tuple = PyTuple_New(1);
    const_str_plain__splitdict = UNSTREAM_STRING(&constant_bin[ 1129689 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain__splitdict_tuple, 0, const_str_plain__splitdict); Py_INCREF(const_str_plain__splitdict);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tkinter(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_feae6ee9a62e9d173f72dc31fe761000;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_70535a1df1c311fca13d2221d3c096bb);
    codeobj_feae6ee9a62e9d173f72dc31fe761000 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_digest_f2f61ff622683b355a193c37ba0cf25c, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tkinter =
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

function_impl_code functable_tkinter[] = {

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

    function_impl_code *current = functable_tkinter;
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

    if (offset > sizeof(functable_tkinter) || offset < 0) {
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
        functable_tkinter[offset],
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
        module_tkinter,
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
PyObject *modulecode_tkinter(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_tkinter;
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
    PRINT_STRING("tkinter: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("tkinter: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("tkinter: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in inittkinter\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tkinter = Py_InitModule4(
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
    mdef_tkinter.m_name = module_full_name;
    module_tkinter = PyModule_Create(&mdef_tkinter);
#endif

    moduledict_tkinter = MODULE_DICT(module_tkinter);

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
        moduledict_tkinter,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_tkinter,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_tkinter,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_tkinter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_tkinter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_tkinter);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_tkinter);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_feae6ee9a62e9d173f72dc31fe761000;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_feae6ee9a62e9d173f72dc31fe761000 = MAKE_MODULE_FRAME(codeobj_feae6ee9a62e9d173f72dc31fe761000, module_tkinter);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_feae6ee9a62e9d173f72dc31fe761000);
    assert(Py_REFCNT(frame_feae6ee9a62e9d173f72dc31fe761000) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 1;
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
        frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(2);
        PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
        frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 1;
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

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_e3c23e4d470b6682c8e58316486d8117_tuple, 0));

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_tkinter;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_version_info);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_star_imported_1;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_Tkinter;
            tmp_globals_name_2 = (PyObject *)moduledict_tkinter;
            tmp_locals_name_2 = (PyObject *)moduledict_tkinter;
            tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
            tmp_level_name_2 = const_int_0;
            frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 5;
            tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
            if (tmp_star_imported_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto frame_exception_exit_1;
            }
            tmp_result = IMPORT_MODULE_STAR(module_tkinter, true, tmp_star_imported_1);
            Py_DECREF(tmp_star_imported_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            PyObject *tmp_level_name_3;
            tmp_name_name_3 = const_str_plain_Tkinter;
            tmp_globals_name_3 = (PyObject *)moduledict_tkinter;
            tmp_locals_name_3 = Py_None;
            tmp_fromlist_name_3 = const_tuple_e3c0f36c6f0277c5b13fb6889c9314d4_tuple;
            tmp_level_name_3 = const_int_0;
            frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 6;
            tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_1__module == NULL);
            tmp_import_from_1__module = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_import_name_from_2;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_2 = tmp_import_from_1__module;
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain__cnfmerge);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__cnfmerge, tmp_assign_source_7);
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_import_name_from_3;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_3 = tmp_import_from_1__module;
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain__default_root);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__default_root, tmp_assign_source_8);
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_import_name_from_4;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_4 = tmp_import_from_1__module;
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain__flatten);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__flatten, tmp_assign_source_9);
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_import_name_from_5;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_5 = tmp_import_from_1__module;
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain__support_default_root);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__support_default_root, tmp_assign_source_10);
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_import_name_from_6;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_6 = tmp_import_from_1__module;
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain__test);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__test, tmp_assign_source_11);
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_import_name_from_7;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_7 = tmp_import_from_1__module;
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain__tkinter);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__tkinter, tmp_assign_source_12);
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_import_name_from_8;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_8 = tmp_import_from_1__module;
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain__setit);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__setit, tmp_assign_source_13);
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

        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_import_name_from_9;
            PyObject *tmp_name_name_4;
            PyObject *tmp_globals_name_4;
            PyObject *tmp_locals_name_4;
            PyObject *tmp_fromlist_name_4;
            PyObject *tmp_level_name_4;
            tmp_name_name_4 = const_str_plain_Tkinter;
            tmp_globals_name_4 = (PyObject *)moduledict_tkinter;
            tmp_locals_name_4 = Py_None;
            tmp_fromlist_name_4 = const_tuple_str_plain__join_tuple;
            tmp_level_name_4 = const_int_0;
            frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 11;
            tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
            if (tmp_import_name_from_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_2;
            }
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain__join);
            Py_DECREF(tmp_import_name_from_9);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_2;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__join, tmp_assign_source_14);
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_feae6ee9a62e9d173f72dc31fe761000);
        if (exception_keeper_tb_2 == NULL) {
            exception_keeper_tb_2 = MAKE_TRACEBACK(frame_feae6ee9a62e9d173f72dc31fe761000, exception_keeper_lineno_2);
        } else if (exception_keeper_lineno_2 != 0) {
            exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_feae6ee9a62e9d173f72dc31fe761000, exception_keeper_lineno_2);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
        PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain_ImportError);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 5896 ], 33, 0);
                exception_tb = NULL;

                exception_lineno = 12;

                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_2;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 10;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_feae6ee9a62e9d173f72dc31fe761000->m_frame) frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = exception_tb->tb_lineno;

            goto frame_exception_exit_1;
            branch_no_2:;
        }
        goto try_end_2;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(tkinter);
        return NULL;
        // End of try:
        try_end_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_import_name_from_10;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            PyObject *tmp_level_name_5;
            tmp_name_name_5 = const_str_plain_Tkinter;
            tmp_globals_name_5 = (PyObject *)moduledict_tkinter;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = const_tuple_str_plain__stringify_tuple;
            tmp_level_name_5 = const_int_0;
            frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 16;
            tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
            if (tmp_import_name_from_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain__stringify);
            Py_DECREF(tmp_import_name_from_10);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__stringify, tmp_assign_source_15);
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_feae6ee9a62e9d173f72dc31fe761000);
        if (exception_keeper_tb_3 == NULL) {
            exception_keeper_tb_3 = MAKE_TRACEBACK(frame_feae6ee9a62e9d173f72dc31fe761000, exception_keeper_lineno_3);
        } else if (exception_keeper_lineno_3 != 0) {
            exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_feae6ee9a62e9d173f72dc31fe761000, exception_keeper_lineno_3);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
        PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_mvar_value_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain_ImportError);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 5896 ], 33, 0);
                exception_tb = NULL;

                exception_lineno = 17;

                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_3 = tmp_mvar_value_3;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 15;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_feae6ee9a62e9d173f72dc31fe761000->m_frame) frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = exception_tb->tb_lineno;

            goto frame_exception_exit_1;
            branch_no_3:;
        }
        goto try_end_3;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(tkinter);
        return NULL;
        // End of try:
        try_end_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_import_name_from_11;
            PyObject *tmp_name_name_6;
            PyObject *tmp_globals_name_6;
            PyObject *tmp_locals_name_6;
            PyObject *tmp_fromlist_name_6;
            PyObject *tmp_level_name_6;
            tmp_name_name_6 = const_str_plain_Tkinter;
            tmp_globals_name_6 = (PyObject *)moduledict_tkinter;
            tmp_locals_name_6 = Py_None;
            tmp_fromlist_name_6 = const_tuple_str_plain__splitdict_tuple;
            tmp_level_name_6 = const_int_0;
            frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 21;
            tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
            if (tmp_import_name_from_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_4;
            }
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain__splitdict);
            Py_DECREF(tmp_import_name_from_11);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain__splitdict, tmp_assign_source_16);
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_feae6ee9a62e9d173f72dc31fe761000);
        if (exception_keeper_tb_4 == NULL) {
            exception_keeper_tb_4 = MAKE_TRACEBACK(frame_feae6ee9a62e9d173f72dc31fe761000, exception_keeper_lineno_4);
        } else if (exception_keeper_lineno_4 != 0) {
            exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_feae6ee9a62e9d173f72dc31fe761000, exception_keeper_lineno_4);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
        PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_mvar_value_4;
            tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain_ImportError);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 5896 ], 33, 0);
                exception_tb = NULL;

                exception_lineno = 22;

                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_4 = tmp_mvar_value_4;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 20;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_feae6ee9a62e9d173f72dc31fe761000->m_frame) frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = exception_tb->tb_lineno;

            goto frame_exception_exit_1;
            branch_no_4:;
        }
        goto try_end_4;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(tkinter);
        return NULL;
        // End of try:
        try_end_4:;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_tkinter, (Nuitka_StringObject *)const_str_plain_ImportError);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ImportError);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 5896 ], 33, 0);
                exception_tb = NULL;

                exception_lineno = 26;

                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_5;
            frame_feae6ee9a62e9d173f72dc31fe761000->m_frame.f_lineno = 26;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_2, &PyTuple_GET_ITEM(const_tuple_str_digest_3e25de7d3afc8969945b14ac29b34526_tuple, 0));

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;

                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 26;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

            goto frame_exception_exit_1;
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION(frame_feae6ee9a62e9d173f72dc31fe761000);
#endif
    popFrameStack();

    assertFrameObject(frame_feae6ee9a62e9d173f72dc31fe761000);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_feae6ee9a62e9d173f72dc31fe761000);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_feae6ee9a62e9d173f72dc31fe761000, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_feae6ee9a62e9d173f72dc31fe761000->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_feae6ee9a62e9d173f72dc31fe761000, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_tkinter;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
