/* Generated code for Python module 'future.builtins.new_min_max'
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

/* The "_module_future$builtins$new_min_max" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins$new_min_max;
PyDictObject *moduledict_future$builtins$new_min_max;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_newmax;
extern PyObject *const_str_plain_builtins;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_items;
static PyObject *const_str_digest_29985b1027474932540e24c72e7e34d1;
static PyObject *const_str_digest_68bcd91302085e81f1eb467ed209bbc9;
extern PyObject *const_tuple_str_plain_utils_tuple;
static PyObject *const_str_plain__builtin_min;
static PyObject *const_str_plain_new_min_max;
static PyObject *const_str_plain__builtin_max;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_newmin;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__builtin_func;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_key;
extern PyObject *const_tuple_str_plain_default_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_a744c84be59f571278903724fff7810b;
static PyObject *const_str_digest_5db5dd755193d4c15d295e5e530e3e43;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_PY2;
extern PyObject *const_str_plain_future;
static PyObject *const_str_digest_90b9aec4bb99335c166dd6a8f314613a;
extern PyObject *const_str_plain___builtin__;
extern PyObject *const_str_plain_default;
static PyObject *const_tuple_str_plain_key_tuple;
static PyObject *const_tuple_str_plain_max_str_plain_min_tuple;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple;
extern PyObject *const_str_plain_args;
static PyObject *const_set_fad2cfef13d269c595e16d5583548163;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_29985b1027474932540e24c72e7e34d1 = UNSTREAM_STRING(&constant_bin[ 792753 ], 239, 0);
    const_str_digest_68bcd91302085e81f1eb467ed209bbc9 = UNSTREAM_STRING(&constant_bin[ 792992 ], 29, 0);
    const_str_plain__builtin_min = UNSTREAM_STRING(&constant_bin[ 57969 ], 12, 1);
    const_str_plain_new_min_max = UNSTREAM_STRING(&constant_bin[ 57929 ], 11, 1);
    const_str_plain__builtin_max = UNSTREAM_STRING(&constant_bin[ 58010 ], 12, 1);
    const_str_plain__builtin_func = UNSTREAM_STRING(&constant_bin[ 792844 ], 13, 1);
    const_str_digest_a744c84be59f571278903724fff7810b = UNSTREAM_STRING(&constant_bin[ 793021 ], 30, 0);
    const_str_digest_5db5dd755193d4c15d295e5e530e3e43 = UNSTREAM_STRING(&constant_bin[ 793051 ], 36, 0);
    const_str_digest_90b9aec4bb99335c166dd6a8f314613a = UNSTREAM_STRING(&constant_bin[ 793087 ], 19, 0);
    const_tuple_str_plain_key_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_key_tuple, 0, const_str_plain_key); Py_INCREF(const_str_plain_key);
    const_tuple_str_plain_max_str_plain_min_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_max_str_plain_min_tuple, 0, const_str_plain_max); Py_INCREF(const_str_plain_max);
    PyTuple_SET_ITEM(const_tuple_str_plain_max_str_plain_min_tuple, 1, const_str_plain_min); Py_INCREF(const_str_plain_min);
    const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple, 0, const_str_plain__builtin_func); Py_INCREF(const_str_plain__builtin_func);
    PyTuple_SET_ITEM(const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple, 1, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple, 2, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple, 3, const_str_plain__); Py_INCREF(const_str_plain__);
    PyTuple_SET_ITEM(const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple, 4, const_str_plain_key); Py_INCREF(const_str_plain_key);
    const_set_fad2cfef13d269c595e16d5583548163 = PySet_New(NULL);
    PySet_Add(const_set_fad2cfef13d269c595e16d5583548163, const_str_plain_default);
    PySet_Add(const_set_fad2cfef13d269c595e16d5583548163, const_str_plain_key);
    assert(PySet_Size(const_set_fad2cfef13d269c595e16d5583548163) == 2);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins$new_min_max(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d28b62fa75c074e66ebd1b43bfd4939d;
static PyCodeObject *codeobj_47858f891e29c109983e208ef03bb2ea;
static PyCodeObject *codeobj_9072431c37f720625fb0a5856d4e9c1c;
static PyCodeObject *codeobj_c71e80222fcd08d1a47749e5d8230353;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_a744c84be59f571278903724fff7810b);
    codeobj_d28b62fa75c074e66ebd1b43bfd4939d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_5db5dd755193d4c15d295e5e530e3e43, const_tuple_empty, 0, 0, 0);
    codeobj_47858f891e29c109983e208ef03bb2ea = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_new_min_max, const_tuple_769a56660b67d11931025c75e9c4b6c6_tuple, 1, 0, 0);
    codeobj_9072431c37f720625fb0a5856d4e9c1c = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_newmax, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, 0);
    codeobj_c71e80222fcd08d1a47749e5d8230353 = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_newmin, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_future$builtins$new_min_max$$$function_1_newmin();


static PyObject *MAKE_FUNCTION_future$builtins$new_min_max$$$function_2_newmax();


static PyObject *MAKE_FUNCTION_future$builtins$new_min_max$$$function_3_new_min_max();


// The module function definitions.
static PyObject *impl_future$builtins$new_min_max$$$function_1_newmin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_c71e80222fcd08d1a47749e5d8230353;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c71e80222fcd08d1a47749e5d8230353 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c71e80222fcd08d1a47749e5d8230353, codeobj_c71e80222fcd08d1a47749e5d8230353, module_future$builtins$new_min_max, sizeof(void *)+sizeof(void *));
    frame_c71e80222fcd08d1a47749e5d8230353 = cache_frame_c71e80222fcd08d1a47749e5d8230353;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c71e80222fcd08d1a47749e5d8230353);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c71e80222fcd08d1a47749e5d8230353) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain_new_min_max);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_new_min_max);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 57916 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain__builtin_min);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_min);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 57956 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c71e80222fcd08d1a47749e5d8230353);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c71e80222fcd08d1a47749e5d8230353);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c71e80222fcd08d1a47749e5d8230353);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c71e80222fcd08d1a47749e5d8230353, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c71e80222fcd08d1a47749e5d8230353->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c71e80222fcd08d1a47749e5d8230353, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c71e80222fcd08d1a47749e5d8230353,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if (frame_c71e80222fcd08d1a47749e5d8230353 == cache_frame_c71e80222fcd08d1a47749e5d8230353) {
        Py_DECREF(frame_c71e80222fcd08d1a47749e5d8230353);
    }
    cache_frame_c71e80222fcd08d1a47749e5d8230353 = NULL;

    assertFrameObject(frame_c71e80222fcd08d1a47749e5d8230353);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$new_min_max$$$function_1_newmin);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$builtins$new_min_max$$$function_2_newmax(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_9072431c37f720625fb0a5856d4e9c1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9072431c37f720625fb0a5856d4e9c1c = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_9072431c37f720625fb0a5856d4e9c1c, codeobj_9072431c37f720625fb0a5856d4e9c1c, module_future$builtins$new_min_max, sizeof(void *)+sizeof(void *));
    frame_9072431c37f720625fb0a5856d4e9c1c = cache_frame_9072431c37f720625fb0a5856d4e9c1c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9072431c37f720625fb0a5856d4e9c1c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9072431c37f720625fb0a5856d4e9c1c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain_new_min_max);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_new_min_max);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 57916 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain__builtin_max);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_max);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 57997 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9072431c37f720625fb0a5856d4e9c1c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9072431c37f720625fb0a5856d4e9c1c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9072431c37f720625fb0a5856d4e9c1c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9072431c37f720625fb0a5856d4e9c1c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9072431c37f720625fb0a5856d4e9c1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9072431c37f720625fb0a5856d4e9c1c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9072431c37f720625fb0a5856d4e9c1c,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if (frame_9072431c37f720625fb0a5856d4e9c1c == cache_frame_9072431c37f720625fb0a5856d4e9c1c) {
        Py_DECREF(frame_9072431c37f720625fb0a5856d4e9c1c);
    }
    cache_frame_9072431c37f720625fb0a5856d4e9c1c = NULL;

    assertFrameObject(frame_9072431c37f720625fb0a5856d4e9c1c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$new_min_max$$$function_2_newmax);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$builtins$new_min_max$$$function_3_new_min_max(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__builtin_func = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var__ = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_47858f891e29c109983e208ef03bb2ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_47858f891e29c109983e208ef03bb2ea = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_47858f891e29c109983e208ef03bb2ea, codeobj_47858f891e29c109983e208ef03bb2ea, module_future$builtins$new_min_max, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_47858f891e29c109983e208ef03bb2ea = cache_frame_47858f891e29c109983e208ef03bb2ea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_47858f891e29c109983e208ef03bb2ea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_47858f891e29c109983e208ef03bb2ea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 25;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_items);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 25;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 25;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 25;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL)
            {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration))
                {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 25;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
            PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 2)");
#endif
            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            type_description_1 = "ooooo";
            exception_lineno = 25;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_6;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_7;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_key);
        tmp_compexpr_left_1 = var_key;
        tmp_compexpr_right_1 = PySet_New(const_set_fad2cfef13d269c595e16d5583548163);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_1 = const_str_digest_90b9aec4bb99335c166dd6a8f314613a;
            CHECK_OBJECT(var_key);
            tmp_make_exception_arg_2 = var_key;
            frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 27;
            {
                PyObject *call_args[] = {tmp_make_exception_arg_1, tmp_make_exception_arg_2};
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(PyExc_TypeError, call_args);
            }

            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 27;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 25;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            tmp_raise_type_2 = PyExc_TypeError;
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_lineno = 30;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_args);
        tmp_len_arg_2 = par_args;
        tmp_compexpr_left_3 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        assert(!(tmp_res == -1));
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_2 = par_kwargs;
        frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 32;
        tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_default_tuple, 0));

        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_4);
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_raise_type_3;
            tmp_raise_type_3 = PyExc_TypeError;
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_lineno = 33;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(par_args);
        tmp_len_arg_3 = par_args;
        tmp_compexpr_left_5 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        // Tried code:
        {
            PyObject *tmp_value_name_1;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_next_value_1;
            CHECK_OBJECT(par_args);
            tmp_subscribed_name_1 = par_args;
            tmp_subscript_name_1 = const_int_0;
            tmp_iter_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_value_name_1 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_value_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_next_value_1 = ITERATOR_NEXT(tmp_value_name_1);
            Py_DECREF(tmp_value_name_1);
            if (tmp_next_value_1 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooo";
                exception_lineno = 37;
                goto try_except_handler_5;
            }
            Py_DECREF(tmp_next_value_1);
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_47858f891e29c109983e208ef03bb2ea);
        if (exception_keeper_tb_4 == NULL) {
            exception_keeper_tb_4 = MAKE_TRACEBACK(frame_47858f891e29c109983e208ef03bb2ea, exception_keeper_lineno_4);
        } else if (exception_keeper_lineno_4 != 0) {
            exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_47858f891e29c109983e208ef03bb2ea, exception_keeper_lineno_4);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
        PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_6 = PyExc_StopIteration;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_called_instance_3;
                CHECK_OBJECT(par_kwargs);
                tmp_called_instance_3 = par_kwargs;
                frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 39;
                tmp_compexpr_left_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_default_tuple, 0));

                if (tmp_compexpr_left_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_7 = Py_None;
                tmp_condition_result_6 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_compexpr_left_7);
                if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_6;
                } else {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    PyObject *tmp_called_instance_4;
                    CHECK_OBJECT(par_kwargs);
                    tmp_called_instance_4 = par_kwargs;
                    frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 40;
                    tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_default_tuple, 0));

                    if (tmp_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_raise_type_4;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_68bcd91302085e81f1eb467ed209bbc9;
                    frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 42;
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
                    assert(!(tmp_raise_type_4 == NULL));
                    exception_type = tmp_raise_type_4;
                    exception_lineno = 42;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_6:;
            }
            goto branch_end_5;
            branch_no_5:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 36;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_47858f891e29c109983e208ef03bb2ea->m_frame) frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
            branch_end_5:;
        }
        // End of try:
        try_end_4:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_called_instance_5;
            CHECK_OBJECT(par_kwargs);
            tmp_called_instance_5 = par_kwargs;
            frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 43;
            tmp_compexpr_left_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_key_tuple, 0));

            if (tmp_compexpr_left_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_8 = Py_None;
            tmp_condition_result_7 = (tmp_compexpr_left_8 != tmp_compexpr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_compexpr_left_8);
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_called_name_1;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_called_instance_6;
                CHECK_OBJECT(par__builtin_func);
                tmp_called_name_1 = par__builtin_func;
                CHECK_OBJECT(par_args);
                tmp_subscribed_name_2 = par_args;
                tmp_subscript_name_2 = const_int_0;
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_1 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(par_kwargs);
                tmp_called_instance_6 = par_kwargs;
                frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 44;
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_key_tuple, 0));

                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_name_1);

                    exception_lineno = 44;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_1 = const_str_plain_key;
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 44;
                tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
                Py_DECREF(tmp_args_name_1);
                Py_DECREF(tmp_kw_name_1);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                CHECK_OBJECT(par__builtin_func);
                tmp_called_name_2 = par__builtin_func;
                CHECK_OBJECT(par_args);
                tmp_subscribed_name_3 = par_args;
                tmp_subscript_name_3 = const_int_0;
                tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 46;
                tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_7:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(par_args);
        tmp_len_arg_4 = par_args;
        tmp_compexpr_left_9 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_called_instance_7;
            CHECK_OBJECT(par_kwargs);
            tmp_called_instance_7 = par_kwargs;
            frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 49;
            tmp_compexpr_left_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_key_tuple, 0));

            if (tmp_compexpr_left_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_10 = Py_None;
            tmp_condition_result_9 = (tmp_compexpr_left_10 != tmp_compexpr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_compexpr_left_10);
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_called_instance_8;
                CHECK_OBJECT(par__builtin_func);
                tmp_called_name_3 = par__builtin_func;
                CHECK_OBJECT(par_args);
                tmp_tuple_element_2 = par_args;
                tmp_args_name_2 = PyTuple_New(1);
                Py_INCREF(tmp_tuple_element_2);
                PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
                CHECK_OBJECT(par_kwargs);
                tmp_called_instance_8 = par_kwargs;
                frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 50;
                tmp_dict_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_key_tuple, 0));

                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_name_2);

                    exception_lineno = 50;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_2 = const_str_plain_key;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 50;
                tmp_return_value = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
                Py_DECREF(tmp_args_name_2);
                Py_DECREF(tmp_kw_name_2);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_9;
            branch_no_9:;
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT(par__builtin_func);
                tmp_called_name_4 = par__builtin_func;
                CHECK_OBJECT(par_args);
                tmp_args_element_name_2 = par_args;
                frame_47858f891e29c109983e208ef03bb2ea->m_frame.f_lineno = 52;
                tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_2);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_9:;
        }
        branch_no_8:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_47858f891e29c109983e208ef03bb2ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_47858f891e29c109983e208ef03bb2ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_47858f891e29c109983e208ef03bb2ea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47858f891e29c109983e208ef03bb2ea, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_47858f891e29c109983e208ef03bb2ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47858f891e29c109983e208ef03bb2ea, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_47858f891e29c109983e208ef03bb2ea,
        type_description_1,
        par__builtin_func,
        par_args,
        par_kwargs,
        var__,
        var_key
    );


    // Release cached frame.
    if (frame_47858f891e29c109983e208ef03bb2ea == cache_frame_47858f891e29c109983e208ef03bb2ea) {
        Py_DECREF(frame_47858f891e29c109983e208ef03bb2ea);
    }
    cache_frame_47858f891e29c109983e208ef03bb2ea = NULL;

    assertFrameObject(frame_47858f891e29c109983e208ef03bb2ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$builtins$new_min_max$$$function_3_new_min_max);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__);
    var__ = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var__);
    var__ = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$new_min_max$$$function_3_new_min_max);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par__builtin_func);
    Py_DECREF(par__builtin_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par__builtin_func);
    Py_DECREF(par__builtin_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_future$builtins$new_min_max$$$function_1_newmin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$new_min_max$$$function_1_newmin,
        const_str_plain_newmin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c71e80222fcd08d1a47749e5d8230353,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$new_min_max,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$builtins$new_min_max$$$function_2_newmax() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$new_min_max$$$function_2_newmax,
        const_str_plain_newmax,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9072431c37f720625fb0a5856d4e9c1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$new_min_max,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$builtins$new_min_max$$$function_3_new_min_max() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$new_min_max$$$function_3_new_min_max,
        const_str_plain_new_min_max,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_47858f891e29c109983e208ef03bb2ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$new_min_max,
        const_str_digest_29985b1027474932540e24c72e7e34d1,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins$new_min_max =
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

function_impl_code functable_future$builtins$new_min_max[] = {
    impl_future$builtins$new_min_max$$$function_1_newmin,
    impl_future$builtins$new_min_max$$$function_2_newmax,
    impl_future$builtins$new_min_max$$$function_3_new_min_max,
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

    function_impl_code *current = functable_future$builtins$new_min_max;
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

    if (offset > sizeof(functable_future$builtins$new_min_max) || offset < 0) {
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
        functable_future$builtins$new_min_max[offset],
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
        module_future$builtins$new_min_max,
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
PyObject *modulecode_future$builtins$new_min_max(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$builtins$new_min_max;
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
    PRINT_STRING("future.builtins.new_min_max: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins.new_min_max: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins.new_min_max: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$builtins$new_min_max\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins$new_min_max = Py_InitModule4(
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
    mdef_future$builtins$new_min_max.m_name = module_full_name;
    module_future$builtins$new_min_max = PyModule_Create(&mdef_future$builtins$new_min_max);
#endif

    moduledict_future$builtins$new_min_max = MODULE_DICT(module_future$builtins$new_min_max);

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
        moduledict_future$builtins$new_min_max,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$builtins$new_min_max,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$builtins$new_min_max,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins$new_min_max,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins$new_min_max,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$builtins$new_min_max);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$builtins$new_min_max);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_d28b62fa75c074e66ebd1b43bfd4939d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_d28b62fa75c074e66ebd1b43bfd4939d = MAKE_MODULE_FRAME(codeobj_d28b62fa75c074e66ebd1b43bfd4939d, module_future$builtins$new_min_max);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_d28b62fa75c074e66ebd1b43bfd4939d);
    assert(Py_REFCNT(frame_d28b62fa75c074e66ebd1b43bfd4939d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_future;
        tmp_globals_name_1 = (PyObject *)moduledict_future$builtins$new_min_max;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_utils_tuple;
        frame_d28b62fa75c074e66ebd1b43bfd4939d->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_utils);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_3);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain_utils);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_utils);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_PY2);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            tmp_name_name_2 = const_str_plain___builtin__;
            tmp_globals_name_2 = (PyObject *)moduledict_future$builtins$new_min_max;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_max_str_plain_min_tuple;
            frame_d28b62fa75c074e66ebd1b43bfd4939d->m_frame.f_lineno = 3;
            tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
            assert(!(tmp_assign_source_4 == NULL));
            assert(tmp_import_from_1__module == NULL);
            tmp_import_from_1__module = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_import_name_from_2;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_2 = tmp_import_from_1__module;
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_max);
            assert(!(tmp_assign_source_5 == NULL));
            UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain__builtin_max, tmp_assign_source_5);
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_import_name_from_3;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_3 = tmp_import_from_1__module;
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_min);
            assert(!(tmp_assign_source_6 == NULL));
            UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain__builtin_min, tmp_assign_source_6);
        }
        CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
        Py_DECREF(tmp_import_from_1__module);
        tmp_import_from_1__module = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            tmp_name_name_3 = const_str_plain_builtins;
            tmp_globals_name_3 = (PyObject *)moduledict_future$builtins$new_min_max;
            tmp_locals_name_3 = Py_None;
            tmp_fromlist_name_3 = const_tuple_str_plain_max_str_plain_min_tuple;
            frame_d28b62fa75c074e66ebd1b43bfd4939d->m_frame.f_lineno = 5;
            tmp_assign_source_7 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_2__module == NULL);
            tmp_import_from_2__module = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_import_name_from_4;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_4 = tmp_import_from_2__module;
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_max);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain__builtin_max, tmp_assign_source_8);
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_import_name_from_5;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_5 = tmp_import_from_2__module;
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_min);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_1;
            }
            UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain__builtin_min, tmp_assign_source_9);
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

        CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
        Py_DECREF(tmp_import_from_2__module);
        tmp_import_from_2__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
        Py_DECREF(tmp_import_from_2__module);
        tmp_import_from_2__module = NULL;

        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d28b62fa75c074e66ebd1b43bfd4939d);
#endif
    popFrameStack();

    assertFrameObject(frame_d28b62fa75c074e66ebd1b43bfd4939d);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d28b62fa75c074e66ebd1b43bfd4939d);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_d28b62fa75c074e66ebd1b43bfd4939d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d28b62fa75c074e66ebd1b43bfd4939d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d28b62fa75c074e66ebd1b43bfd4939d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_future$builtins$new_min_max$$$function_1_newmin();



        UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain_newmin, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_future$builtins$new_min_max$$$function_2_newmax();



        UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain_newmax, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_future$builtins$new_min_max$$$function_3_new_min_max();



        UPDATE_STRING_DICT1(moduledict_future$builtins$new_min_max, (Nuitka_StringObject *)const_str_plain_new_min_max, tmp_assign_source_12);
    }

    return module_future$builtins$new_min_max;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
