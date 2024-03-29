/* Generated code for Python module 'chardet.escprober'
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

/* The "_module_chardet$escprober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$escprober;
PyDictObject *moduledict_chardet$escprober;

/* The declarations of module constants used, if any. */
extern PyObject *const_float_0_99;
extern PyObject *const_str_plain_HZ_SM_MODEL;
static PyObject *const_str_digest_a64364154cd48d8af3531ff4f425fac7;
extern PyObject *const_str_plain_ERROR;
static PyObject *const_str_plain__detected_charset;
extern PyObject *const_str_plain_ISO2022KR_SM_MODEL;
static PyObject *const_str_plain_escsm;
extern PyObject *const_str_plain_coding_sm;
extern PyObject *const_str_plain_ISO2022JP_SM_MODEL;
extern PyObject *const_str_plain_ISO2022CN_SM_MODEL;
extern PyObject *const_str_plain_next_state;
extern PyObject *const_str_plain_CharSetProber;
static PyObject *const_str_plain__detected_language;
static PyObject *const_tuple_str_plain_self_str_plain_coding_sm_tuple;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_tuple_str_plain_CodingStateMachine_tuple;
extern PyObject *const_tuple_str_plain_CharSetProber_tuple;
extern PyObject *const_str_plain_CodingStateMachine;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_active_sm_count;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_language;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_8a2b83ac75ad79ac8b82a4eb2394671a;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_ProbingState;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_active;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_ff46fa31719fd87e90671995715079c1;
extern PyObject *const_str_plain_codingstatemachine;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_MachineState;
extern PyObject *const_str_plain__state;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_tuple_str_plain_self_str_plain_lang_filter_tuple;
extern PyObject *const_str_plain_CHINESE_SIMPLIFIED;
extern PyObject *const_str_plain_ITS_ME;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_274cf7df097d13710be9d0f725481c45_tuple;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_str_plain_False;
extern PyObject *const_float_0_0;
static PyObject *const_str_digest_a5a14591e3f2ae4bfb46bc347bc4f2d5;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain_feed;
static PyObject *const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_EscCharSetProber;
extern PyObject *const_str_plain_LanguageFilter;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_coding_state;
extern PyObject *const_str_plain_JAPANESE;
extern PyObject *const_str_plain_NOT_ME;
static PyObject *const_tuple_52c3711c493d4d1eeb25eca9a93824b4_tuple;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_KOREAN;
extern PyObject *const_str_plain_get_coding_state_machine;
extern PyObject *const_str_plain_charsetprober;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_lang_filter;
extern PyObject *const_str_plain_state;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_a64364154cd48d8af3531ff4f425fac7 = UNSTREAM_STRING(&constant_bin[ 290932 ], 26, 0);
    const_str_plain__detected_charset = UNSTREAM_STRING(&constant_bin[ 290958 ], 17, 1);
    const_str_plain_escsm = UNSTREAM_STRING(&constant_bin[ 290975 ], 5, 1);
    const_str_plain__detected_language = UNSTREAM_STRING(&constant_bin[ 290980 ], 18, 1);
    const_tuple_str_plain_self_str_plain_coding_sm_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_coding_sm_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_coding_sm_tuple, 1, const_str_plain_coding_sm); Py_INCREF(const_str_plain_coding_sm);
    const_str_plain_active_sm_count = UNSTREAM_STRING(&constant_bin[ 290998 ], 15, 1);
    const_str_digest_8a2b83ac75ad79ac8b82a4eb2394671a = UNSTREAM_STRING(&constant_bin[ 291013 ], 20, 0);
    const_str_digest_ff46fa31719fd87e90671995715079c1 = UNSTREAM_STRING(&constant_bin[ 291033 ], 188, 0);
    const_tuple_274cf7df097d13710be9d0f725481c45_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_274cf7df097d13710be9d0f725481c45_tuple, 0, const_str_plain_LanguageFilter); Py_INCREF(const_str_plain_LanguageFilter);
    PyTuple_SET_ITEM(const_tuple_274cf7df097d13710be9d0f725481c45_tuple, 1, const_str_plain_ProbingState); Py_INCREF(const_str_plain_ProbingState);
    PyTuple_SET_ITEM(const_tuple_274cf7df097d13710be9d0f725481c45_tuple, 2, const_str_plain_MachineState); Py_INCREF(const_str_plain_MachineState);
    const_str_digest_a5a14591e3f2ae4bfb46bc347bc4f2d5 = UNSTREAM_STRING(&constant_bin[ 290940 ], 17, 0);
    const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple, 1, const_str_plain_byte_str); Py_INCREF(const_str_plain_byte_str);
    PyTuple_SET_ITEM(const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple, 2, const_str_plain_coding_state); Py_INCREF(const_str_plain_coding_state);
    PyTuple_SET_ITEM(const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple, 3, const_str_plain_c); Py_INCREF(const_str_plain_c);
    PyTuple_SET_ITEM(const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple, 4, const_str_plain_coding_sm); Py_INCREF(const_str_plain_coding_sm);
    const_tuple_52c3711c493d4d1eeb25eca9a93824b4_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_52c3711c493d4d1eeb25eca9a93824b4_tuple, 0, const_str_plain_HZ_SM_MODEL); Py_INCREF(const_str_plain_HZ_SM_MODEL);
    PyTuple_SET_ITEM(const_tuple_52c3711c493d4d1eeb25eca9a93824b4_tuple, 1, const_str_plain_ISO2022CN_SM_MODEL); Py_INCREF(const_str_plain_ISO2022CN_SM_MODEL);
    PyTuple_SET_ITEM(const_tuple_52c3711c493d4d1eeb25eca9a93824b4_tuple, 2, const_str_plain_ISO2022JP_SM_MODEL); Py_INCREF(const_str_plain_ISO2022JP_SM_MODEL);
    PyTuple_SET_ITEM(const_tuple_52c3711c493d4d1eeb25eca9a93824b4_tuple, 3, const_str_plain_ISO2022KR_SM_MODEL); Py_INCREF(const_str_plain_ISO2022KR_SM_MODEL);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$escprober(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_91f3951a0b789016fd451642daf9692b;
static PyCodeObject *codeobj_637e5ca180098eca77147966109ebab0;
static PyCodeObject *codeobj_8091799f3e6bacf436bab892522d2ffe;
static PyCodeObject *codeobj_57a87b41dd9aedd6302d95253855abbb;
static PyCodeObject *codeobj_6dc20ef518631044ed414188ea5252ee;
static PyCodeObject *codeobj_ba3a5af4d238328cc930e2d436a9cc4e;
static PyCodeObject *codeobj_49cea32453e0c2ea0eb5d72c38ea93ee;
static PyCodeObject *codeobj_1c5f164cd4c8dcbfb982e06dbcb9c4db;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_8a2b83ac75ad79ac8b82a4eb2394671a);
    codeobj_91f3951a0b789016fd451642daf9692b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_a64364154cd48d8af3531ff4f425fac7, const_tuple_empty, 0, 0, 0);
    codeobj_637e5ca180098eca77147966109ebab0 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_NEWLOCALS | CO_NOFREE, const_str_plain_EscCharSetProber, const_tuple_empty, 0, 0, 0);
    codeobj_8091799f3e6bacf436bab892522d2ffe = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_lang_filter_tuple, 2, 0, 0);
    codeobj_57a87b41dd9aedd6302d95253855abbb = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_charset_name, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_6dc20ef518631044ed414188ea5252ee = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_feed, const_tuple_5da6dc5727594bc9b55c019b0e83c11b_tuple, 2, 0, 0);
    codeobj_ba3a5af4d238328cc930e2d436a9cc4e = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_confidence, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_49cea32453e0c2ea0eb5d72c38ea93ee = MAKE_CODEOBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_language, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_1c5f164cd4c8dcbfb982e06dbcb9c4db = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reset, const_tuple_str_plain_self_str_plain_coding_sm_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_2_reset();


static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_3_charset_name();


static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_4_language();


static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_5_get_confidence();


static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_6_feed();


// The module function definitions.
static PyObject *impl_chardet$escprober$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lang_filter = python_pars[1];
    struct Nuitka_FrameObject *frame_8091799f3e6bacf436bab892522d2ffe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8091799f3e6bacf436bab892522d2ffe = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_8091799f3e6bacf436bab892522d2ffe, codeobj_8091799f3e6bacf436bab892522d2ffe, module_chardet$escprober, sizeof(void *)+sizeof(void *));
    frame_8091799f3e6bacf436bab892522d2ffe = cache_frame_8091799f3e6bacf436bab892522d2ffe;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8091799f3e6bacf436bab892522d2ffe);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8091799f3e6bacf436bab892522d2ffe) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_EscCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EscCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15616 ], 45, 0);
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___init__);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lang_filter);
        tmp_dict_value_1 = par_lang_filter;
        tmp_dict_key_1 = const_str_plain_lang_filter;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 43;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_coding_sm, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_op_bitand_res_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_lang_filter);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_LanguageFilter);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LanguageFilter);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_left_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15661 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_CHINESE_SIMPLIFIED);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_op_bitand_res_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_op_bitand_res_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_op_bitand_res_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_op_bitand_res_1);

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_op_bitand_res_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_coding_sm);
            if (tmp_source_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_append);
            Py_DECREF(tmp_source_name_4);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);
            }

            if (tmp_mvar_value_3 == NULL) {
                Py_DECREF(tmp_called_name_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 13909 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_HZ_SM_MODEL);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HZ_SM_MODEL);
            }

            if (tmp_mvar_value_4 == NULL) {
                Py_DECREF(tmp_called_name_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15704 ], 40, 0);
                exception_tb = NULL;

                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = tmp_mvar_value_4;
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 46;
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 46;
            tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_coding_sm);
            if (tmp_source_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_append);
            Py_DECREF(tmp_source_name_6);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);
            }

            if (tmp_mvar_value_5 == NULL) {
                Py_DECREF(tmp_called_name_4);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 13909 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ISO2022CN_SM_MODEL);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022CN_SM_MODEL);
            }

            if (tmp_mvar_value_6 == NULL) {
                Py_DECREF(tmp_called_name_4);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15744 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = tmp_mvar_value_6;
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 47;
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_4);

                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 47;
            tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_op_bitand_res_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_lang_filter);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_LanguageFilter);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LanguageFilter);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_left_name_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15661 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_7;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_JAPANESE);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_op_bitand_res_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_op_bitand_res_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_op_bitand_res_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_op_bitand_res_2);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_op_bitand_res_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_9;
            CHECK_OBJECT(par_self);
            tmp_source_name_11 = par_self;
            tmp_source_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_coding_sm);
            if (tmp_source_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_append);
            Py_DECREF(tmp_source_name_10);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);
            }

            if (tmp_mvar_value_8 == NULL) {
                Py_DECREF(tmp_called_name_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 13909 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_8;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ISO2022JP_SM_MODEL);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022JP_SM_MODEL);
            }

            if (tmp_mvar_value_9 == NULL) {
                Py_DECREF(tmp_called_name_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15791 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_6 = tmp_mvar_value_9;
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 49;
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_6);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_6);

                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 49;
            tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_4);
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_op_bitand_res_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_lang_filter);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_LanguageFilter);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LanguageFilter);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_left_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15661 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_10;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_KOREAN);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_op_bitand_res_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_op_bitand_res_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_op_bitand_res_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_op_bitand_res_3);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_op_bitand_res_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_mvar_value_12;
            CHECK_OBJECT(par_self);
            tmp_source_name_15 = par_self;
            tmp_source_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_coding_sm);
            if (tmp_source_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_append);
            Py_DECREF(tmp_source_name_14);
            if (tmp_called_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine);
            }

            if (tmp_mvar_value_11 == NULL) {
                Py_DECREF(tmp_called_name_8);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 13909 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_11;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ISO2022KR_SM_MODEL);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ISO2022KR_SM_MODEL);
            }

            if (tmp_mvar_value_12 == NULL) {
                Py_DECREF(tmp_called_name_8);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15838 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_8 = tmp_mvar_value_12;
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 51;
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_8);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_8);

                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 51;
            tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_call_result_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_5);
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_active_sm_count, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__detected_charset, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__detected_language, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__state, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8091799f3e6bacf436bab892522d2ffe->m_frame.f_lineno = 56;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8091799f3e6bacf436bab892522d2ffe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8091799f3e6bacf436bab892522d2ffe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8091799f3e6bacf436bab892522d2ffe, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8091799f3e6bacf436bab892522d2ffe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8091799f3e6bacf436bab892522d2ffe, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8091799f3e6bacf436bab892522d2ffe,
        type_description_1,
        par_self,
        par_lang_filter
    );


    // Release cached frame.
    if (frame_8091799f3e6bacf436bab892522d2ffe == cache_frame_8091799f3e6bacf436bab892522d2ffe) {
        Py_DECREF(frame_8091799f3e6bacf436bab892522d2ffe);
    }
    cache_frame_8091799f3e6bacf436bab892522d2ffe = NULL;

    assertFrameObject(frame_8091799f3e6bacf436bab892522d2ffe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lang_filter);
    Py_DECREF(par_lang_filter);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lang_filter);
    Py_DECREF(par_lang_filter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_chardet$escprober$$$function_2_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_coding_sm = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1c5f164cd4c8dcbfb982e06dbcb9c4db;
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
    static struct Nuitka_FrameObject *cache_frame_1c5f164cd4c8dcbfb982e06dbcb9c4db = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_1c5f164cd4c8dcbfb982e06dbcb9c4db, codeobj_1c5f164cd4c8dcbfb982e06dbcb9c4db, module_chardet$escprober, sizeof(void *)+sizeof(void *));
    frame_1c5f164cd4c8dcbfb982e06dbcb9c4db = cache_frame_1c5f164cd4c8dcbfb982e06dbcb9c4db;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c5f164cd4c8dcbfb982e06dbcb9c4db);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c5f164cd4c8dcbfb982e06dbcb9c4db) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_EscCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EscCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15616 ], 45, 0);
            exception_tb = NULL;

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1c5f164cd4c8dcbfb982e06dbcb9c4db->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_coding_sm);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
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
                type_description_1 = "oo";
                exception_lineno = 60;
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
            PyObject *old = var_coding_sm;
            var_coding_sm = tmp_assign_source_3;
            Py_INCREF(var_coding_sm);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_coding_sm);
        tmp_operand_name_1 = var_coding_sm;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        goto loop_start_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT(var_coding_sm);
        tmp_assattr_target_1 = var_coding_sm;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_active, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_coding_sm);
        tmp_called_instance_2 = var_coding_sm;
        frame_1c5f164cd4c8dcbfb982e06dbcb9c4db->m_frame.f_lineno = 64;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 60;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_coding_sm);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_active_sm_count, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__detected_charset, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__detected_language, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c5f164cd4c8dcbfb982e06dbcb9c4db);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c5f164cd4c8dcbfb982e06dbcb9c4db);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c5f164cd4c8dcbfb982e06dbcb9c4db, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1c5f164cd4c8dcbfb982e06dbcb9c4db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c5f164cd4c8dcbfb982e06dbcb9c4db, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c5f164cd4c8dcbfb982e06dbcb9c4db,
        type_description_1,
        par_self,
        var_coding_sm
    );


    // Release cached frame.
    if (frame_1c5f164cd4c8dcbfb982e06dbcb9c4db == cache_frame_1c5f164cd4c8dcbfb982e06dbcb9c4db) {
        Py_DECREF(frame_1c5f164cd4c8dcbfb982e06dbcb9c4db);
    }
    cache_frame_1c5f164cd4c8dcbfb982e06dbcb9c4db = NULL;

    assertFrameObject(frame_1c5f164cd4c8dcbfb982e06dbcb9c4db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_2_reset);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_coding_sm);
    var_coding_sm = NULL;

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

    Py_XDECREF(var_coding_sm);
    var_coding_sm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_2_reset);
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


static PyObject *impl_chardet$escprober$$$function_3_charset_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_57a87b41dd9aedd6302d95253855abbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57a87b41dd9aedd6302d95253855abbb = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_57a87b41dd9aedd6302d95253855abbb, codeobj_57a87b41dd9aedd6302d95253855abbb, module_chardet$escprober, sizeof(void *));
    frame_57a87b41dd9aedd6302d95253855abbb = cache_frame_57a87b41dd9aedd6302d95253855abbb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_57a87b41dd9aedd6302d95253855abbb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_57a87b41dd9aedd6302d95253855abbb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__detected_charset);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57a87b41dd9aedd6302d95253855abbb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57a87b41dd9aedd6302d95253855abbb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57a87b41dd9aedd6302d95253855abbb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57a87b41dd9aedd6302d95253855abbb, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_57a87b41dd9aedd6302d95253855abbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57a87b41dd9aedd6302d95253855abbb, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57a87b41dd9aedd6302d95253855abbb,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_57a87b41dd9aedd6302d95253855abbb == cache_frame_57a87b41dd9aedd6302d95253855abbb) {
        Py_DECREF(frame_57a87b41dd9aedd6302d95253855abbb);
    }
    cache_frame_57a87b41dd9aedd6302d95253855abbb = NULL;

    assertFrameObject(frame_57a87b41dd9aedd6302d95253855abbb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_3_charset_name);
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


static PyObject *impl_chardet$escprober$$$function_4_language(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_49cea32453e0c2ea0eb5d72c38ea93ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_49cea32453e0c2ea0eb5d72c38ea93ee = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_49cea32453e0c2ea0eb5d72c38ea93ee, codeobj_49cea32453e0c2ea0eb5d72c38ea93ee, module_chardet$escprober, sizeof(void *));
    frame_49cea32453e0c2ea0eb5d72c38ea93ee = cache_frame_49cea32453e0c2ea0eb5d72c38ea93ee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_49cea32453e0c2ea0eb5d72c38ea93ee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_49cea32453e0c2ea0eb5d72c38ea93ee) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__detected_language);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_49cea32453e0c2ea0eb5d72c38ea93ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_49cea32453e0c2ea0eb5d72c38ea93ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_49cea32453e0c2ea0eb5d72c38ea93ee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49cea32453e0c2ea0eb5d72c38ea93ee, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_49cea32453e0c2ea0eb5d72c38ea93ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49cea32453e0c2ea0eb5d72c38ea93ee, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_49cea32453e0c2ea0eb5d72c38ea93ee,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_49cea32453e0c2ea0eb5d72c38ea93ee == cache_frame_49cea32453e0c2ea0eb5d72c38ea93ee) {
        Py_DECREF(frame_49cea32453e0c2ea0eb5d72c38ea93ee);
    }
    cache_frame_49cea32453e0c2ea0eb5d72c38ea93ee = NULL;

    assertFrameObject(frame_49cea32453e0c2ea0eb5d72c38ea93ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_4_language);
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


static PyObject *impl_chardet$escprober$$$function_5_get_confidence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ba3a5af4d238328cc930e2d436a9cc4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba3a5af4d238328cc930e2d436a9cc4e = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ba3a5af4d238328cc930e2d436a9cc4e, codeobj_ba3a5af4d238328cc930e2d436a9cc4e, module_chardet$escprober, sizeof(void *));
    frame_ba3a5af4d238328cc930e2d436a9cc4e = cache_frame_ba3a5af4d238328cc930e2d436a9cc4e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ba3a5af4d238328cc930e2d436a9cc4e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ba3a5af4d238328cc930e2d436a9cc4e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__detected_charset);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 78;
            type_description_1 = "o";
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
        tmp_return_value = const_float_0_99;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_float_0_0;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba3a5af4d238328cc930e2d436a9cc4e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba3a5af4d238328cc930e2d436a9cc4e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba3a5af4d238328cc930e2d436a9cc4e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba3a5af4d238328cc930e2d436a9cc4e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ba3a5af4d238328cc930e2d436a9cc4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba3a5af4d238328cc930e2d436a9cc4e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba3a5af4d238328cc930e2d436a9cc4e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_ba3a5af4d238328cc930e2d436a9cc4e == cache_frame_ba3a5af4d238328cc930e2d436a9cc4e) {
        Py_DECREF(frame_ba3a5af4d238328cc930e2d436a9cc4e);
    }
    cache_frame_ba3a5af4d238328cc930e2d436a9cc4e = NULL;

    assertFrameObject(frame_ba3a5af4d238328cc930e2d436a9cc4e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_5_get_confidence);
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


static PyObject *impl_chardet$escprober$$$function_6_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_byte_str = python_pars[1];
    PyObject *var_coding_state = NULL;
    PyObject *var_c = NULL;
    PyObject *var_coding_sm = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_6dc20ef518631044ed414188ea5252ee;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_6dc20ef518631044ed414188ea5252ee = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_6dc20ef518631044ed414188ea5252ee, codeobj_6dc20ef518631044ed414188ea5252ee, module_chardet$escprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_6dc20ef518631044ed414188ea5252ee = cache_frame_6dc20ef518631044ed414188ea5252ee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6dc20ef518631044ed414188ea5252ee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6dc20ef518631044ed414188ea5252ee) == 2); // Frame stack

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


            exception_lineno = 84;
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
                exception_lineno = 84;
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
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_coding_sm);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 85;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_6 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_coding_sm;
            var_coding_sm = tmp_assign_source_6;
            Py_INCREF(var_coding_sm);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(var_coding_sm);
        tmp_operand_name_1 = var_coding_sm;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_coding_sm);
        tmp_source_name_2 = var_coding_sm;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_active);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        goto loop_start_2;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_coding_sm);
        tmp_called_instance_1 = var_coding_sm;
        CHECK_OBJECT(var_c);
        tmp_args_element_name_1 = var_c;
        frame_6dc20ef518631044ed414188ea5252ee->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_next_state, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_coding_state;
            var_coding_state = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(var_coding_state);
        tmp_compexpr_left_1 = var_coding_state;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_ERROR);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_False;
            CHECK_OBJECT(var_coding_sm);
            tmp_assattr_target_1 = var_coding_sm;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_active, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_active_sm_count);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_9 = BINARY_OPERATION(PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_active_sm_count, tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
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

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
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

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_active_sm_count);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_assattr_target_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 93;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }

                tmp_source_name_6 = tmp_mvar_value_2;
                tmp_assattr_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_NOT_ME);
                if (tmp_assattr_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__state, tmp_assattr_name_3);
                Py_DECREF(tmp_assattr_name_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
            }
            {
                PyObject *tmp_source_name_7;
                CHECK_OBJECT(par_self);
                tmp_source_name_7 = par_self;
                tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_state);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                goto try_return_handler_3;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT(var_coding_state);
            tmp_compexpr_left_3 = var_coding_state;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_MachineState);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 95;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_ITS_ME);
            if (tmp_compexpr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_assattr_name_4;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_assattr_target_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                if (unlikely(tmp_mvar_value_4 == NULL)) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                }

                if (tmp_mvar_value_4 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 96;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }

                tmp_source_name_9 = tmp_mvar_value_4;
                tmp_assattr_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_FOUND_IT);
                if (tmp_assattr_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_4 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__state, tmp_assattr_name_4);
                Py_DECREF(tmp_assattr_name_4);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 96;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
            }
            {
                PyObject *tmp_assattr_name_5;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_assattr_target_5;
                CHECK_OBJECT(var_coding_sm);
                tmp_called_instance_2 = var_coding_sm;
                frame_6dc20ef518631044ed414188ea5252ee->m_frame.f_lineno = 97;
                tmp_assattr_name_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_coding_state_machine);
                if (tmp_assattr_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_5 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__detected_charset, tmp_assattr_name_5);
                Py_DECREF(tmp_assattr_name_5);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
            }
            {
                PyObject *tmp_assattr_name_6;
                PyObject *tmp_source_name_10;
                PyObject *tmp_assattr_target_6;
                CHECK_OBJECT(var_coding_sm);
                tmp_source_name_10 = var_coding_sm;
                tmp_assattr_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_language);
                if (tmp_assattr_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_6 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__detected_language, tmp_assattr_name_6);
                Py_DECREF(tmp_assattr_name_6);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
            }
            {
                PyObject *tmp_source_name_11;
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_state);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_1 = "ooooo";
                    goto try_except_handler_3;
                }
                goto try_return_handler_3;
            }
            branch_no_4:;
        }
        branch_end_2:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT((PyObject *)tmp_for_loop_2__iter_value);
    Py_DECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    goto try_return_handler_2;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_source_name_12;
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_state);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6dc20ef518631044ed414188ea5252ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6dc20ef518631044ed414188ea5252ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6dc20ef518631044ed414188ea5252ee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6dc20ef518631044ed414188ea5252ee, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6dc20ef518631044ed414188ea5252ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6dc20ef518631044ed414188ea5252ee, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6dc20ef518631044ed414188ea5252ee,
        type_description_1,
        par_self,
        par_byte_str,
        var_coding_state,
        var_c,
        var_coding_sm
    );


    // Release cached frame.
    if (frame_6dc20ef518631044ed414188ea5252ee == cache_frame_6dc20ef518631044ed414188ea5252ee) {
        Py_DECREF(frame_6dc20ef518631044ed414188ea5252ee);
    }
    cache_frame_6dc20ef518631044ed414188ea5252ee = NULL;

    assertFrameObject(frame_6dc20ef518631044ed414188ea5252ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_6_feed);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_coding_state);
    var_coding_state = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    Py_XDECREF(var_coding_sm);
    var_coding_sm = NULL;

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

    Py_XDECREF(var_coding_state);
    var_coding_state = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    Py_XDECREF(var_coding_sm);
    var_coding_sm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$escprober$$$function_6_feed);
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



static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$escprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8091799f3e6bacf436bab892522d2ffe,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$escprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_2_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$escprober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c5f164cd4c8dcbfb982e06dbcb9c4db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$escprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_3_charset_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$escprober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_57a87b41dd9aedd6302d95253855abbb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$escprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_4_language() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$escprober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_49cea32453e0c2ea0eb5d72c38ea93ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$escprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_5_get_confidence() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$escprober$$$function_5_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba3a5af4d238328cc930e2d436a9cc4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$escprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$escprober$$$function_6_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$escprober$$$function_6_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6dc20ef518631044ed414188ea5252ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$escprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$escprober =
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

function_impl_code functable_chardet$escprober[] = {
    impl_chardet$escprober$$$function_1___init__,
    impl_chardet$escprober$$$function_2_reset,
    impl_chardet$escprober$$$function_3_charset_name,
    impl_chardet$escprober$$$function_4_language,
    impl_chardet$escprober$$$function_5_get_confidence,
    impl_chardet$escprober$$$function_6_feed,
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

    function_impl_code *current = functable_chardet$escprober;
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

    if (offset > sizeof(functable_chardet$escprober) || offset < 0) {
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
        functable_chardet$escprober[offset],
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
        module_chardet$escprober,
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
PyObject *modulecode_chardet$escprober(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$escprober;
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
    PRINT_STRING("chardet.escprober: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.escprober: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.escprober: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$escprober\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$escprober = Py_InitModule4(
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
    mdef_chardet$escprober.m_name = module_full_name;
    module_chardet$escprober = PyModule_Create(&mdef_chardet$escprober);
#endif

    moduledict_chardet$escprober = MODULE_DICT(module_chardet$escprober);

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
        moduledict_chardet$escprober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$escprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$escprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$escprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$escprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$escprober);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$escprober);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_91f3951a0b789016fd451642daf9692b;
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
    PyObject *locals_chardet$escprober_35 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_637e5ca180098eca77147966109ebab0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_637e5ca180098eca77147966109ebab0_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_91f3951a0b789016fd451642daf9692b = MAKE_MODULE_FRAME(codeobj_91f3951a0b789016fd451642daf9692b, module_chardet$escprober);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_91f3951a0b789016fd451642daf9692b);
    assert(Py_REFCNT(frame_91f3951a0b789016fd451642daf9692b) == 2);

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
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$escprober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_91f3951a0b789016fd451642daf9692b->m_frame.f_lineno = 28;
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
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_codingstatemachine;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$escprober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_CodingStateMachine_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_91f3951a0b789016fd451642daf9692b->m_frame.f_lineno = 29;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_CodingStateMachine);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_enums;
        tmp_globals_name_3 = (PyObject *)moduledict_chardet$escprober;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_274cf7df097d13710be9d0f725481c45_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_91f3951a0b789016fd451642daf9692b->m_frame.f_lineno = 30;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_LanguageFilter);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_LanguageFilter, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_ProbingState);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_MachineState);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_escsm;
        tmp_globals_name_4 = (PyObject *)moduledict_chardet$escprober;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_52c3711c493d4d1eeb25eca9a93824b4_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_91f3951a0b789016fd451642daf9692b->m_frame.f_lineno = 31;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_HZ_SM_MODEL);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_HZ_SM_MODEL, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_ISO2022CN_SM_MODEL);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ISO2022CN_SM_MODEL, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_ISO2022JP_SM_MODEL);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ISO2022JP_SM_MODEL, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_ISO2022KR_SM_MODEL);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_ISO2022KR_SM_MODEL, tmp_assign_source_13);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_CharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15885 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_14 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_14, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_chardet$escprober_35 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_a5a14591e3f2ae4bfb46bc347bc4f2d5;
        tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_ff46fa31719fd87e90671995715079c1;
        tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_chardet$escprober$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$escprober$$$function_2_reset();



        tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain_reset, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_637e5ca180098eca77147966109ebab0_2, codeobj_637e5ca180098eca77147966109ebab0, module_chardet$escprober, 0);
        frame_637e5ca180098eca77147966109ebab0_2 = cache_frame_637e5ca180098eca77147966109ebab0_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_637e5ca180098eca77147966109ebab0_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_637e5ca180098eca77147966109ebab0_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$escprober$$$function_3_charset_name();



            frame_637e5ca180098eca77147966109ebab0_2->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain_charset_name, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$escprober$$$function_4_language();



            frame_637e5ca180098eca77147966109ebab0_2->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain_language, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_637e5ca180098eca77147966109ebab0_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_637e5ca180098eca77147966109ebab0_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_637e5ca180098eca77147966109ebab0_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_637e5ca180098eca77147966109ebab0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_637e5ca180098eca77147966109ebab0_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_637e5ca180098eca77147966109ebab0_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_637e5ca180098eca77147966109ebab0_2 == cache_frame_637e5ca180098eca77147966109ebab0_2) {
            Py_DECREF(frame_637e5ca180098eca77147966109ebab0_2);
        }
        cache_frame_637e5ca180098eca77147966109ebab0_2 = NULL;

        assertFrameObject(frame_637e5ca180098eca77147966109ebab0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_chardet$escprober$$$function_5_get_confidence();



        tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain_get_confidence, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$escprober$$$function_6_feed();



        tmp_res = PyDict_SetItem(locals_chardet$escprober_35, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_15 = locals_chardet$escprober_35;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$escprober);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_chardet$escprober_35);
        locals_chardet$escprober_35 = NULL;
        goto outline_result_1;
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

        Py_DECREF(locals_chardet$escprober_35);
        locals_chardet$escprober_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$escprober);
        return NULL;
        outline_exception_1:;
        exception_lineno = 35;
        goto try_except_handler_3;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
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

            goto try_except_handler_3;
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
        tmp_assign_source_16 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_3;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_17;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$escprober);
        return NULL;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_16 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_16 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$escprober);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$escprober);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_EscCharSetProber;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_91f3951a0b789016fd451642daf9692b->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_18;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f3951a0b789016fd451642daf9692b);
#endif
    popFrameStack();

    assertFrameObject(frame_91f3951a0b789016fd451642daf9692b);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_91f3951a0b789016fd451642daf9692b);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_91f3951a0b789016fd451642daf9692b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_91f3951a0b789016fd451642daf9692b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91f3951a0b789016fd451642daf9692b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_19 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_chardet$escprober, (Nuitka_StringObject *)const_str_plain_EscCharSetProber, tmp_assign_source_19);
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


    return module_chardet$escprober;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
