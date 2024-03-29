/* Generated code for Python module 'chardet.langbulgarianmodel'
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

/* The "_module_chardet$langbulgarianmodel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$langbulgarianmodel;
PyDictObject *moduledict_chardet$langbulgarianmodel;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
static PyObject *const_str_plain_Bulgairan;
static PyObject *const_float_0_969392;
static PyObject *const_str_plain_Bulgarian;
extern PyObject *const_str_plain_typical_positive_ratio;
extern PyObject *const_str_digest_79273f970a414aa39a32d8f0b259063b;
static PyObject *const_str_digest_776d641740a02943b798702998a6246b;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_Latin5BulgarianModel;
extern PyObject *const_str_plain_keep_english_letter;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_win1251BulgarianCharToOrderMap;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_Latin5_BulgarianCharToOrderMap;
static PyObject *const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
extern PyObject *const_str_plain_Win1251BulgarianModel;
extern PyObject *const_str_digest_aada818c73a52b8f999cbecf8cef2e77;
static PyObject *const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
extern PyObject *const_str_plain_precedence_matrix;
extern PyObject *const_str_plain_char_to_order_map;
static PyObject *const_str_plain_BulgarianLangModel;
extern PyObject *const_str_plain_charset_name;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 411665 ], 1285);
    const_str_plain_Bulgairan = UNSTREAM_STRING(&constant_bin[ 412950 ], 9, 1);
    const_float_0_969392 = UNSTREAM_FLOAT(&constant_bin[ 412959 ]);
    const_str_plain_Bulgarian = UNSTREAM_STRING(&constant_bin[ 17942 ], 9, 1);
    const_str_digest_776d641740a02943b798702998a6246b = UNSTREAM_STRING(&constant_bin[ 412967 ], 29, 0);
    const_str_plain_win1251BulgarianCharToOrderMap = UNSTREAM_STRING(&constant_bin[ 412996 ], 30, 1);
    const_str_plain_Latin5_BulgarianCharToOrderMap = UNSTREAM_STRING(&constant_bin[ 413026 ], 30, 1);
    const_tuple_36b7ecdab49c9829602e64b169986871_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 413056 ], 20485);
    const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 433541 ], 1285);
    const_str_plain_BulgarianLangModel = UNSTREAM_STRING(&constant_bin[ 434826 ], 18, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langbulgarianmodel(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_776d641740a02943b798702998a6246b);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langbulgarianmodel =
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

function_impl_code functable_chardet$langbulgarianmodel[] = {

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

    function_impl_code *current = functable_chardet$langbulgarianmodel;
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

    if (offset > sizeof(functable_chardet$langbulgarianmodel) || offset < 0) {
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
        functable_chardet$langbulgarianmodel[offset],
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
        module_chardet$langbulgarianmodel,
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
PyObject *modulecode_chardet$langbulgarianmodel(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$langbulgarianmodel;
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
    PRINT_STRING("chardet.langbulgarianmodel: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.langbulgarianmodel: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.langbulgarianmodel: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$langbulgarianmodel\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langbulgarianmodel = Py_InitModule4(
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
    mdef_chardet$langbulgarianmodel.m_name = module_full_name;
    module_chardet$langbulgarianmodel = PyModule_Create(&mdef_chardet$langbulgarianmodel);
#endif

    moduledict_chardet$langbulgarianmodel = MODULE_DICT(module_chardet$langbulgarianmodel);

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
        moduledict_chardet$langbulgarianmodel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$langbulgarianmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$langbulgarianmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langbulgarianmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langbulgarianmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$langbulgarianmodel);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$langbulgarianmodel);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
        UPDATE_STRING_DICT0(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_dict_value_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_char_to_order_map;
        tmp_assign_source_6 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_dict_value_2 = tmp_mvar_value_2;
        tmp_dict_key_2 = const_str_plain_precedence_matrix;
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_value_3 = const_float_0_969392;
        tmp_dict_key_3 = const_str_plain_typical_positive_ratio;
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_value_4 = Py_False;
        tmp_dict_key_4 = const_str_plain_keep_english_letter;
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_value_5 = const_str_digest_aada818c73a52b8f999cbecf8cef2e77;
        tmp_dict_key_5 = const_str_plain_charset_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_value_6 = const_str_plain_Bulgairan;
        tmp_dict_key_6 = const_str_plain_language;
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_dict_value_7 = tmp_mvar_value_3;
        tmp_dict_key_7 = const_str_plain_char_to_order_map;
        tmp_assign_source_7 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel);
        }

        CHECK_OBJECT(tmp_mvar_value_4);
        tmp_dict_value_8 = tmp_mvar_value_4;
        tmp_dict_key_8 = const_str_plain_precedence_matrix;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_value_9 = const_float_0_969392;
        tmp_dict_key_9 = const_str_plain_typical_positive_ratio;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_value_10 = Py_False;
        tmp_dict_key_10 = const_str_plain_keep_english_letter;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_value_11 = const_str_digest_79273f970a414aa39a32d8f0b259063b;
        tmp_dict_key_11 = const_str_plain_charset_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_value_12 = const_str_plain_Bulgarian;
        tmp_dict_key_12 = const_str_plain_language;
        tmp_res = PyDict_SetItem(tmp_assign_source_7, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel, tmp_assign_source_7);
    }

    return module_chardet$langbulgarianmodel;
}
