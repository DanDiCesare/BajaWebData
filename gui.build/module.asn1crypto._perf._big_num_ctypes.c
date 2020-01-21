/* Generated code for Python module 'asn1crypto._perf._big_num_ctypes'
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

/* The "_module_asn1crypto$_perf$_big_num_ctypes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_asn1crypto$_perf$_big_num_ctypes;
PyDictObject *moduledict_asn1crypto$_perf$_big_num_ctypes;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_division;
static PyObject *const_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9;
extern PyObject *const_str_plain_FFIEngineError;
extern PyObject *const_str_plain_BN_CTX_new;
extern PyObject *const_str_plain_LibraryNotFoundError;
static PyObject *const_str_plain_restype;
extern PyObject *const_str_plain_BN_free;
extern PyObject *const_str_plain_BN_CTX_free;
static PyObject *const_tuple_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9_tuple;
extern PyObject *const_str_plain_crypto;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_argtypes;
static PyObject *const_tuple_str_plain_LibraryNotFoundError_str_plain_FFIEngineError_tuple;
static PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_BN_set_negative;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_BN_bn2bin;
static PyObject *const_unicode_plain_crypto;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_plain_c_char_p;
static PyObject *const_str_plain_find_library;
extern PyObject *const_str_plain_BN_new;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_c_int;
static PyObject *const_str_plain_libcrypto_path;
static PyObject *const_str_plain_CDLL;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_BN_mod_inverse;
extern PyObject *const_str_plain_BN_num_bits;
static PyObject *const_str_digest_380412b2338968d6a0792e62dce240ec;
static PyObject *const_tuple_unicode_digest_564cf553d1fc7d823b35858d52155be6_tuple;
static PyObject *const_unicode_digest_c9d3a5d3f01bf0def8b70d47345cff8c;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_BN_bin2bn;
static PyObject *const_tuple_d8bf61b3d5e115572beefa6af5918bed_tuple;
extern PyObject *const_str_plain_libcrypto;
extern PyObject *const_str_plain__ffi;
static PyObject *const_tuple_str_plain_find_library_tuple;
static PyObject *const_unicode_digest_564cf553d1fc7d823b35858d52155be6;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_37c4ae810a3f0b7e2c761fb60b38acdd;
static PyObject *const_str_digest_581e9157f4cfd7a80dd5ba063afd246e;
extern PyObject *const_int_pos_3;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9 = UNSTREAM_UNICODE(&constant_bin[ 179737 ], 25);
    const_str_plain_restype = UNSTREAM_STRING(&constant_bin[ 179762 ], 7, 1);
    const_tuple_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9_tuple, 0, const_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9); Py_INCREF(const_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9);
    const_str_plain_argtypes = UNSTREAM_STRING(&constant_bin[ 179769 ], 8, 1);
    const_tuple_str_plain_LibraryNotFoundError_str_plain_FFIEngineError_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_LibraryNotFoundError_str_plain_FFIEngineError_tuple, 0, const_str_plain_LibraryNotFoundError); Py_INCREF(const_str_plain_LibraryNotFoundError);
    PyTuple_SET_ITEM(const_tuple_str_plain_LibraryNotFoundError_str_plain_FFIEngineError_tuple, 1, const_str_plain_FFIEngineError); Py_INCREF(const_str_plain_FFIEngineError);
    const_str_plain_c_void_p = UNSTREAM_STRING(&constant_bin[ 7331 ], 8, 1);
    const_unicode_plain_crypto = UNSTREAM_UNICODE(&constant_bin[ 6468 ], 6);
    const_str_plain_c_char_p = UNSTREAM_STRING(&constant_bin[ 7361 ], 8, 1);
    const_str_plain_find_library = UNSTREAM_STRING(&constant_bin[ 7235 ], 12, 1);
    const_str_plain_c_int = UNSTREAM_STRING(&constant_bin[ 7391 ], 5, 1);
    const_str_plain_libcrypto_path = UNSTREAM_STRING(&constant_bin[ 7295 ], 14, 1);
    const_str_plain_CDLL = UNSTREAM_STRING(&constant_bin[ 7269 ], 4, 1);
    const_str_digest_380412b2338968d6a0792e62dce240ec = UNSTREAM_STRING(&constant_bin[ 179777 ], 35, 0);
    const_tuple_unicode_digest_564cf553d1fc7d823b35858d52155be6_tuple = PyTuple_New(1);
    const_unicode_digest_564cf553d1fc7d823b35858d52155be6 = UNSTREAM_UNICODE(&constant_bin[ 179812 ], 40);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_564cf553d1fc7d823b35858d52155be6_tuple, 0, const_unicode_digest_564cf553d1fc7d823b35858d52155be6); Py_INCREF(const_unicode_digest_564cf553d1fc7d823b35858d52155be6);
    const_unicode_digest_c9d3a5d3f01bf0def8b70d47345cff8c = UNSTREAM_UNICODE(&constant_bin[ 179852 ], 435);
    const_tuple_d8bf61b3d5e115572beefa6af5918bed_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_d8bf61b3d5e115572beefa6af5918bed_tuple, 0, const_str_plain_CDLL); Py_INCREF(const_str_plain_CDLL);
    PyTuple_SET_ITEM(const_tuple_d8bf61b3d5e115572beefa6af5918bed_tuple, 1, const_str_plain_c_int); Py_INCREF(const_str_plain_c_int);
    PyTuple_SET_ITEM(const_tuple_d8bf61b3d5e115572beefa6af5918bed_tuple, 2, const_str_plain_c_char_p); Py_INCREF(const_str_plain_c_char_p);
    PyTuple_SET_ITEM(const_tuple_d8bf61b3d5e115572beefa6af5918bed_tuple, 3, const_str_plain_c_void_p); Py_INCREF(const_str_plain_c_void_p);
    const_tuple_str_plain_find_library_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_find_library_tuple, 0, const_str_plain_find_library); Py_INCREF(const_str_plain_find_library);
    const_str_digest_37c4ae810a3f0b7e2c761fb60b38acdd = UNSTREAM_STRING(&constant_bin[ 180287 ], 41, 0);
    const_str_digest_581e9157f4cfd7a80dd5ba063afd246e = UNSTREAM_STRING(&constant_bin[ 180328 ], 11, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_asn1crypto$_perf$_big_num_ctypes(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_62723e2682f695ed40821b6ee453c418;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_380412b2338968d6a0792e62dce240ec);
    codeobj_62723e2682f695ed40821b6ee453c418 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_37c4ae810a3f0b7e2c761fb60b38acdd, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_asn1crypto$_perf$_big_num_ctypes =
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

function_impl_code functable_asn1crypto$_perf$_big_num_ctypes[] = {

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

    function_impl_code *current = functable_asn1crypto$_perf$_big_num_ctypes;
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

    if (offset > sizeof(functable_asn1crypto$_perf$_big_num_ctypes) || offset < 0) {
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
        functable_asn1crypto$_perf$_big_num_ctypes[offset],
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
        module_asn1crypto$_perf$_big_num_ctypes,
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
PyObject *modulecode_asn1crypto$_perf$_big_num_ctypes(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_asn1crypto$_perf$_big_num_ctypes;
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
    PRINT_STRING("asn1crypto._perf._big_num_ctypes: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("asn1crypto._perf._big_num_ctypes: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("asn1crypto._perf._big_num_ctypes: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initasn1crypto$_perf$_big_num_ctypes\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_asn1crypto$_perf$_big_num_ctypes = Py_InitModule4(
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
    mdef_asn1crypto$_perf$_big_num_ctypes.m_name = module_full_name;
    module_asn1crypto$_perf$_big_num_ctypes = PyModule_Create(&mdef_asn1crypto$_perf$_big_num_ctypes);
#endif

    moduledict_asn1crypto$_perf$_big_num_ctypes = MODULE_DICT(module_asn1crypto$_perf$_big_num_ctypes);

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
        moduledict_asn1crypto$_perf$_big_num_ctypes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_asn1crypto$_perf$_big_num_ctypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_asn1crypto$_perf$_big_num_ctypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_perf$_big_num_ctypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_perf$_big_num_ctypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_asn1crypto$_perf$_big_num_ctypes);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_asn1crypto$_perf$_big_num_ctypes);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_62723e2682f695ed40821b6ee453c418;
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
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_digest_c9d3a5d3f01bf0def8b70d47345cff8c;
        UPDATE_STRING_DICT0(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyImport_ImportModule("__future__");
        assert(!(tmp_assign_source_3 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Frame without reuse.
    frame_62723e2682f695ed40821b6ee453c418 = MAKE_MODULE_FRAME(codeobj_62723e2682f695ed40821b6ee453c418, module_asn1crypto$_perf$_big_num_ctypes);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_62723e2682f695ed40821b6ee453c418);
    assert(Py_REFCNT(frame_62723e2682f695ed40821b6ee453c418) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_division);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_absolute_import);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_print_function);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7);
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_asn1crypto$_perf$_big_num_ctypes;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 24;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_ctypes;
        tmp_globals_name_2 = (PyObject *)moduledict_asn1crypto$_perf$_big_num_ctypes;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_d8bf61b3d5e115572beefa6af5918bed_tuple;
        tmp_level_name_2 = const_int_0;
        frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 26;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_CDLL);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_CDLL, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_c_int);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_int, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_c_char_p);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_char_p, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_c_void_p);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p, tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_581e9157f4cfd7a80dd5ba063afd246e;
        tmp_globals_name_3 = (PyObject *)moduledict_asn1crypto$_perf$_big_num_ctypes;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_find_library_tuple;
        tmp_level_name_3 = const_int_0;
        frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 27;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_find_library);
        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_find_library, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__ffi;
        tmp_globals_name_4 = (PyObject *)moduledict_asn1crypto$_perf$_big_num_ctypes;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_LibraryNotFoundError_str_plain_FFIEngineError_tuple;
        tmp_level_name_4 = const_int_pos_2;
        frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 29;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_LibraryNotFoundError);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_LibraryNotFoundError, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_FFIEngineError);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_FFIEngineError, tmp_assign_source_17);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_find_library);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_find_library);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7229 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_4;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3017 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_4;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_version_info);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_3_tuple;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_name_1 = const_str_plain_crypto;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_name_1 = const_unicode_plain_crypto;
        condexpr_end_1:;
        frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 35;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto_path, tmp_assign_source_18);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto_path);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto_path);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_operand_name_1 = tmp_mvar_value_3;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_LibraryNotFoundError);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LibraryNotFoundError);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6732 ], 42, 0);
                exception_tb = NULL;

                exception_lineno = 37;

                goto try_except_handler_4;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 37;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_2, &PyTuple_GET_ITEM(const_tuple_unicode_digest_564cf553d1fc7d823b35858d52155be6_tuple, 0));

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 37;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

            goto try_except_handler_4;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_CDLL);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CDLL);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7263 ], 26, 0);
            exception_tb = NULL;

            exception_lineno = 39;

            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto_path);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto_path);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7289 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 39;

            goto try_except_handler_4;
        }

        tmp_args_element_name_2 = tmp_mvar_value_6;
        frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 39;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_7;
        tmp_assattr_name_1 = PyList_New(0);
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        CHECK_OBJECT(tmp_mvar_value_7);
        tmp_source_name_2 = tmp_mvar_value_7;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_BN_new);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 41;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_argtypes, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 42;

            goto try_except_handler_4;
        }

        tmp_assattr_name_2 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 42;

            goto try_except_handler_4;
        }

        tmp_source_name_3 = tmp_mvar_value_9;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_BN_new);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_restype, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_char_p);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char_p);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7355 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 44;

            goto try_except_handler_4;
        }

        tmp_list_element_1 = tmp_mvar_value_10;
        tmp_assattr_name_3 = PyList_New(3);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assattr_name_3, 0, tmp_list_element_1);
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_int);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7385 ], 27, 0);
            exception_tb = NULL;

            exception_lineno = 44;

            goto try_except_handler_4;
        }

        tmp_list_element_1 = tmp_mvar_value_11;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assattr_name_3, 1, tmp_list_element_1);
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 44;

            goto try_except_handler_4;
        }

        tmp_list_element_1 = tmp_mvar_value_12;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assattr_name_3, 2, tmp_list_element_1);
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 44;

            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_13;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_BN_bin2bn);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_3);

            exception_lineno = 44;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_argtypes, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_14 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 45;

            goto try_except_handler_4;
        }

        tmp_assattr_name_4 = tmp_mvar_value_14;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_15 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 45;

            goto try_except_handler_4;
        }

        tmp_source_name_5 = tmp_mvar_value_15;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_BN_bin2bn);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_restype, tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_16 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 47;

            goto try_except_handler_4;
        }

        tmp_list_element_2 = tmp_mvar_value_16;
        tmp_assattr_name_5 = PyList_New(2);
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_assattr_name_5, 0, tmp_list_element_2);
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_char_p);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char_p);
        }

        if (tmp_mvar_value_17 == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7355 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 47;

            goto try_except_handler_4;
        }

        tmp_list_element_2 = tmp_mvar_value_17;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_assattr_name_5, 1, tmp_list_element_2);
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_18 == NULL) {
            Py_DECREF(tmp_assattr_name_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 47;

            goto try_except_handler_4;
        }

        tmp_source_name_6 = tmp_mvar_value_18;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_BN_bn2bin);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_5);

            exception_lineno = 47;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_argtypes, tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_int);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int);
        }

        if (tmp_mvar_value_19 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7385 ], 27, 0);
            exception_tb = NULL;

            exception_lineno = 48;

            goto try_except_handler_4;
        }

        tmp_assattr_name_6 = tmp_mvar_value_19;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_20 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 48;

            goto try_except_handler_4;
        }

        tmp_source_name_7 = tmp_mvar_value_20;
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_BN_bn2bin);
        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_restype, tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_21 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 50;

            goto try_except_handler_4;
        }

        tmp_list_element_3 = tmp_mvar_value_21;
        tmp_assattr_name_7 = PyList_New(2);
        Py_INCREF(tmp_list_element_3);
        PyList_SET_ITEM(tmp_assattr_name_7, 0, tmp_list_element_3);
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_int);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int);
        }

        if (tmp_mvar_value_22 == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7385 ], 27, 0);
            exception_tb = NULL;

            exception_lineno = 50;

            goto try_except_handler_4;
        }

        tmp_list_element_3 = tmp_mvar_value_22;
        Py_INCREF(tmp_list_element_3);
        PyList_SET_ITEM(tmp_assattr_name_7, 1, tmp_list_element_3);
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_23 == NULL) {
            Py_DECREF(tmp_assattr_name_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 50;

            goto try_except_handler_4;
        }

        tmp_source_name_8 = tmp_mvar_value_23;
        tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_BN_set_negative);
        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_7);

            exception_lineno = 50;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_argtypes, tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_24;
        tmp_assattr_name_8 = Py_None;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_24 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 51;

            goto try_except_handler_4;
        }

        tmp_source_name_9 = tmp_mvar_value_24;
        tmp_assattr_target_8 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_BN_set_negative);
        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_restype, tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_list_element_4;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_25 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 53;

            goto try_except_handler_4;
        }

        tmp_list_element_4 = tmp_mvar_value_25;
        tmp_assattr_name_9 = PyList_New(1);
        Py_INCREF(tmp_list_element_4);
        PyList_SET_ITEM(tmp_assattr_name_9, 0, tmp_list_element_4);
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_26 == NULL) {
            Py_DECREF(tmp_assattr_name_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 53;

            goto try_except_handler_4;
        }

        tmp_source_name_10 = tmp_mvar_value_26;
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_BN_num_bits);
        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_9);

            exception_lineno = 53;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_argtypes, tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_int);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int);
        }

        if (tmp_mvar_value_27 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7385 ], 27, 0);
            exception_tb = NULL;

            exception_lineno = 54;

            goto try_except_handler_4;
        }

        tmp_assattr_name_10 = tmp_mvar_value_27;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_28 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 54;

            goto try_except_handler_4;
        }

        tmp_source_name_11 = tmp_mvar_value_28;
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_BN_num_bits);
        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain_restype, tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_list_element_5;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_29 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 56;

            goto try_except_handler_4;
        }

        tmp_list_element_5 = tmp_mvar_value_29;
        tmp_assattr_name_11 = PyList_New(1);
        Py_INCREF(tmp_list_element_5);
        PyList_SET_ITEM(tmp_assattr_name_11, 0, tmp_list_element_5);
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_30 == NULL) {
            Py_DECREF(tmp_assattr_name_11);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 56;

            goto try_except_handler_4;
        }

        tmp_source_name_12 = tmp_mvar_value_30;
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_BN_free);
        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_11);

            exception_lineno = 56;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, const_str_plain_argtypes, tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_31;
        tmp_assattr_name_12 = Py_None;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_31 == NULL)) {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_31 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 57;

            goto try_except_handler_4;
        }

        tmp_source_name_13 = tmp_mvar_value_31;
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_BN_free);
        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, const_str_plain_restype, tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_32;
        tmp_assattr_name_13 = PyList_New(0);
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_32 == NULL)) {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_32 == NULL) {
            Py_DECREF(tmp_assattr_name_13);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 59;

            goto try_except_handler_4;
        }

        tmp_source_name_14 = tmp_mvar_value_32;
        tmp_assattr_target_13 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_BN_CTX_new);
        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_13);

            exception_lineno = 59;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, const_str_plain_argtypes, tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_33 == NULL)) {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_33 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 60;

            goto try_except_handler_4;
        }

        tmp_assattr_name_14 = tmp_mvar_value_33;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_34 == NULL)) {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_34 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 60;

            goto try_except_handler_4;
        }

        tmp_source_name_15 = tmp_mvar_value_34;
        tmp_assattr_target_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_BN_CTX_new);
        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, const_str_plain_restype, tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_list_element_6;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_35 == NULL)) {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_35 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 62;

            goto try_except_handler_4;
        }

        tmp_list_element_6 = tmp_mvar_value_35;
        tmp_assattr_name_15 = PyList_New(1);
        Py_INCREF(tmp_list_element_6);
        PyList_SET_ITEM(tmp_assattr_name_15, 0, tmp_list_element_6);
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_36 == NULL)) {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_36 == NULL) {
            Py_DECREF(tmp_assattr_name_15);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 62;

            goto try_except_handler_4;
        }

        tmp_source_name_16 = tmp_mvar_value_36;
        tmp_assattr_target_15 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_BN_CTX_free);
        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_15);

            exception_lineno = 62;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, const_str_plain_argtypes, tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_37;
        tmp_assattr_name_16 = Py_None;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_37 == NULL)) {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_37 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 63;

            goto try_except_handler_4;
        }

        tmp_source_name_17 = tmp_mvar_value_37;
        tmp_assattr_target_16 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_BN_CTX_free);
        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, const_str_plain_restype, tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_list_element_7;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_38 == NULL)) {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_38 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 65;

            goto try_except_handler_4;
        }

        tmp_list_element_7 = tmp_mvar_value_38;
        tmp_assattr_name_17 = PyList_New(4);
        Py_INCREF(tmp_list_element_7);
        PyList_SET_ITEM(tmp_assattr_name_17, 0, tmp_list_element_7);
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_39 == NULL)) {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_39 == NULL) {
            Py_DECREF(tmp_assattr_name_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 65;

            goto try_except_handler_4;
        }

        tmp_list_element_7 = tmp_mvar_value_39;
        Py_INCREF(tmp_list_element_7);
        PyList_SET_ITEM(tmp_assattr_name_17, 1, tmp_list_element_7);
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_40 == NULL)) {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_40 == NULL) {
            Py_DECREF(tmp_assattr_name_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 65;

            goto try_except_handler_4;
        }

        tmp_list_element_7 = tmp_mvar_value_40;
        Py_INCREF(tmp_list_element_7);
        PyList_SET_ITEM(tmp_assattr_name_17, 2, tmp_list_element_7);
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_41 == NULL)) {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_41 == NULL) {
            Py_DECREF(tmp_assattr_name_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 65;

            goto try_except_handler_4;
        }

        tmp_list_element_7 = tmp_mvar_value_41;
        Py_INCREF(tmp_list_element_7);
        PyList_SET_ITEM(tmp_assattr_name_17, 3, tmp_list_element_7);
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_42 == NULL)) {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_42 == NULL) {
            Py_DECREF(tmp_assattr_name_17);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 65;

            goto try_except_handler_4;
        }

        tmp_source_name_18 = tmp_mvar_value_42;
        tmp_assattr_target_17 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_BN_mod_inverse);
        if (tmp_assattr_target_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_17);

            exception_lineno = 65;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, const_str_plain_argtypes, tmp_assattr_name_17);
        Py_DECREF(tmp_assattr_name_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_44;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_c_void_p);

        if (unlikely(tmp_mvar_value_43 == NULL)) {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p);
        }

        if (tmp_mvar_value_43 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7325 ], 30, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto try_except_handler_4;
        }

        tmp_assattr_name_18 = tmp_mvar_value_43;
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_libcrypto);

        if (unlikely(tmp_mvar_value_44 == NULL)) {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto);
        }

        if (tmp_mvar_value_44 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6459 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 66;

            goto try_except_handler_4;
        }

        tmp_source_name_19 = tmp_mvar_value_44;
        tmp_assattr_target_18 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_BN_mod_inverse);
        if (tmp_assattr_target_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, const_str_plain_restype, tmp_assattr_name_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_4;
        }
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
    PRESERVE_FRAME_EXCEPTION(frame_62723e2682f695ed40821b6ee453c418);
    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_62723e2682f695ed40821b6ee453c418, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_62723e2682f695ed40821b6ee453c418, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_45;
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_perf$_big_num_ctypes, (Nuitka_StringObject *)const_str_plain_FFIEngineError);

            if (unlikely(tmp_mvar_value_45 == NULL)) {
                tmp_mvar_value_45 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_FFIEngineError);
            }

            if (tmp_mvar_value_45 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6774 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 69;

                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_45;
            frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = 69;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_4, &PyTuple_GET_ITEM(const_tuple_unicode_digest_fb49df0c02ced9a1dbcd2cd40c6c89c9_tuple, 0));

            if (tmp_raise_type_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 69;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

            goto frame_exception_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 32;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_62723e2682f695ed40821b6ee453c418->m_frame) frame_62723e2682f695ed40821b6ee453c418->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_2:;
    }
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION(frame_62723e2682f695ed40821b6ee453c418);
#endif
    popFrameStack();

    assertFrameObject(frame_62723e2682f695ed40821b6ee453c418);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_62723e2682f695ed40821b6ee453c418);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_62723e2682f695ed40821b6ee453c418, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_62723e2682f695ed40821b6ee453c418->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62723e2682f695ed40821b6ee453c418, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_asn1crypto$_perf$_big_num_ctypes;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
