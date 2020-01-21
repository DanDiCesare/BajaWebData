/* Generated code for Python module 'chardet.utf8prober'
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

/* The "_module_chardet$utf8prober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$utf8prober;
PyDictObject *moduledict_chardet$utf8prober;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_next_state;
extern PyObject *const_float_0_99;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_str_plain_ProbingState;
extern PyObject *const_str_plain_DETECTING;
extern PyObject *const_str_plain_UTF8Prober;
static PyObject *const_tuple_str_plain_UTF8_SM_MODEL_tuple;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_str_plain_CharSetProber;
extern PyObject *const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
static PyObject *const_str_plain_ONE_CHAR_PROB;
extern PyObject *const_str_plain_mbcssm;
static PyObject *const_str_digest_d8e6e7d9079f49d27b12fc56c3d8725f;
static PyObject *const_float_0_5;
static PyObject *const_str_plain__num_mb_chars;
extern PyObject *const_tuple_str_plain_CharSetProber_tuple;
extern PyObject *const_str_plain_CodingStateMachine;
extern PyObject *const_str_plain_START;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_coding_sm;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_self_str_plain_unlike_tuple;
static PyObject *const_str_digest_68f5a554b08c0c93897ca0bc5a8bd7c9;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_unlike;
extern PyObject *const_str_plain_codingstatemachine;
extern PyObject *const_str_plain_SHORTCUT_THRESHOLD;
static PyObject *const_str_digest_cceea9c75b13f89cc4200579aac0e7b6;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_UTF8_SM_MODEL;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_self;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_ITS_ME;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
static PyObject *const_tuple_8fd8da0041e155eb5fbd37e929bf4ccc_tuple;
extern PyObject *const_str_plain__state;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_get_current_charlen;
extern PyObject *const_str_plain_MachineState;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_coding_state;
extern PyObject *const_str_plain_NOT_ME;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_charsetprober;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_CodingStateMachine_tuple;
extern PyObject *const_str_plain_feed;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_str_plain_UTF8_SM_MODEL_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_UTF8_SM_MODEL_tuple, 0, const_str_plain_UTF8_SM_MODEL); Py_INCREF(const_str_plain_UTF8_SM_MODEL);
    const_str_plain_ONE_CHAR_PROB = UNSTREAM_STRING(&constant_bin[ 567340 ], 13, 1);
    const_str_digest_d8e6e7d9079f49d27b12fc56c3d8725f = UNSTREAM_STRING(&constant_bin[ 567353 ], 18, 0);
    const_float_0_5 = UNSTREAM_FLOAT(&constant_bin[ 567371 ]);
    const_str_plain__num_mb_chars = UNSTREAM_STRING(&constant_bin[ 567379 ], 13, 1);
    const_tuple_str_plain_self_str_plain_unlike_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_unlike_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_unlike = UNSTREAM_STRING(&constant_bin[ 567392 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_unlike_tuple, 1, const_str_plain_unlike); Py_INCREF(const_str_plain_unlike);
    const_str_digest_68f5a554b08c0c93897ca0bc5a8bd7c9 = UNSTREAM_STRING(&constant_bin[ 567398 ], 27, 0);
    const_str_digest_cceea9c75b13f89cc4200579aac0e7b6 = UNSTREAM_STRING(&constant_bin[ 567425 ], 21, 0);
    const_tuple_8fd8da0041e155eb5fbd37e929bf4ccc_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_8fd8da0041e155eb5fbd37e929bf4ccc_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_8fd8da0041e155eb5fbd37e929bf4ccc_tuple, 1, const_str_plain_byte_str); Py_INCREF(const_str_plain_byte_str);
    PyTuple_SET_ITEM(const_tuple_8fd8da0041e155eb5fbd37e929bf4ccc_tuple, 2, const_str_plain_coding_state); Py_INCREF(const_str_plain_coding_state);
    PyTuple_SET_ITEM(const_tuple_8fd8da0041e155eb5fbd37e929bf4ccc_tuple, 3, const_str_plain_c); Py_INCREF(const_str_plain_c);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$utf8prober(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3d976fafe4c361df1801cadb709f204b;
static PyCodeObject *codeobj_2205c3a1a425d906177bbc46b32b6328;
static PyCodeObject *codeobj_30b65263e1088002b7bf1dccbbde9aa8;
static PyCodeObject *codeobj_4daccc3011321848208ecb471dd1f2db;
static PyCodeObject *codeobj_6523b06f21550b584084689ec8948373;
static PyCodeObject *codeobj_d7a0b98333cfd88b7ea6629d59962539;
static PyCodeObject *codeobj_70c8e87631ca68453a8303fa79234bc6;
static PyCodeObject *codeobj_92eb0b0b892f6e10ec0f07c47bd259ca;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_cceea9c75b13f89cc4200579aac0e7b6);
    codeobj_3d976fafe4c361df1801cadb709f204b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_68f5a554b08c0c93897ca0bc5a8bd7c9, const_tuple_empty, 0, 0, 0);
    codeobj_2205c3a1a425d906177bbc46b32b6328 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_NEWLOCALS | CO_NOFREE, const_str_plain_UTF8Prober, const_tuple_empty, 0, 0, 0);
    codeobj_30b65263e1088002b7bf1dccbbde9aa8 = MAKE_CODEOBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_4daccc3011321848208ecb471dd1f2db = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_charset_name, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_6523b06f21550b584084689ec8948373 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_feed, const_tuple_8fd8da0041e155eb5fbd37e929bf4ccc_tuple, 2, 0, 0);
    codeobj_d7a0b98333cfd88b7ea6629d59962539 = MAKE_CODEOBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_confidence, const_tuple_str_plain_self_str_plain_unlike_tuple, 1, 0, 0);
    codeobj_70c8e87631ca68453a8303fa79234bc6 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_language, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_92eb0b0b892f6e10ec0f07c47bd259ca = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reset, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_1___init__();


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_2_reset();


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_3_charset_name();


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_4_language();


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_5_feed();


static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_6_get_confidence();


// The module function definitions.
static PyObject *impl_chardet$utf8prober$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_30b65263e1088002b7bf1dccbbde9aa8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_30b65263e1088002b7bf1dccbbde9aa8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_30b65263e1088002b7bf1dccbbde9aa8, codeobj_30b65263e1088002b7bf1dccbbde9aa8, module_chardet$utf8prober, sizeof(void *));
    frame_30b65263e1088002b7bf1dccbbde9aa8 = cache_frame_30b65263e1088002b7bf1dccbbde9aa8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_30b65263e1088002b7bf1dccbbde9aa8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_30b65263e1088002b7bf1dccbbde9aa8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8Prober);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UTF8Prober);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 16994 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_30b65263e1088002b7bf1dccbbde9aa8->m_frame.f_lineno = 39;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain___init__);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 13909 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8_SM_MODEL);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UTF8_SM_MODEL);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18241 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_3;
        frame_30b65263e1088002b7bf1dccbbde9aa8->m_frame.f_lineno = 40;
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_coding_sm, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__num_mb_chars, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_30b65263e1088002b7bf1dccbbde9aa8->m_frame.f_lineno = 42;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_30b65263e1088002b7bf1dccbbde9aa8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_30b65263e1088002b7bf1dccbbde9aa8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30b65263e1088002b7bf1dccbbde9aa8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_30b65263e1088002b7bf1dccbbde9aa8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30b65263e1088002b7bf1dccbbde9aa8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_30b65263e1088002b7bf1dccbbde9aa8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_30b65263e1088002b7bf1dccbbde9aa8 == cache_frame_30b65263e1088002b7bf1dccbbde9aa8) {
        Py_DECREF(frame_30b65263e1088002b7bf1dccbbde9aa8);
    }
    cache_frame_30b65263e1088002b7bf1dccbbde9aa8 = NULL;

    assertFrameObject(frame_30b65263e1088002b7bf1dccbbde9aa8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_1___init__);
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


static PyObject *impl_chardet$utf8prober$$$function_2_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_92eb0b0b892f6e10ec0f07c47bd259ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_92eb0b0b892f6e10ec0f07c47bd259ca = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_92eb0b0b892f6e10ec0f07c47bd259ca, codeobj_92eb0b0b892f6e10ec0f07c47bd259ca, module_chardet$utf8prober, sizeof(void *));
    frame_92eb0b0b892f6e10ec0f07c47bd259ca = cache_frame_92eb0b0b892f6e10ec0f07c47bd259ca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_92eb0b0b892f6e10ec0f07c47bd259ca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_92eb0b0b892f6e10ec0f07c47bd259ca) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8Prober);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UTF8Prober);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 16994 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_92eb0b0b892f6e10ec0f07c47bd259ca->m_frame.f_lineno = 45;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_coding_sm);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_92eb0b0b892f6e10ec0f07c47bd259ca->m_frame.f_lineno = 46;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__num_mb_chars, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92eb0b0b892f6e10ec0f07c47bd259ca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_92eb0b0b892f6e10ec0f07c47bd259ca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92eb0b0b892f6e10ec0f07c47bd259ca, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_92eb0b0b892f6e10ec0f07c47bd259ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92eb0b0b892f6e10ec0f07c47bd259ca, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92eb0b0b892f6e10ec0f07c47bd259ca,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_92eb0b0b892f6e10ec0f07c47bd259ca == cache_frame_92eb0b0b892f6e10ec0f07c47bd259ca) {
        Py_DECREF(frame_92eb0b0b892f6e10ec0f07c47bd259ca);
    }
    cache_frame_92eb0b0b892f6e10ec0f07c47bd259ca = NULL;

    assertFrameObject(frame_92eb0b0b892f6e10ec0f07c47bd259ca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_2_reset);
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


static PyObject *impl_chardet$utf8prober$$$function_3_charset_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = const_str_digest_c075052d723d6707083e869a0e3659bb;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_3_charset_name);
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


static PyObject *impl_chardet$utf8prober$$$function_4_language(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = const_str_empty;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_4_language);
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


static PyObject *impl_chardet$utf8prober$$$function_5_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_byte_str = python_pars[1];
    PyObject *var_coding_state = NULL;
    PyObject *var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_6523b06f21550b584084689ec8948373;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6523b06f21550b584084689ec8948373 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_6523b06f21550b584084689ec8948373, codeobj_6523b06f21550b584084689ec8948373, module_chardet$utf8prober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_6523b06f21550b584084689ec8948373 = cache_frame_6523b06f21550b584084689ec8948373;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6523b06f21550b584084689ec8948373);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6523b06f21550b584084689ec8948373) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_byte_str);
        tmp_iter_arg_1 = par_byte_str;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 58;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_3;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_coding_sm);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_c);
        tmp_args_element_name_1 = var_c;
        frame_6523b06f21550b584084689ec8948373->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_next_state, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_coding_state;
            var_coding_state = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(var_coding_state);
        tmp_compexpr_left_1 = var_coding_state;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_ERROR);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 61;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_NOT_ME);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
        }
        goto loop_end_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT(var_coding_state);
            tmp_compexpr_left_2 = var_coding_state;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 63;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_ITS_ME);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_assattr_target_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                if (unlikely(tmp_mvar_value_4 == NULL)) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                }

                if (tmp_mvar_value_4 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 64;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_5 = tmp_mvar_value_4;
                tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_FOUND_IT);
                if (tmp_assattr_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__state, tmp_assattr_name_2);
                Py_DECREF(tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 64;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
            }
            goto loop_end_1;
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_5;
                CHECK_OBJECT(var_coding_state);
                tmp_compexpr_left_3 = var_coding_state;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
                }

                if (tmp_mvar_value_5 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_6 = tmp_mvar_value_5;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_START);
                if (tmp_compexpr_right_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                Py_DECREF(tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_7;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_7 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_coding_sm);
                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    frame_6523b06f21550b584084689ec8948373->m_frame.f_lineno = 67;
                    tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_current_charlen);
                    Py_DECREF(tmp_called_instance_2);
                    if (tmp_compexpr_left_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    tmp_compexpr_right_4 = const_int_pos_2;
                    tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                    Py_DECREF(tmp_compexpr_left_4);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_1 = "oooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_4;
                    } else {
                        goto branch_no_4;
                    }
                    branch_yes_4:;
                    {
                        PyObject *tmp_assign_source_5;
                        PyObject *tmp_source_name_8;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_8 = par_self;
                        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__num_mb_chars);
                        if (tmp_assign_source_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_1 = "oooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_1__start;
                            tmp_inplace_assign_attr_1__start = tmp_assign_source_5;
                            Py_XDECREF(old);
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_6;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
                        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
                        tmp_right_name_1 = const_int_pos_1;
                        tmp_assign_source_6 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
                        if (tmp_assign_source_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_1 = "oooo";
                            goto try_except_handler_3;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_1__end;
                            tmp_inplace_assign_attr_1__end = tmp_assign_source_6;
                            Py_XDECREF(old);
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_3;
                        PyObject *tmp_assattr_target_3;
                        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
                        tmp_assattr_name_3 = tmp_inplace_assign_attr_1__end;
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_3 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__num_mb_chars, tmp_assattr_name_3);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 68;
                            type_description_1 = "oooo";
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

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
                    Py_DECREF(tmp_inplace_assign_attr_1__end);
                    tmp_inplace_assign_attr_1__end = NULL;

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

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
                    Py_DECREF(tmp_inplace_assign_attr_1__start);
                    tmp_inplace_assign_attr_1__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_2;
                    exception_value = exception_keeper_value_2;
                    exception_tb = exception_keeper_tb_2;
                    exception_lineno = exception_keeper_lineno_2;

                    goto try_except_handler_2;
                    // End of try:
                    try_end_2:;
                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
                    Py_DECREF(tmp_inplace_assign_attr_1__end);
                    tmp_inplace_assign_attr_1__end = NULL;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
                    Py_DECREF(tmp_inplace_assign_attr_1__start);
                    tmp_inplace_assign_attr_1__start = NULL;

                    branch_no_4:;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;
        type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_9 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_state);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_compexpr_left_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_6;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_DETECTING);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_5);

            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
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
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT(par_self);
            tmp_called_instance_3 = par_self;
            frame_6523b06f21550b584084689ec8948373->m_frame.f_lineno = 71;
            tmp_compexpr_left_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_get_confidence);
            if (tmp_compexpr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_11 = par_self;
            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_SHORTCUT_THRESHOLD);
            if (tmp_compexpr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_6);

                exception_lineno = 71;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            Py_DECREF(tmp_compexpr_left_6);
            Py_DECREF(tmp_compexpr_right_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assattr_name_4;
                PyObject *tmp_source_name_12;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_assattr_target_4;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                if (unlikely(tmp_mvar_value_7 == NULL)) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                }

                if (tmp_mvar_value_7 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_12 = tmp_mvar_value_7;
                tmp_assattr_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_FOUND_IT);
                if (tmp_assattr_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_4 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__state, tmp_assattr_name_4);
                Py_DECREF(tmp_assattr_name_4);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_6:;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_source_name_13;
        CHECK_OBJECT(par_self);
        tmp_source_name_13 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_state);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6523b06f21550b584084689ec8948373);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6523b06f21550b584084689ec8948373);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6523b06f21550b584084689ec8948373);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6523b06f21550b584084689ec8948373, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6523b06f21550b584084689ec8948373->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6523b06f21550b584084689ec8948373, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6523b06f21550b584084689ec8948373,
        type_description_1,
        par_self,
        par_byte_str,
        var_coding_state,
        var_c
    );


    // Release cached frame.
    if (frame_6523b06f21550b584084689ec8948373 == cache_frame_6523b06f21550b584084689ec8948373) {
        Py_DECREF(frame_6523b06f21550b584084689ec8948373);
    }
    cache_frame_6523b06f21550b584084689ec8948373 = NULL;

    assertFrameObject(frame_6523b06f21550b584084689ec8948373);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_5_feed);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_coding_state);
    var_coding_state = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_coding_state);
    var_coding_state = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_5_feed);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_byte_str);
    Py_DECREF(par_byte_str);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_byte_str);
    Py_DECREF(par_byte_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_chardet$utf8prober$$$function_6_get_confidence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_unlike = NULL;
    struct Nuitka_FrameObject *frame_d7a0b98333cfd88b7ea6629d59962539;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7a0b98333cfd88b7ea6629d59962539 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d7a0b98333cfd88b7ea6629d59962539, codeobj_d7a0b98333cfd88b7ea6629d59962539, module_chardet$utf8prober, sizeof(void *)+sizeof(void *));
    frame_d7a0b98333cfd88b7ea6629d59962539 = cache_frame_d7a0b98333cfd88b7ea6629d59962539;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d7a0b98333cfd88b7ea6629d59962539);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d7a0b98333cfd88b7ea6629d59962539) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__num_mb_chars);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_6;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            tmp_left_name_1 = const_float_0_99;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_ONE_CHAR_PROB);
            if (tmp_left_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__num_mb_chars);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_2);

                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_POW_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(var_unlike == NULL);
            var_unlike = tmp_assign_source_1;
        }
        {
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_3 = const_float_1_0;
            CHECK_OBJECT(var_unlike);
            tmp_right_name_3 = var_unlike;
            tmp_return_value = BINARY_OPERATION_SUB_FLOAT_OBJECT(tmp_left_name_3, tmp_right_name_3);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_float_0_99;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7a0b98333cfd88b7ea6629d59962539);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7a0b98333cfd88b7ea6629d59962539);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7a0b98333cfd88b7ea6629d59962539);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7a0b98333cfd88b7ea6629d59962539, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d7a0b98333cfd88b7ea6629d59962539->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7a0b98333cfd88b7ea6629d59962539, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7a0b98333cfd88b7ea6629d59962539,
        type_description_1,
        par_self,
        var_unlike
    );


    // Release cached frame.
    if (frame_d7a0b98333cfd88b7ea6629d59962539 == cache_frame_d7a0b98333cfd88b7ea6629d59962539) {
        Py_DECREF(frame_d7a0b98333cfd88b7ea6629d59962539);
    }
    cache_frame_d7a0b98333cfd88b7ea6629d59962539 = NULL;

    assertFrameObject(frame_d7a0b98333cfd88b7ea6629d59962539);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_6_get_confidence);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_unlike);
    var_unlike = NULL;

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

    Py_XDECREF(var_unlike);
    var_unlike = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$utf8prober$$$function_6_get_confidence);
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



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_30b65263e1088002b7bf1dccbbde9aa8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_2_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_92eb0b0b892f6e10ec0f07c47bd259ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_3_charset_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4daccc3011321848208ecb471dd1f2db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_4_language() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_70c8e87631ca68453a8303fa79234bc6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_5_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_5_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6523b06f21550b584084689ec8948373,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$utf8prober$$$function_6_get_confidence() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$utf8prober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d7a0b98333cfd88b7ea6629d59962539,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$utf8prober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$utf8prober =
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

function_impl_code functable_chardet$utf8prober[] = {
    impl_chardet$utf8prober$$$function_1___init__,
    impl_chardet$utf8prober$$$function_2_reset,
    impl_chardet$utf8prober$$$function_3_charset_name,
    impl_chardet$utf8prober$$$function_4_language,
    impl_chardet$utf8prober$$$function_5_feed,
    impl_chardet$utf8prober$$$function_6_get_confidence,
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

    function_impl_code *current = functable_chardet$utf8prober;
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

    if (offset > sizeof(functable_chardet$utf8prober) || offset < 0) {
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
        functable_chardet$utf8prober[offset],
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
        module_chardet$utf8prober,
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
PyObject *modulecode_chardet$utf8prober(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$utf8prober;
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
    PRINT_STRING("chardet.utf8prober: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.utf8prober: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.utf8prober: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$utf8prober\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$utf8prober = Py_InitModule4(
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
    mdef_chardet$utf8prober.m_name = module_full_name;
    module_chardet$utf8prober = PyModule_Create(&mdef_chardet$utf8prober);
#endif

    moduledict_chardet$utf8prober = MODULE_DICT(module_chardet$utf8prober);

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
        moduledict_chardet$utf8prober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$utf8prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$utf8prober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$utf8prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$utf8prober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$utf8prober);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$utf8prober);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_3d976fafe4c361df1801cadb709f204b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_chardet$utf8prober_35 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_2205c3a1a425d906177bbc46b32b6328_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2205c3a1a425d906177bbc46b32b6328_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_3d976fafe4c361df1801cadb709f204b = MAKE_MODULE_FRAME(codeobj_3d976fafe4c361df1801cadb709f204b, module_chardet$utf8prober);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_3d976fafe4c361df1801cadb709f204b);
    assert(Py_REFCNT(frame_3d976fafe4c361df1801cadb709f204b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_charsetprober;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_3d976fafe4c361df1801cadb709f204b->m_frame.f_lineno = 28;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_CharSetProber);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_enums;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_3d976fafe4c361df1801cadb709f204b->m_frame.f_lineno = 29;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_ProbingState);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_MachineState);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_codingstatemachine;
        tmp_globals_name_3 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_CodingStateMachine_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_3d976fafe4c361df1801cadb709f204b->m_frame.f_lineno = 30;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_CodingStateMachine);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_mbcssm;
        tmp_globals_name_4 = (PyObject *)moduledict_chardet$utf8prober;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_UTF8_SM_MODEL_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_3d976fafe4c361df1801cadb709f204b->m_frame.f_lineno = 31;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_UTF8_SM_MODEL);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8_SM_MODEL, tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_CharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15885 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_9 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_chardet$utf8prober_35 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_d8e6e7d9079f49d27b12fc56c3d8725f;
        tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_float_0_5;
        tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain_ONE_CHAR_PROB, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_1___init__();



        tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_2_reset();



        tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain_reset, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_2205c3a1a425d906177bbc46b32b6328_2, codeobj_2205c3a1a425d906177bbc46b32b6328, module_chardet$utf8prober, 0);
        frame_2205c3a1a425d906177bbc46b32b6328_2 = cache_frame_2205c3a1a425d906177bbc46b32b6328_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2205c3a1a425d906177bbc46b32b6328_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2205c3a1a425d906177bbc46b32b6328_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$utf8prober$$$function_3_charset_name();



            frame_2205c3a1a425d906177bbc46b32b6328_2->m_frame.f_lineno = 49;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain_charset_name, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$utf8prober$$$function_4_language();



            frame_2205c3a1a425d906177bbc46b32b6328_2->m_frame.f_lineno = 53;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain_language, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2205c3a1a425d906177bbc46b32b6328_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2205c3a1a425d906177bbc46b32b6328_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2205c3a1a425d906177bbc46b32b6328_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_2205c3a1a425d906177bbc46b32b6328_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2205c3a1a425d906177bbc46b32b6328_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2205c3a1a425d906177bbc46b32b6328_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_2205c3a1a425d906177bbc46b32b6328_2 == cache_frame_2205c3a1a425d906177bbc46b32b6328_2) {
            Py_DECREF(frame_2205c3a1a425d906177bbc46b32b6328_2);
        }
        cache_frame_2205c3a1a425d906177bbc46b32b6328_2 = NULL;

        assertFrameObject(frame_2205c3a1a425d906177bbc46b32b6328_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_5_feed();



        tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$utf8prober$$$function_6_get_confidence();



        tmp_res = PyDict_SetItem(locals_chardet$utf8prober_35, const_str_plain_get_confidence, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_10 = locals_chardet$utf8prober_35;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$utf8prober);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_chardet$utf8prober_35);
        locals_chardet$utf8prober_35 = NULL;
        goto outline_result_1;
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

        Py_DECREF(locals_chardet$utf8prober_35);
        locals_chardet$utf8prober_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$utf8prober);
        return NULL;
        outline_exception_1:;
        exception_lineno = 35;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 35;

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
        tmp_assign_source_11 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_2;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_12;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$utf8prober);
        return NULL;
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_11 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_11 == NULL));
            goto try_return_handler_4;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$utf8prober);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$utf8prober);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_UTF8Prober;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_3d976fafe4c361df1801cadb709f204b->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_13;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d976fafe4c361df1801cadb709f204b);
#endif
    popFrameStack();

    assertFrameObject(frame_3d976fafe4c361df1801cadb709f204b);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3d976fafe4c361df1801cadb709f204b);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_3d976fafe4c361df1801cadb709f204b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3d976fafe4c361df1801cadb709f204b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d976fafe4c361df1801cadb709f204b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_14 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_chardet$utf8prober, (Nuitka_StringObject *)const_str_plain_UTF8Prober, tmp_assign_source_14);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class);
    Py_DECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;


    return module_chardet$utf8prober;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
