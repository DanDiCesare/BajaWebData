/* Generated code for Python module 'asn1crypto._types'
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

/* The "_module_asn1crypto$_types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_asn1crypto$_types;
PyDictObject *moduledict_asn1crypto$_types;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_inspect;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_num;
static PyObject *const_tuple_str_plain_value_str_plain_cls_tuple;
static PyObject *const_str_digest_4dfb811e2c5bd89f72a685ad800102c1;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain_byte_cls;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_str_cls;
static PyObject *const_unicode_digest_3114c7847ed30512509505e34fc4f6e0;
static PyObject *const_tuple_str_plain_num_tuple;
static PyObject *const_unicode_plain___builtin__;
extern PyObject *const_str_plain_type_name;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___name__;
static PyObject *const_tuple_str_plain_byte_string_str_plain_b_tuple;
extern PyObject *const_tuple_type_int_type_long_tuple;
extern PyObject *const_str_plain_chr_cls;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_isclass;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_unicode_digest_79eb27773663ed2c126c71b4c000ba3b;
extern PyObject *const_str_plain_byte_string;
static PyObject *const_set_3e6d7e135dfdde5035f4dacc76734a7a;
extern PyObject *const_str_plain_bytes_to_list;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_int_types;
static PyObject *const_str_digest_c31b3181747e5b29b45c1e09bed7aab3;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_int;
static PyObject *const_unicode_plain_builtins;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_list;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_str_plain_value_str_plain_cls_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_value_str_plain_cls_tuple, 0, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_str_plain_value_str_plain_cls_tuple, 1, const_str_plain_cls); Py_INCREF(const_str_plain_cls);
    const_str_digest_4dfb811e2c5bd89f72a685ad800102c1 = UNSTREAM_STRING(&constant_bin[ 181166 ], 26, 0);
    const_unicode_digest_3114c7847ed30512509505e34fc4f6e0 = UNSTREAM_UNICODE(&constant_bin[ 181192 ], 5);
    const_tuple_str_plain_num_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_num_tuple, 0, const_str_plain_num); Py_INCREF(const_str_plain_num);
    const_unicode_plain___builtin__ = UNSTREAM_UNICODE(&constant_bin[ 60368 ], 11);
    const_tuple_str_plain_byte_string_str_plain_b_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_byte_string_str_plain_b_tuple, 0, const_str_plain_byte_string); Py_INCREF(const_str_plain_byte_string);
    PyTuple_SET_ITEM(const_tuple_str_plain_byte_string_str_plain_b_tuple, 1, const_str_plain_b); Py_INCREF(const_str_plain_b);
    const_unicode_digest_79eb27773663ed2c126c71b4c000ba3b = UNSTREAM_UNICODE(&constant_bin[ 181197 ], 188);
    const_set_3e6d7e135dfdde5035f4dacc76734a7a = PySet_New(NULL);
    const_unicode_plain_builtins = UNSTREAM_UNICODE(&constant_bin[ 57816 ], 8);
    PySet_Add(const_set_3e6d7e135dfdde5035f4dacc76734a7a, const_unicode_plain_builtins);
    PySet_Add(const_set_3e6d7e135dfdde5035f4dacc76734a7a, const_unicode_plain___builtin__);
    assert(PySet_Size(const_set_3e6d7e135dfdde5035f4dacc76734a7a) == 2);
    const_str_digest_c31b3181747e5b29b45c1e09bed7aab3 = UNSTREAM_STRING(&constant_bin[ 181385 ], 20, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_asn1crypto$_types(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1a6a2f4f70f7c8da6106696570f30dba;
static PyCodeObject *codeobj_bb24ccbae3bc8c87b359731055f2612d;
static PyCodeObject *codeobj_157641adfbce0847c971122829c3f973;
static PyCodeObject *codeobj_48a1afff2f7332a972d4b923cd398433;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_c31b3181747e5b29b45c1e09bed7aab3);
    codeobj_1a6a2f4f70f7c8da6106696570f30dba = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_4dfb811e2c5bd89f72a685ad800102c1, const_tuple_empty, 0, 0, 0);
    codeobj_bb24ccbae3bc8c87b359731055f2612d = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_bytes_to_list, const_tuple_str_plain_byte_string_str_plain_b_tuple, 1, 0, 0);
    codeobj_157641adfbce0847c971122829c3f973 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_chr_cls, const_tuple_str_plain_num_tuple, 1, 0, 0);
    codeobj_48a1afff2f7332a972d4b923cd398433 = MAKE_CODEOBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_type_name, const_tuple_str_plain_value_str_plain_cls_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_1_bytes_to_list();


static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_2_chr_cls();


static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_3_type_name();


// The module function definitions.
static PyObject *impl_asn1crypto$_types$$$function_1_bytes_to_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_byte_string = python_pars[0];
    PyObject *var_b = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_bb24ccbae3bc8c87b359731055f2612d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_bb24ccbae3bc8c87b359731055f2612d = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_bb24ccbae3bc8c87b359731055f2612d, codeobj_bb24ccbae3bc8c87b359731055f2612d, module_asn1crypto$_types, sizeof(void *)+sizeof(void *));
    frame_bb24ccbae3bc8c87b359731055f2612d = cache_frame_bb24ccbae3bc8c87b359731055f2612d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bb24ccbae3bc8c87b359731055f2612d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bb24ccbae3bc8c87b359731055f2612d) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_byte_string);
        tmp_iter_arg_1 = par_byte_string;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(tmp_list_contraction_1__$0 == NULL);
        tmp_list_contraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(tmp_list_contraction_1__contraction_result == NULL);
        tmp_list_contraction_1__contraction_result = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_list_contraction_1__$0);
        tmp_next_source_1 = tmp_list_contraction_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 14;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_list_contraction_1__iter_value_0;
            tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_list_contraction_1__iter_value_0);
        tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_4;
            Py_INCREF(var_b);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
        tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
        CHECK_OBJECT(var_b);
        tmp_ord_arg_1 = var_b;
        tmp_append_value_1 = BUILTIN_ORD(tmp_ord_arg_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(PyList_Check(tmp_append_list_1));
        tmp_res = PyList_Append(tmp_append_list_1, tmp_append_value_1);
        Py_DECREF(tmp_append_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 14;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
    tmp_return_value = tmp_list_contraction_1__contraction_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(asn1crypto$_types$$$function_1_bytes_to_list);
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_list_contraction_1__$0);
    Py_DECREF(tmp_list_contraction_1__$0);
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT((PyObject *)tmp_list_contraction_1__contraction_result);
    Py_DECREF(tmp_list_contraction_1__contraction_result);
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF(tmp_list_contraction_1__iter_value_0);
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_list_contraction_1__$0);
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF(tmp_list_contraction_1__contraction_result);
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF(tmp_list_contraction_1__iter_value_0);
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$_types$$$function_1_bytes_to_list);
    return NULL;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb24ccbae3bc8c87b359731055f2612d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb24ccbae3bc8c87b359731055f2612d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb24ccbae3bc8c87b359731055f2612d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb24ccbae3bc8c87b359731055f2612d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bb24ccbae3bc8c87b359731055f2612d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb24ccbae3bc8c87b359731055f2612d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb24ccbae3bc8c87b359731055f2612d,
        type_description_1,
        par_byte_string,
        var_b
    );


    // Release cached frame.
    if (frame_bb24ccbae3bc8c87b359731055f2612d == cache_frame_bb24ccbae3bc8c87b359731055f2612d) {
        Py_DECREF(frame_bb24ccbae3bc8c87b359731055f2612d);
    }
    cache_frame_bb24ccbae3bc8c87b359731055f2612d = NULL;

    assertFrameObject(frame_bb24ccbae3bc8c87b359731055f2612d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(asn1crypto$_types$$$function_1_bytes_to_list);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_b);
    var_b = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_b);
    var_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$_types$$$function_1_bytes_to_list);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_byte_string);
    Py_DECREF(par_byte_string);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_byte_string);
    Py_DECREF(par_byte_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_asn1crypto$_types$$$function_2_chr_cls(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num = python_pars[0];
    struct Nuitka_FrameObject *frame_157641adfbce0847c971122829c3f973;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_157641adfbce0847c971122829c3f973 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_157641adfbce0847c971122829c3f973, codeobj_157641adfbce0847c971122829c3f973, module_asn1crypto$_types, sizeof(void *));
    frame_157641adfbce0847c971122829c3f973 = cache_frame_157641adfbce0847c971122829c3f973;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_157641adfbce0847c971122829c3f973);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_157641adfbce0847c971122829c3f973) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_num);
        tmp_list_element_1 = par_num;
        tmp_str_arg_1 = PyList_New(1);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_str_arg_1, 0, tmp_list_element_1);
        tmp_return_value = PyObject_Str(tmp_str_arg_1);
        Py_DECREF(tmp_str_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_157641adfbce0847c971122829c3f973);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_157641adfbce0847c971122829c3f973);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_157641adfbce0847c971122829c3f973);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_157641adfbce0847c971122829c3f973, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_157641adfbce0847c971122829c3f973->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_157641adfbce0847c971122829c3f973, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_157641adfbce0847c971122829c3f973,
        type_description_1,
        par_num
    );


    // Release cached frame.
    if (frame_157641adfbce0847c971122829c3f973 == cache_frame_157641adfbce0847c971122829c3f973) {
        Py_DECREF(frame_157641adfbce0847c971122829c3f973);
    }
    cache_frame_157641adfbce0847c971122829c3f973 = NULL;

    assertFrameObject(frame_157641adfbce0847c971122829c3f973);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$_types$$$function_2_chr_cls);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_asn1crypto$_types$$$function_3_type_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_cls = NULL;
    struct Nuitka_FrameObject *frame_48a1afff2f7332a972d4b923cd398433;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_48a1afff2f7332a972d4b923cd398433 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_48a1afff2f7332a972d4b923cd398433, codeobj_48a1afff2f7332a972d4b923cd398433, module_asn1crypto$_types, sizeof(void *)+sizeof(void *));
    frame_48a1afff2f7332a972d4b923cd398433 = cache_frame_48a1afff2f7332a972d4b923cd398433;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_48a1afff2f7332a972d4b923cd398433);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_48a1afff2f7332a972d4b923cd398433) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_inspect);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7830 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_48a1afff2f7332a972d4b923cd398433->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_isclass, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_value);
            tmp_assign_source_1 = par_value;
            assert(var_cls == NULL);
            Py_INCREF(tmp_assign_source_1);
            var_cls = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(par_value);
            tmp_source_name_1 = par_value;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(var_cls == NULL);
            var_cls = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(var_cls);
        tmp_source_name_2 = var_cls;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain___module__);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = PySet_New(const_set_3e6d7e135dfdde5035f4dacc76734a7a);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(var_cls);
            tmp_source_name_3 = var_cls;
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain___name__);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        tmp_left_name_1 = const_unicode_digest_3114c7847ed30512509505e34fc4f6e0;
        CHECK_OBJECT(var_cls);
        tmp_source_name_4 = var_cls;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain___module__);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_cls);
        tmp_source_name_5 = var_cls;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain___name__);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        tmp_return_value = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_48a1afff2f7332a972d4b923cd398433);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_48a1afff2f7332a972d4b923cd398433);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_48a1afff2f7332a972d4b923cd398433);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48a1afff2f7332a972d4b923cd398433, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_48a1afff2f7332a972d4b923cd398433->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48a1afff2f7332a972d4b923cd398433, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_48a1afff2f7332a972d4b923cd398433,
        type_description_1,
        par_value,
        var_cls
    );


    // Release cached frame.
    if (frame_48a1afff2f7332a972d4b923cd398433 == cache_frame_48a1afff2f7332a972d4b923cd398433) {
        Py_DECREF(frame_48a1afff2f7332a972d4b923cd398433);
    }
    cache_frame_48a1afff2f7332a972d4b923cd398433 = NULL;

    assertFrameObject(frame_48a1afff2f7332a972d4b923cd398433);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(asn1crypto$_types$$$function_3_type_name);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_cls);
    Py_DECREF(var_cls);
    var_cls = NULL;

    goto function_return_exit;
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

    Py_XDECREF(var_cls);
    var_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$_types$$$function_3_type_name);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_1_bytes_to_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_types$$$function_1_bytes_to_list,
        const_str_plain_bytes_to_list,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bb24ccbae3bc8c87b359731055f2612d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_types,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_2_chr_cls() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_types$$$function_2_chr_cls,
        const_str_plain_chr_cls,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_157641adfbce0847c971122829c3f973,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_types,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_types$$$function_3_type_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_types$$$function_3_type_name,
        const_str_plain_type_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_48a1afff2f7332a972d4b923cd398433,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_types,
        const_unicode_digest_79eb27773663ed2c126c71b4c000ba3b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_asn1crypto$_types =
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

function_impl_code functable_asn1crypto$_types[] = {
    impl_asn1crypto$_types$$$function_1_bytes_to_list,
    impl_asn1crypto$_types$$$function_2_chr_cls,
    impl_asn1crypto$_types$$$function_3_type_name,
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

    function_impl_code *current = functable_asn1crypto$_types;
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

    if (offset > sizeof(functable_asn1crypto$_types) || offset < 0) {
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
        functable_asn1crypto$_types[offset],
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
        module_asn1crypto$_types,
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
PyObject *modulecode_asn1crypto$_types(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_asn1crypto$_types;
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
    PRINT_STRING("asn1crypto._types: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("asn1crypto._types: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("asn1crypto._types: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initasn1crypto$_types\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_asn1crypto$_types = Py_InitModule4(
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
    mdef_asn1crypto$_types.m_name = module_full_name;
    module_asn1crypto$_types = PyModule_Create(&mdef_asn1crypto$_types);
#endif

    moduledict_asn1crypto$_types = MODULE_DICT(module_asn1crypto$_types);

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
        moduledict_asn1crypto$_types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_asn1crypto$_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_asn1crypto$_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_asn1crypto$_types);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_asn1crypto$_types);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1a6a2f4f70f7c8da6106696570f30dba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_1a6a2f4f70f7c8da6106696570f30dba = MAKE_MODULE_FRAME(codeobj_1a6a2f4f70f7c8da6106696570f30dba, module_asn1crypto$_types);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_1a6a2f4f70f7c8da6106696570f30dba);
    assert(Py_REFCNT(frame_1a6a2f4f70f7c8da6106696570f30dba) == 2);

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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6);
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7);
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
        tmp_name_name_1 = const_str_plain_inspect;
        tmp_globals_name_1 = (PyObject *)moduledict_asn1crypto$_types;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1a6a2f4f70f7c8da6106696570f30dba->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_asn1crypto$_types;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_1a6a2f4f70f7c8da6106696570f30dba->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_9);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_version_info);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_3_tuple;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

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
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_str_cls, tmp_assign_source_10);
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_byte_cls, tmp_assign_source_11);
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = const_tuple_type_int_type_long_tuple;
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_12);
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_asn1crypto$_types$$$function_1_bytes_to_list();



            UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_bytes_to_list, tmp_assign_source_13);
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = LOOKUP_BUILTIN(const_str_plain_chr);
            assert(tmp_assign_source_14 != NULL);
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_chr_cls, tmp_assign_source_14);
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_str_cls, tmp_assign_source_15);
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_byte_cls, tmp_assign_source_16);
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = (PyObject *)&PyInt_Type;
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_17);
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = (PyObject *)&PyList_Type;
            UPDATE_STRING_DICT0(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_bytes_to_list, tmp_assign_source_18);
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_FUNCTION_asn1crypto$_types$$$function_2_chr_cls();



            UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_chr_cls, tmp_assign_source_19);
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a6a2f4f70f7c8da6106696570f30dba);
#endif
    popFrameStack();

    assertFrameObject(frame_1a6a2f4f70f7c8da6106696570f30dba);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a6a2f4f70f7c8da6106696570f30dba);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_1a6a2f4f70f7c8da6106696570f30dba, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1a6a2f4f70f7c8da6106696570f30dba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a6a2f4f70f7c8da6106696570f30dba, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_asn1crypto$_types$$$function_3_type_name();



        UPDATE_STRING_DICT1(moduledict_asn1crypto$_types, (Nuitka_StringObject *)const_str_plain_type_name, tmp_assign_source_20);
    }

    return module_asn1crypto$_types;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}