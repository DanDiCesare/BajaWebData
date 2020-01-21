/* Generated code for Python module 'OpenSSL._util'
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

/* The "_module_OpenSSL$_util" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenSSL$_util;
PyDictObject *moduledict_OpenSSL$_util;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_charp;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_730ef54822249b99d09b6c540f95afea;
static PyObject *const_str_digest_794635e24069d7c30423338a938acb82;
extern PyObject *const_str_plain_string;
static PyObject *const_str_plain_ERR_reason_error_string;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_exception_type;
static PyObject *const_str_digest_840f30c513b699d14ee99b0c08967a77;
static PyObject *const_str_digest_a3dc4c919ab5762cf48b9f2702920dc8;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_init_static_locks;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_make_assert;
static PyObject *const_tuple_str_plain_exception_type_str_plain_errors_str_plain_error_tuple;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_digest_b4cf7dde6b3b7615af9bdc9041f04bce;
extern PyObject *const_tuple_str_plain_s_tuple;
static PyObject *const_tuple_str_plain_PY3_str_plain_binary_type_str_plain_text_type_tuple;
extern PyObject *const_str_plain_lib;
static PyObject *const_dict_008c2bca04f924f2dc01d0b6d3532abb;
static PyObject *const_str_digest_42aa9c472f077f756fa2449adc7e25b5;
extern PyObject *const_str_plain_category;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_openssl_assert;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_tuple_str_plain_charp_tuple;
static PyObject *const_str_plain_should_clear_after_alloc;
extern PyObject *const_str_digest_b11dfe4b707a71db6685885388346d53;
static PyObject *const_tuple_str_plain_label_str_plain_obj_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_native;
static PyObject *const_str_plain_new_allocator;
static PyObject *const_str_plain_ERR_lib_error_string;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_getfilesystemencoding;
extern PyObject *const_int_0;
static PyObject *const_str_digest_955818c6fb22a80d2149abe0d14fea2a;
extern PyObject *const_str_plain_ffi;
extern PyObject *const_str_plain_byte_string;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_aae5185ceaf38e003b112220ba7c64ca;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_ok_str_plain_error_tuple;
static PyObject *const_str_plain_ERR_func_error_string;
extern PyObject *const_str_plain_UNSPECIFIED;
extern PyObject *const_str_plain_ok;
extern PyObject *const_str_plain_no_zero_allocator;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_str_plain_error_str_plain_openssl_assert_tuple;
extern PyObject *const_str_plain_errors;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_Binding;
extern PyObject *const_str_plain_binary_type;
extern PyObject *const_str_plain_text_to_bytes_and_warn;
extern PyObject *const_str_plain_PY3;
static PyObject *const_str_plain__TEXT_WARNING;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_obj;
static PyObject *const_str_digest_c461645ae0fa90b51b9036779d6e4297;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_Binding_tuple;
extern PyObject *const_str_plain_path_string;
static PyObject *const_str_digest_f67c4070d6c27388787cc6cde5c90466;
extern PyObject *const_str_plain_ERR_get_error;
static PyObject *const_tuple_str_plain_charmap_tuple;
extern PyObject *const_str_plain_label;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_plain_charmap;
extern PyObject *const_str_plain_exception_from_error_queue;
static PyObject *const_str_digest_36f816def2075bed47e2eab5c73607f3;
extern PyObject *const_str_plain_binding;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_74185842ffe7f46a863f0d0210c2907f;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_charp = UNSTREAM_STRING(&constant_bin[ 123296 ], 5, 1);
    const_str_digest_730ef54822249b99d09b6c540f95afea = UNSTREAM_STRING(&constant_bin[ 123301 ], 16, 0);
    const_str_digest_794635e24069d7c30423338a938acb82 = UNSTREAM_STRING(&constant_bin[ 123317 ], 41, 0);
    const_str_plain_ERR_reason_error_string = UNSTREAM_STRING(&constant_bin[ 123358 ], 23, 1);
    const_str_plain_exception_type = UNSTREAM_STRING(&constant_bin[ 123381 ], 14, 1);
    const_str_digest_840f30c513b699d14ee99b0c08967a77 = UNSTREAM_STRING(&constant_bin[ 123395 ], 51, 0);
    const_str_digest_a3dc4c919ab5762cf48b9f2702920dc8 = UNSTREAM_STRING(&constant_bin[ 123446 ], 31, 0);
    const_tuple_str_plain_exception_type_str_plain_errors_str_plain_error_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_exception_type_str_plain_errors_str_plain_error_tuple, 0, const_str_plain_exception_type); Py_INCREF(const_str_plain_exception_type);
    PyTuple_SET_ITEM(const_tuple_str_plain_exception_type_str_plain_errors_str_plain_error_tuple, 1, const_str_plain_errors); Py_INCREF(const_str_plain_errors);
    PyTuple_SET_ITEM(const_tuple_str_plain_exception_type_str_plain_errors_str_plain_error_tuple, 2, const_str_plain_error); Py_INCREF(const_str_plain_error);
    const_str_digest_b4cf7dde6b3b7615af9bdc9041f04bce = UNSTREAM_STRING(&constant_bin[ 123477 ], 170, 0);
    const_tuple_str_plain_PY3_str_plain_binary_type_str_plain_text_type_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_PY3_str_plain_binary_type_str_plain_text_type_tuple, 0, const_str_plain_PY3); Py_INCREF(const_str_plain_PY3);
    PyTuple_SET_ITEM(const_tuple_str_plain_PY3_str_plain_binary_type_str_plain_text_type_tuple, 1, const_str_plain_binary_type); Py_INCREF(const_str_plain_binary_type);
    PyTuple_SET_ITEM(const_tuple_str_plain_PY3_str_plain_binary_type_str_plain_text_type_tuple, 2, const_str_plain_text_type); Py_INCREF(const_str_plain_text_type);
    const_dict_008c2bca04f924f2dc01d0b6d3532abb = _PyDict_NewPresized( 1 );
    const_str_plain_should_clear_after_alloc = UNSTREAM_STRING(&constant_bin[ 123647 ], 24, 1);
    PyDict_SetItem(const_dict_008c2bca04f924f2dc01d0b6d3532abb, const_str_plain_should_clear_after_alloc, Py_False);
    assert(PyDict_Size(const_dict_008c2bca04f924f2dc01d0b6d3532abb) == 1);
    const_str_digest_42aa9c472f077f756fa2449adc7e25b5 = UNSTREAM_STRING(&constant_bin[ 123671 ], 310, 0);
    const_tuple_str_plain_charp_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_charp_tuple, 0, const_str_plain_charp); Py_INCREF(const_str_plain_charp);
    const_tuple_str_plain_label_str_plain_obj_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_label_str_plain_obj_tuple, 0, const_str_plain_label); Py_INCREF(const_str_plain_label);
    PyTuple_SET_ITEM(const_tuple_str_plain_label_str_plain_obj_tuple, 1, const_str_plain_obj); Py_INCREF(const_str_plain_obj);
    const_str_plain_new_allocator = UNSTREAM_STRING(&constant_bin[ 123981 ], 13, 1);
    const_str_plain_ERR_lib_error_string = UNSTREAM_STRING(&constant_bin[ 123994 ], 20, 1);
    const_str_plain_getfilesystemencoding = UNSTREAM_STRING(&constant_bin[ 124014 ], 21, 1);
    const_str_digest_955818c6fb22a80d2149abe0d14fea2a = UNSTREAM_STRING(&constant_bin[ 124035 ], 84, 0);
    const_str_digest_aae5185ceaf38e003b112220ba7c64ca = UNSTREAM_STRING(&constant_bin[ 124119 ], 355, 0);
    const_tuple_str_plain_ok_str_plain_error_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_ok_str_plain_error_tuple, 0, const_str_plain_ok); Py_INCREF(const_str_plain_ok);
    PyTuple_SET_ITEM(const_tuple_str_plain_ok_str_plain_error_tuple, 1, const_str_plain_error); Py_INCREF(const_str_plain_error);
    const_str_plain_ERR_func_error_string = UNSTREAM_STRING(&constant_bin[ 124474 ], 21, 1);
    const_tuple_str_plain_error_str_plain_openssl_assert_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_error_str_plain_openssl_assert_tuple, 0, const_str_plain_error); Py_INCREF(const_str_plain_error);
    PyTuple_SET_ITEM(const_tuple_str_plain_error_str_plain_openssl_assert_tuple, 1, const_str_plain_openssl_assert); Py_INCREF(const_str_plain_openssl_assert);
    const_str_plain__TEXT_WARNING = UNSTREAM_STRING(&constant_bin[ 3092 ], 13, 1);
    const_str_digest_c461645ae0fa90b51b9036779d6e4297 = UNSTREAM_STRING(&constant_bin[ 124495 ], 22, 0);
    const_tuple_str_plain_Binding_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Binding_tuple, 0, const_str_plain_Binding); Py_INCREF(const_str_plain_Binding);
    const_str_digest_f67c4070d6c27388787cc6cde5c90466 = UNSTREAM_STRING(&constant_bin[ 124517 ], 126, 0);
    const_tuple_str_plain_charmap_tuple = PyTuple_New(1);
    const_str_plain_charmap = UNSTREAM_STRING(&constant_bin[ 124643 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_charmap_tuple, 0, const_str_plain_charmap); Py_INCREF(const_str_plain_charmap);
    const_str_digest_36f816def2075bed47e2eab5c73607f3 = UNSTREAM_STRING(&constant_bin[ 124650 ], 279, 0);
    const_str_digest_74185842ffe7f46a863f0d0210c2907f = UNSTREAM_STRING(&constant_bin[ 124929 ], 472, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenSSL$_util(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_08bd999f6c82726f771dd80a1b3f0453;
static PyCodeObject *codeobj_9902ecf04da9dfe7dfa5ecf3db1a5578;
static PyCodeObject *codeobj_8a8007ef0a5d7b668c5fa9f05cda225b;
static PyCodeObject *codeobj_fe77529281c95398cffc332c4542d8e1;
static PyCodeObject *codeobj_d834ea256e3072b8091ab90769aa9500;
static PyCodeObject *codeobj_79aaef2c58296605f8acad3987cd6bec;
static PyCodeObject *codeobj_c69f81ffeb09449bbd478996e4d18fc2;
static PyCodeObject *codeobj_4ae5dca942863baa24a571057a084c0a;
static PyCodeObject *codeobj_3dd7804977294142a363ce651b2238b1;
static PyCodeObject *codeobj_b0f4e0f1d3fb493c478fe53f10f90c06;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_730ef54822249b99d09b6c540f95afea);
    codeobj_08bd999f6c82726f771dd80a1b3f0453 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_c461645ae0fa90b51b9036779d6e4297, const_tuple_empty, 0, 0, 0);
    codeobj_9902ecf04da9dfe7dfa5ecf3db1a5578 = MAKE_CODEOBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_byte_string, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_8a8007ef0a5d7b668c5fa9f05cda225b = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_byte_string, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_fe77529281c95398cffc332c4542d8e1 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_exception_from_error_queue, const_tuple_str_plain_exception_type_str_plain_errors_str_plain_error_tuple, 1, 0, 0);
    codeobj_d834ea256e3072b8091ab90769aa9500 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_make_assert, const_tuple_str_plain_error_str_plain_openssl_assert_tuple, 1, 0, 0);
    codeobj_79aaef2c58296605f8acad3987cd6bec = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_native, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_c69f81ffeb09449bbd478996e4d18fc2 = MAKE_CODEOBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_openssl_assert, const_tuple_str_plain_ok_str_plain_error_tuple, 1, 0, 0);
    codeobj_4ae5dca942863baa24a571057a084c0a = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_path_string, const_tuple_str_plain_s_tuple, 1, 0, 0);
    codeobj_3dd7804977294142a363ce651b2238b1 = MAKE_CODEOBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_text, const_tuple_str_plain_charp_tuple, 1, 0, 0);
    codeobj_b0f4e0f1d3fb493c478fe53f10f90c06 = MAKE_CODEOBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_text_to_bytes_and_warn, const_tuple_str_plain_label_str_plain_obj_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_1_text();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_2_exception_from_error_queue();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_3_make_assert();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_3_make_assert$$$function_1_openssl_assert();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_4_native();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_5_path_string();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_6_byte_string();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_7_byte_string();


static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_8_text_to_bytes_and_warn();


// The module function definitions.
static PyObject *impl_OpenSSL$_util$$$function_1_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_charp = python_pars[0];
    struct Nuitka_FrameObject *frame_3dd7804977294142a363ce651b2238b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3dd7804977294142a363ce651b2238b1 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_3dd7804977294142a363ce651b2238b1, codeobj_3dd7804977294142a363ce651b2238b1, module_OpenSSL$_util, sizeof(void *));
    frame_3dd7804977294142a363ce651b2238b1 = cache_frame_3dd7804977294142a363ce651b2238b1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3dd7804977294142a363ce651b2238b1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3dd7804977294142a363ce651b2238b1) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_charp);
        tmp_operand_name_1 = par_charp;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
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
        tmp_return_value = const_str_empty;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_native);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_native);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2713 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_ffi);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ffi);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2748 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_charp);
        tmp_args_element_name_2 = par_charp;
        frame_3dd7804977294142a363ce651b2238b1->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_string, call_args);
        }

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3dd7804977294142a363ce651b2238b1->m_frame.f_lineno = 31;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dd7804977294142a363ce651b2238b1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dd7804977294142a363ce651b2238b1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3dd7804977294142a363ce651b2238b1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3dd7804977294142a363ce651b2238b1, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3dd7804977294142a363ce651b2238b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3dd7804977294142a363ce651b2238b1, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3dd7804977294142a363ce651b2238b1,
        type_description_1,
        par_charp
    );


    // Release cached frame.
    if (frame_3dd7804977294142a363ce651b2238b1 == cache_frame_3dd7804977294142a363ce651b2238b1) {
        Py_DECREF(frame_3dd7804977294142a363ce651b2238b1);
    }
    cache_frame_3dd7804977294142a363ce651b2238b1 = NULL;

    assertFrameObject(frame_3dd7804977294142a363ce651b2238b1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_1_text);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_charp);
    Py_DECREF(par_charp);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_charp);
    Py_DECREF(par_charp);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_OpenSSL$_util$$$function_2_exception_from_error_queue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_exception_type = python_pars[0];
    PyObject *var_errors = NULL;
    PyObject *var_error = NULL;
    struct Nuitka_FrameObject *frame_fe77529281c95398cffc332c4542d8e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fe77529281c95398cffc332c4542d8e1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_errors == NULL);
        var_errors = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_fe77529281c95398cffc332c4542d8e1, codeobj_fe77529281c95398cffc332c4542d8e1, module_OpenSSL$_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_fe77529281c95398cffc332c4542d8e1 = cache_frame_fe77529281c95398cffc332c4542d8e1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fe77529281c95398cffc332c4542d8e1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fe77529281c95398cffc332c4542d8e1) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_lib);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_lib);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2780 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 46;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_ERR_get_error);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_error;
            var_error = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_error);
        tmp_compexpr_left_1 = var_error;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_errors);
        tmp_source_name_1 = var_errors;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_append);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2812 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_lib);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_lib);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2780 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT(var_error);
        tmp_args_element_name_3 = var_error;
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_ERR_lib_error_string, call_args);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 50;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_element_name_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2812 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_lib);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_lib);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2780 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT(var_error);
        tmp_args_element_name_5 = var_error;
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_5};
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_ERR_func_error_string, call_args);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 51;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_element_name_1, 1, tmp_tuple_element_1);
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2812 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_lib);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_lib);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2780 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_7;
        CHECK_OBJECT(var_error);
        tmp_args_element_name_7 = var_error;
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_ERR_reason_error_string, call_args);
        }

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 52;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_element_name_1, 2, tmp_tuple_element_1);
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 49;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(par_exception_type);
        tmp_called_name_5 = par_exception_type;
        CHECK_OBJECT(var_errors);
        tmp_args_element_name_8 = var_errors;
        frame_fe77529281c95398cffc332c4542d8e1->m_frame.f_lineno = 54;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_8);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 54;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe77529281c95398cffc332c4542d8e1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fe77529281c95398cffc332c4542d8e1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe77529281c95398cffc332c4542d8e1, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_fe77529281c95398cffc332c4542d8e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe77529281c95398cffc332c4542d8e1, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe77529281c95398cffc332c4542d8e1,
        type_description_1,
        par_exception_type,
        var_errors,
        var_error
    );


    // Release cached frame.
    if (frame_fe77529281c95398cffc332c4542d8e1 == cache_frame_fe77529281c95398cffc332c4542d8e1) {
        Py_DECREF(frame_fe77529281c95398cffc332c4542d8e1);
    }
    cache_frame_fe77529281c95398cffc332c4542d8e1 = NULL;

    assertFrameObject(frame_fe77529281c95398cffc332c4542d8e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_2_exception_from_error_queue);
    return NULL;
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

    CHECK_OBJECT((PyObject *)var_errors);
    Py_DECREF(var_errors);
    var_errors = NULL;

    Py_XDECREF(var_error);
    var_error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_2_exception_from_error_queue);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_exception_type);
    Py_DECREF(par_exception_type);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_OpenSSL$_util$$$function_3_make_assert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_error = PyCell_NEW1(python_pars[0]);
    PyObject *var_openssl_assert = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_OpenSSL$_util$$$function_3_make_assert$$$function_1_openssl_assert();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_error;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0]);


        assert(var_openssl_assert == NULL);
        var_openssl_assert = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_openssl_assert);
    tmp_return_value = var_openssl_assert;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_3_make_assert);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_openssl_assert);
    Py_DECREF(var_openssl_assert);
    var_openssl_assert = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_3_make_assert);
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_OpenSSL$_util$$$function_3_make_assert$$$function_1_openssl_assert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ok = python_pars[0];
    struct Nuitka_FrameObject *frame_c69f81ffeb09449bbd478996e4d18fc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c69f81ffeb09449bbd478996e4d18fc2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c69f81ffeb09449bbd478996e4d18fc2, codeobj_c69f81ffeb09449bbd478996e4d18fc2, module_OpenSSL$_util, sizeof(void *)+sizeof(void *));
    frame_c69f81ffeb09449bbd478996e4d18fc2 = cache_frame_c69f81ffeb09449bbd478996e4d18fc2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c69f81ffeb09449bbd478996e4d18fc2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c69f81ffeb09449bbd478996e4d18fc2) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ok);
        tmp_compexpr_left_1 = par_ok;
        tmp_compexpr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_exception_from_error_queue);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_exception_from_error_queue);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2845 ], 55, 0);
                exception_tb = NULL;

                exception_lineno = 67;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            if (PyCell_GET(self->m_closure[0]) == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "error");
                exception_tb = NULL;

                exception_lineno = 67;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_1 = PyCell_GET(self->m_closure[0]);
            frame_c69f81ffeb09449bbd478996e4d18fc2->m_frame.f_lineno = 67;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c69f81ffeb09449bbd478996e4d18fc2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c69f81ffeb09449bbd478996e4d18fc2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c69f81ffeb09449bbd478996e4d18fc2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c69f81ffeb09449bbd478996e4d18fc2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c69f81ffeb09449bbd478996e4d18fc2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c69f81ffeb09449bbd478996e4d18fc2,
        type_description_1,
        par_ok,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_c69f81ffeb09449bbd478996e4d18fc2 == cache_frame_c69f81ffeb09449bbd478996e4d18fc2) {
        Py_DECREF(frame_c69f81ffeb09449bbd478996e4d18fc2);
    }
    cache_frame_c69f81ffeb09449bbd478996e4d18fc2 = NULL;

    assertFrameObject(frame_c69f81ffeb09449bbd478996e4d18fc2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_3_make_assert$$$function_1_openssl_assert);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ok);
    Py_DECREF(par_ok);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ok);
    Py_DECREF(par_ok);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_OpenSSL$_util$$$function_4_native(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_79aaef2c58296605f8acad3987cd6bec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_79aaef2c58296605f8acad3987cd6bec = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_79aaef2c58296605f8acad3987cd6bec, codeobj_79aaef2c58296605f8acad3987cd6bec, module_OpenSSL$_util, sizeof(void *));
    frame_79aaef2c58296605f8acad3987cd6bec = cache_frame_79aaef2c58296605f8acad3987cd6bec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_79aaef2c58296605f8acad3987cd6bec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_79aaef2c58296605f8acad3987cd6bec) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binary_type);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_type);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2900 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text_type);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_isinstance_cls_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2940 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_a3dc4c919ab5762cf48b9f2702920dc8;
            CHECK_OBJECT(par_s);
            tmp_right_name_1 = par_s;
            tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_STR_OBJECT(tmp_left_name_1, tmp_right_name_1);
            if (tmp_make_exception_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_79aaef2c58296605f8acad3987cd6bec->m_frame.f_lineno = 83;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 83;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_PY3);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2978 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT(par_s);
            tmp_isinstance_inst_2 = par_s;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binary_type);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_type);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2900 ], 40, 0);
                exception_tb = NULL;

                exception_lineno = 85;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_4;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT(par_s);
                tmp_called_instance_1 = par_s;
                frame_79aaef2c58296605f8acad3987cd6bec->m_frame.f_lineno = 86;
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT(par_s);
            tmp_isinstance_inst_3 = par_s;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text_type);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2940 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 88;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_3 = tmp_mvar_value_5;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_called_instance_2;
                CHECK_OBJECT(par_s);
                tmp_called_instance_2 = par_s;
                frame_79aaef2c58296605f8acad3987cd6bec->m_frame.f_lineno = 89;
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_4:;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79aaef2c58296605f8acad3987cd6bec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_79aaef2c58296605f8acad3987cd6bec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79aaef2c58296605f8acad3987cd6bec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79aaef2c58296605f8acad3987cd6bec, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_79aaef2c58296605f8acad3987cd6bec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79aaef2c58296605f8acad3987cd6bec, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79aaef2c58296605f8acad3987cd6bec,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if (frame_79aaef2c58296605f8acad3987cd6bec == cache_frame_79aaef2c58296605f8acad3987cd6bec) {
        Py_DECREF(frame_79aaef2c58296605f8acad3987cd6bec);
    }
    cache_frame_79aaef2c58296605f8acad3987cd6bec = NULL;

    assertFrameObject(frame_79aaef2c58296605f8acad3987cd6bec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_4_native);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_OpenSSL$_util$$$function_5_path_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_4ae5dca942863baa24a571057a084c0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4ae5dca942863baa24a571057a084c0a = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_4ae5dca942863baa24a571057a084c0a, codeobj_4ae5dca942863baa24a571057a084c0a, module_OpenSSL$_util, sizeof(void *));
    frame_4ae5dca942863baa24a571057a084c0a = cache_frame_4ae5dca942863baa24a571057a084c0a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4ae5dca942863baa24a571057a084c0a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4ae5dca942863baa24a571057a084c0a) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_s);
        tmp_isinstance_inst_1 = par_s;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binary_type);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_type);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2900 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
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
        CHECK_OBJECT(par_s);
        tmp_return_value = par_s;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT(par_s);
            tmp_isinstance_inst_2 = par_s;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text_type);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2940 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 104;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_2;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_3;
                CHECK_OBJECT(par_s);
                tmp_source_name_1 = par_s;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_encode);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_sys);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
                }

                if (tmp_mvar_value_3 == NULL) {
                    Py_DECREF(tmp_called_name_1);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 3010 ], 32, 0);
                    exception_tb = NULL;

                    exception_lineno = 105;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_3;
                frame_4ae5dca942863baa24a571057a084c0a->m_frame.f_lineno = 105;
                tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_getfilesystemencoding);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 105;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_4ae5dca942863baa24a571057a084c0a->m_frame.f_lineno = 105;
                tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_840f30c513b699d14ee99b0c08967a77;
                frame_4ae5dca942863baa24a571057a084c0a->m_frame.f_lineno = 107;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
                assert(!(tmp_raise_type_1 == NULL));
                exception_type = tmp_raise_type_1;
                exception_lineno = 107;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ae5dca942863baa24a571057a084c0a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ae5dca942863baa24a571057a084c0a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ae5dca942863baa24a571057a084c0a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ae5dca942863baa24a571057a084c0a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4ae5dca942863baa24a571057a084c0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ae5dca942863baa24a571057a084c0a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ae5dca942863baa24a571057a084c0a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if (frame_4ae5dca942863baa24a571057a084c0a == cache_frame_4ae5dca942863baa24a571057a084c0a) {
        Py_DECREF(frame_4ae5dca942863baa24a571057a084c0a);
    }
    cache_frame_4ae5dca942863baa24a571057a084c0a = NULL;

    assertFrameObject(frame_4ae5dca942863baa24a571057a084c0a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_5_path_string);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_OpenSSL$_util$$$function_6_byte_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_9902ecf04da9dfe7dfa5ecf3db1a5578;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9902ecf04da9dfe7dfa5ecf3db1a5578 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_9902ecf04da9dfe7dfa5ecf3db1a5578, codeobj_9902ecf04da9dfe7dfa5ecf3db1a5578, module_OpenSSL$_util, sizeof(void *));
    frame_9902ecf04da9dfe7dfa5ecf3db1a5578 = cache_frame_9902ecf04da9dfe7dfa5ecf3db1a5578;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9902ecf04da9dfe7dfa5ecf3db1a5578);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9902ecf04da9dfe7dfa5ecf3db1a5578) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_9902ecf04da9dfe7dfa5ecf3db1a5578->m_frame.f_lineno = 112;
        tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_plain_charmap_tuple, 0));

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9902ecf04da9dfe7dfa5ecf3db1a5578);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9902ecf04da9dfe7dfa5ecf3db1a5578);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9902ecf04da9dfe7dfa5ecf3db1a5578);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9902ecf04da9dfe7dfa5ecf3db1a5578, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9902ecf04da9dfe7dfa5ecf3db1a5578->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9902ecf04da9dfe7dfa5ecf3db1a5578, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9902ecf04da9dfe7dfa5ecf3db1a5578,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if (frame_9902ecf04da9dfe7dfa5ecf3db1a5578 == cache_frame_9902ecf04da9dfe7dfa5ecf3db1a5578) {
        Py_DECREF(frame_9902ecf04da9dfe7dfa5ecf3db1a5578);
    }
    cache_frame_9902ecf04da9dfe7dfa5ecf3db1a5578 = NULL;

    assertFrameObject(frame_9902ecf04da9dfe7dfa5ecf3db1a5578);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_6_byte_string);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_OpenSSL$_util$$$function_7_byte_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_7_byte_string);
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_OpenSSL$_util$$$function_8_text_to_bytes_and_warn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_label = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_b0f4e0f1d3fb493c478fe53f10f90c06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0f4e0f1d3fb493c478fe53f10f90c06 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_b0f4e0f1d3fb493c478fe53f10f90c06, codeobj_b0f4e0f1d3fb493c478fe53f10f90c06, module_OpenSSL$_util, sizeof(void *)+sizeof(void *));
    frame_b0f4e0f1d3fb493c478fe53f10f90c06 = cache_frame_b0f4e0f1d3fb493c478fe53f10f90c06;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b0f4e0f1d3fb493c478fe53f10f90c06);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b0f4e0f1d3fb493c478fe53f10f90c06) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text_type);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2940 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_warnings);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 3042 ], 37, 0);
                exception_tb = NULL;

                exception_lineno = 141;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_warn);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain__TEXT_WARNING);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__TEXT_WARNING);
            }

            if (tmp_mvar_value_3 == NULL) {
                Py_DECREF(tmp_called_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 3079 ], 42, 0);
                exception_tb = NULL;

                exception_lineno = 142;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT(par_label);
            tmp_args_element_name_1 = par_label;
            frame_b0f4e0f1d3fb493c478fe53f10f90c06->m_frame.f_lineno = 142;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_format, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 142;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);
            }

            if (tmp_mvar_value_4 == NULL) {
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 3121 ], 47, 0);
                exception_tb = NULL;

                exception_lineno = 143;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = tmp_mvar_value_4;
            tmp_dict_key_1 = const_str_plain_category;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = const_int_pos_3;
            tmp_dict_key_2 = const_str_plain_stacklevel;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_b0f4e0f1d3fb493c478fe53f10f90c06->m_frame.f_lineno = 141;
            tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(par_obj);
            tmp_called_instance_2 = par_obj;
            frame_b0f4e0f1d3fb493c478fe53f10f90c06->m_frame.f_lineno = 146;
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0f4e0f1d3fb493c478fe53f10f90c06);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0f4e0f1d3fb493c478fe53f10f90c06);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0f4e0f1d3fb493c478fe53f10f90c06);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0f4e0f1d3fb493c478fe53f10f90c06, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b0f4e0f1d3fb493c478fe53f10f90c06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0f4e0f1d3fb493c478fe53f10f90c06, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b0f4e0f1d3fb493c478fe53f10f90c06,
        type_description_1,
        par_label,
        par_obj
    );


    // Release cached frame.
    if (frame_b0f4e0f1d3fb493c478fe53f10f90c06 == cache_frame_b0f4e0f1d3fb493c478fe53f10f90c06) {
        Py_DECREF(frame_b0f4e0f1d3fb493c478fe53f10f90c06);
    }
    cache_frame_b0f4e0f1d3fb493c478fe53f10f90c06 = NULL;

    assertFrameObject(frame_b0f4e0f1d3fb493c478fe53f10f90c06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_obj);
    tmp_return_value = par_obj;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(OpenSSL$_util$$$function_8_text_to_bytes_and_warn);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_1_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_1_text,
        const_str_plain_text,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3dd7804977294142a363ce651b2238b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        const_str_digest_b4cf7dde6b3b7615af9bdc9041f04bce,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_2_exception_from_error_queue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_2_exception_from_error_queue,
        const_str_plain_exception_from_error_queue,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fe77529281c95398cffc332c4542d8e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        const_str_digest_aae5185ceaf38e003b112220ba7c64ca,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_3_make_assert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_3_make_assert,
        const_str_plain_make_assert,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d834ea256e3072b8091ab90769aa9500,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        const_str_digest_f67c4070d6c27388787cc6cde5c90466,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_3_make_assert$$$function_1_openssl_assert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_3_make_assert$$$function_1_openssl_assert,
        const_str_plain_openssl_assert,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c69f81ffeb09449bbd478996e4d18fc2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        const_str_digest_955818c6fb22a80d2149abe0d14fea2a,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_4_native() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_4_native,
        const_str_plain_native,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_79aaef2c58296605f8acad3987cd6bec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        const_str_digest_42aa9c472f077f756fa2449adc7e25b5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_5_path_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_5_path_string,
        const_str_plain_path_string,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ae5dca942863baa24a571057a084c0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        const_str_digest_36f816def2075bed47e2eab5c73607f3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_6_byte_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_6_byte_string,
        const_str_plain_byte_string,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9902ecf04da9dfe7dfa5ecf3db1a5578,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_7_byte_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_7_byte_string,
        const_str_plain_byte_string,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8a8007ef0a5d7b668c5fa9f05cda225b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_OpenSSL$_util$$$function_8_text_to_bytes_and_warn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_OpenSSL$_util$$$function_8_text_to_bytes_and_warn,
        const_str_plain_text_to_bytes_and_warn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b0f4e0f1d3fb493c478fe53f10f90c06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_OpenSSL$_util,
        const_str_digest_74185842ffe7f46a863f0d0210c2907f,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenSSL$_util =
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

function_impl_code functable_OpenSSL$_util[] = {
    impl_OpenSSL$_util$$$function_3_make_assert$$$function_1_openssl_assert,
    impl_OpenSSL$_util$$$function_1_text,
    impl_OpenSSL$_util$$$function_2_exception_from_error_queue,
    impl_OpenSSL$_util$$$function_3_make_assert,
    impl_OpenSSL$_util$$$function_4_native,
    impl_OpenSSL$_util$$$function_5_path_string,
    impl_OpenSSL$_util$$$function_6_byte_string,
    impl_OpenSSL$_util$$$function_7_byte_string,
    impl_OpenSSL$_util$$$function_8_text_to_bytes_and_warn,
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

    function_impl_code *current = functable_OpenSSL$_util;
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

    if (offset > sizeof(functable_OpenSSL$_util) || offset < 0) {
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
        functable_OpenSSL$_util[offset],
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
        module_OpenSSL$_util,
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
PyObject *modulecode_OpenSSL$_util(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_OpenSSL$_util;
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
    PRINT_STRING("OpenSSL._util: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("OpenSSL._util: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("OpenSSL._util: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initOpenSSL$_util\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenSSL$_util = Py_InitModule4(
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
    mdef_OpenSSL$_util.m_name = module_full_name;
    module_OpenSSL$_util = PyModule_Create(&mdef_OpenSSL$_util);
#endif

    moduledict_OpenSSL$_util = MODULE_DICT(module_OpenSSL$_util);

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
        moduledict_OpenSSL$_util,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_OpenSSL$_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_OpenSSL$_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_OpenSSL$_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_OpenSSL$_util);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_OpenSSL$_util);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_08bd999f6c82726f771dd80a1b3f0453;
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
        UPDATE_STRING_DICT0(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_OpenSSL$_util;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        assert(!(tmp_assign_source_3 == NULL));
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_08bd999f6c82726f771dd80a1b3f0453 = MAKE_MODULE_FRAME(codeobj_08bd999f6c82726f771dd80a1b3f0453, module_OpenSSL$_util);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_08bd999f6c82726f771dd80a1b3f0453);
    assert(Py_REFCNT(frame_08bd999f6c82726f771dd80a1b3f0453) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_OpenSSL$_util;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_08bd999f6c82726f771dd80a1b3f0453->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_six;
        tmp_globals_name_3 = (PyObject *)moduledict_OpenSSL$_util;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PY3_str_plain_binary_type_str_plain_text_type_tuple;
        frame_08bd999f6c82726f771dd80a1b3f0453->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_PY3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_binary_type);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binary_type, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_text_type);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_8);
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_digest_b11dfe4b707a71db6685885388346d53;
        tmp_globals_name_4 = (PyObject *)moduledict_OpenSSL$_util;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_Binding_tuple;
        frame_08bd999f6c82726f771dd80a1b3f0453->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE4(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_Binding);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_Binding, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_Binding);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Binding);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_called_name_1 = tmp_mvar_value_1;
        frame_08bd999f6c82726f771dd80a1b3f0453->m_frame.f_lineno = 9;
        tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binding, tmp_assign_source_10);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binding);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_binding);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_08bd999f6c82726f771dd80a1b3f0453->m_frame.f_lineno = 10;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_init_static_locks);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binding);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_binding);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3168 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_ffi);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_ffi, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_binding);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_binding);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3168 ], 29, 0);
            exception_tb = NULL;

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_lib);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_lib, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_ffi);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ffi);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2755 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_new_allocator);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy(const_dict_008c2bca04f924f2dc01d0b6d3532abb);
        frame_08bd999f6c82726f771dd80a1b3f0453->m_frame.f_lineno = 18;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_no_zero_allocator, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_OpenSSL$_util$$$function_1_text();



        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_OpenSSL$_util$$$function_2_exception_from_error_queue();



        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_exception_from_error_queue, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_OpenSSL$_util$$$function_3_make_assert();



        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_make_assert, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_OpenSSL$_util$$$function_4_native();



        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_native, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_OpenSSL$_util$$$function_5_path_string();



        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_path_string, tmp_assign_source_18);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_PY3);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2985 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_6);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_FUNCTION_OpenSSL$_util$$$function_6_byte_string();



            UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_byte_string, tmp_assign_source_19);
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_FUNCTION_OpenSSL$_util$$$function_7_byte_string();



            UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_byte_string, tmp_assign_source_20);
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_3;
        tmp_called_name_3 = (PyObject *)&PyBaseObject_Type;
        frame_08bd999f6c82726f771dd80a1b3f0453->m_frame.f_lineno = 120;
        tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_UNSPECIFIED, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text_type);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2947 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain___name__);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_str_digest_794635e24069d7c30423338a938acb82;
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_STR(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain__TEXT_WARNING, tmp_assign_source_22);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_08bd999f6c82726f771dd80a1b3f0453);
#endif
    popFrameStack();

    assertFrameObject(frame_08bd999f6c82726f771dd80a1b3f0453);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_08bd999f6c82726f771dd80a1b3f0453);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_08bd999f6c82726f771dd80a1b3f0453, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_08bd999f6c82726f771dd80a1b3f0453->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08bd999f6c82726f771dd80a1b3f0453, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_OpenSSL$_util$$$function_8_text_to_bytes_and_warn();



        UPDATE_STRING_DICT1(moduledict_OpenSSL$_util, (Nuitka_StringObject *)const_str_plain_text_to_bytes_and_warn, tmp_assign_source_23);
    }

    return module_OpenSSL$_util;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
