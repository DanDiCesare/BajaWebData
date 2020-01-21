/* Generated code for Python module 'chardet.mbcharsetprober'
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

/* The "_module_chardet$mbcharsetprober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$mbcharsetprober;
PyDictObject *moduledict_chardet$mbcharsetprober;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_next_state;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_tuple_4e3a048c2023c37c6f29cc8f8a458310_tuple;
extern PyObject *const_str_plain_ProbingState;
static PyObject *const_str_digest_6ee41268d4b92b2b6983eb1cc1ee4d07;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_coding_sm;
extern PyObject *const_str_plain_distribution_analyzer;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_str_plain_CharSetProber;
extern PyObject *const_str_plain_logger;
extern PyObject *const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_byte_str;
static PyObject *const_list_int_0_int_0_list;
extern PyObject *const_tuple_str_plain_CharSetProber_tuple;
static PyObject *const_str_digest_260aaf32158e82f1d4fe279d72222d82;
extern PyObject *const_str_plain__last_char;
extern PyObject *const_str_plain_START;
extern PyObject *const_str_plain_language;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_d538cca970b8ea5b860b6376811aa921;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_char_len;
extern PyObject *const_str_plain_NOT_ME;
extern PyObject *const_str_plain_got_enough_data;
static PyObject *const_str_digest_11748b6686ae68aff0843ae0b66e57cc;
extern PyObject *const_str_plain_MultiByteCharSetProber;
extern PyObject *const_str_plain_DETECTING;
extern PyObject *const_str_plain_SHORTCUT_THRESHOLD;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_tuple_str_plain_self_str_plain_lang_filter_tuple;
extern PyObject *const_str_plain_ITS_ME;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__state;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_get_current_charlen;
extern PyObject *const_str_plain_feed;
extern PyObject *const_str_plain_MachineState;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_coding_state;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_digest_1429e5140ade1e372a3e639fc28337a7;
extern PyObject *const_str_plain_charsetprober;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_lang_filter;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_6ee41268d4b92b2b6983eb1cc1ee4d07 = UNSTREAM_STRING(&constant_bin[ 552422 ], 23, 0);
    const_list_int_0_int_0_list = PyList_New(2);
    PyList_SET_ITEM(const_list_int_0_int_0_list, 0, const_int_0); Py_INCREF(const_int_0);
    PyList_SET_ITEM(const_list_int_0_int_0_list, 1, const_int_0); Py_INCREF(const_int_0);
    const_str_digest_260aaf32158e82f1d4fe279d72222d82 = UNSTREAM_STRING(&constant_bin[ 552445 ], 32, 0);
    const_str_digest_d538cca970b8ea5b860b6376811aa921 = UNSTREAM_STRING(&constant_bin[ 552477 ], 26, 0);
    const_str_digest_11748b6686ae68aff0843ae0b66e57cc = UNSTREAM_STRING(&constant_bin[ 552503 ], 32, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$mbcharsetprober(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_de54cf875e3e27564e8516d736958894;
static PyCodeObject *codeobj_2b9adaed65108477e046673bcf4e53bf;
static PyCodeObject *codeobj_43c64d2799d880550d2ffc9e5eccbd4a;
static PyCodeObject *codeobj_0d70ac2dd904c6d7174b9c234ad2d550;
static PyCodeObject *codeobj_a8cb568f251e4d538ea883cf356ac528;
static PyCodeObject *codeobj_1f73b57f5fd041d8b89c81fea3167978;
static PyCodeObject *codeobj_bc43396d8af5218f85dc0d2832bcde54;
static PyCodeObject *codeobj_a6b4587df4932fe886e1409898126350;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_d538cca970b8ea5b860b6376811aa921);
    codeobj_de54cf875e3e27564e8516d736958894 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_11748b6686ae68aff0843ae0b66e57cc, const_tuple_empty, 0, 0, 0);
    codeobj_2b9adaed65108477e046673bcf4e53bf = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NEWLOCALS | CO_NOFREE, const_str_plain_MultiByteCharSetProber, const_tuple_empty, 0, 0, 0);
    codeobj_43c64d2799d880550d2ffc9e5eccbd4a = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_lang_filter_tuple, 2, 0, 0);
    codeobj_0d70ac2dd904c6d7174b9c234ad2d550 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_charset_name, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_a8cb568f251e4d538ea883cf356ac528 = MAKE_CODEOBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_feed, const_tuple_4e3a048c2023c37c6f29cc8f8a458310_tuple, 2, 0, 0);
    codeobj_1f73b57f5fd041d8b89c81fea3167978 = MAKE_CODEOBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_confidence, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_bc43396d8af5218f85dc0d2832bcde54 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_language, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_a6b4587df4932fe886e1409898126350 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reset, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_2_reset();


static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_3_charset_name();


static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_4_language();


static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_5_feed();


static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_6_get_confidence();


// The module function definitions.
static PyObject *impl_chardet$mbcharsetprober$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lang_filter = python_pars[1];
    struct Nuitka_FrameObject *frame_43c64d2799d880550d2ffc9e5eccbd4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_43c64d2799d880550d2ffc9e5eccbd4a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_43c64d2799d880550d2ffc9e5eccbd4a, codeobj_43c64d2799d880550d2ffc9e5eccbd4a, module_chardet$mbcharsetprober, sizeof(void *)+sizeof(void *));
    frame_43c64d2799d880550d2ffc9e5eccbd4a = cache_frame_43c64d2799d880550d2ffc9e5eccbd4a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_43c64d2799d880550d2ffc9e5eccbd4a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_43c64d2799d880550d2ffc9e5eccbd4a) == 2); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 16899 ], 51, 0);
            exception_tb = NULL;

            exception_lineno = 40;
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


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___init__);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lang_filter);
        tmp_dict_value_1 = par_lang_filter;
        tmp_dict_key_1 = const_str_plain_lang_filter;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_43c64d2799d880550d2ffc9e5eccbd4a->m_frame.f_lineno = 40;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_distribution_analyzer, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_coding_sm, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = LIST_COPY(const_list_int_0_int_0_list);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__last_char, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_43c64d2799d880550d2ffc9e5eccbd4a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_43c64d2799d880550d2ffc9e5eccbd4a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_43c64d2799d880550d2ffc9e5eccbd4a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_43c64d2799d880550d2ffc9e5eccbd4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43c64d2799d880550d2ffc9e5eccbd4a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43c64d2799d880550d2ffc9e5eccbd4a,
        type_description_1,
        par_self,
        par_lang_filter
    );


    // Release cached frame.
    if (frame_43c64d2799d880550d2ffc9e5eccbd4a == cache_frame_43c64d2799d880550d2ffc9e5eccbd4a) {
        Py_DECREF(frame_43c64d2799d880550d2ffc9e5eccbd4a);
    }
    cache_frame_43c64d2799d880550d2ffc9e5eccbd4a = NULL;

    assertFrameObject(frame_43c64d2799d880550d2ffc9e5eccbd4a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober$$$function_1___init__);
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


static PyObject *impl_chardet$mbcharsetprober$$$function_2_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a6b4587df4932fe886e1409898126350;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a6b4587df4932fe886e1409898126350 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a6b4587df4932fe886e1409898126350, codeobj_a6b4587df4932fe886e1409898126350, module_chardet$mbcharsetprober, sizeof(void *));
    frame_a6b4587df4932fe886e1409898126350 = cache_frame_a6b4587df4932fe886e1409898126350;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a6b4587df4932fe886e1409898126350);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a6b4587df4932fe886e1409898126350) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 16899 ], 51, 0);
            exception_tb = NULL;

            exception_lineno = 46;
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


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a6b4587df4932fe886e1409898126350->m_frame.f_lineno = 46;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_coding_sm);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 47;
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
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_coding_sm);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_a6b4587df4932fe886e1409898126350->m_frame.f_lineno = 48;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_distribution_analyzer);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_distribution_analyzer);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_a6b4587df4932fe886e1409898126350->m_frame.f_lineno = 50;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_reset);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = LIST_COPY(const_list_int_0_int_0_list);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__last_char, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6b4587df4932fe886e1409898126350);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6b4587df4932fe886e1409898126350);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a6b4587df4932fe886e1409898126350, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a6b4587df4932fe886e1409898126350->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6b4587df4932fe886e1409898126350, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6b4587df4932fe886e1409898126350,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_a6b4587df4932fe886e1409898126350 == cache_frame_a6b4587df4932fe886e1409898126350) {
        Py_DECREF(frame_a6b4587df4932fe886e1409898126350);
    }
    cache_frame_a6b4587df4932fe886e1409898126350 = NULL;

    assertFrameObject(frame_a6b4587df4932fe886e1409898126350);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober$$$function_2_reset);
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


static PyObject *impl_chardet$mbcharsetprober$$$function_3_charset_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0d70ac2dd904c6d7174b9c234ad2d550;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d70ac2dd904c6d7174b9c234ad2d550 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_0d70ac2dd904c6d7174b9c234ad2d550, codeobj_0d70ac2dd904c6d7174b9c234ad2d550, module_chardet$mbcharsetprober, sizeof(void *));
    frame_0d70ac2dd904c6d7174b9c234ad2d550 = cache_frame_0d70ac2dd904c6d7174b9c234ad2d550;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0d70ac2dd904c6d7174b9c234ad2d550);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0d70ac2dd904c6d7174b9c234ad2d550) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 55;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d70ac2dd904c6d7174b9c234ad2d550);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d70ac2dd904c6d7174b9c234ad2d550);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d70ac2dd904c6d7174b9c234ad2d550, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0d70ac2dd904c6d7174b9c234ad2d550->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d70ac2dd904c6d7174b9c234ad2d550, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d70ac2dd904c6d7174b9c234ad2d550,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_0d70ac2dd904c6d7174b9c234ad2d550 == cache_frame_0d70ac2dd904c6d7174b9c234ad2d550) {
        Py_DECREF(frame_0d70ac2dd904c6d7174b9c234ad2d550);
    }
    cache_frame_0d70ac2dd904c6d7174b9c234ad2d550 = NULL;

    assertFrameObject(frame_0d70ac2dd904c6d7174b9c234ad2d550);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober$$$function_3_charset_name);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_chardet$mbcharsetprober$$$function_4_language(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bc43396d8af5218f85dc0d2832bcde54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc43396d8af5218f85dc0d2832bcde54 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_bc43396d8af5218f85dc0d2832bcde54, codeobj_bc43396d8af5218f85dc0d2832bcde54, module_chardet$mbcharsetprober, sizeof(void *));
    frame_bc43396d8af5218f85dc0d2832bcde54 = cache_frame_bc43396d8af5218f85dc0d2832bcde54;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bc43396d8af5218f85dc0d2832bcde54);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bc43396d8af5218f85dc0d2832bcde54) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 59;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc43396d8af5218f85dc0d2832bcde54);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bc43396d8af5218f85dc0d2832bcde54);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc43396d8af5218f85dc0d2832bcde54, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bc43396d8af5218f85dc0d2832bcde54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc43396d8af5218f85dc0d2832bcde54, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc43396d8af5218f85dc0d2832bcde54,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_bc43396d8af5218f85dc0d2832bcde54 == cache_frame_bc43396d8af5218f85dc0d2832bcde54) {
        Py_DECREF(frame_bc43396d8af5218f85dc0d2832bcde54);
    }
    cache_frame_bc43396d8af5218f85dc0d2832bcde54 = NULL;

    assertFrameObject(frame_bc43396d8af5218f85dc0d2832bcde54);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober$$$function_4_language);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_chardet$mbcharsetprober$$$function_5_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_byte_str = python_pars[1];
    PyObject *var_i = NULL;
    PyObject *var_coding_state = NULL;
    PyObject *var_char_len = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a8cb568f251e4d538ea883cf356ac528;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a8cb568f251e4d538ea883cf356ac528 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a8cb568f251e4d538ea883cf356ac528, codeobj_a8cb568f251e4d538ea883cf356ac528, module_chardet$mbcharsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a8cb568f251e4d538ea883cf356ac528 = cache_frame_a8cb568f251e4d538ea883cf356ac528;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a8cb568f251e4d538ea883cf356ac528);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a8cb568f251e4d538ea883cf356ac528) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_byte_str);
        tmp_len_arg_1 = par_byte_str;
        tmp_range_arg_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_range_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_RANGE(tmp_range_arg_1);
        Py_DECREF(tmp_range_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
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
                exception_lineno = 62;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_3;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_coding_sm);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_next_state);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_byte_str);
        tmp_subscribed_name_1 = par_byte_str;
        CHECK_OBJECT(var_i);
        tmp_subscript_name_1 = var_i;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_a8cb568f251e4d538ea883cf356ac528->m_frame.f_lineno = 63;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
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
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(var_coding_state);
        tmp_compexpr_left_1 = var_coding_state;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_MachineState);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_ERROR);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_logger);
            if (tmp_source_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_debug);
            Py_DECREF(tmp_source_name_4);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_2 = const_str_digest_1429e5140ade1e372a3e639fc28337a7;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_charset_name);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 66;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_language);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_3);

                exception_lineno = 66;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_i);
            tmp_args_element_name_5 = var_i;
            frame_a8cb568f251e4d538ea883cf356ac528->m_frame.f_lineno = 65;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 67;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_8 = tmp_mvar_value_2;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_NOT_ME);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "ooooo";
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
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT(var_coding_state);
            tmp_compexpr_left_2 = var_coding_state;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_MachineState);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 69;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_9 = tmp_mvar_value_3;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_ITS_ME);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooo";
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
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_assattr_target_2;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                if (unlikely(tmp_mvar_value_4 == NULL)) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                }

                if (tmp_mvar_value_4 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 70;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_10 = tmp_mvar_value_4;
                tmp_assattr_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_FOUND_IT);
                if (tmp_assattr_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__state, tmp_assattr_name_2);
                Py_DECREF(tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_1 = "ooooo";
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
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_5;
                CHECK_OBJECT(var_coding_state);
                tmp_compexpr_left_3 = var_coding_state;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_MachineState);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState);
                }

                if (tmp_mvar_value_5 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15324 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 72;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_11 = tmp_mvar_value_5;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_START);
                if (tmp_compexpr_right_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                Py_DECREF(tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_1 = "ooooo";
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
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_source_name_12;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_12 = par_self;
                    tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_coding_sm);
                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_1 = "ooooo";
                        goto try_except_handler_2;
                    }
                    frame_a8cb568f251e4d538ea883cf356ac528->m_frame.f_lineno = 73;
                    tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_current_charlen);
                    Py_DECREF(tmp_called_instance_1);
                    if (tmp_assign_source_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_1 = "ooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_char_len;
                        var_char_len = tmp_assign_source_5;
                        Py_XDECREF(old);
                    }

                }
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    CHECK_OBJECT(var_i);
                    tmp_compexpr_left_4 = var_i;
                    tmp_compexpr_right_4 = const_int_0;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_1 = "ooooo";
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
                        PyObject *tmp_ass_subvalue_1;
                        PyObject *tmp_subscribed_name_2;
                        PyObject *tmp_subscript_name_2;
                        PyObject *tmp_ass_subscribed_1;
                        PyObject *tmp_source_name_13;
                        PyObject *tmp_ass_subscript_1;
                        int tmp_ass_subscript_res_1;
                        CHECK_OBJECT(par_byte_str);
                        tmp_subscribed_name_2 = par_byte_str;
                        tmp_subscript_name_2 = const_int_0;
                        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
                        if (tmp_ass_subvalue_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_13 = par_self;
                        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__last_char);
                        if (tmp_ass_subscribed_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_ass_subvalue_1);

                            exception_lineno = 75;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        tmp_ass_subscript_1 = const_int_pos_1;
                        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1);
                        Py_DECREF(tmp_ass_subscribed_1);
                        Py_DECREF(tmp_ass_subvalue_1);
                        if (tmp_ass_subscript_res_1 == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                    }
                    {
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_source_name_14;
                        PyObject *tmp_source_name_15;
                        PyObject *tmp_call_result_2;
                        PyObject *tmp_args_element_name_6;
                        PyObject *tmp_source_name_16;
                        PyObject *tmp_args_element_name_7;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_15 = par_self;
                        tmp_source_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_distribution_analyzer);
                        if (tmp_source_name_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_feed);
                        Py_DECREF(tmp_source_name_14);
                        if (tmp_called_name_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_16 = par_self;
                        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__last_char);
                        if (tmp_args_element_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_3);

                            exception_lineno = 76;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT(var_char_len);
                        tmp_args_element_name_7 = var_char_len;
                        frame_a8cb568f251e4d538ea883cf356ac528->m_frame.f_lineno = 76;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
                            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
                        }

                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_args_element_name_6);
                        if (tmp_call_result_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        Py_DECREF(tmp_call_result_2);
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        PyObject *tmp_called_name_4;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_call_result_3;
                        PyObject *tmp_args_element_name_8;
                        PyObject *tmp_slice_source_1;
                        PyObject *tmp_slice_lower_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        PyObject *tmp_slice_upper_1;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        PyObject *tmp_args_element_name_9;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_18 = par_self;
                        tmp_source_name_17 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_distribution_analyzer);
                        if (tmp_source_name_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_feed);
                        Py_DECREF(tmp_source_name_17);
                        if (tmp_called_name_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT(par_byte_str);
                        tmp_slice_source_1 = par_byte_str;
                        CHECK_OBJECT(var_i);
                        tmp_left_name_1 = var_i;
                        tmp_right_name_1 = const_int_pos_1;
                        tmp_slice_lower_1 = BINARY_OPERATION_SUB_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
                        if (tmp_slice_lower_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_4);

                            exception_lineno = 78;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT(var_i);
                        tmp_left_name_2 = var_i;
                        tmp_right_name_2 = const_int_pos_1;
                        tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_2, tmp_right_name_2);
                        if (tmp_slice_upper_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_4);
                            Py_DECREF(tmp_slice_lower_1);

                            exception_lineno = 78;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        tmp_args_element_name_8 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
                        Py_DECREF(tmp_slice_lower_1);
                        Py_DECREF(tmp_slice_upper_1);
                        if (tmp_args_element_name_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_4);

                            exception_lineno = 78;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT(var_char_len);
                        tmp_args_element_name_9 = var_char_len;
                        frame_a8cb568f251e4d538ea883cf356ac528->m_frame.f_lineno = 78;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
                            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
                        }

                        Py_DECREF(tmp_called_name_4);
                        Py_DECREF(tmp_args_element_name_8);
                        if (tmp_call_result_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_1 = "ooooo";
                            goto try_except_handler_2;
                        }
                        Py_DECREF(tmp_call_result_3);
                    }
                    branch_end_4:;
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


        exception_lineno = 62;
        type_description_1 = "ooooo";
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
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_source_name_19;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(par_byte_str);
        tmp_subscribed_name_3 = par_byte_str;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, -1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_19 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__last_char);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = const_int_0;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_ass_subscript_res_2 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_20 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_state);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_compexpr_left_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_6;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_DETECTING);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_5);

            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
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
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_22;
            PyObject *tmp_call_result_4;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_23;
            CHECK_OBJECT(par_self);
            tmp_source_name_22 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_distribution_analyzer);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_a8cb568f251e4d538ea883cf356ac528->m_frame.f_lineno = 84;
            tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_got_enough_data);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_4);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_4);

                exception_lineno = 84;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_4);
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_1 == 1) {
                goto and_right_1;
            } else {
                goto and_left_1;
            }
            and_right_1:;
            CHECK_OBJECT(par_self);
            tmp_called_instance_3 = par_self;
            frame_a8cb568f251e4d538ea883cf356ac528->m_frame.f_lineno = 85;
            tmp_compexpr_left_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_get_confidence);
            if (tmp_compexpr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_23 = par_self;
            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_SHORTCUT_THRESHOLD);
            if (tmp_compexpr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_6);

                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            Py_DECREF(tmp_compexpr_left_6);
            Py_DECREF(tmp_compexpr_right_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_6 = tmp_and_left_value_1;
            and_end_1:;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_source_name_24;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_assattr_target_3;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                if (unlikely(tmp_mvar_value_7 == NULL)) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                }

                if (tmp_mvar_value_7 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 86;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_24 = tmp_mvar_value_7;
                tmp_assattr_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_FOUND_IT);
                if (tmp_assattr_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__state, tmp_assattr_name_3);
                Py_DECREF(tmp_assattr_name_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_6:;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_source_name_25;
        CHECK_OBJECT(par_self);
        tmp_source_name_25 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_state);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8cb568f251e4d538ea883cf356ac528);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8cb568f251e4d538ea883cf356ac528);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8cb568f251e4d538ea883cf356ac528);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a8cb568f251e4d538ea883cf356ac528, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a8cb568f251e4d538ea883cf356ac528->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8cb568f251e4d538ea883cf356ac528, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8cb568f251e4d538ea883cf356ac528,
        type_description_1,
        par_self,
        par_byte_str,
        var_i,
        var_coding_state,
        var_char_len
    );


    // Release cached frame.
    if (frame_a8cb568f251e4d538ea883cf356ac528 == cache_frame_a8cb568f251e4d538ea883cf356ac528) {
        Py_DECREF(frame_a8cb568f251e4d538ea883cf356ac528);
    }
    cache_frame_a8cb568f251e4d538ea883cf356ac528 = NULL;

    assertFrameObject(frame_a8cb568f251e4d538ea883cf356ac528);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober$$$function_5_feed);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_coding_state);
    var_coding_state = NULL;

    Py_XDECREF(var_char_len);
    var_char_len = NULL;

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

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_coding_state);
    var_coding_state = NULL;

    Py_XDECREF(var_char_len);
    var_char_len = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober$$$function_5_feed);
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


static PyObject *impl_chardet$mbcharsetprober$$$function_6_get_confidence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1f73b57f5fd041d8b89c81fea3167978;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1f73b57f5fd041d8b89c81fea3167978 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1f73b57f5fd041d8b89c81fea3167978, codeobj_1f73b57f5fd041d8b89c81fea3167978, module_chardet$mbcharsetprober, sizeof(void *));
    frame_1f73b57f5fd041d8b89c81fea3167978 = cache_frame_1f73b57f5fd041d8b89c81fea3167978;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1f73b57f5fd041d8b89c81fea3167978);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1f73b57f5fd041d8b89c81fea3167978) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_distribution_analyzer);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1f73b57f5fd041d8b89c81fea3167978->m_frame.f_lineno = 91;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_confidence);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f73b57f5fd041d8b89c81fea3167978);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f73b57f5fd041d8b89c81fea3167978);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f73b57f5fd041d8b89c81fea3167978);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f73b57f5fd041d8b89c81fea3167978, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1f73b57f5fd041d8b89c81fea3167978->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f73b57f5fd041d8b89c81fea3167978, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f73b57f5fd041d8b89c81fea3167978,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_1f73b57f5fd041d8b89c81fea3167978 == cache_frame_1f73b57f5fd041d8b89c81fea3167978) {
        Py_DECREF(frame_1f73b57f5fd041d8b89c81fea3167978);
    }
    cache_frame_1f73b57f5fd041d8b89c81fea3167978 = NULL;

    assertFrameObject(frame_1f73b57f5fd041d8b89c81fea3167978);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober$$$function_6_get_confidence);
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



static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$mbcharsetprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_43c64d2799d880550d2ffc9e5eccbd4a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$mbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_2_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$mbcharsetprober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a6b4587df4932fe886e1409898126350,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$mbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_3_charset_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$mbcharsetprober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0d70ac2dd904c6d7174b9c234ad2d550,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$mbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_4_language() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$mbcharsetprober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bc43396d8af5218f85dc0d2832bcde54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$mbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_5_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$mbcharsetprober$$$function_5_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8cb568f251e4d538ea883cf356ac528,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$mbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$mbcharsetprober$$$function_6_get_confidence() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$mbcharsetprober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1f73b57f5fd041d8b89c81fea3167978,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$mbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$mbcharsetprober =
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

function_impl_code functable_chardet$mbcharsetprober[] = {
    impl_chardet$mbcharsetprober$$$function_1___init__,
    impl_chardet$mbcharsetprober$$$function_2_reset,
    impl_chardet$mbcharsetprober$$$function_3_charset_name,
    impl_chardet$mbcharsetprober$$$function_4_language,
    impl_chardet$mbcharsetprober$$$function_5_feed,
    impl_chardet$mbcharsetprober$$$function_6_get_confidence,
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

    function_impl_code *current = functable_chardet$mbcharsetprober;
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

    if (offset > sizeof(functable_chardet$mbcharsetprober) || offset < 0) {
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
        functable_chardet$mbcharsetprober[offset],
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
        module_chardet$mbcharsetprober,
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
PyObject *modulecode_chardet$mbcharsetprober(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$mbcharsetprober;
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
    PRINT_STRING("chardet.mbcharsetprober: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.mbcharsetprober: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.mbcharsetprober: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$mbcharsetprober\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$mbcharsetprober = Py_InitModule4(
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
    mdef_chardet$mbcharsetprober.m_name = module_full_name;
    module_chardet$mbcharsetprober = PyModule_Create(&mdef_chardet$mbcharsetprober);
#endif

    moduledict_chardet$mbcharsetprober = MODULE_DICT(module_chardet$mbcharsetprober);

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
        moduledict_chardet$mbcharsetprober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$mbcharsetprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$mbcharsetprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$mbcharsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$mbcharsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$mbcharsetprober);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$mbcharsetprober);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_de54cf875e3e27564e8516d736958894;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_chardet$mbcharsetprober_34 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_2b9adaed65108477e046673bcf4e53bf_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b9adaed65108477e046673bcf4e53bf_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_de54cf875e3e27564e8516d736958894 = MAKE_MODULE_FRAME(codeobj_de54cf875e3e27564e8516d736958894, module_chardet$mbcharsetprober);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_de54cf875e3e27564e8516d736958894);
    assert(Py_REFCNT(frame_de54cf875e3e27564e8516d736958894) == 2);

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
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$mbcharsetprober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_de54cf875e3e27564e8516d736958894->m_frame.f_lineno = 30;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_CharSetProber);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_enums;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$mbcharsetprober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_de54cf875e3e27564e8516d736958894->m_frame.f_lineno = 31;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_5);
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


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15885 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 34;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_7 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_chardet$mbcharsetprober_34 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_6ee41268d4b92b2b6983eb1cc1ee4d07;
        tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_260aaf32158e82f1d4fe279d72222d82;
        tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_chardet$mbcharsetprober$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$mbcharsetprober$$$function_2_reset();



        tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain_reset, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_2b9adaed65108477e046673bcf4e53bf_2, codeobj_2b9adaed65108477e046673bcf4e53bf, module_chardet$mbcharsetprober, 0);
        frame_2b9adaed65108477e046673bcf4e53bf_2 = cache_frame_2b9adaed65108477e046673bcf4e53bf_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2b9adaed65108477e046673bcf4e53bf_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2b9adaed65108477e046673bcf4e53bf_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$mbcharsetprober$$$function_3_charset_name();



            frame_2b9adaed65108477e046673bcf4e53bf_2->m_frame.f_lineno = 53;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain_charset_name, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$mbcharsetprober$$$function_4_language();



            frame_2b9adaed65108477e046673bcf4e53bf_2->m_frame.f_lineno = 57;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain_language, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2b9adaed65108477e046673bcf4e53bf_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2b9adaed65108477e046673bcf4e53bf_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2b9adaed65108477e046673bcf4e53bf_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_2b9adaed65108477e046673bcf4e53bf_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2b9adaed65108477e046673bcf4e53bf_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2b9adaed65108477e046673bcf4e53bf_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_2b9adaed65108477e046673bcf4e53bf_2 == cache_frame_2b9adaed65108477e046673bcf4e53bf_2) {
            Py_DECREF(frame_2b9adaed65108477e046673bcf4e53bf_2);
        }
        cache_frame_2b9adaed65108477e046673bcf4e53bf_2 = NULL;

        assertFrameObject(frame_2b9adaed65108477e046673bcf4e53bf_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_chardet$mbcharsetprober$$$function_5_feed();



        tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$mbcharsetprober$$$function_6_get_confidence();



        tmp_res = PyDict_SetItem(locals_chardet$mbcharsetprober_34, const_str_plain_get_confidence, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_8 = locals_chardet$mbcharsetprober_34;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_chardet$mbcharsetprober_34);
        locals_chardet$mbcharsetprober_34 = NULL;
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

        Py_DECREF(locals_chardet$mbcharsetprober_34);
        locals_chardet$mbcharsetprober_34 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober);
        return NULL;
        outline_exception_1:;
        exception_lineno = 34;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_8;
    }
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


            exception_lineno = 34;

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


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_2;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_10;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_9 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober);
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
            tmp_assign_source_9 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_9 == NULL));
            goto try_return_handler_4;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober);
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
        NUITKA_CANNOT_GET_HERE(chardet$mbcharsetprober);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_MultiByteCharSetProber;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_de54cf875e3e27564e8516d736958894->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_11;
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
    RESTORE_FRAME_EXCEPTION(frame_de54cf875e3e27564e8516d736958894);
#endif
    popFrameStack();

    assertFrameObject(frame_de54cf875e3e27564e8516d736958894);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_de54cf875e3e27564e8516d736958894);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_de54cf875e3e27564e8516d736958894, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_de54cf875e3e27564e8516d736958894->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de54cf875e3e27564e8516d736958894, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_12 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_chardet$mbcharsetprober, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber, tmp_assign_source_12);
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


    return module_chardet$mbcharsetprober;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
