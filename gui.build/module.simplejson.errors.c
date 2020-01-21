/* Generated code for Python module 'simplejson.errors'
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

/* The "_module_simplejson$errors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_simplejson$errors;
PyDictObject *moduledict_simplejson$errors;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_tuple_type_ValueError_tuple;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_302ea4e93f69328c05b07505bd926ce2;
static PyObject *const_str_digest_399204a732197db3805382b3b8d66bd2;
static PyObject *const_str_digest_6bd6d04650ebc7c898604cff495d91fd;
extern PyObject *const_str_plain_rindex;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_c437330215477edc5928fdccb82bd8c0;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_fmt;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_lineno;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_doc;
extern PyObject *const_int_0;
static PyObject *const_str_digest_ade1d79780569d89c79386bb67fc447d;
static PyObject *const_str_digest_0b7cee043e8fc632d177fc330369013d;
extern PyObject *const_str_plain___reduce__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_JSONDecodeError;
static PyObject *const_tuple_23007bd221009f52793d177e9a6dccf5_tuple;
extern PyObject *const_str_newline;
static PyObject *const_str_digest_7ebc1df1ee5858a9a01de171e054b059;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_errmsg;
static PyObject *const_str_plain_linecol;
extern PyObject *const_str_plain_msg;
static PyObject *const_list_str_plain_JSONDecodeError_list;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_endlineno;
static PyObject *const_tuple_str_plain_doc_str_plain_pos_str_plain_colno_str_plain_lineno_tuple;
static PyObject *const_str_plain_endcolno;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_1e05ed6276493877af6084bc5627e0ba;
static PyObject *const_tuple_8ad9690e347abadd2cee226b09eebced_tuple;
static PyObject *const_str_plain_colno;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_302ea4e93f69328c05b07505bd926ce2 = UNSTREAM_STRING(&constant_bin[ 1123174 ], 56, 0);
    const_str_digest_399204a732197db3805382b3b8d66bd2 = UNSTREAM_STRING(&constant_bin[ 1123230 ], 472, 0);
    const_str_digest_6bd6d04650ebc7c898604cff495d91fd = UNSTREAM_STRING(&constant_bin[ 1123702 ], 33, 0);
    const_str_digest_c437330215477edc5928fdccb82bd8c0 = UNSTREAM_STRING(&constant_bin[ 1123735 ], 17, 0);
    const_str_digest_ade1d79780569d89c79386bb67fc447d = UNSTREAM_STRING(&constant_bin[ 123446 ], 2, 0);
    const_str_digest_0b7cee043e8fc632d177fc330369013d = UNSTREAM_STRING(&constant_bin[ 1123752 ], 31, 0);
    const_tuple_23007bd221009f52793d177e9a6dccf5_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_23007bd221009f52793d177e9a6dccf5_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_23007bd221009f52793d177e9a6dccf5_tuple, 1, const_str_plain_msg); Py_INCREF(const_str_plain_msg);
    PyTuple_SET_ITEM(const_tuple_23007bd221009f52793d177e9a6dccf5_tuple, 2, const_str_plain_doc); Py_INCREF(const_str_plain_doc);
    PyTuple_SET_ITEM(const_tuple_23007bd221009f52793d177e9a6dccf5_tuple, 3, const_str_plain_pos); Py_INCREF(const_str_plain_pos);
    PyTuple_SET_ITEM(const_tuple_23007bd221009f52793d177e9a6dccf5_tuple, 4, const_str_plain_end); Py_INCREF(const_str_plain_end);
    const_str_digest_7ebc1df1ee5858a9a01de171e054b059 = UNSTREAM_STRING(&constant_bin[ 1123783 ], 20, 0);
    const_str_plain_linecol = UNSTREAM_STRING(&constant_bin[ 73784 ], 7, 1);
    const_list_str_plain_JSONDecodeError_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_JSONDecodeError_list, 0, const_str_plain_JSONDecodeError); Py_INCREF(const_str_plain_JSONDecodeError);
    const_str_plain_endlineno = UNSTREAM_STRING(&constant_bin[ 1123582 ], 9, 1);
    const_tuple_str_plain_doc_str_plain_pos_str_plain_colno_str_plain_lineno_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_str_plain_doc_str_plain_pos_str_plain_colno_str_plain_lineno_tuple, 0, const_str_plain_doc); Py_INCREF(const_str_plain_doc);
    PyTuple_SET_ITEM(const_tuple_str_plain_doc_str_plain_pos_str_plain_colno_str_plain_lineno_tuple, 1, const_str_plain_pos); Py_INCREF(const_str_plain_pos);
    const_str_plain_colno = UNSTREAM_STRING(&constant_bin[ 1123539 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_doc_str_plain_pos_str_plain_colno_str_plain_lineno_tuple, 2, const_str_plain_colno); Py_INCREF(const_str_plain_colno);
    PyTuple_SET_ITEM(const_tuple_str_plain_doc_str_plain_pos_str_plain_colno_str_plain_lineno_tuple, 3, const_str_plain_lineno); Py_INCREF(const_str_plain_lineno);
    const_str_plain_endcolno = UNSTREAM_STRING(&constant_bin[ 1123641 ], 8, 1);
    const_str_digest_1e05ed6276493877af6084bc5627e0ba = UNSTREAM_STRING(&constant_bin[ 1123803 ], 26, 0);
    const_tuple_8ad9690e347abadd2cee226b09eebced_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 0, const_str_plain_msg); Py_INCREF(const_str_plain_msg);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 1, const_str_plain_doc); Py_INCREF(const_str_plain_doc);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 2, const_str_plain_pos); Py_INCREF(const_str_plain_pos);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 3, const_str_plain_end); Py_INCREF(const_str_plain_end);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 4, const_str_plain_fmt); Py_INCREF(const_str_plain_fmt);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 5, const_str_plain_endlineno); Py_INCREF(const_str_plain_endlineno);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 6, const_str_plain_lineno); Py_INCREF(const_str_plain_lineno);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 7, const_str_plain_colno); Py_INCREF(const_str_plain_colno);
    PyTuple_SET_ITEM(const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 8, const_str_plain_endcolno); Py_INCREF(const_str_plain_endcolno);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_simplejson$errors(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0284ccc19c0e91ddf6cd1af835d87fe2;
static PyCodeObject *codeobj_a1b646429489e5764058113682cf58fd;
static PyCodeObject *codeobj_ae078f2bc64edcece33a3f81f13a4164;
static PyCodeObject *codeobj_af2d9fa641de4b37ae1d4e4b4a243373;
static PyCodeObject *codeobj_5bea978ec49294e5caec9610e729a65a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_7ebc1df1ee5858a9a01de171e054b059);
    codeobj_0284ccc19c0e91ddf6cd1af835d87fe2 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_1e05ed6276493877af6084bc5627e0ba, const_tuple_empty, 0, 0, 0);
    codeobj_a1b646429489e5764058113682cf58fd = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_23007bd221009f52793d177e9a6dccf5_tuple, 5, 0, 0);
    codeobj_ae078f2bc64edcece33a3f81f13a4164 = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___reduce__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_af2d9fa641de4b37ae1d4e4b4a243373 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_errmsg, const_tuple_8ad9690e347abadd2cee226b09eebced_tuple, 4, 0, 0);
    codeobj_5bea978ec49294e5caec9610e729a65a = MAKE_CODEOBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_linecol, const_tuple_str_plain_doc_str_plain_pos_str_plain_colno_str_plain_lineno_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_1_linecol();


static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_2_errmsg(PyObject *defaults);


static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_3___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_4___reduce__();


// The module function definitions.
static PyObject *impl_simplejson$errors$$$function_1_linecol(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_doc = python_pars[0];
    PyObject *par_pos = python_pars[1];
    PyObject *var_colno = NULL;
    PyObject *var_lineno = NULL;
    struct Nuitka_FrameObject *frame_5bea978ec49294e5caec9610e729a65a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5bea978ec49294e5caec9610e729a65a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_5bea978ec49294e5caec9610e729a65a, codeobj_5bea978ec49294e5caec9610e729a65a, module_simplejson$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_5bea978ec49294e5caec9610e729a65a = cache_frame_5bea978ec49294e5caec9610e729a65a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5bea978ec49294e5caec9610e729a65a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5bea978ec49294e5caec9610e729a65a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_doc);
        tmp_called_instance_1 = par_doc;
        tmp_args_element_name_1 = const_str_newline;
        tmp_args_element_name_2 = const_int_0;
        CHECK_OBJECT(par_pos);
        tmp_args_element_name_3 = par_pos;
        frame_5bea978ec49294e5caec9610e729a65a->m_frame.f_lineno = 7;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_count, call_args);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_lineno == NULL);
        var_lineno = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_lineno);
        tmp_compexpr_left_1 = var_lineno;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT(par_pos);
            tmp_left_name_2 = par_pos;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_2, tmp_right_name_2);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(var_colno == NULL);
            var_colno = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT(par_pos);
            tmp_left_name_3 = par_pos;
            CHECK_OBJECT(par_doc);
            tmp_called_instance_2 = par_doc;
            tmp_args_element_name_4 = const_str_newline;
            tmp_args_element_name_5 = const_int_0;
            CHECK_OBJECT(par_pos);
            tmp_args_element_name_6 = par_pos;
            frame_5bea978ec49294e5caec9610e729a65a->m_frame.f_lineno = 11;
            {
                PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
                tmp_right_name_3 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_2, const_str_plain_rindex, call_args);
            }

            if (tmp_right_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
            Py_DECREF(tmp_right_name_3);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert(var_colno == NULL);
            var_colno = tmp_assign_source_3;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5bea978ec49294e5caec9610e729a65a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5bea978ec49294e5caec9610e729a65a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5bea978ec49294e5caec9610e729a65a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5bea978ec49294e5caec9610e729a65a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5bea978ec49294e5caec9610e729a65a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5bea978ec49294e5caec9610e729a65a,
        type_description_1,
        par_doc,
        par_pos,
        var_colno,
        var_lineno
    );


    // Release cached frame.
    if (frame_5bea978ec49294e5caec9610e729a65a == cache_frame_5bea978ec49294e5caec9610e729a65a) {
        Py_DECREF(frame_5bea978ec49294e5caec9610e729a65a);
    }
    cache_frame_5bea978ec49294e5caec9610e729a65a = NULL;

    assertFrameObject(frame_5bea978ec49294e5caec9610e729a65a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_lineno);
        tmp_tuple_element_1 = var_lineno;
        tmp_return_value = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_colno);
        tmp_tuple_element_1 = var_colno;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(simplejson$errors$$$function_1_linecol);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_colno);
    Py_DECREF(var_colno);
    var_colno = NULL;

    CHECK_OBJECT((PyObject *)var_lineno);
    Py_DECREF(var_lineno);
    var_lineno = NULL;

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

    Py_XDECREF(var_lineno);
    var_lineno = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(simplejson$errors$$$function_1_linecol);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simplejson$errors$$$function_2_errmsg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[0];
    PyObject *par_doc = python_pars[1];
    PyObject *par_pos = python_pars[2];
    PyObject *par_end = python_pars[3];
    PyObject *var_endlineno = NULL;
    PyObject *var_lineno = NULL;
    PyObject *var_colno = NULL;
    PyObject *var_endcolno = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_af2d9fa641de4b37ae1d4e4b4a243373;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_af2d9fa641de4b37ae1d4e4b4a243373 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_af2d9fa641de4b37ae1d4e4b4a243373, codeobj_af2d9fa641de4b37ae1d4e4b4a243373, module_simplejson$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_af2d9fa641de4b37ae1d4e4b4a243373 = cache_frame_af2d9fa641de4b37ae1d4e4b4a243373;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_af2d9fa641de4b37ae1d4e4b4a243373);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_af2d9fa641de4b37ae1d4e4b4a243373) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_linecol);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_linecol);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 73771 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 16;
            type_description_1 = "ooooNoooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_doc);
        tmp_args_element_name_1 = par_doc;
        CHECK_OBJECT(par_pos);
        tmp_args_element_name_2 = par_pos;
        frame_af2d9fa641de4b37ae1d4e4b4a243373->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooooNoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooooNoooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooNoooo";
            exception_lineno = 16;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooNoooo";
            exception_lineno = 16;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooNoooo";
                    exception_lineno = 16;
                    goto try_except_handler_3;
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

            type_description_1 = "ooooNoooo";
            exception_lineno = 16;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_lineno == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_lineno = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_colno == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_colno = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_msg);
        tmp_source_name_1 = par_msg;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_replace);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_digest_ade1d79780569d89c79386bb67fc447d;
        CHECK_OBJECT(par_doc);
        tmp_slice_source_1 = par_doc;
        CHECK_OBJECT(par_pos);
        tmp_slice_lower_1 = par_pos;
        CHECK_OBJECT(par_pos);
        tmp_left_name_1 = par_pos;
        tmp_right_name_1 = const_int_pos_1;
        tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 17;
            type_description_1 = "ooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 17;
            type_description_1 = "ooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 17;
            type_description_1 = "ooooNoooo";
            goto frame_exception_exit_1;
        }
        frame_af2d9fa641de4b37ae1d4e4b4a243373->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooNoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_msg;
            assert(old != NULL);
            par_msg = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_end);
        tmp_compexpr_left_1 = par_end;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_2 = const_str_digest_0b7cee043e8fc632d177fc330369013d;
            CHECK_OBJECT(par_msg);
            tmp_tuple_element_1 = par_msg;
            tmp_right_name_2 = PyTuple_New(4);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_lineno);
            tmp_tuple_element_1 = var_lineno;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_colno);
            tmp_tuple_element_1 = var_colno;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_right_name_2, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_pos);
            tmp_tuple_element_1 = par_pos;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_right_name_2, 3, tmp_tuple_element_1);
            tmp_return_value = BINARY_OPERATION_MOD_STR_TUPLE(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_1 = "ooooNoooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_linecol);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_linecol);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 73771 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 21;
            type_description_1 = "ooooNoooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_doc);
        tmp_args_element_name_5 = par_doc;
        CHECK_OBJECT(par_end);
        tmp_args_element_name_6 = par_end;
        frame_af2d9fa641de4b37ae1d4e4b4a243373->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooNoooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooNoooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_3, 0);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooNoooo";
            exception_lineno = 21;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_4, 1);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooNoooo";
            exception_lineno = 21;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

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

                    type_description_1 = "ooooNoooo";
                    exception_lineno = 21;
                    goto try_except_handler_5;
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

            type_description_1 = "ooooNoooo";
            exception_lineno = 21;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
        assert(var_endlineno == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_endlineno = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
        assert(var_endcolno == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_endcolno = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_2;
        tmp_left_name_3 = const_str_digest_302ea4e93f69328c05b07505bd926ce2;
        CHECK_OBJECT(par_msg);
        tmp_tuple_element_2 = par_msg;
        tmp_right_name_3 = PyTuple_New(7);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_lineno);
        tmp_tuple_element_2 = var_lineno;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_colno);
        tmp_tuple_element_2 = var_colno;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_3, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_endlineno);
        tmp_tuple_element_2 = var_endlineno;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_3, 3, tmp_tuple_element_2);
        CHECK_OBJECT(var_endcolno);
        tmp_tuple_element_2 = var_endcolno;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_3, 4, tmp_tuple_element_2);
        CHECK_OBJECT(par_pos);
        tmp_tuple_element_2 = par_pos;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_3, 5, tmp_tuple_element_2);
        CHECK_OBJECT(par_end);
        tmp_tuple_element_2 = par_end;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_3, 6, tmp_tuple_element_2);
        tmp_return_value = BINARY_OPERATION_MOD_STR_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooNoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af2d9fa641de4b37ae1d4e4b4a243373);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_af2d9fa641de4b37ae1d4e4b4a243373);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af2d9fa641de4b37ae1d4e4b4a243373);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af2d9fa641de4b37ae1d4e4b4a243373, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_af2d9fa641de4b37ae1d4e4b4a243373->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af2d9fa641de4b37ae1d4e4b4a243373, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af2d9fa641de4b37ae1d4e4b4a243373,
        type_description_1,
        par_msg,
        par_doc,
        par_pos,
        par_end,
        NULL,
        var_endlineno,
        var_lineno,
        var_colno,
        var_endcolno
    );


    // Release cached frame.
    if (frame_af2d9fa641de4b37ae1d4e4b4a243373 == cache_frame_af2d9fa641de4b37ae1d4e4b4a243373) {
        Py_DECREF(frame_af2d9fa641de4b37ae1d4e4b4a243373);
    }
    cache_frame_af2d9fa641de4b37ae1d4e4b4a243373 = NULL;

    assertFrameObject(frame_af2d9fa641de4b37ae1d4e4b4a243373);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(simplejson$errors$$$function_2_errmsg);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_endlineno);
    var_endlineno = NULL;

    CHECK_OBJECT((PyObject *)var_lineno);
    Py_DECREF(var_lineno);
    var_lineno = NULL;

    CHECK_OBJECT((PyObject *)var_colno);
    Py_DECREF(var_colno);
    var_colno = NULL;

    CHECK_OBJECT((PyObject *)par_msg);
    Py_DECREF(par_msg);
    par_msg = NULL;

    Py_XDECREF(var_endcolno);
    var_endcolno = NULL;

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

    Py_XDECREF(var_endlineno);
    var_endlineno = NULL;

    Py_XDECREF(var_lineno);
    var_lineno = NULL;

    Py_XDECREF(var_colno);
    var_colno = NULL;

    CHECK_OBJECT((PyObject *)par_msg);
    Py_DECREF(par_msg);
    par_msg = NULL;

    Py_XDECREF(var_endcolno);
    var_endcolno = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(simplejson$errors$$$function_2_errmsg);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simplejson$errors$$$function_3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *par_doc = python_pars[2];
    PyObject *par_pos = python_pars[3];
    PyObject *par_end = python_pars[4];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a1b646429489e5764058113682cf58fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_a1b646429489e5764058113682cf58fd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a1b646429489e5764058113682cf58fd, codeobj_a1b646429489e5764058113682cf58fd, module_simplejson$errors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a1b646429489e5764058113682cf58fd = cache_frame_a1b646429489e5764058113682cf58fd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a1b646429489e5764058113682cf58fd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a1b646429489e5764058113682cf58fd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_source_name_1 = PyExc_ValueError;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___init__);
        assert(!(tmp_called_name_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_errmsg);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errmsg);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 73807 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT(par_msg);
        tmp_tuple_element_1 = par_msg;
        tmp_args_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_doc);
        tmp_tuple_element_1 = par_doc;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_pos);
        tmp_tuple_element_1 = par_pos;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_end);
        tmp_dict_value_1 = par_end;
        tmp_dict_key_1 = const_str_plain_end;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_a1b646429489e5764058113682cf58fd->m_frame.f_lineno = 41;
        tmp_args_element_name_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a1b646429489e5764058113682cf58fd->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_msg);
        tmp_assattr_name_1 = par_msg;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_msg, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_doc);
        tmp_assattr_name_2 = par_doc;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_doc, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_pos);
        tmp_assattr_name_3 = par_pos;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_pos, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_end);
        tmp_assattr_name_4 = par_end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_end, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_linecol);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_linecol);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 73771 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_doc);
        tmp_args_element_name_3 = par_doc;
        CHECK_OBJECT(par_pos);
        tmp_args_element_name_4 = par_pos;
        frame_a1b646429489e5764058113682cf58fd->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 46;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 46;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 46;
                    goto try_except_handler_2;
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
            exception_lineno = 46;
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_name_5 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_lineno, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_name_6 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_colno, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_end);
        tmp_compexpr_left_1 = par_end;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_linecol);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_linecol);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 73771 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_4 = tmp_mvar_value_3;
            CHECK_OBJECT(par_doc);
            tmp_args_element_name_5 = par_doc;
            CHECK_OBJECT(par_end);
            tmp_args_element_name_6 = par_end;
            frame_a1b646429489e5764058113682cf58fd->m_frame.f_lineno = 48;
            {
                PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
            }

            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            assert(tmp_tuple_unpack_2__source_iter == NULL);
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 0);
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
                exception_lineno = 48;
                goto try_except_handler_4;
            }
            assert(tmp_tuple_unpack_2__element_1 == NULL);
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_4, 1);
            if (tmp_assign_source_6 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooo";
                exception_lineno = 48;
                goto try_except_handler_4;
            }
            assert(tmp_tuple_unpack_2__element_2 == NULL);
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

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
                        exception_lineno = 48;
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
                exception_lineno = 48;
                goto try_except_handler_4;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_3;
        // End of try:
        try_end_3:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_assattr_target_7;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
            tmp_assattr_name_7 = tmp_tuple_unpack_2__element_1;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_endlineno, tmp_assattr_name_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
        }
        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assattr_name_8;
            PyObject *tmp_assattr_target_8;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
            tmp_assattr_name_8 = tmp_tuple_unpack_2__element_2;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_8 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_endcolno, tmp_assattr_name_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = const_tuple_none_none_tuple;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_3);
            assert(!(tmp_assign_source_7 == NULL));
            assert(tmp_tuple_unpack_3__source_iter == NULL);
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_7;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_5, 0);
            if (tmp_assign_source_8 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooo";
                exception_lineno = 50;
                goto try_except_handler_6;
            }
            assert(tmp_tuple_unpack_3__element_1 == NULL);
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_6, 1);
            if (tmp_assign_source_9 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooo";
                exception_lineno = 50;
                goto try_except_handler_6;
            }
            assert(tmp_tuple_unpack_3__element_2 == NULL);
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_9;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_3__source_iter);
        Py_DECREF(tmp_tuple_unpack_3__source_iter);
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        try_end_5:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_3__source_iter);
        Py_DECREF(tmp_tuple_unpack_3__source_iter);
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assattr_name_9;
            PyObject *tmp_assattr_target_9;
            CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
            tmp_assattr_name_9 = tmp_tuple_unpack_3__element_1;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_9 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_endlineno, tmp_assattr_name_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
        }
        Py_XDECREF(tmp_tuple_unpack_3__element_1);
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assattr_name_10;
            PyObject *tmp_assattr_target_10;
            CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
            tmp_assattr_name_10 = tmp_tuple_unpack_3__element_2;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_10 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain_endcolno, tmp_assattr_name_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_3__element_1);
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_3__element_2);
        tmp_tuple_unpack_3__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        Py_XDECREF(tmp_tuple_unpack_3__element_2);
        tmp_tuple_unpack_3__element_2 = NULL;

        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1b646429489e5764058113682cf58fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1b646429489e5764058113682cf58fd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a1b646429489e5764058113682cf58fd, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a1b646429489e5764058113682cf58fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a1b646429489e5764058113682cf58fd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a1b646429489e5764058113682cf58fd,
        type_description_1,
        par_self,
        par_msg,
        par_doc,
        par_pos,
        par_end
    );


    // Release cached frame.
    if (frame_a1b646429489e5764058113682cf58fd == cache_frame_a1b646429489e5764058113682cf58fd) {
        Py_DECREF(frame_a1b646429489e5764058113682cf58fd);
    }
    cache_frame_a1b646429489e5764058113682cf58fd = NULL;

    assertFrameObject(frame_a1b646429489e5764058113682cf58fd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(simplejson$errors$$$function_3___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    CHECK_OBJECT(par_doc);
    Py_DECREF(par_doc);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_simplejson$errors$$$function_4___reduce__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ae078f2bc64edcece33a3f81f13a4164;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae078f2bc64edcece33a3f81f13a4164 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ae078f2bc64edcece33a3f81f13a4164, codeobj_ae078f2bc64edcece33a3f81f13a4164, module_simplejson$errors, sizeof(void *));
    frame_ae078f2bc64edcece33a3f81f13a4164 = cache_frame_ae078f2bc64edcece33a3f81f13a4164;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ae078f2bc64edcece33a3f81f13a4164);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ae078f2bc64edcece33a3f81f13a4164) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_msg);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New(4);
        PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_doc);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);
            Py_DECREF(tmp_tuple_element_1);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_pos);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);
            Py_DECREF(tmp_tuple_element_1);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_end);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_return_value);
            Py_DECREF(tmp_tuple_element_1);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_tuple_element_1, 3, tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae078f2bc64edcece33a3f81f13a4164);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae078f2bc64edcece33a3f81f13a4164);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae078f2bc64edcece33a3f81f13a4164);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae078f2bc64edcece33a3f81f13a4164, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ae078f2bc64edcece33a3f81f13a4164->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae078f2bc64edcece33a3f81f13a4164, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae078f2bc64edcece33a3f81f13a4164,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_ae078f2bc64edcece33a3f81f13a4164 == cache_frame_ae078f2bc64edcece33a3f81f13a4164) {
        Py_DECREF(frame_ae078f2bc64edcece33a3f81f13a4164);
    }
    cache_frame_ae078f2bc64edcece33a3f81f13a4164 = NULL;

    assertFrameObject(frame_ae078f2bc64edcece33a3f81f13a4164);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(simplejson$errors$$$function_4___reduce__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_1_linecol() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$errors$$$function_1_linecol,
        const_str_plain_linecol,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5bea978ec49294e5caec9610e729a65a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$errors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_2_errmsg(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$errors$$$function_2_errmsg,
        const_str_plain_errmsg,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_af2d9fa641de4b37ae1d4e4b4a243373,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$errors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_3___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$errors$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a1b646429489e5764058113682cf58fd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$errors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_simplejson$errors$$$function_4___reduce__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_simplejson$errors$$$function_4___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ae078f2bc64edcece33a3f81f13a4164,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_simplejson$errors,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_simplejson$errors =
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

function_impl_code functable_simplejson$errors[] = {
    impl_simplejson$errors$$$function_1_linecol,
    impl_simplejson$errors$$$function_2_errmsg,
    impl_simplejson$errors$$$function_3___init__,
    impl_simplejson$errors$$$function_4___reduce__,
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

    function_impl_code *current = functable_simplejson$errors;
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

    if (offset > sizeof(functable_simplejson$errors) || offset < 0) {
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
        functable_simplejson$errors[offset],
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
        module_simplejson$errors,
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
PyObject *modulecode_simplejson$errors(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_simplejson$errors;
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
    PRINT_STRING("simplejson.errors: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("simplejson.errors: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("simplejson.errors: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initsimplejson$errors\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_simplejson$errors = Py_InitModule4(
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
    mdef_simplejson$errors.m_name = module_full_name;
    module_simplejson$errors = PyModule_Create(&mdef_simplejson$errors);
#endif

    moduledict_simplejson$errors = MODULE_DICT(module_simplejson$errors);

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
        moduledict_simplejson$errors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_simplejson$errors,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_simplejson$errors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_simplejson$errors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_simplejson$errors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_simplejson$errors);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_simplejson$errors);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_locals_simplejson$errors_26_key___init__ = NULL;
    PyObject *tmp_locals_simplejson$errors_26_key___reduce__ = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_0284ccc19c0e91ddf6cd1af835d87fe2;
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
        tmp_assign_source_1 = const_str_digest_6bd6d04650ebc7c898604cff495d91fd;
        UPDATE_STRING_DICT0(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_plain_JSONDecodeError_list);
        UPDATE_STRING_DICT1(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_simplejson$errors$$$function_1_linecol();



        UPDATE_STRING_DICT1(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_linecol, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_5 = MAKE_FUNCTION_simplejson$errors$$$function_2_errmsg(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_errmsg, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_2);
            tmp_assign_source_7 = MAKE_FUNCTION_simplejson$errors$$$function_3___init__(tmp_defaults_2);



            assert(tmp_locals_simplejson$errors_26_key___init__ == NULL);
            tmp_locals_simplejson$errors_26_key___init__ = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_simplejson$errors$$$function_4___reduce__();



            assert(tmp_locals_simplejson$errors_26_key___reduce__ == NULL);
            tmp_locals_simplejson$errors_26_key___reduce__ = tmp_assign_source_8;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_value_1 = const_str_digest_c437330215477edc5928fdccb82bd8c0;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_6 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = const_str_digest_399204a732197db3805382b3b8d66bd2;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_simplejson$errors_26_key___init__);
            tmp_dict_value_3 = tmp_locals_simplejson$errors_26_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_simplejson$errors_26_key___reduce__);
            tmp_dict_value_4 = tmp_locals_simplejson$errors_26_key___reduce__;
            tmp_dict_key_4 = const_str_plain___reduce__;
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(simplejson$errors);
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT((PyObject *)tmp_locals_simplejson$errors_26_key___init__);
        Py_DECREF(tmp_locals_simplejson$errors_26_key___init__);
        tmp_locals_simplejson$errors_26_key___init__ = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_simplejson$errors_26_key___reduce__);
        Py_DECREF(tmp_locals_simplejson$errors_26_key___reduce__);
        tmp_locals_simplejson$errors_26_key___reduce__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(simplejson$errors);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_6;
    }
    // Frame without reuse.
    frame_0284ccc19c0e91ddf6cd1af835d87fe2 = MAKE_MODULE_FRAME(codeobj_0284ccc19c0e91ddf6cd1af835d87fe2, module_simplejson$errors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0284ccc19c0e91ddf6cd1af835d87fe2);
    assert(Py_REFCNT(frame_0284ccc19c0e91ddf6cd1af835d87fe2) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_dict;
        tmp_key_name_2 = const_str_plain___metaclass__;
        tmp_assign_source_9 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_9);
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_JSONDecodeError;
        tmp_args_element_name_2 = const_tuple_type_ValueError_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_0284ccc19c0e91ddf6cd1af835d87fe2->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_10;
    }
    goto try_end_1;
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

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0284ccc19c0e91ddf6cd1af835d87fe2);
#endif
    popFrameStack();

    assertFrameObject(frame_0284ccc19c0e91ddf6cd1af835d87fe2);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0284ccc19c0e91ddf6cd1af835d87fe2);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_0284ccc19c0e91ddf6cd1af835d87fe2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0284ccc19c0e91ddf6cd1af835d87fe2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0284ccc19c0e91ddf6cd1af835d87fe2, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_11 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_simplejson$errors, (Nuitka_StringObject *)const_str_plain_JSONDecodeError, tmp_assign_source_11);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class);
    Py_DECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;


    return module_simplejson$errors;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
