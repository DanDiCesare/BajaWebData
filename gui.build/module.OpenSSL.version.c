/* Generated code for Python module 'OpenSSL.version'
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

/* The "_module_OpenSSL$version" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenSSL$version;
PyDictObject *moduledict_OpenSSL$version;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_68018ff76519212609a7968014aa79ba;
static PyObject *const_str_digest_e181204d63c8b7732d12c155e97abb8c;
static PyObject *const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38;
extern PyObject *const_str_plain___uri__;
extern PyObject *const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
extern PyObject *const_str_plain___email__;
static PyObject *const_str_plain_pyOpenSSL;
extern PyObject *const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___summary__;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_7a37fc81b16958dd9b37fbf746b699fd_list;
static PyObject *const_str_digest_160c11403ade02fd24eed8043886fe0e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_17fcf6156b58e795c4b8433560cf09d8;
static PyObject *const_str_digest_765688c99802d0eaa12abe5161d7d87c;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___copyright__;
static PyObject *const_str_digest_d423f61b0839c8c297e8e18c57b48478;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
extern PyObject *const_str_plain_format;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_68018ff76519212609a7968014aa79ba = UNSTREAM_STRING(&constant_bin[ 168252 ], 27, 0);
    const_str_digest_e181204d63c8b7732d12c155e97abb8c = UNSTREAM_STRING(&constant_bin[ 168279 ], 48, 0);
    const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38 = UNSTREAM_STRING(&constant_bin[ 168327 ], 24, 0);
    const_str_plain_pyOpenSSL = UNSTREAM_STRING(&constant_bin[ 82942 ], 9, 1);
    const_list_7a37fc81b16958dd9b37fbf746b699fd_list = PyList_New(8);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 0, const_str_plain___author__); Py_INCREF(const_str_plain___author__);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 1, const_str_plain___copyright__); Py_INCREF(const_str_plain___copyright__);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 2, const_str_plain___email__); Py_INCREF(const_str_plain___email__);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 3, const_str_plain___license__); Py_INCREF(const_str_plain___license__);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 4, const_str_plain___summary__); Py_INCREF(const_str_plain___summary__);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 5, const_str_plain___title__); Py_INCREF(const_str_plain___title__);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 6, const_str_plain___uri__); Py_INCREF(const_str_plain___uri__);
    PyList_SET_ITEM(const_list_7a37fc81b16958dd9b37fbf746b699fd_list, 7, const_str_plain___version__); Py_INCREF(const_str_plain___version__);
    const_str_digest_160c11403ade02fd24eed8043886fe0e = UNSTREAM_STRING(&constant_bin[ 168351 ], 18, 0);
    const_str_digest_17fcf6156b58e795c4b8433560cf09d8 = UNSTREAM_STRING(&constant_bin[ 168369 ], 23, 0);
    const_str_digest_765688c99802d0eaa12abe5161d7d87c = UNSTREAM_STRING(&constant_bin[ 168392 ], 6, 0);
    const_str_digest_d423f61b0839c8c297e8e18c57b48478 = UNSTREAM_STRING(&constant_bin[ 168398 ], 22, 0);
    const_str_digest_e29bae330b8b3eb2658b1344a6271a86 = UNSTREAM_STRING(&constant_bin[ 168420 ], 24, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenSSL$version(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_121aed930cf8dcb04c383c97bb1ede3a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_160c11403ade02fd24eed8043886fe0e);
    codeobj_121aed930cf8dcb04c383c97bb1ede3a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_d4ea8f4eef41519fcb452ff7823d9d38, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenSSL$version =
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

function_impl_code functable_OpenSSL$version[] = {

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

    function_impl_code *current = functable_OpenSSL$version;
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

    if (offset > sizeof(functable_OpenSSL$version) || offset < 0) {
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
        functable_OpenSSL$version[offset],
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
        module_OpenSSL$version,
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
PyObject *modulecode_OpenSSL$version(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_OpenSSL$version;
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
    PRINT_STRING("OpenSSL.version: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("OpenSSL.version: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("OpenSSL.version: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initOpenSSL$version\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenSSL$version = Py_InitModule4(
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
    mdef_OpenSSL$version.m_name = module_full_name;
    module_OpenSSL$version = PyModule_Create(&mdef_OpenSSL$version);
#endif

    moduledict_OpenSSL$version = MODULE_DICT(module_OpenSSL$version);

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
        moduledict_OpenSSL$version,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenSSL$version,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenSSL$version,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$version,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenSSL$version);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_OpenSSL$version);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_121aed930cf8dcb04c383c97bb1ede3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_69e665cd1c1ee14f52dfb85d4f885c38;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_7a37fc81b16958dd9b37fbf746b699fd_list);
        UPDATE_STRING_DICT1(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_765688c99802d0eaa12abe5161d7d87c;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_plain_pyOpenSSL;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_str_digest_d423f61b0839c8c297e8e18c57b48478;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___uri__, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_digest_e181204d63c8b7732d12c155e97abb8c;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___summary__, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_digest_e29bae330b8b3eb2658b1344a6271a86;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_68018ff76519212609a7968014aa79ba;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_10);
    }
    // Frame without reuse.
    frame_121aed930cf8dcb04c383c97bb1ede3a = MAKE_MODULE_FRAME(codeobj_121aed930cf8dcb04c383c97bb1ede3a, module_OpenSSL$version);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_121aed930cf8dcb04c383c97bb1ede3a);
    assert(Py_REFCNT(frame_121aed930cf8dcb04c383c97bb1ede3a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_called_instance_1 = const_str_digest_17fcf6156b58e795c4b8433560cf09d8;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___author__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___author__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_args_element_name_1 = tmp_mvar_value_1;
        frame_121aed930cf8dcb04c383c97bb1ede3a->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_format, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$version, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_11);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_121aed930cf8dcb04c383c97bb1ede3a);
#endif
    popFrameStack();

    assertFrameObject(frame_121aed930cf8dcb04c383c97bb1ede3a);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_121aed930cf8dcb04c383c97bb1ede3a);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_121aed930cf8dcb04c383c97bb1ede3a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_121aed930cf8dcb04c383c97bb1ede3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_121aed930cf8dcb04c383c97bb1ede3a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_OpenSSL$version;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
