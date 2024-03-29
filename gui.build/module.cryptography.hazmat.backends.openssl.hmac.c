/* Generated code for Python module 'cryptography.hazmat.backends.openssl.hmac'
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

/* The "_module_cryptography$hazmat$backends$openssl$hmac" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$openssl$hmac;
PyDictObject *moduledict_cryptography$hazmat$backends$openssl$hmac;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain_Cryptography_HMAC_CTX_new;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_EVP_MAX_MD_SIZE;
extern PyObject *const_str_plain_UNSUPPORTED_HASH;
extern PyObject *const_str_plain_key_ptr;
static PyObject *const_str_plain_Cryptography_HMAC_CTX_free;
extern PyObject *const_str_plain_constant_time;
static PyObject *const_str_plain_HMAC_Init_ex;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain__evp_md_from_algorithm;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain_from_buffer;
extern PyObject *const_str_plain__ctx;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_HMAC_CTX_copy;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_signature;
static PyObject *const_str_plain_HMAC_Final;
extern PyObject *const_str_plain__backend;
extern PyObject *const_tuple_str_plain_self_str_plain_signature_str_plain_digest_tuple;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_tuple_str_plain__algorithm_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_read_only_property;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_str_plain_evp_md;
extern PyObject *const_str_plain_gc;
extern PyObject *const_tuple_1e3c703f00cf74c8c247f0dd3154c310_tuple;
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
extern PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
extern PyObject *const_str_plain_buf;
extern PyObject *const_str_plain_NULL;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_verify;
extern PyObject *const_tuple_9758f710ce98b1c0cfd42dd10befe3cb_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_plain_self_str_plain_res_str_plain_copied_ctx_tuple;
extern PyObject *const_str_plain_update;
static PyObject *const_str_digest_2688de4f915d7a17ebdc29875bf697ea;
extern PyObject *const_str_plain_InvalidSignature;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__algorithm;
extern PyObject *const_tuple_str_digest_e33a7f733650e687efe98e5491512b82_tuple;
extern PyObject *const_str_digest_0ed479378fbe7eb5a772011447b2048e;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain__Reasons;
extern PyObject *const_str_plain__key;
extern PyObject *const_str_plain_bytes_eq;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_digest_e33a7f733650e687efe98e5491512b82;
static PyObject *const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple;
extern PyObject *const_str_plain_UnsupportedAlgorithm;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_constant_time_str_plain_hashes_str_plain_mac_tuple;
static PyObject *const_str_digest_1b376a9f7b245ab6cc7fc3ae5eebfab5;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_digest_f8aee56da6489eeb63f3275d6164ec88;
extern PyObject *const_str_plain__HMACContext;
extern PyObject *const_str_plain_register_interface;
static PyObject *const_str_plain_HMAC_Update;
extern PyObject *const_tuple_str_plain_self_str_plain_res_str_plain_buf_str_plain_outlen_tuple;
extern PyObject *const_str_plain_finalize;
static PyObject *const_str_digest_42be6b1b913f3de024ae454615b670a5;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_str_plain_digest_size;
extern PyObject *const_str_plain_openssl_assert;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_MACContext;
extern PyObject *const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_outlen;
extern PyObject *const_str_plain_HashContext;
extern PyObject *const_str_plain_hashes;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_mac;
extern PyObject *const_tuple_str_digest_0ed479378fbe7eb5a772011447b2048e_tuple;
extern PyObject *const_str_plain_data_ptr;
extern PyObject *const_str_plain_copied_ctx;
extern PyObject *const_str_plain__ffi;
extern PyObject *const_str_plain__lib;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_Cryptography_HMAC_CTX_new = UNSTREAM_STRING(&constant_bin[ 588448 ], 25, 1);
    const_str_plain_Cryptography_HMAC_CTX_free = UNSTREAM_STRING(&constant_bin[ 588473 ], 26, 1);
    const_str_plain_HMAC_Init_ex = UNSTREAM_STRING(&constant_bin[ 588499 ], 12, 1);
    const_str_plain_HMAC_CTX_copy = UNSTREAM_STRING(&constant_bin[ 588511 ], 13, 1);
    const_str_plain_HMAC_Final = UNSTREAM_STRING(&constant_bin[ 588524 ], 10, 1);
    const_str_digest_2688de4f915d7a17ebdc29875bf697ea = UNSTREAM_STRING(&constant_bin[ 588302 ], 42, 0);
    const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 1, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 2, const_str_plain_key); Py_INCREF(const_str_plain_key);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 3, const_str_plain_algorithm); Py_INCREF(const_str_plain_algorithm);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 4, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 5, const_str_plain_res); Py_INCREF(const_str_plain_res);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 6, const_str_plain_evp_md); Py_INCREF(const_str_plain_evp_md);
    PyTuple_SET_ITEM(const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 7, const_str_plain_key_ptr); Py_INCREF(const_str_plain_key_ptr);
    const_tuple_str_plain_constant_time_str_plain_hashes_str_plain_mac_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_constant_time_str_plain_hashes_str_plain_mac_tuple, 0, const_str_plain_constant_time); Py_INCREF(const_str_plain_constant_time);
    PyTuple_SET_ITEM(const_tuple_str_plain_constant_time_str_plain_hashes_str_plain_mac_tuple, 1, const_str_plain_hashes); Py_INCREF(const_str_plain_hashes);
    PyTuple_SET_ITEM(const_tuple_str_plain_constant_time_str_plain_hashes_str_plain_mac_tuple, 2, const_str_plain_mac); Py_INCREF(const_str_plain_mac);
    const_str_digest_1b376a9f7b245ab6cc7fc3ae5eebfab5 = UNSTREAM_STRING(&constant_bin[ 588534 ], 44, 0);
    const_str_plain_HMAC_Update = UNSTREAM_STRING(&constant_bin[ 588578 ], 11, 1);
    const_str_digest_42be6b1b913f3de024ae454615b670a5 = UNSTREAM_STRING(&constant_bin[ 588589 ], 50, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$openssl$hmac(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_77bfe55c2bfd68565a0a99cb66c5c127;
static PyCodeObject *codeobj_e8ddd5798eb67d96a84b1a779effe886;
static PyCodeObject *codeobj_ef69ac08e989cf921638b7a3f2eceaac;
static PyCodeObject *codeobj_914d4c13ac65edc673d9b662624d9edf;
static PyCodeObject *codeobj_32e6999b0fc6cdf1b7c563c32d8965de;
static PyCodeObject *codeobj_466132f916000ae95231872e61d9ce0d;
static PyCodeObject *codeobj_0b2ba04555c42df68a2c5c45a978d665;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_1b376a9f7b245ab6cc7fc3ae5eebfab5);
    codeobj_77bfe55c2bfd68565a0a99cb66c5c127 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_42be6b1b913f3de024ae454615b670a5, const_tuple_empty, 0, 0, 0);
    codeobj_e8ddd5798eb67d96a84b1a779effe886 = MAKE_CODEOBJECT(module_filename_obj, 17, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__HMACContext, const_tuple_empty, 0, 0, 0);
    codeobj_ef69ac08e989cf921638b7a3f2eceaac = MAKE_CODEOBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___init__, const_tuple_c02880d742d5efb74cd627fc9a30911d_tuple, 5, 0, 0);
    codeobj_914d4c13ac65edc673d9b662624d9edf = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_copy, const_tuple_str_plain_self_str_plain_res_str_plain_copied_ctx_tuple, 1, 0, 0);
    codeobj_32e6999b0fc6cdf1b7c563c32d8965de = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_finalize, const_tuple_str_plain_self_str_plain_res_str_plain_buf_str_plain_outlen_tuple, 1, 0, 0);
    codeobj_466132f916000ae95231872e61d9ce0d = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_update, const_tuple_1e3c703f00cf74c8c247f0dd3154c310_tuple, 2, 0, 0);
    codeobj_0b2ba04555c42df68a2c5c45a978d665 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_verify, const_tuple_str_plain_self_str_plain_signature_str_plain_digest_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_2_copy();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_3_update();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_5_verify();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$openssl$hmac$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_backend = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *par_algorithm = python_pars[3];
    PyObject *par_ctx = python_pars[4];
    PyObject *var_res = NULL;
    PyObject *var_evp_md = NULL;
    PyObject *var_key_ptr = NULL;
    struct Nuitka_FrameObject *frame_ef69ac08e989cf921638b7a3f2eceaac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ef69ac08e989cf921638b7a3f2eceaac = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_ef69ac08e989cf921638b7a3f2eceaac, codeobj_ef69ac08e989cf921638b7a3f2eceaac, module_cryptography$hazmat$backends$openssl$hmac, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ef69ac08e989cf921638b7a3f2eceaac = cache_frame_ef69ac08e989cf921638b7a3f2eceaac;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ef69ac08e989cf921638b7a3f2eceaac);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ef69ac08e989cf921638b7a3f2eceaac) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_algorithm);
        tmp_assattr_name_1 = par_algorithm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__algorithm, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_backend);
        tmp_assattr_name_2 = par_backend;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__backend, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ctx);
        tmp_compexpr_left_1 = par_ctx;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__backend);
            if (tmp_source_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__lib);
            Py_DECREF(tmp_source_name_1);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 23;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_Cryptography_HMAC_CTX_new);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ctx;
                assert(old != NULL);
                par_ctx = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__backend);
            if (tmp_source_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_openssl_assert);
            Py_DECREF(tmp_source_name_3);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_ctx);
            tmp_compexpr_left_2 = par_ctx;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__backend);
            if (tmp_source_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 24;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__ffi);
            Py_DECREF(tmp_source_name_6);
            if (tmp_source_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 24;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_NULL);
            Py_DECREF(tmp_source_name_5);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 24;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 24;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 24;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT(par_self);
            tmp_source_name_10 = par_self;
            tmp_source_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__backend);
            if (tmp_source_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__ffi);
            Py_DECREF(tmp_source_name_9);
            if (tmp_source_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_gc);
            Py_DECREF(tmp_source_name_8);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_ctx);
            tmp_args_element_name_2 = par_ctx;
            CHECK_OBJECT(par_self);
            tmp_source_name_13 = par_self;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__backend);
            if (tmp_source_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 26;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__lib);
            Py_DECREF(tmp_source_name_12);
            if (tmp_source_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 26;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_Cryptography_HMAC_CTX_free);
            Py_DECREF(tmp_source_name_11);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 26;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 25;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ctx;
                assert(old != NULL);
                par_ctx = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_14 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain__backend);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_algorithm);
            tmp_args_element_name_4 = par_algorithm;
            frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = {tmp_args_element_name_4};
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain__evp_md_from_algorithm, call_args);
            }

            Py_DECREF(tmp_called_instance_2);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_evp_md == NULL);
            var_evp_md = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_15;
            PyObject *tmp_source_name_16;
            PyObject *tmp_source_name_17;
            CHECK_OBJECT(var_evp_md);
            tmp_compexpr_left_3 = var_evp_md;
            CHECK_OBJECT(par_self);
            tmp_source_name_17 = par_self;
            tmp_source_name_16 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__backend);
            if (tmp_source_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_15 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__ffi);
            Py_DECREF(tmp_source_name_16);
            if (tmp_source_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_NULL);
            Py_DECREF(tmp_source_name_15);
            if (tmp_compexpr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_18;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_19;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_20;
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);

                if (unlikely(tmp_mvar_value_1 == NULL)) {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);
                }

                if (tmp_mvar_value_1 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 18283 ], 49, 0);
                    exception_tb = NULL;

                    exception_lineno = 30;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_1;
                tmp_source_name_18 = const_str_digest_2688de4f915d7a17ebdc29875bf697ea;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_format);
                assert(!(tmp_called_name_4 == NULL));
                CHECK_OBJECT(par_algorithm);
                tmp_source_name_19 = par_algorithm;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_name);
                if (tmp_args_element_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_4);

                    exception_lineno = 32;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 31;
                tmp_args_element_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
                Py_DECREF(tmp_called_name_4);
                Py_DECREF(tmp_args_element_name_6);
                if (tmp_args_element_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain__Reasons);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons);
                }

                if (tmp_mvar_value_2 == NULL) {
                    Py_DECREF(tmp_args_element_name_5);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 21484 ], 37, 0);
                    exception_tb = NULL;

                    exception_lineno = 33;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_20 = tmp_mvar_value_2;
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_UNSUPPORTED_HASH);
                if (tmp_args_element_name_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_args_element_name_5);

                    exception_lineno = 33;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 30;
                {
                    PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_7};
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
                }

                Py_DECREF(tmp_args_element_name_5);
                Py_DECREF(tmp_args_element_name_7);
                if (tmp_raise_type_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 30;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_21;
            PyObject *tmp_source_name_22;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT(par_self);
            tmp_source_name_22 = par_self;
            tmp_source_name_21 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain__backend);
            if (tmp_source_name_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain__ffi);
            Py_DECREF(tmp_source_name_21);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_key);
            tmp_args_element_name_8 = par_key;
            frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 35;
            {
                PyObject *call_args[] = {tmp_args_element_name_8};
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_from_buffer, call_args);
            }

            Py_DECREF(tmp_called_instance_3);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_key_ptr == NULL);
            var_key_ptr = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_23;
            PyObject *tmp_source_name_24;
            PyObject *tmp_source_name_25;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_source_name_26;
            PyObject *tmp_source_name_27;
            PyObject *tmp_source_name_28;
            CHECK_OBJECT(par_self);
            tmp_source_name_25 = par_self;
            tmp_source_name_24 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain__backend);
            if (tmp_source_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_23 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain__lib);
            Py_DECREF(tmp_source_name_24);
            if (tmp_source_name_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_HMAC_Init_ex);
            Py_DECREF(tmp_source_name_23);
            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_ctx);
            tmp_args_element_name_9 = par_ctx;
            CHECK_OBJECT(var_key_ptr);
            tmp_args_element_name_10 = var_key_ptr;
            CHECK_OBJECT(par_key);
            tmp_len_arg_1 = par_key;
            tmp_args_element_name_11 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_args_element_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);

                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_evp_md);
            tmp_args_element_name_12 = var_evp_md;
            CHECK_OBJECT(par_self);
            tmp_source_name_28 = par_self;
            tmp_source_name_27 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain__backend);
            if (tmp_source_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_11);

                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_26 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain__ffi);
            Py_DECREF(tmp_source_name_27);
            if (tmp_source_name_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_11);

                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_NULL);
            Py_DECREF(tmp_source_name_26);
            if (tmp_args_element_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_11);

                exception_lineno = 37;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 36;
            {
                PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_5, call_args);
            }

            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_11);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_res == NULL);
            var_res = tmp_assign_source_5;
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_29;
            PyObject *tmp_source_name_30;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_30 = par_self;
            tmp_source_name_29 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain__backend);
            if (tmp_source_name_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_openssl_assert);
            Py_DECREF(tmp_source_name_29);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_res);
            tmp_compexpr_left_4 = var_res;
            tmp_compexpr_right_4 = const_int_0;
            tmp_args_element_name_14 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_args_element_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_6);

                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame.f_lineno = 39;
            tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_14);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_ctx);
        tmp_assattr_name_3 = par_ctx;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__ctx, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_key);
        tmp_assattr_name_4 = par_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__key, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef69ac08e989cf921638b7a3f2eceaac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef69ac08e989cf921638b7a3f2eceaac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef69ac08e989cf921638b7a3f2eceaac, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ef69ac08e989cf921638b7a3f2eceaac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef69ac08e989cf921638b7a3f2eceaac, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef69ac08e989cf921638b7a3f2eceaac,
        type_description_1,
        par_self,
        par_backend,
        par_key,
        par_algorithm,
        par_ctx,
        var_res,
        var_evp_md,
        var_key_ptr
    );


    // Release cached frame.
    if (frame_ef69ac08e989cf921638b7a3f2eceaac == cache_frame_ef69ac08e989cf921638b7a3f2eceaac) {
        Py_DECREF(frame_ef69ac08e989cf921638b7a3f2eceaac);
    }
    cache_frame_ef69ac08e989cf921638b7a3f2eceaac = NULL;

    assertFrameObject(frame_ef69ac08e989cf921638b7a3f2eceaac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_1___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)par_ctx);
    Py_DECREF(par_ctx);
    par_ctx = NULL;

    Py_XDECREF(var_evp_md);
    var_evp_md = NULL;

    Py_XDECREF(var_key_ptr);
    var_key_ptr = NULL;

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

    Py_XDECREF(var_res);
    var_res = NULL;

    Py_XDECREF(par_ctx);
    par_ctx = NULL;

    Py_XDECREF(var_evp_md);
    var_evp_md = NULL;

    Py_XDECREF(var_key_ptr);
    var_key_ptr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$hmac$$$function_2_copy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_res = NULL;
    PyObject *var_copied_ctx = NULL;
    struct Nuitka_FrameObject *frame_914d4c13ac65edc673d9b662624d9edf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_914d4c13ac65edc673d9b662624d9edf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_914d4c13ac65edc673d9b662624d9edf, codeobj_914d4c13ac65edc673d9b662624d9edf, module_cryptography$hazmat$backends$openssl$hmac, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_914d4c13ac65edc673d9b662624d9edf = cache_frame_914d4c13ac65edc673d9b662624d9edf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_914d4c13ac65edc673d9b662624d9edf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_914d4c13ac65edc673d9b662624d9edf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__backend);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__lib);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_914d4c13ac65edc673d9b662624d9edf->m_frame.f_lineno = 47;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_Cryptography_HMAC_CTX_new);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_copied_ctx == NULL);
        var_copied_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__backend);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_openssl_assert);
        Py_DECREF(tmp_source_name_3);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_copied_ctx);
        tmp_compexpr_left_1 = var_copied_ctx;
        CHECK_OBJECT(par_self);
        tmp_source_name_7 = par_self;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__backend);
        if (tmp_source_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__ffi);
        Py_DECREF(tmp_source_name_6);
        if (tmp_source_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_5);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_914d4c13ac65edc673d9b662624d9edf->m_frame.f_lineno = 48;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT(par_self);
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__backend);
        if (tmp_source_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__ffi);
        Py_DECREF(tmp_source_name_9);
        if (tmp_source_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_gc);
        Py_DECREF(tmp_source_name_8);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_copied_ctx);
        tmp_args_element_name_2 = var_copied_ctx;
        CHECK_OBJECT(par_self);
        tmp_source_name_13 = par_self;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__backend);
        if (tmp_source_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__lib);
        Py_DECREF(tmp_source_name_12);
        if (tmp_source_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_Cryptography_HMAC_CTX_free);
        Py_DECREF(tmp_source_name_11);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_914d4c13ac65edc673d9b662624d9edf->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_copied_ctx;
            assert(old != NULL);
            var_copied_ctx = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT(par_self);
        tmp_source_name_16 = par_self;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__backend);
        if (tmp_source_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain__lib);
        Py_DECREF(tmp_source_name_15);
        if (tmp_source_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_HMAC_CTX_copy);
        Py_DECREF(tmp_source_name_14);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_copied_ctx);
        tmp_args_element_name_4 = var_copied_ctx;
        CHECK_OBJECT(par_self);
        tmp_source_name_17 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__ctx);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_914d4c13ac65edc673d9b662624d9edf->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_19 = par_self;
        tmp_source_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__backend);
        if (tmp_source_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_openssl_assert);
        Py_DECREF(tmp_source_name_18);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_2 = var_res;
        tmp_compexpr_right_2 = const_int_0;
        tmp_args_element_name_6 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_914d4c13ac65edc673d9b662624d9edf->m_frame.f_lineno = 53;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        PyObject *tmp_source_name_22;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain__HMACContext);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__HMACContext);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18872 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_20 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain__backend);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_21 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain__key);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_22 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_algorithm);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(var_copied_ctx);
        tmp_dict_value_1 = var_copied_ctx;
        tmp_dict_key_1 = const_str_plain_ctx;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_914d4c13ac65edc673d9b662624d9edf->m_frame.f_lineno = 54;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_914d4c13ac65edc673d9b662624d9edf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_914d4c13ac65edc673d9b662624d9edf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_914d4c13ac65edc673d9b662624d9edf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_914d4c13ac65edc673d9b662624d9edf, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_914d4c13ac65edc673d9b662624d9edf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_914d4c13ac65edc673d9b662624d9edf, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_914d4c13ac65edc673d9b662624d9edf,
        type_description_1,
        par_self,
        var_res,
        var_copied_ctx
    );


    // Release cached frame.
    if (frame_914d4c13ac65edc673d9b662624d9edf == cache_frame_914d4c13ac65edc673d9b662624d9edf) {
        Py_DECREF(frame_914d4c13ac65edc673d9b662624d9edf);
    }
    cache_frame_914d4c13ac65edc673d9b662624d9edf = NULL;

    assertFrameObject(frame_914d4c13ac65edc673d9b662624d9edf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_2_copy);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)var_copied_ctx);
    Py_DECREF(var_copied_ctx);
    var_copied_ctx = NULL;

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

    Py_XDECREF(var_res);
    var_res = NULL;

    Py_XDECREF(var_copied_ctx);
    var_copied_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_2_copy);
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


static PyObject *impl_cryptography$hazmat$backends$openssl$hmac$$$function_3_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_res = NULL;
    PyObject *var_data_ptr = NULL;
    struct Nuitka_FrameObject *frame_466132f916000ae95231872e61d9ce0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_466132f916000ae95231872e61d9ce0d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_466132f916000ae95231872e61d9ce0d, codeobj_466132f916000ae95231872e61d9ce0d, module_cryptography$hazmat$backends$openssl$hmac, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_466132f916000ae95231872e61d9ce0d = cache_frame_466132f916000ae95231872e61d9ce0d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_466132f916000ae95231872e61d9ce0d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_466132f916000ae95231872e61d9ce0d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__backend);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__ffi);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_466132f916000ae95231872e61d9ce0d->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_from_buffer, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_ptr == NULL);
        var_data_ptr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__backend);
        if (tmp_source_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__lib);
        Py_DECREF(tmp_source_name_4);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_HMAC_Update);
        Py_DECREF(tmp_source_name_3);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__ctx);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data_ptr);
        tmp_args_element_name_3 = var_data_ptr;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_args_element_name_4 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_466132f916000ae95231872e61d9ce0d->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__backend);
        if (tmp_source_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_openssl_assert);
        Py_DECREF(tmp_source_name_7);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_5 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_466132f916000ae95231872e61d9ce0d->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_466132f916000ae95231872e61d9ce0d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_466132f916000ae95231872e61d9ce0d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_466132f916000ae95231872e61d9ce0d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_466132f916000ae95231872e61d9ce0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_466132f916000ae95231872e61d9ce0d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_466132f916000ae95231872e61d9ce0d,
        type_description_1,
        par_self,
        par_data,
        var_res,
        var_data_ptr
    );


    // Release cached frame.
    if (frame_466132f916000ae95231872e61d9ce0d == cache_frame_466132f916000ae95231872e61d9ce0d) {
        Py_DECREF(frame_466132f916000ae95231872e61d9ce0d);
    }
    cache_frame_466132f916000ae95231872e61d9ce0d = NULL;

    assertFrameObject(frame_466132f916000ae95231872e61d9ce0d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_3_update);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)var_data_ptr);
    Py_DECREF(var_data_ptr);
    var_data_ptr = NULL;

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

    Py_XDECREF(var_res);
    var_res = NULL;

    Py_XDECREF(var_data_ptr);
    var_data_ptr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_3_update);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_res = NULL;
    PyObject *var_buf = NULL;
    PyObject *var_outlen = NULL;
    struct Nuitka_FrameObject *frame_32e6999b0fc6cdf1b7c563c32d8965de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_32e6999b0fc6cdf1b7c563c32d8965de = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_32e6999b0fc6cdf1b7c563c32d8965de, codeobj_32e6999b0fc6cdf1b7c563c32d8965de, module_cryptography$hazmat$backends$openssl$hmac, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_32e6999b0fc6cdf1b7c563c32d8965de = cache_frame_32e6999b0fc6cdf1b7c563c32d8965de;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_32e6999b0fc6cdf1b7c563c32d8965de);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_32e6999b0fc6cdf1b7c563c32d8965de) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__backend);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__ffi);
        Py_DECREF(tmp_source_name_2);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_new);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__backend);
        if (tmp_source_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__lib);
        Py_DECREF(tmp_source_name_5);
        if (tmp_source_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_EVP_MAX_MD_SIZE);
        Py_DECREF(tmp_source_name_4);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_32e6999b0fc6cdf1b7c563c32d8965de->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_buf == NULL);
        var_buf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__backend);
        if (tmp_source_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__ffi);
        Py_DECREF(tmp_source_name_7);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_32e6999b0fc6cdf1b7c563c32d8965de->m_frame.f_lineno = 66;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM(const_tuple_str_digest_e33a7f733650e687efe98e5491512b82_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_outlen == NULL);
        var_outlen = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_11 = par_self;
        tmp_source_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain__backend);
        if (tmp_source_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__lib);
        Py_DECREF(tmp_source_name_10);
        if (tmp_source_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_HMAC_Final);
        Py_DECREF(tmp_source_name_9);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__ctx);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buf);
        tmp_args_element_name_4 = var_buf;
        CHECK_OBJECT(var_outlen);
        tmp_args_element_name_5 = var_outlen;
        frame_32e6999b0fc6cdf1b7c563c32d8965de->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_14 = par_self;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain__backend);
        if (tmp_source_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_openssl_assert);
        Py_DECREF(tmp_source_name_13);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_6 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_32e6999b0fc6cdf1b7c563c32d8965de->m_frame.f_lineno = 68;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        CHECK_OBJECT(par_self);
        tmp_source_name_16 = par_self;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__backend);
        if (tmp_source_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_openssl_assert);
        Py_DECREF(tmp_source_name_15);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outlen);
        tmp_subscribed_name_1 = var_outlen;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_18 = par_self;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_algorithm);
        if (tmp_source_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_digest_size);
        Py_DECREF(tmp_source_name_17);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_32e6999b0fc6cdf1b7c563c32d8965de->m_frame.f_lineno = 69;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_slice_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_20 = par_self;
        tmp_source_name_19 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain__backend);
        if (tmp_source_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__ffi);
        Py_DECREF(tmp_source_name_19);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buf);
        tmp_args_element_name_8 = var_buf;
        frame_32e6999b0fc6cdf1b7c563c32d8965de->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_name_8};
            tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_buffer, call_args);
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_slice_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outlen);
        tmp_subscribed_name_2 = var_outlen;
        tmp_subscript_name_2 = const_int_0;
        tmp_slice_upper_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_slice_source_1);

            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SLICE(tmp_slice_source_1, Py_None, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_source_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32e6999b0fc6cdf1b7c563c32d8965de);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_32e6999b0fc6cdf1b7c563c32d8965de);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_32e6999b0fc6cdf1b7c563c32d8965de);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32e6999b0fc6cdf1b7c563c32d8965de, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_32e6999b0fc6cdf1b7c563c32d8965de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32e6999b0fc6cdf1b7c563c32d8965de, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_32e6999b0fc6cdf1b7c563c32d8965de,
        type_description_1,
        par_self,
        var_res,
        var_buf,
        var_outlen
    );


    // Release cached frame.
    if (frame_32e6999b0fc6cdf1b7c563c32d8965de == cache_frame_32e6999b0fc6cdf1b7c563c32d8965de) {
        Py_DECREF(frame_32e6999b0fc6cdf1b7c563c32d8965de);
    }
    cache_frame_32e6999b0fc6cdf1b7c563c32d8965de = NULL;

    assertFrameObject(frame_32e6999b0fc6cdf1b7c563c32d8965de);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)var_buf);
    Py_DECREF(var_buf);
    var_buf = NULL;

    CHECK_OBJECT((PyObject *)var_outlen);
    Py_DECREF(var_outlen);
    var_outlen = NULL;

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

    Py_XDECREF(var_res);
    var_res = NULL;

    Py_XDECREF(var_buf);
    var_buf = NULL;

    Py_XDECREF(var_outlen);
    var_outlen = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize);
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


static PyObject *impl_cryptography$hazmat$backends$openssl$hmac$$$function_5_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_signature = python_pars[1];
    PyObject *var_digest = NULL;
    struct Nuitka_FrameObject *frame_0b2ba04555c42df68a2c5c45a978d665;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0b2ba04555c42df68a2c5c45a978d665 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0b2ba04555c42df68a2c5c45a978d665, codeobj_0b2ba04555c42df68a2c5c45a978d665, module_cryptography$hazmat$backends$openssl$hmac, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0b2ba04555c42df68a2c5c45a978d665 = cache_frame_0b2ba04555c42df68a2c5c45a978d665;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0b2ba04555c42df68a2c5c45a978d665);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0b2ba04555c42df68a2c5c45a978d665) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0b2ba04555c42df68a2c5c45a978d665->m_frame.f_lineno = 73;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_finalize);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_digest == NULL);
        var_digest = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_constant_time);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_constant_time);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 22833 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT(var_digest);
        tmp_args_element_name_1 = var_digest;
        CHECK_OBJECT(par_signature);
        tmp_args_element_name_2 = par_signature;
        frame_0b2ba04555c42df68a2c5c45a978d665->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_bytes_eq, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_InvalidSignature);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSignature);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 22875 ], 45, 0);
                exception_tb = NULL;

                exception_lineno = 75;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            frame_0b2ba04555c42df68a2c5c45a978d665->m_frame.f_lineno = 75;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_str_digest_0ed479378fbe7eb5a772011447b2048e_tuple, 0));

            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 75;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b2ba04555c42df68a2c5c45a978d665);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b2ba04555c42df68a2c5c45a978d665);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b2ba04555c42df68a2c5c45a978d665, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0b2ba04555c42df68a2c5c45a978d665->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b2ba04555c42df68a2c5c45a978d665, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b2ba04555c42df68a2c5c45a978d665,
        type_description_1,
        par_self,
        par_signature,
        var_digest
    );


    // Release cached frame.
    if (frame_0b2ba04555c42df68a2c5c45a978d665 == cache_frame_0b2ba04555c42df68a2c5c45a978d665) {
        Py_DECREF(frame_0b2ba04555c42df68a2c5c45a978d665);
    }
    cache_frame_0b2ba04555c42df68a2c5c45a978d665 = NULL;

    assertFrameObject(frame_0b2ba04555c42df68a2c5c45a978d665);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_5_verify);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_digest);
    Py_DECREF(var_digest);
    var_digest = NULL;

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

    Py_XDECREF(var_digest);
    var_digest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac$$$function_5_verify);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_signature);
    Py_DECREF(par_signature);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_signature);
    Py_DECREF(par_signature);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$hmac$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ef69ac08e989cf921638b7a3f2eceaac,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$hmac,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_2_copy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$hmac$$$function_2_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_914d4c13ac65edc673d9b662624d9edf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$hmac,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_3_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$hmac$$$function_3_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_466132f916000ae95231872e61d9ce0d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$hmac,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize,
        const_str_plain_finalize,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_32e6999b0fc6cdf1b7c563c32d8965de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$hmac,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_5_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$hmac$$$function_5_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0b2ba04555c42df68a2c5c45a978d665,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$hmac,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$backends$openssl$hmac =
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

function_impl_code functable_cryptography$hazmat$backends$openssl$hmac[] = {
    impl_cryptography$hazmat$backends$openssl$hmac$$$function_1___init__,
    impl_cryptography$hazmat$backends$openssl$hmac$$$function_2_copy,
    impl_cryptography$hazmat$backends$openssl$hmac$$$function_3_update,
    impl_cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize,
    impl_cryptography$hazmat$backends$openssl$hmac$$$function_5_verify,
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

    function_impl_code *current = functable_cryptography$hazmat$backends$openssl$hmac;
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

    if (offset > sizeof(functable_cryptography$hazmat$backends$openssl$hmac) || offset < 0) {
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
        functable_cryptography$hazmat$backends$openssl$hmac[offset],
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
        module_cryptography$hazmat$backends$openssl$hmac,
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
PyObject *modulecode_cryptography$hazmat$backends$openssl$hmac(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_cryptography$hazmat$backends$openssl$hmac;
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
    PRINT_STRING("cryptography.hazmat.backends.openssl.hmac: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.openssl.hmac: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.openssl.hmac: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$backends$openssl$hmac\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$backends$openssl$hmac = Py_InitModule4(
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
    mdef_cryptography$hazmat$backends$openssl$hmac.m_name = module_full_name;
    module_cryptography$hazmat$backends$openssl$hmac = PyModule_Create(&mdef_cryptography$hazmat$backends$openssl$hmac);
#endif

    moduledict_cryptography$hazmat$backends$openssl$hmac = MODULE_DICT(module_cryptography$hazmat$backends$openssl$hmac);

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
        moduledict_cryptography$hazmat$backends$openssl$hmac,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$openssl$hmac,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$openssl$hmac,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$hmac,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$hmac,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$backends$openssl$hmac);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_cryptography$hazmat$backends$openssl$hmac);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_77bfe55c2bfd68565a0a99cb66c5c127;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_cryptography$hazmat$backends$openssl$hmac_17 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_e8ddd5798eb67d96a84b1a779effe886_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e8ddd5798eb67d96a84b1a779effe886_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_77bfe55c2bfd68565a0a99cb66c5c127 = MAKE_MODULE_FRAME(codeobj_77bfe55c2bfd68565a0a99cb66c5c127, module_cryptography$hazmat$backends$openssl$hmac);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_77bfe55c2bfd68565a0a99cb66c5c127);
    assert(Py_REFCNT(frame_77bfe55c2bfd68565a0a99cb66c5c127) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
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


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_print_function);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6);
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_cryptography;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$hmac;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_utils_tuple;
        tmp_level_name_1 = const_int_0;
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_utils);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_82e5b7f1075745a8638e06059354d03c;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$hmac;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_9758f710ce98b1c0cfd42dd10befe3cb_tuple;
        tmp_level_name_2 = const_int_0;
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_InvalidSignature);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_InvalidSignature, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_UnsupportedAlgorithm);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain__Reasons);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain__Reasons, tmp_assign_source_11);
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

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$hmac;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_constant_time_str_plain_hashes_str_plain_mac_tuple;
        tmp_level_name_3 = const_int_0;
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 12;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_constant_time);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_constant_time, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_hashes);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_hashes, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_mac);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_mac, tmp_assign_source_15);
    }
    goto try_end_3;
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

    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$backends$openssl$hmac_17 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_f8aee56da6489eeb63f3275d6164ec88;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$openssl$hmac_17, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$openssl$hmac_17, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_e8ddd5798eb67d96a84b1a779effe886_2, codeobj_e8ddd5798eb67d96a84b1a779effe886, module_cryptography$hazmat$backends$openssl$hmac, 0);
        frame_e8ddd5798eb67d96a84b1a779effe886_2 = cache_frame_e8ddd5798eb67d96a84b1a779effe886_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e8ddd5798eb67d96a84b1a779effe886_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e8ddd5798eb67d96a84b1a779effe886_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_utils);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_utils);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21457 ], 27, 0);
                exception_tb = NULL;

                exception_lineno = 44;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_e8ddd5798eb67d96a84b1a779effe886_2->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_read_only_property, &PyTuple_GET_ITEM(const_tuple_str_plain__algorithm_tuple, 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$openssl$hmac_17, const_str_plain_algorithm, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e8ddd5798eb67d96a84b1a779effe886_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e8ddd5798eb67d96a84b1a779effe886_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e8ddd5798eb67d96a84b1a779effe886_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_e8ddd5798eb67d96a84b1a779effe886_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e8ddd5798eb67d96a84b1a779effe886_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e8ddd5798eb67d96a84b1a779effe886_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_e8ddd5798eb67d96a84b1a779effe886_2 == cache_frame_e8ddd5798eb67d96a84b1a779effe886_2) {
            Py_DECREF(frame_e8ddd5798eb67d96a84b1a779effe886_2);
        }
        cache_frame_e8ddd5798eb67d96a84b1a779effe886_2 = NULL;

        assertFrameObject(frame_e8ddd5798eb67d96a84b1a779effe886_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_2_copy();



        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$openssl$hmac_17, const_str_plain_copy, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_3_update();



        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$openssl$hmac_17, const_str_plain_update, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_4_finalize();



        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$openssl$hmac_17, const_str_plain_finalize, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$hmac$$$function_5_verify();



        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$backends$openssl$hmac_17, const_str_plain_verify, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_16 = locals_cryptography$hazmat$backends$openssl$hmac_17;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_cryptography$hazmat$backends$openssl$hmac_17);
        locals_cryptography$hazmat$backends$openssl$hmac_17 = NULL;
        goto outline_result_1;
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

        Py_DECREF(locals_cryptography$hazmat$backends$openssl$hmac_17);
        locals_cryptography$hazmat$backends$openssl$hmac_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$hmac);
        return NULL;
        outline_exception_1:;
        exception_lineno = 17;
        goto try_except_handler_4;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 17;

            goto try_except_handler_4;
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
        tmp_assign_source_17 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_17);
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain__HMACContext;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_utils);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_utils);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21457 ], 27, 0);
            exception_tb = NULL;

            exception_lineno = 16;

            goto try_except_handler_4;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_register_interface);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_hashes);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20490 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 16;

            goto try_except_handler_4;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_HashContext);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 16;

            goto try_except_handler_4;
        }
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 16;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_args_element_name_5 = tmp_class_creation_1__class;
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 16;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert(old != NULL);
            tmp_class_creation_1__class = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_utils);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_utils);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21457 ], 27, 0);
            exception_tb = NULL;

            exception_lineno = 15;

            goto try_except_handler_4;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_register_interface);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain_mac);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_mac);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_called_name_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 22920 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 15;

            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_MACContext);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 15;

            goto try_except_handler_4;
        }
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 15;
        tmp_called_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_args_element_name_7 = tmp_class_creation_1__class;
        frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame.f_lineno = 15;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert(old != NULL);
            tmp_class_creation_1__class = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;

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
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77bfe55c2bfd68565a0a99cb66c5c127);
#endif
    popFrameStack();

    assertFrameObject(frame_77bfe55c2bfd68565a0a99cb66c5c127);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77bfe55c2bfd68565a0a99cb66c5c127);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_77bfe55c2bfd68565a0a99cb66c5c127, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_77bfe55c2bfd68565a0a99cb66c5c127->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77bfe55c2bfd68565a0a99cb66c5c127, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_21 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$hmac, (Nuitka_StringObject *)const_str_plain__HMACContext, tmp_assign_source_21);
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


    return module_cryptography$hazmat$backends$openssl$hmac;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
