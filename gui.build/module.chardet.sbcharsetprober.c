/* Generated code for Python module 'chardet.sbcharsetprober'
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

/* The "_module_chardet$sbcharsetprober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$sbcharsetprober;
PyDictObject *moduledict_chardet$sbcharsetprober;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_SAMPLE_SIZE;
extern PyObject *const_float_0_99;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_POSITIVE_SHORTCUT_THRESHOLD;
extern PyObject *const_float_0_95;
extern PyObject *const_list_int_0_list;
extern PyObject *const_tuple_false_none_tuple;
static PyObject *const_str_plain__total_char;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_language;
static PyObject *const_str_digest_f68e2e09664f76100b3c042e93356092;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_str_plain_filter_international_words;
extern PyObject *const_str_plain_self;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_cf7be33442b9bb726212077666fa6b60;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_char_to_order_map;
extern PyObject *const_str_plain_charsetprober;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_feed;
static PyObject *const_str_digest_6f65bc7873c4449c9283e638b35406af;
static PyObject *const_str_plain__freq_char;
extern PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
extern PyObject *const_str_plain_ProbingState;
extern PyObject *const_str_plain_DETECTING;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_CharSetProber;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_SequenceLikelihood;
extern PyObject *const_str_plain__model;
static PyObject *const_str_plain__total_seqs;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_5c731680c79b69f20d898c0f51595c71;
extern PyObject *const_str_plain__state;
static PyObject *const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD;
extern PyObject *const_str_plain_CONTROL;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_precedence_matrix;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain__name_prober;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_int_pos_255;
static PyObject *const_tuple_0d2009b0769f9ef69d29f92a188b7c7a_tuple;
extern PyObject *const_str_plain_get_num_categories;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_typical_positive_ratio;
extern PyObject *const_str_plain_SingleByteCharSetProber;
static PyObject *const_str_plain__seq_counters;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain_reversed;
static PyObject *const_str_plain_model;
extern PyObject *const_str_plain_NOT_ME;
extern PyObject *const_str_plain_CharacterCategory;
extern PyObject *const_str_plain_order;
static PyObject *const_str_plain__reversed;
extern PyObject *const_str_plain_confidence;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_POSITIVE;
extern PyObject *const_str_plain_c;
extern PyObject *const_int_pos_1024;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_SB_ENOUGH_REL_THRESHOLD;
extern PyObject *const_str_plain_logger;
extern PyObject *const_tuple_str_plain_CharSetProber_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_3a4c3bbbb6934139e52a73fde257aa55;
extern PyObject *const_str_plain_keep_english_letter;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_language_tuple;
extern PyObject *const_int_0;
static PyObject *const_float_0_05;
static PyObject *const_str_plain_name_prober;
extern PyObject *const_float_0_01;
extern PyObject *const_str_plain_charset_name;
static PyObject *const_str_plain__last_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_SAMPLE_SIZE = UNSTREAM_STRING(&constant_bin[ 564584 ], 11, 1);
    const_str_plain_POSITIVE_SHORTCUT_THRESHOLD = UNSTREAM_STRING(&constant_bin[ 564595 ], 27, 1);
    const_str_plain__total_char = UNSTREAM_STRING(&constant_bin[ 287008 ], 11, 1);
    const_str_digest_f68e2e09664f76100b3c042e93356092 = UNSTREAM_STRING(&constant_bin[ 564622 ], 23, 0);
    const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 1, const_str_plain_byte_str); Py_INCREF(const_str_plain_byte_str);
    const_str_plain_model = UNSTREAM_STRING(&constant_bin[ 290808 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 2, const_str_plain_model); Py_INCREF(const_str_plain_model);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 3, const_str_plain_c); Py_INCREF(const_str_plain_c);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 4, const_str_plain_i); Py_INCREF(const_str_plain_i);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 5, const_str_plain_confidence); Py_INCREF(const_str_plain_confidence);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 6, const_str_plain_charset_name); Py_INCREF(const_str_plain_charset_name);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 7, const_str_plain_char_to_order_map); Py_INCREF(const_str_plain_char_to_order_map);
    PyTuple_SET_ITEM(const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 8, const_str_plain_order); Py_INCREF(const_str_plain_order);
    const_str_digest_cf7be33442b9bb726212077666fa6b60 = UNSTREAM_STRING(&constant_bin[ 564645 ], 57, 0);
    const_str_digest_6f65bc7873c4449c9283e638b35406af = UNSTREAM_STRING(&constant_bin[ 564702 ], 32, 0);
    const_str_plain__freq_char = UNSTREAM_STRING(&constant_bin[ 287113 ], 10, 1);
    const_str_plain__total_seqs = UNSTREAM_STRING(&constant_bin[ 564734 ], 11, 1);
    const_str_digest_5c731680c79b69f20d898c0f51595c71 = UNSTREAM_STRING(&constant_bin[ 564745 ], 36, 0);
    const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD = UNSTREAM_STRING(&constant_bin[ 564781 ], 27, 1);
    const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple, 0, const_str_plain_CharacterCategory); Py_INCREF(const_str_plain_CharacterCategory);
    PyTuple_SET_ITEM(const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple, 1, const_str_plain_ProbingState); Py_INCREF(const_str_plain_ProbingState);
    PyTuple_SET_ITEM(const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple, 2, const_str_plain_SequenceLikelihood); Py_INCREF(const_str_plain_SequenceLikelihood);
    const_str_plain__name_prober = UNSTREAM_STRING(&constant_bin[ 564808 ], 12, 1);
    const_tuple_0d2009b0769f9ef69d29f92a188b7c7a_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_0d2009b0769f9ef69d29f92a188b7c7a_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_0d2009b0769f9ef69d29f92a188b7c7a_tuple, 1, const_str_plain_model); Py_INCREF(const_str_plain_model);
    PyTuple_SET_ITEM(const_tuple_0d2009b0769f9ef69d29f92a188b7c7a_tuple, 2, const_str_plain_reversed); Py_INCREF(const_str_plain_reversed);
    const_str_plain_name_prober = UNSTREAM_STRING(&constant_bin[ 564809 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_0d2009b0769f9ef69d29f92a188b7c7a_tuple, 3, const_str_plain_name_prober); Py_INCREF(const_str_plain_name_prober);
    const_str_plain__seq_counters = UNSTREAM_STRING(&constant_bin[ 564820 ], 13, 1);
    const_str_plain__reversed = UNSTREAM_STRING(&constant_bin[ 564833 ], 9, 1);
    const_str_plain_SB_ENOUGH_REL_THRESHOLD = UNSTREAM_STRING(&constant_bin[ 564842 ], 23, 1);
    const_str_digest_3a4c3bbbb6934139e52a73fde257aa55 = UNSTREAM_STRING(&constant_bin[ 564865 ], 26, 0);
    const_tuple_str_plain_language_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_language_tuple, 0, const_str_plain_language); Py_INCREF(const_str_plain_language);
    const_float_0_05 = UNSTREAM_FLOAT(&constant_bin[ 564891 ]);
    const_str_plain__last_order = UNSTREAM_STRING(&constant_bin[ 564899 ], 11, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$sbcharsetprober(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_32c92a09b904ac1745d4342931ac6188;
static PyCodeObject *codeobj_98b28c13f1faf59715d15941a42eadf9;
static PyCodeObject *codeobj_d24db9a71946d0a230604ddb14b0b171;
static PyCodeObject *codeobj_5294b9edde96ea60e2d066c7bcbd24ad;
static PyCodeObject *codeobj_0cb30cd61fbc27a7db3db2eda8a85b9c;
static PyCodeObject *codeobj_d2190810917e7b0acca4bf9dec5efbf3;
static PyCodeObject *codeobj_a7de920422ffa5e1a879a60457d5a064;
static PyCodeObject *codeobj_4393d629c0c8846dbb4547c98ec3b136;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_3a4c3bbbb6934139e52a73fde257aa55);
    codeobj_32c92a09b904ac1745d4342931ac6188 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_6f65bc7873c4449c9283e638b35406af, const_tuple_empty, 0, 0, 0);
    codeobj_98b28c13f1faf59715d15941a42eadf9 = MAKE_CODEOBJECT(module_filename_obj, 33, CO_NEWLOCALS | CO_NOFREE, const_str_plain_SingleByteCharSetProber, const_tuple_empty, 0, 0, 0);
    codeobj_d24db9a71946d0a230604ddb14b0b171 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_0d2009b0769f9ef69d29f92a188b7c7a_tuple, 4, 0, 0);
    codeobj_5294b9edde96ea60e2d066c7bcbd24ad = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_charset_name, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_0cb30cd61fbc27a7db3db2eda8a85b9c = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_feed, const_tuple_1346adb74c127c5a041ab31c50c64d31_tuple, 2, 0, 0);
    codeobj_d2190810917e7b0acca4bf9dec5efbf3 = MAKE_CODEOBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_confidence, const_tuple_str_plain_self_str_plain_r_tuple, 1, 0, 0);
    codeobj_a7de920422ffa5e1a879a60457d5a064 = MAKE_CODEOBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_language, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_4393d629c0c8846dbb4547c98ec3b136 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reset, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_2_reset();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_3_charset_name();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_4_language();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_5_feed();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_6_get_confidence();


// The module function definitions.
static PyObject *impl_chardet$sbcharsetprober$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_model = python_pars[1];
    PyObject *par_reversed = python_pars[2];
    PyObject *par_name_prober = python_pars[3];
    struct Nuitka_FrameObject *frame_d24db9a71946d0a230604ddb14b0b171;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d24db9a71946d0a230604ddb14b0b171 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_d24db9a71946d0a230604ddb14b0b171, codeobj_d24db9a71946d0a230604ddb14b0b171, module_chardet$sbcharsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d24db9a71946d0a230604ddb14b0b171 = cache_frame_d24db9a71946d0a230604ddb14b0b171;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d24db9a71946d0a230604ddb14b0b171);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d24db9a71946d0a230604ddb14b0b171) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d24db9a71946d0a230604ddb14b0b171->m_frame.f_lineno = 40;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain___init__);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_model);
        tmp_assattr_name_1 = par_model;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__model, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_reversed);
        tmp_assattr_name_2 = par_reversed;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__reversed, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_name_prober);
        tmp_assattr_name_3 = par_name_prober;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__name_prober, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__last_order, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__seq_counters, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__total_seqs, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain__total_char, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain__freq_char, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_d24db9a71946d0a230604ddb14b0b171->m_frame.f_lineno = 51;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d24db9a71946d0a230604ddb14b0b171);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d24db9a71946d0a230604ddb14b0b171);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d24db9a71946d0a230604ddb14b0b171, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d24db9a71946d0a230604ddb14b0b171->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d24db9a71946d0a230604ddb14b0b171, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d24db9a71946d0a230604ddb14b0b171,
        type_description_1,
        par_self,
        par_model,
        par_reversed,
        par_name_prober
    );


    // Release cached frame.
    if (frame_d24db9a71946d0a230604ddb14b0b171 == cache_frame_d24db9a71946d0a230604ddb14b0b171) {
        Py_DECREF(frame_d24db9a71946d0a230604ddb14b0b171);
    }
    cache_frame_d24db9a71946d0a230604ddb14b0b171 = NULL;

    assertFrameObject(frame_d24db9a71946d0a230604ddb14b0b171);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_reversed);
    Py_DECREF(par_reversed);
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_name_prober);
    Py_DECREF(par_name_prober);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_reversed);
    Py_DECREF(par_reversed);
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_name_prober);
    Py_DECREF(par_name_prober);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_chardet$sbcharsetprober$$$function_2_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4393d629c0c8846dbb4547c98ec3b136;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4393d629c0c8846dbb4547c98ec3b136 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_4393d629c0c8846dbb4547c98ec3b136, codeobj_4393d629c0c8846dbb4547c98ec3b136, module_chardet$sbcharsetprober, sizeof(void *));
    frame_4393d629c0c8846dbb4547c98ec3b136 = cache_frame_4393d629c0c8846dbb4547c98ec3b136;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4393d629c0c8846dbb4547c98ec3b136);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4393d629c0c8846dbb4547c98ec3b136) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 54;
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


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4393d629c0c8846dbb4547c98ec3b136->m_frame.f_lineno = 54;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_pos_255;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__last_order, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_left_name_1 = LIST_COPY(const_list_int_0_list);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_left_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17434 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_4393d629c0c8846dbb4547c98ec3b136->m_frame.f_lineno = 57;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_num_categories);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = BINARY_OPERATION_MUL_LIST_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__seq_counters, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__total_seqs, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__total_char, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__freq_char, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4393d629c0c8846dbb4547c98ec3b136);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4393d629c0c8846dbb4547c98ec3b136);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4393d629c0c8846dbb4547c98ec3b136, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4393d629c0c8846dbb4547c98ec3b136->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4393d629c0c8846dbb4547c98ec3b136, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4393d629c0c8846dbb4547c98ec3b136,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_4393d629c0c8846dbb4547c98ec3b136 == cache_frame_4393d629c0c8846dbb4547c98ec3b136) {
        Py_DECREF(frame_4393d629c0c8846dbb4547c98ec3b136);
    }
    cache_frame_4393d629c0c8846dbb4547c98ec3b136 = NULL;

    assertFrameObject(frame_4393d629c0c8846dbb4547c98ec3b136);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_2_reset);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_3_charset_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5294b9edde96ea60e2d066c7bcbd24ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5294b9edde96ea60e2d066c7bcbd24ad = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_5294b9edde96ea60e2d066c7bcbd24ad, codeobj_5294b9edde96ea60e2d066c7bcbd24ad, module_chardet$sbcharsetprober, sizeof(void *));
    frame_5294b9edde96ea60e2d066c7bcbd24ad = cache_frame_5294b9edde96ea60e2d066c7bcbd24ad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5294b9edde96ea60e2d066c7bcbd24ad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5294b9edde96ea60e2d066c7bcbd24ad) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__name_prober);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 65;
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__name_prober);
            if (tmp_source_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_charset_name);
            Py_DECREF(tmp_source_name_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__model);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_str_plain_charset_name;
            tmp_return_value = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5294b9edde96ea60e2d066c7bcbd24ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5294b9edde96ea60e2d066c7bcbd24ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5294b9edde96ea60e2d066c7bcbd24ad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5294b9edde96ea60e2d066c7bcbd24ad, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5294b9edde96ea60e2d066c7bcbd24ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5294b9edde96ea60e2d066c7bcbd24ad, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5294b9edde96ea60e2d066c7bcbd24ad,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_5294b9edde96ea60e2d066c7bcbd24ad == cache_frame_5294b9edde96ea60e2d066c7bcbd24ad) {
        Py_DECREF(frame_5294b9edde96ea60e2d066c7bcbd24ad);
    }
    cache_frame_5294b9edde96ea60e2d066c7bcbd24ad = NULL;

    assertFrameObject(frame_5294b9edde96ea60e2d066c7bcbd24ad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_3_charset_name);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_4_language(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a7de920422ffa5e1a879a60457d5a064;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a7de920422ffa5e1a879a60457d5a064 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a7de920422ffa5e1a879a60457d5a064, codeobj_a7de920422ffa5e1a879a60457d5a064, module_chardet$sbcharsetprober, sizeof(void *));
    frame_a7de920422ffa5e1a879a60457d5a064 = cache_frame_a7de920422ffa5e1a879a60457d5a064;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7de920422ffa5e1a879a60457d5a064);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7de920422ffa5e1a879a60457d5a064) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__name_prober);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 72;
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__name_prober);
            if (tmp_source_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_language);
            Py_DECREF(tmp_source_name_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__model);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_a7de920422ffa5e1a879a60457d5a064->m_frame.f_lineno = 75;
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_language_tuple, 0));

            Py_DECREF(tmp_called_instance_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7de920422ffa5e1a879a60457d5a064);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7de920422ffa5e1a879a60457d5a064);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7de920422ffa5e1a879a60457d5a064);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7de920422ffa5e1a879a60457d5a064, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a7de920422ffa5e1a879a60457d5a064->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7de920422ffa5e1a879a60457d5a064, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7de920422ffa5e1a879a60457d5a064,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_a7de920422ffa5e1a879a60457d5a064 == cache_frame_a7de920422ffa5e1a879a60457d5a064) {
        Py_DECREF(frame_a7de920422ffa5e1a879a60457d5a064);
    }
    cache_frame_a7de920422ffa5e1a879a60457d5a064 = NULL;

    assertFrameObject(frame_a7de920422ffa5e1a879a60457d5a064);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_4_language);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_5_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_byte_str = python_pars[1];
    PyObject *var_model = NULL;
    PyObject *var_c = NULL;
    PyObject *var_i = NULL;
    PyObject *var_confidence = NULL;
    PyObject *var_charset_name = NULL;
    PyObject *var_char_to_order_map = NULL;
    PyObject *var_order = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0cb30cd61fbc27a7db3db2eda8a85b9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_0cb30cd61fbc27a7db3db2eda8a85b9c = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0cb30cd61fbc27a7db3db2eda8a85b9c, codeobj_0cb30cd61fbc27a7db3db2eda8a85b9c, module_chardet$sbcharsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0cb30cd61fbc27a7db3db2eda8a85b9c = cache_frame_0cb30cd61fbc27a7db3db2eda8a85b9c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0cb30cd61fbc27a7db3db2eda8a85b9c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0cb30cd61fbc27a7db3db2eda8a85b9c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__model);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_keep_english_letter;
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT(par_byte_str);
            tmp_args_element_name_1 = par_byte_str;
            frame_0cb30cd61fbc27a7db3db2eda8a85b9c->m_frame.f_lineno = 79;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_filter_international_words, call_args);
            }

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_byte_str;
                assert(old != NULL);
                par_byte_str = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_byte_str);
        tmp_operand_name_2 = par_byte_str;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_state);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__model);
        if (tmp_subscribed_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_char_to_order_map;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscribed_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_char_to_order_map == NULL);
        var_char_to_order_map = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_byte_str);
        tmp_args_element_name_2 = par_byte_str;
        frame_0cb30cd61fbc27a7db3db2eda8a85b9c->m_frame.f_lineno = 83;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 83;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 83;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 83;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_8;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_9;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_char_to_order_map);
        tmp_subscribed_name_3 = var_char_to_order_map;
        CHECK_OBJECT(var_c);
        tmp_subscript_name_3 = var_c;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_order;
            var_order = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(var_order);
        tmp_compexpr_left_1 = var_order;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharacterCategory);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharacterCategory);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17481 ], 46, 0);
            exception_tb = NULL;

            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_CONTROL);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__total_char);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_12 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__total_char, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT(var_order);
        tmp_compexpr_left_2 = var_order;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_SAMPLE_SIZE);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__freq_char);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_2__start;
                tmp_inplace_assign_attr_2__start = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT(tmp_inplace_assign_attr_2__start);
            tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_14 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_2__end;
                tmp_inplace_assign_attr_2__end = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT(tmp_inplace_assign_attr_2__end);
            tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__freq_char, tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto try_except_handler_8;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
        Py_DECREF(tmp_inplace_assign_attr_2__end);
        tmp_inplace_assign_attr_2__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_7;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
        Py_DECREF(tmp_inplace_assign_attr_2__start);
        tmp_inplace_assign_attr_2__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_2;
        // End of try:
        try_end_6:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
        Py_DECREF(tmp_inplace_assign_attr_2__end);
        tmp_inplace_assign_attr_2__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
        Py_DECREF(tmp_inplace_assign_attr_2__start);
        tmp_inplace_assign_attr_2__start = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__last_order);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_9 = par_self;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_SAMPLE_SIZE);
            if (tmp_compexpr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_3);

                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            Py_DECREF(tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_source_name_10;
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__total_seqs);
                if (tmp_assign_source_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_3__start;
                    tmp_inplace_assign_attr_3__start = tmp_assign_source_15;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT(tmp_inplace_assign_attr_3__start);
                tmp_left_name_3 = tmp_inplace_assign_attr_3__start;
                tmp_right_name_3 = const_int_pos_1;
                tmp_assign_source_16 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3);
                if (tmp_assign_source_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_3__end;
                    tmp_inplace_assign_attr_3__end = tmp_assign_source_16;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                CHECK_OBJECT(tmp_inplace_assign_attr_3__end);
                tmp_assattr_name_3 = tmp_inplace_assign_attr_3__end;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__total_seqs, tmp_assattr_name_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_10;
                }
            }
            goto try_end_7;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
            Py_DECREF(tmp_inplace_assign_attr_3__end);
            tmp_inplace_assign_attr_3__end = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_9;
            // End of try:
            try_end_7:;
            goto try_end_8;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
            Py_DECREF(tmp_inplace_assign_attr_3__start);
            tmp_inplace_assign_attr_3__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_2;
            // End of try:
            try_end_8:;
            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
            Py_DECREF(tmp_inplace_assign_attr_3__end);
            tmp_inplace_assign_attr_3__end = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
            Py_DECREF(tmp_inplace_assign_attr_3__start);
            tmp_inplace_assign_attr_3__start = NULL;

            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_operand_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain__reversed);
                if (tmp_operand_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
                Py_DECREF(tmp_operand_name_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_6;
                } else {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_right_name_5;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_12 = par_self;
                    tmp_left_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__last_order);
                    if (tmp_left_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_13 = par_self;
                    tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_SAMPLE_SIZE);
                    if (tmp_right_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_left_name_5);

                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_4);
                    Py_DECREF(tmp_left_name_5);
                    Py_DECREF(tmp_right_name_4);
                    if (tmp_left_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_order);
                    tmp_right_name_5 = var_order;
                    tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
                    Py_DECREF(tmp_left_name_4);
                    if (tmp_assign_source_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_i;
                        assert(old != NULL);
                        var_i = tmp_assign_source_17;
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_18;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_subscript_name_5;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_14 = par_self;
                    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain__model);
                    if (tmp_subscribed_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_subscript_name_4 = const_str_plain_precedence_matrix;
                    tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_5, tmp_subscript_name_4);
                    Py_DECREF(tmp_subscribed_name_5);
                    if (tmp_subscribed_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_i);
                    tmp_subscript_name_5 = var_i;
                    tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_5);
                    Py_DECREF(tmp_subscribed_name_4);
                    if (tmp_assign_source_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_model;
                        var_model = tmp_assign_source_18;
                        Py_XDECREF(old);
                    }

                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_19;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_left_name_7;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_right_name_7;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT(var_order);
                    tmp_left_name_7 = var_order;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_15 = par_self;
                    tmp_right_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_SAMPLE_SIZE);
                    if (tmp_right_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_6);
                    Py_DECREF(tmp_right_name_6);
                    if (tmp_left_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_16 = par_self;
                    tmp_right_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__last_order);
                    if (tmp_right_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_left_name_6);

                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_7);
                    Py_DECREF(tmp_left_name_6);
                    Py_DECREF(tmp_right_name_7);
                    if (tmp_assign_source_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_i;
                        assert(old != NULL);
                        var_i = tmp_assign_source_19;
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_20;
                    PyObject *tmp_subscribed_name_6;
                    PyObject *tmp_subscribed_name_7;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_subscript_name_6;
                    PyObject *tmp_subscript_name_7;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_17 = par_self;
                    tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__model);
                    if (tmp_subscribed_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_subscript_name_6 = const_str_plain_precedence_matrix;
                    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_7, tmp_subscript_name_6);
                    Py_DECREF(tmp_subscribed_name_7);
                    if (tmp_subscribed_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_i);
                    tmp_subscript_name_7 = var_i;
                    tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_6, tmp_subscript_name_7);
                    Py_DECREF(tmp_subscribed_name_6);
                    if (tmp_assign_source_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_model;
                        var_model = tmp_assign_source_20;
                        Py_XDECREF(old);
                    }

                }
                branch_end_6:;
            }
            {
                PyObject *tmp_assign_source_21;
                PyObject *tmp_source_name_18;
                CHECK_OBJECT(par_self);
                tmp_source_name_18 = par_self;
                tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain__seq_counters);
                if (tmp_assign_source_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__target;
                    tmp_inplace_assign_subscr_1__target = tmp_assign_source_21;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT(var_model);
                tmp_assign_source_22 = var_model;
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__subscript;
                    tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_22;
                    Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_left_name_8;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_subscript_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
                tmp_subscribed_name_8 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
                tmp_subscript_name_8 = tmp_inplace_assign_subscr_1__subscript;
                tmp_left_name_8 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_8, tmp_subscript_name_8);
                if (tmp_left_name_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_11;
                }
                tmp_right_name_8 = const_int_pos_1;
                tmp_ass_subvalue_1 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8);
                Py_DECREF(tmp_left_name_8);
                if (tmp_ass_subvalue_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_11;
                }
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
                tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
                tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
                Py_DECREF(tmp_ass_subvalue_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_11;
                }
            }
            goto try_end_9;
            // Exception handler code:
            try_except_handler_11:;
            exception_keeper_type_9 = exception_type;
            exception_keeper_value_9 = exception_value;
            exception_keeper_tb_9 = exception_tb;
            exception_keeper_lineno_9 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__target);
            Py_DECREF(tmp_inplace_assign_subscr_1__target);
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__subscript);
            Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
            tmp_inplace_assign_subscr_1__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto try_except_handler_2;
            // End of try:
            try_end_9:;
            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__target);
            Py_DECREF(tmp_inplace_assign_subscr_1__target);
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__subscript);
            Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
            tmp_inplace_assign_subscr_1__subscript = NULL;

            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_order);
        tmp_assattr_name_4 = var_order;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__last_order, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_source_name_19;
        PyObject *tmp_subscript_name_9;
        CHECK_OBJECT(par_self);
        tmp_source_name_19 = par_self;
        tmp_subscribed_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__model);
        if (tmp_subscribed_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_9 = const_str_plain_charset_name;
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_9, tmp_subscript_name_9);
        Py_DECREF(tmp_subscribed_name_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_charset_name == NULL);
        var_charset_name = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_20 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_state);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_compexpr_left_4);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_2;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_DETECTING);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_4);

            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_22;
            PyObject *tmp_source_name_23;
            CHECK_OBJECT(par_self);
            tmp_source_name_22 = par_self;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain__total_seqs);
            if (tmp_compexpr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_23 = par_self;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_SB_ENOUGH_REL_THRESHOLD);
            if (tmp_compexpr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_5);

                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            Py_DECREF(tmp_compexpr_left_5);
            Py_DECREF(tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_called_instance_2;
                CHECK_OBJECT(par_self);
                tmp_called_instance_2 = par_self;
                frame_0cb30cd61fbc27a7db3db2eda8a85b9c->m_frame.f_lineno = 110;
                tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_confidence);
                if (tmp_assign_source_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_confidence == NULL);
                var_confidence = tmp_assign_source_24;
            }
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_source_name_24;
                CHECK_OBJECT(var_confidence);
                tmp_compexpr_left_6 = var_confidence;
                CHECK_OBJECT(par_self);
                tmp_source_name_24 = par_self;
                tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_POSITIVE_SHORTCUT_THRESHOLD);
                if (tmp_compexpr_right_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
                Py_DECREF(tmp_compexpr_right_6);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_9;
                } else {
                    goto branch_no_9;
                }
                branch_yes_9:;
                {
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_args_element_name_5;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_25 = par_self;
                    tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_logger);
                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_3 = const_str_digest_5c731680c79b69f20d898c0f51595c71;
                    CHECK_OBJECT(var_charset_name);
                    tmp_args_element_name_4 = var_charset_name;
                    CHECK_OBJECT(var_confidence);
                    tmp_args_element_name_5 = var_confidence;
                    frame_0cb30cd61fbc27a7db3db2eda8a85b9c->m_frame.f_lineno = 112;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
                        tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, const_str_plain_debug, call_args);
                    }

                    Py_DECREF(tmp_called_instance_3);
                    if (tmp_call_result_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_1);
                }
                {
                    PyObject *tmp_assattr_name_5;
                    PyObject *tmp_source_name_26;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_assattr_target_5;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                    if (unlikely(tmp_mvar_value_3 == NULL)) {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                    }

                    if (tmp_mvar_value_3 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                        exception_tb = NULL;

                        exception_lineno = 114;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_26 = tmp_mvar_value_3;
                    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_FOUND_IT);
                    if (tmp_assattr_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_5 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__state, tmp_assattr_name_5);
                    Py_DECREF(tmp_assattr_name_5);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_9;
                branch_no_9:;
                {
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_source_name_27;
                    CHECK_OBJECT(var_confidence);
                    tmp_compexpr_left_7 = var_confidence;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_27 = par_self;
                    tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD);
                    if (tmp_compexpr_right_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
                    Py_DECREF(tmp_compexpr_right_7);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_10;
                    } else {
                        goto branch_no_10;
                    }
                    branch_yes_10:;
                    {
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_source_name_28;
                        PyObject *tmp_source_name_29;
                        PyObject *tmp_call_result_2;
                        PyObject *tmp_args_element_name_6;
                        PyObject *tmp_args_element_name_7;
                        PyObject *tmp_args_element_name_8;
                        PyObject *tmp_args_element_name_9;
                        PyObject *tmp_source_name_30;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_29 = par_self;
                        tmp_source_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_logger);
                        if (tmp_source_name_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_debug);
                        Py_DECREF(tmp_source_name_28);
                        if (tmp_called_name_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_6 = const_str_digest_cf7be33442b9bb726212077666fa6b60;
                        CHECK_OBJECT(var_charset_name);
                        tmp_args_element_name_7 = var_charset_name;
                        CHECK_OBJECT(var_confidence);
                        tmp_args_element_name_8 = var_confidence;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_30 = par_self;
                        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD);
                        if (tmp_args_element_name_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_2);

                            exception_lineno = 119;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_0cb30cd61fbc27a7db3db2eda8a85b9c->m_frame.f_lineno = 116;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
                            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
                        }

                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_args_element_name_9);
                        if (tmp_call_result_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF(tmp_call_result_2);
                    }
                    {
                        PyObject *tmp_assattr_name_6;
                        PyObject *tmp_source_name_31;
                        PyObject *tmp_mvar_value_4;
                        PyObject *tmp_assattr_target_6;
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                        if (unlikely(tmp_mvar_value_4 == NULL)) {
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                        }

                        if (tmp_mvar_value_4 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                            exception_tb = NULL;

                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_31 = tmp_mvar_value_4;
                        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_NOT_ME);
                        if (tmp_assattr_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_6 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__state, tmp_assattr_name_6);
                        Py_DECREF(tmp_assattr_name_6);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    branch_no_10:;
                }
                branch_end_9:;
            }
            branch_no_8:;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_source_name_32;
        CHECK_OBJECT(par_self);
        tmp_source_name_32 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain_state);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0cb30cd61fbc27a7db3db2eda8a85b9c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0cb30cd61fbc27a7db3db2eda8a85b9c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0cb30cd61fbc27a7db3db2eda8a85b9c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0cb30cd61fbc27a7db3db2eda8a85b9c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0cb30cd61fbc27a7db3db2eda8a85b9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0cb30cd61fbc27a7db3db2eda8a85b9c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0cb30cd61fbc27a7db3db2eda8a85b9c,
        type_description_1,
        par_self,
        par_byte_str,
        var_model,
        var_c,
        var_i,
        var_confidence,
        var_charset_name,
        var_char_to_order_map,
        var_order
    );


    // Release cached frame.
    if (frame_0cb30cd61fbc27a7db3db2eda8a85b9c == cache_frame_0cb30cd61fbc27a7db3db2eda8a85b9c) {
        Py_DECREF(frame_0cb30cd61fbc27a7db3db2eda8a85b9c);
    }
    cache_frame_0cb30cd61fbc27a7db3db2eda8a85b9c = NULL;

    assertFrameObject(frame_0cb30cd61fbc27a7db3db2eda8a85b9c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_5_feed);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_model);
    var_model = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_confidence);
    var_confidence = NULL;

    Py_XDECREF(var_charset_name);
    var_charset_name = NULL;

    CHECK_OBJECT((PyObject *)par_byte_str);
    Py_DECREF(par_byte_str);
    par_byte_str = NULL;

    Py_XDECREF(var_char_to_order_map);
    var_char_to_order_map = NULL;

    Py_XDECREF(var_order);
    var_order = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_model);
    var_model = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_confidence);
    var_confidence = NULL;

    Py_XDECREF(var_charset_name);
    var_charset_name = NULL;

    Py_XDECREF(par_byte_str);
    par_byte_str = NULL;

    Py_XDECREF(var_char_to_order_map);
    var_char_to_order_map = NULL;

    Py_XDECREF(var_order);
    var_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_5_feed);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_6_get_confidence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_d2190810917e7b0acca4bf9dec5efbf3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d2190810917e7b0acca4bf9dec5efbf3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_01;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_r = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d2190810917e7b0acca4bf9dec5efbf3, codeobj_d2190810917e7b0acca4bf9dec5efbf3, module_chardet$sbcharsetprober, sizeof(void *)+sizeof(void *));
    frame_d2190810917e7b0acca4bf9dec5efbf3 = cache_frame_d2190810917e7b0acca4bf9dec5efbf3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d2190810917e7b0acca4bf9dec5efbf3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d2190810917e7b0acca4bf9dec5efbf3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__total_seqs);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_2;
            tmp_left_name_3 = const_float_1_0;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__seq_counters);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);
            }

            if (tmp_mvar_value_1 == NULL) {
                Py_DECREF(tmp_subscribed_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 17434 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_POSITIVE);
            if (tmp_subscript_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_1);

                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            Py_DECREF(tmp_subscript_name_1);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_MUL_FLOAT_OBJECT(tmp_left_name_3, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_left_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__total_seqs);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_2);

                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_OLDDIV_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__model);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_str_plain_typical_positive_ratio;
            tmp_right_name_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            if (tmp_right_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BINARY_OPERATION_OLDDIV_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_3);
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_right_name_3);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert(old != NULL);
                var_r = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(var_r);
            tmp_left_name_5 = var_r;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__freq_char);
            if (tmp_right_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_4);
            Py_DECREF(tmp_right_name_4);
            if (tmp_left_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_right_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__total_char);
            if (tmp_right_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_4);

                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_OLDDIV_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
            Py_DECREF(tmp_left_name_4);
            Py_DECREF(tmp_right_name_5);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert(old != NULL);
                var_r = tmp_assign_source_3;
                Py_DECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(var_r);
            tmp_compexpr_left_2 = var_r;
            tmp_compexpr_right_2 = const_float_1_0;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
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
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_float_0_99;
                {
                    PyObject *old = var_r;
                    assert(old != NULL);
                    var_r = tmp_assign_source_4;
                    Py_INCREF(var_r);
                    Py_DECREF(old);
                }

            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if (var_r == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "r");
        exception_tb = NULL;

        exception_lineno = 132;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2190810917e7b0acca4bf9dec5efbf3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2190810917e7b0acca4bf9dec5efbf3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2190810917e7b0acca4bf9dec5efbf3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2190810917e7b0acca4bf9dec5efbf3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d2190810917e7b0acca4bf9dec5efbf3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2190810917e7b0acca4bf9dec5efbf3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d2190810917e7b0acca4bf9dec5efbf3,
        type_description_1,
        par_self,
        var_r
    );


    // Release cached frame.
    if (frame_d2190810917e7b0acca4bf9dec5efbf3 == cache_frame_d2190810917e7b0acca4bf9dec5efbf3) {
        Py_DECREF(frame_d2190810917e7b0acca4bf9dec5efbf3);
    }
    cache_frame_d2190810917e7b0acca4bf9dec5efbf3 = NULL;

    assertFrameObject(frame_d2190810917e7b0acca4bf9dec5efbf3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_6_get_confidence);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_r);
    var_r = NULL;

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

    Py_XDECREF(var_r);
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_6_get_confidence);
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



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d24db9a71946d0a230604ddb14b0b171,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_2_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4393d629c0c8846dbb4547c98ec3b136,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_3_charset_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5294b9edde96ea60e2d066c7bcbd24ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_4_language() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a7de920422ffa5e1a879a60457d5a064,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_5_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_5_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0cb30cd61fbc27a7db3db2eda8a85b9c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_6_get_confidence() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d2190810917e7b0acca4bf9dec5efbf3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$sbcharsetprober =
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

function_impl_code functable_chardet$sbcharsetprober[] = {
    impl_chardet$sbcharsetprober$$$function_1___init__,
    impl_chardet$sbcharsetprober$$$function_2_reset,
    impl_chardet$sbcharsetprober$$$function_3_charset_name,
    impl_chardet$sbcharsetprober$$$function_4_language,
    impl_chardet$sbcharsetprober$$$function_5_feed,
    impl_chardet$sbcharsetprober$$$function_6_get_confidence,
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

    function_impl_code *current = functable_chardet$sbcharsetprober;
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

    if (offset > sizeof(functable_chardet$sbcharsetprober) || offset < 0) {
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
        functable_chardet$sbcharsetprober[offset],
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
        module_chardet$sbcharsetprober,
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
PyObject *modulecode_chardet$sbcharsetprober(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$sbcharsetprober;
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
    PRINT_STRING("chardet.sbcharsetprober: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.sbcharsetprober: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.sbcharsetprober: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$sbcharsetprober\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$sbcharsetprober = Py_InitModule4(
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
    mdef_chardet$sbcharsetprober.m_name = module_full_name;
    module_chardet$sbcharsetprober = PyModule_Create(&mdef_chardet$sbcharsetprober);
#endif

    moduledict_chardet$sbcharsetprober = MODULE_DICT(module_chardet$sbcharsetprober);

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
        moduledict_chardet$sbcharsetprober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$sbcharsetprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$sbcharsetprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcharsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcharsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$sbcharsetprober);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$sbcharsetprober);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_32c92a09b904ac1745d4342931ac6188;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_chardet$sbcharsetprober_33 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_98b28c13f1faf59715d15941a42eadf9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_98b28c13f1faf59715d15941a42eadf9_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_32c92a09b904ac1745d4342931ac6188 = MAKE_MODULE_FRAME(codeobj_32c92a09b904ac1745d4342931ac6188, module_chardet$sbcharsetprober);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_32c92a09b904ac1745d4342931ac6188);
    assert(Py_REFCNT(frame_32c92a09b904ac1745d4342931ac6188) == 2);

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
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$sbcharsetprober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_32c92a09b904ac1745d4342931ac6188->m_frame.f_lineno = 29;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_CharSetProber);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_enums;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$sbcharsetprober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_32c92a09b904ac1745d4342931ac6188->m_frame.f_lineno = 30;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

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
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_CharacterCategory);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharacterCategory, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_ProbingState);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_SequenceLikelihood);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood, tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15885 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 33;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_8 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_chardet$sbcharsetprober_33 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_f68e2e09664f76100b3c042e93356092;
        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_64;
        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_SAMPLE_SIZE, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_int_pos_1024;
        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_SB_ENOUGH_REL_THRESHOLD, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_float_0_95;
        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_POSITIVE_SHORTCUT_THRESHOLD, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_float_0_05;
        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD, tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_false_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_2_reset();



        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_reset, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_98b28c13f1faf59715d15941a42eadf9_2, codeobj_98b28c13f1faf59715d15941a42eadf9, module_chardet$sbcharsetprober, 0);
        frame_98b28c13f1faf59715d15941a42eadf9_2 = cache_frame_98b28c13f1faf59715d15941a42eadf9_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_98b28c13f1faf59715d15941a42eadf9_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_98b28c13f1faf59715d15941a42eadf9_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_1 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_3_charset_name();



            frame_98b28c13f1faf59715d15941a42eadf9_2->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_charset_name, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_4_language();



            frame_98b28c13f1faf59715d15941a42eadf9_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_language, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_98b28c13f1faf59715d15941a42eadf9_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_98b28c13f1faf59715d15941a42eadf9_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_98b28c13f1faf59715d15941a42eadf9_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_98b28c13f1faf59715d15941a42eadf9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_98b28c13f1faf59715d15941a42eadf9_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_98b28c13f1faf59715d15941a42eadf9_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_98b28c13f1faf59715d15941a42eadf9_2 == cache_frame_98b28c13f1faf59715d15941a42eadf9_2) {
            Py_DECREF(frame_98b28c13f1faf59715d15941a42eadf9_2);
        }
        cache_frame_98b28c13f1faf59715d15941a42eadf9_2 = NULL;

        assertFrameObject(frame_98b28c13f1faf59715d15941a42eadf9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_5_feed();



        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_6_get_confidence();



        tmp_res = PyDict_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_get_confidence, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_9 = locals_chardet$sbcharsetprober_33;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_chardet$sbcharsetprober_33);
        locals_chardet$sbcharsetprober_33 = NULL;
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

        Py_DECREF(locals_chardet$sbcharsetprober_33);
        locals_chardet$sbcharsetprober_33 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
        return NULL;
        outline_exception_1:;
        exception_lineno = 33;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_9;
    }
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


            exception_lineno = 33;

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


            exception_lineno = 33;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_11 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_2;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_11;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
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
            tmp_assign_source_10 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_10 == NULL));
            goto try_return_handler_4;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
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
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_SingleByteCharSetProber;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_32c92a09b904ac1745d4342931ac6188->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_12;
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
    RESTORE_FRAME_EXCEPTION(frame_32c92a09b904ac1745d4342931ac6188);
#endif
    popFrameStack();

    assertFrameObject(frame_32c92a09b904ac1745d4342931ac6188);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_32c92a09b904ac1745d4342931ac6188);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_32c92a09b904ac1745d4342931ac6188, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_32c92a09b904ac1745d4342931ac6188->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32c92a09b904ac1745d4342931ac6188, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_13 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber, tmp_assign_source_13);
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


    return module_chardet$sbcharsetprober;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
