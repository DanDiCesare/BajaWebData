/* Generated code for Python module 'future.types.newobject'
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

/* The "_module_future$types$newobject" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$types$newobject;
PyDictObject *moduledict_future$types$newobject;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_digest_3695001d00f9777077b5a356b34987b1;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___int__;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain___next__;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_digest_8a108600239d21a24260ecedc7b3dbaa;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_4f57bbec64e55b6f939cf35a33e3c9d5;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___native__;
extern PyObject *const_str_plain___nonzero__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_next;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_newobject;
extern PyObject *const_str_digest_e4f7f1f1dc834c6bea8d49ea7d15f20c;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_digest_9ca9cd261f79bf0866b2cbf971b39b48;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain___long__;
static PyObject *const_str_digest_df9ef9909f83add7d2c5d38d8ed8c16f;
extern PyObject *const_str_plain___slots__;
extern PyObject *const_tuple_str_plain_self_str_plain_s_tuple;
static PyObject *const_list_str_plain_newobject_list;
extern PyObject *const_str_plain___bool__;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_0a36649c2cd838f5ff21526872214f40;
extern PyObject *const_str_plain___unicode__;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_8a108600239d21a24260ecedc7b3dbaa = UNSTREAM_STRING(&constant_bin[ 820244 ], 31, 0);
    const_str_digest_4f57bbec64e55b6f939cf35a33e3c9d5 = UNSTREAM_STRING(&constant_bin[ 820275 ], 970, 0);
    const_str_digest_9ca9cd261f79bf0866b2cbf971b39b48 = UNSTREAM_STRING(&constant_bin[ 821245 ], 28, 0);
    const_str_plain___long__ = UNSTREAM_STRING(&constant_bin[ 821273 ], 8, 1);
    const_str_digest_df9ef9909f83add7d2c5d38d8ed8c16f = UNSTREAM_STRING(&constant_bin[ 821281 ], 25, 0);
    const_list_str_plain_newobject_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_newobject_list, 0, const_str_plain_newobject); Py_INCREF(const_str_plain_newobject);
    const_str_digest_0a36649c2cd838f5ff21526872214f40 = UNSTREAM_STRING(&constant_bin[ 821306 ], 240, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$types$newobject(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c203984d28a2f56f33c97180e3fc56be;
static PyCodeObject *codeobj_294e2c02fe75d4a08a7d9b641cfbbdda;
static PyCodeObject *codeobj_60abf617b73520f7bc11f8faa9bc97a5;
static PyCodeObject *codeobj_cb750d00d6833318192d29c144d2503f;
static PyCodeObject *codeobj_cf504615f78bf58b52d3fafa00192247;
static PyCodeObject *codeobj_585c46f8f95f814beaaddcc9e5f9e6d8;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_df9ef9909f83add7d2c5d38d8ed8c16f);
    codeobj_c203984d28a2f56f33c97180e3fc56be = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_8a108600239d21a24260ecedc7b3dbaa, const_tuple_empty, 0, 0, 0);
    codeobj_294e2c02fe75d4a08a7d9b641cfbbdda = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___long__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_60abf617b73520f7bc11f8faa9bc97a5 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___native__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_cb750d00d6833318192d29c144d2503f = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___nonzero__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_cf504615f78bf58b52d3fafa00192247 = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___unicode__, const_tuple_str_plain_self_str_plain_s_tuple, 1, 0, 0);
    codeobj_585c46f8f95f814beaaddcc9e5f9e6d8 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_next, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_1_next();


static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_2___unicode__();


static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_3___nonzero__();


static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_4___long__();


static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_5___native__();


// The module function definitions.
static PyObject *impl_future$types$newobject$$$function_1_next(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_585c46f8f95f814beaaddcc9e5f9e6d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_585c46f8f95f814beaaddcc9e5f9e6d8 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_585c46f8f95f814beaaddcc9e5f9e6d8, codeobj_585c46f8f95f814beaaddcc9e5f9e6d8, module_future$types$newobject, sizeof(void *));
    frame_585c46f8f95f814beaaddcc9e5f9e6d8 = cache_frame_585c46f8f95f814beaaddcc9e5f9e6d8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_585c46f8f95f814beaaddcc9e5f9e6d8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_585c46f8f95f814beaaddcc9e5f9e6d8) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_name_1 = const_str_plain___next__;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_called_instance_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_called_instance_1 == NULL));
            CHECK_OBJECT(par_self);
            tmp_args_element_name_1 = par_self;
            frame_585c46f8f95f814beaaddcc9e5f9e6d8->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain___next__, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_9ca9cd261f79bf0866b2cbf971b39b48;
        frame_585c46f8f95f814beaaddcc9e5f9e6d8->m_frame.f_lineno = 54;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 54;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_585c46f8f95f814beaaddcc9e5f9e6d8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_585c46f8f95f814beaaddcc9e5f9e6d8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_585c46f8f95f814beaaddcc9e5f9e6d8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_585c46f8f95f814beaaddcc9e5f9e6d8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_585c46f8f95f814beaaddcc9e5f9e6d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_585c46f8f95f814beaaddcc9e5f9e6d8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_585c46f8f95f814beaaddcc9e5f9e6d8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_585c46f8f95f814beaaddcc9e5f9e6d8 == cache_frame_585c46f8f95f814beaaddcc9e5f9e6d8) {
        Py_DECREF(frame_585c46f8f95f814beaaddcc9e5f9e6d8);
    }
    cache_frame_585c46f8f95f814beaaddcc9e5f9e6d8 = NULL;

    assertFrameObject(frame_585c46f8f95f814beaaddcc9e5f9e6d8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newobject$$$function_1_next);
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


static PyObject *impl_future$types$newobject$$$function_2___unicode__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_cf504615f78bf58b52d3fafa00192247;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf504615f78bf58b52d3fafa00192247 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_cf504615f78bf58b52d3fafa00192247, codeobj_cf504615f78bf58b52d3fafa00192247, module_future$types$newobject, sizeof(void *)+sizeof(void *));
    frame_cf504615f78bf58b52d3fafa00192247 = cache_frame_cf504615f78bf58b52d3fafa00192247;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cf504615f78bf58b52d3fafa00192247);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cf504615f78bf58b52d3fafa00192247) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_name_1 = const_str_plain___str__;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_called_instance_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_called_instance_1 == NULL));
            CHECK_OBJECT(par_self);
            tmp_args_element_name_1 = par_self;
            frame_cf504615f78bf58b52d3fafa00192247->m_frame.f_lineno = 60;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain___str__, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(var_s == NULL);
            var_s = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_str_arg_1;
            CHECK_OBJECT(par_self);
            tmp_str_arg_1 = par_self;
            tmp_assign_source_2 = PyObject_Str(tmp_str_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(var_s == NULL);
            var_s = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_s);
        tmp_isinstance_inst_1 = var_s;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT(var_s);
        tmp_return_value = var_s;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(var_s);
            tmp_called_instance_2 = var_s;
            frame_cf504615f78bf58b52d3fafa00192247->m_frame.f_lineno = 66;
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf504615f78bf58b52d3fafa00192247);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf504615f78bf58b52d3fafa00192247);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cf504615f78bf58b52d3fafa00192247);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf504615f78bf58b52d3fafa00192247, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_cf504615f78bf58b52d3fafa00192247->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf504615f78bf58b52d3fafa00192247, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf504615f78bf58b52d3fafa00192247,
        type_description_1,
        par_self,
        var_s
    );


    // Release cached frame.
    if (frame_cf504615f78bf58b52d3fafa00192247 == cache_frame_cf504615f78bf58b52d3fafa00192247) {
        Py_DECREF(frame_cf504615f78bf58b52d3fafa00192247);
    }
    cache_frame_cf504615f78bf58b52d3fafa00192247 = NULL;

    assertFrameObject(frame_cf504615f78bf58b52d3fafa00192247);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$types$newobject$$$function_2___unicode__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_s);
    Py_DECREF(var_s);
    var_s = NULL;

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

    Py_XDECREF(var_s);
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newobject$$$function_2___unicode__);
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


static PyObject *impl_future$types$newobject$$$function_3___nonzero__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cb750d00d6833318192d29c144d2503f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb750d00d6833318192d29c144d2503f = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_cb750d00d6833318192d29c144d2503f, codeobj_cb750d00d6833318192d29c144d2503f, module_future$types$newobject, sizeof(void *));
    frame_cb750d00d6833318192d29c144d2503f = cache_frame_cb750d00d6833318192d29c144d2503f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cb750d00d6833318192d29c144d2503f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cb750d00d6833318192d29c144d2503f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_name_1 = const_str_plain___bool__;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_type_arg_1 = par_self;
            tmp_called_instance_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_called_instance_1 == NULL));
            CHECK_OBJECT(par_self);
            tmp_args_element_name_1 = par_self;
            frame_cb750d00d6833318192d29c144d2503f->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain___bool__, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_attribute_name_2 = const_str_plain___len__;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_2, tmp_attribute_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_type_arg_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT(par_self);
            tmp_type_arg_2 = par_self;
            tmp_called_instance_2 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_called_instance_2 == NULL));
            CHECK_OBJECT(par_self);
            tmp_args_element_name_2 = par_self;
            frame_cb750d00d6833318192d29c144d2503f->m_frame.f_lineno = 72;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain___len__, call_args);
            }

            Py_DECREF(tmp_called_instance_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb750d00d6833318192d29c144d2503f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb750d00d6833318192d29c144d2503f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb750d00d6833318192d29c144d2503f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb750d00d6833318192d29c144d2503f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_cb750d00d6833318192d29c144d2503f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb750d00d6833318192d29c144d2503f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb750d00d6833318192d29c144d2503f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_cb750d00d6833318192d29c144d2503f == cache_frame_cb750d00d6833318192d29c144d2503f) {
        Py_DECREF(frame_cb750d00d6833318192d29c144d2503f);
    }
    cache_frame_cb750d00d6833318192d29c144d2503f = NULL;

    assertFrameObject(frame_cb750d00d6833318192d29c144d2503f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newobject$$$function_3___nonzero__);
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


static PyObject *impl_future$types$newobject$$$function_4___long__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_294e2c02fe75d4a08a7d9b641cfbbdda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_294e2c02fe75d4a08a7d9b641cfbbdda = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_294e2c02fe75d4a08a7d9b641cfbbdda, codeobj_294e2c02fe75d4a08a7d9b641cfbbdda, module_future$types$newobject, sizeof(void *));
    frame_294e2c02fe75d4a08a7d9b641cfbbdda = cache_frame_294e2c02fe75d4a08a7d9b641cfbbdda;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_294e2c02fe75d4a08a7d9b641cfbbdda);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_294e2c02fe75d4a08a7d9b641cfbbdda) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_name_1 = const_str_plain___int__;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_NotImplemented;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_294e2c02fe75d4a08a7d9b641cfbbdda->m_frame.f_lineno = 86;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain___int__);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_294e2c02fe75d4a08a7d9b641cfbbdda);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_294e2c02fe75d4a08a7d9b641cfbbdda);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_294e2c02fe75d4a08a7d9b641cfbbdda);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_294e2c02fe75d4a08a7d9b641cfbbdda, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_294e2c02fe75d4a08a7d9b641cfbbdda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_294e2c02fe75d4a08a7d9b641cfbbdda, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_294e2c02fe75d4a08a7d9b641cfbbdda,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_294e2c02fe75d4a08a7d9b641cfbbdda == cache_frame_294e2c02fe75d4a08a7d9b641cfbbdda) {
        Py_DECREF(frame_294e2c02fe75d4a08a7d9b641cfbbdda);
    }
    cache_frame_294e2c02fe75d4a08a7d9b641cfbbdda = NULL;

    assertFrameObject(frame_294e2c02fe75d4a08a7d9b641cfbbdda);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newobject$$$function_4___long__);
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


static PyObject *impl_future$types$newobject$$$function_5___native__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_60abf617b73520f7bc11f8faa9bc97a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60abf617b73520f7bc11f8faa9bc97a5 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_60abf617b73520f7bc11f8faa9bc97a5, codeobj_60abf617b73520f7bc11f8faa9bc97a5, module_future$types$newobject, sizeof(void *));
    frame_60abf617b73520f7bc11f8faa9bc97a5 = cache_frame_60abf617b73520f7bc11f8faa9bc97a5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_60abf617b73520f7bc11f8faa9bc97a5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_60abf617b73520f7bc11f8faa9bc97a5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        frame_60abf617b73520f7bc11f8faa9bc97a5->m_frame.f_lineno = 113;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60abf617b73520f7bc11f8faa9bc97a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_60abf617b73520f7bc11f8faa9bc97a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60abf617b73520f7bc11f8faa9bc97a5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60abf617b73520f7bc11f8faa9bc97a5, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_60abf617b73520f7bc11f8faa9bc97a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60abf617b73520f7bc11f8faa9bc97a5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60abf617b73520f7bc11f8faa9bc97a5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_60abf617b73520f7bc11f8faa9bc97a5 == cache_frame_60abf617b73520f7bc11f8faa9bc97a5) {
        Py_DECREF(frame_60abf617b73520f7bc11f8faa9bc97a5);
    }
    cache_frame_60abf617b73520f7bc11f8faa9bc97a5 = NULL;

    assertFrameObject(frame_60abf617b73520f7bc11f8faa9bc97a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newobject$$$function_5___native__);
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



static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_1_next() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newobject$$$function_1_next,
        const_str_plain_next,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_585c46f8f95f814beaaddcc9e5f9e6d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newobject,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_2___unicode__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newobject$$$function_2___unicode__,
        const_str_plain___unicode__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf504615f78bf58b52d3fafa00192247,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newobject,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_3___nonzero__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newobject$$$function_3___nonzero__,
        const_str_plain___nonzero__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cb750d00d6833318192d29c144d2503f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newobject,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_4___long__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newobject$$$function_4___long__,
        const_str_plain___long__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_294e2c02fe75d4a08a7d9b641cfbbdda,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newobject,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newobject$$$function_5___native__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newobject$$$function_5___native__,
        const_str_plain___native__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_60abf617b73520f7bc11f8faa9bc97a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newobject,
        const_str_digest_3695001d00f9777077b5a356b34987b1,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$types$newobject =
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

function_impl_code functable_future$types$newobject[] = {
    impl_future$types$newobject$$$function_1_next,
    impl_future$types$newobject$$$function_2___unicode__,
    impl_future$types$newobject$$$function_3___nonzero__,
    impl_future$types$newobject$$$function_4___long__,
    impl_future$types$newobject$$$function_5___native__,
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

    function_impl_code *current = functable_future$types$newobject;
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

    if (offset > sizeof(functable_future$types$newobject) || offset < 0) {
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
        functable_future$types$newobject[offset],
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
        module_future$types$newobject,
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
PyObject *modulecode_future$types$newobject(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$types$newobject;
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
    PRINT_STRING("future.types.newobject: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.types.newobject: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.types.newobject: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$types$newobject\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$types$newobject = Py_InitModule4(
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
    mdef_future$types$newobject.m_name = module_full_name;
    module_future$types$newobject = PyModule_Create(&mdef_future$types$newobject);
#endif

    moduledict_future$types$newobject = MODULE_DICT(module_future$types$newobject);

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
        moduledict_future$types$newobject,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$types$newobject,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$types$newobject,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$types$newobject,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$types$newobject,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$types$newobject);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$types$newobject);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_locals_future$types$newobject_41_key___long__ = NULL;
    PyObject *tmp_locals_future$types$newobject_41_key___native__ = NULL;
    PyObject *tmp_locals_future$types$newobject_41_key___nonzero__ = NULL;
    PyObject *tmp_locals_future$types$newobject_41_key___slots__ = NULL;
    PyObject *tmp_locals_future$types$newobject_41_key___unicode__ = NULL;
    PyObject *tmp_locals_future$types$newobject_41_key_next = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_c203984d28a2f56f33c97180e3fc56be;
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
        tmp_assign_source_1 = const_str_digest_4f57bbec64e55b6f939cf35a33e3c9d5;
        UPDATE_STRING_DICT0(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_FUNCTION_future$types$newobject$$$function_1_next();



            assert(tmp_locals_future$types$newobject_41_key_next == NULL);
            tmp_locals_future$types$newobject_41_key_next = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_FUNCTION_future$types$newobject$$$function_2___unicode__();



            assert(tmp_locals_future$types$newobject_41_key___unicode__ == NULL);
            tmp_locals_future$types$newobject_41_key___unicode__ = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_FUNCTION_future$types$newobject$$$function_3___nonzero__();



            assert(tmp_locals_future$types$newobject_41_key___nonzero__ == NULL);
            tmp_locals_future$types$newobject_41_key___nonzero__ = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_future$types$newobject$$$function_4___long__();



            assert(tmp_locals_future$types$newobject_41_key___long__ == NULL);
            tmp_locals_future$types$newobject_41_key___long__ = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_future$types$newobject$$$function_5___native__();



            assert(tmp_locals_future$types$newobject_41_key___native__ == NULL);
            tmp_locals_future$types$newobject_41_key___native__ = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = PyList_New(0);
            assert(tmp_locals_future$types$newobject_41_key___slots__ == NULL);
            tmp_locals_future$types$newobject_41_key___slots__ = tmp_assign_source_9;
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
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_value_1 = const_str_digest_e4f7f1f1dc834c6bea8d49ea7d15f20c;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_3 = _PyDict_NewPresized( 8 );
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = const_str_digest_0a36649c2cd838f5ff21526872214f40;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$types$newobject_41_key_next);
            tmp_dict_value_3 = tmp_locals_future$types$newobject_41_key_next;
            tmp_dict_key_3 = const_str_plain_next;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$types$newobject_41_key___unicode__);
            tmp_dict_value_4 = tmp_locals_future$types$newobject_41_key___unicode__;
            tmp_dict_key_4 = const_str_plain___unicode__;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$types$newobject_41_key___nonzero__);
            tmp_dict_value_5 = tmp_locals_future$types$newobject_41_key___nonzero__;
            tmp_dict_key_5 = const_str_plain___nonzero__;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$types$newobject_41_key___long__);
            tmp_dict_value_6 = tmp_locals_future$types$newobject_41_key___long__;
            tmp_dict_key_6 = const_str_plain___long__;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$types$newobject_41_key___native__);
            tmp_dict_value_7 = tmp_locals_future$types$newobject_41_key___native__;
            tmp_dict_key_7 = const_str_plain___native__;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$types$newobject_41_key___slots__);
            tmp_dict_value_8 = tmp_locals_future$types$newobject_41_key___slots__;
            tmp_dict_key_8 = const_str_plain___slots__;
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$types$newobject);
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT((PyObject *)tmp_locals_future$types$newobject_41_key_next);
        Py_DECREF(tmp_locals_future$types$newobject_41_key_next);
        tmp_locals_future$types$newobject_41_key_next = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$types$newobject_41_key___unicode__);
        Py_DECREF(tmp_locals_future$types$newobject_41_key___unicode__);
        tmp_locals_future$types$newobject_41_key___unicode__ = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$types$newobject_41_key___nonzero__);
        Py_DECREF(tmp_locals_future$types$newobject_41_key___nonzero__);
        tmp_locals_future$types$newobject_41_key___nonzero__ = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$types$newobject_41_key___long__);
        Py_DECREF(tmp_locals_future$types$newobject_41_key___long__);
        tmp_locals_future$types$newobject_41_key___long__ = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$types$newobject_41_key___native__);
        Py_DECREF(tmp_locals_future$types$newobject_41_key___native__);
        tmp_locals_future$types$newobject_41_key___native__ = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$types$newobject_41_key___slots__);
        Py_DECREF(tmp_locals_future$types$newobject_41_key___slots__);
        tmp_locals_future$types$newobject_41_key___slots__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$types$newobject);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_3;
    }
    // Frame without reuse.
    frame_c203984d28a2f56f33c97180e3fc56be = MAKE_MODULE_FRAME(codeobj_c203984d28a2f56f33c97180e3fc56be, module_future$types$newobject);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c203984d28a2f56f33c97180e3fc56be);
    assert(Py_REFCNT(frame_c203984d28a2f56f33c97180e3fc56be) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
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


            exception_lineno = 41;

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
        tmp_assign_source_10 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_10);
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_newobject;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_c203984d28a2f56f33c97180e3fc56be->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_11;
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
    RESTORE_FRAME_EXCEPTION(frame_c203984d28a2f56f33c97180e3fc56be);
#endif
    popFrameStack();

    assertFrameObject(frame_c203984d28a2f56f33c97180e3fc56be);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c203984d28a2f56f33c97180e3fc56be);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_c203984d28a2f56f33c97180e3fc56be, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c203984d28a2f56f33c97180e3fc56be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c203984d28a2f56f33c97180e3fc56be, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_12 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain_newobject, tmp_assign_source_12);
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

    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = LIST_COPY(const_list_str_plain_newobject_list);
        UPDATE_STRING_DICT1(moduledict_future$types$newobject, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13);
    }

    return module_future$types$newobject;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
