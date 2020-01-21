/* Generated code for Python module 'cryptography.hazmat.backends.openssl.aead'
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

/* The "_module_cryptography$hazmat$backends$openssl$aead" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$openssl$aead;
PyDictObject *moduledict_cryptography$hazmat$backends$openssl$aead;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_8f6206d93f29c1a41fb463cbda41f3c0;
extern PyObject *const_str_plain_data;
static PyObject *const_tuple_str_plain_AESCCM_tuple;
extern PyObject *const_str_plain_EVP_CTRL_AEAD_GET_TAG;
extern PyObject *const_str_plain_key_ptr;
extern PyObject *const_str_plain_AESCCM;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_operation;
extern PyObject *const_str_plain_EVP_CipherInit_ex;
static PyObject *const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain_from_buffer;
extern PyObject *const_str_plain_key;
static PyObject *const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple;
extern PyObject *const_str_plain_EVP_CTRL_AEAD_SET_IVLEN;
extern PyObject *const_str_plain_encode;
static PyObject *const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple;
extern PyObject *const_str_plain_EVP_CipherFinal_ex;
static PyObject *const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple;
extern PyObject *const_str_digest_336255be11d158429da8946aefa0f283;
static PyObject *const_str_plain_processed_data;
extern PyObject *const_str_plain_tag_buf;
extern PyObject *const_str_plain__encrypt;
extern PyObject *const_str_plain_cipher_name;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a;
extern PyObject *const_str_plain_EVP_CipherUpdate;
static PyObject *const_str_digest_013b0351da76eb3c78ef643ab8fcf5b0;
extern PyObject *const_str_plain_gc;
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
static PyObject *const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple;
extern PyObject *const_str_plain_buf;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_plain__process_data;
static PyObject *const_str_plain__set_length;
static PyObject *const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain_NULL;
static PyObject *const_str_digest_0200c5f381fa9051b8fa2aec882acd07;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_7f1f5e3a0003d7597f6f62fb992555f5;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain__decrypt;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_AESGCM;
static PyObject *const_str_plain__process_aad;
extern PyObject *const_str_plain__key;
extern PyObject *const_str_plain__aead_cipher_name;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_ctrl;
extern PyObject *const_str_plain_EVP_get_cipherbyname;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_new;
extern PyObject *const_str_plain__DECRYPT;
extern PyObject *const_str_plain_ChaCha20Poly1305;
extern PyObject *const_str_plain__consume_errors;
static PyObject *const_str_plain_tag_len;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_free;
extern PyObject *const_str_plain_nonce;
extern PyObject *const_str_plain_evp_cipher;
static PyObject *const_str_plain__aead_setup;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_tag_length;
extern PyObject *const_tuple_str_plain_ascii_tuple;
static PyObject *const_str_plain_nonce_ptr;
extern PyObject *const_str_plain_associated_data;
static PyObject *const_str_plain_intptr;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain__ENCRYPT;
extern PyObject *const_str_plain_InvalidTag;
static PyObject *const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple;
extern PyObject *const_str_plain_openssl_assert;
extern PyObject *const_str_plain_EVP_CIPHER_CTX_set_key_length;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple;
extern PyObject *const_str_plain_outlen;
extern PyObject *const_str_plain_cipher;
extern PyObject *const_str_plain_EVP_CTRL_AEAD_SET_TAG;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_plain_InvalidTag_tuple;
extern PyObject *const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple;
static PyObject *const_str_digest_f013577484eb102b5e57aa69da980e93;
extern PyObject *const_str_plain_data_len;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain__ffi;
extern PyObject *const_str_plain__lib;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_8f6206d93f29c1a41fb463cbda41f3c0 = UNSTREAM_STRING(&constant_bin[ 573847 ], 10, 0);
    const_tuple_str_plain_AESCCM_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_AESCCM_tuple, 0, const_str_plain_AESCCM); Py_INCREF(const_str_plain_AESCCM);
    const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple = PyTuple_New(12);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 0, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 1, const_str_plain_cipher_name); Py_INCREF(const_str_plain_cipher_name);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 2, const_str_plain_key); Py_INCREF(const_str_plain_key);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 3, const_str_plain_nonce); Py_INCREF(const_str_plain_nonce);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 4, const_str_plain_tag); Py_INCREF(const_str_plain_tag);
    const_str_plain_tag_len = UNSTREAM_STRING(&constant_bin[ 573857 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 5, const_str_plain_tag_len); Py_INCREF(const_str_plain_tag_len);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 6, const_str_plain_operation); Py_INCREF(const_str_plain_operation);
    const_str_plain_nonce_ptr = UNSTREAM_STRING(&constant_bin[ 573864 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 7, const_str_plain_nonce_ptr); Py_INCREF(const_str_plain_nonce_ptr);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 8, const_str_plain_res); Py_INCREF(const_str_plain_res);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 9, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 10, const_str_plain_key_ptr); Py_INCREF(const_str_plain_key_ptr);
    PyTuple_SET_ITEM(const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 11, const_str_plain_evp_cipher); Py_INCREF(const_str_plain_evp_cipher);
    const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 0, const_str_plain_cipher); Py_INCREF(const_str_plain_cipher);
    PyTuple_SET_ITEM(const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 1, const_str_plain_AESCCM); Py_INCREF(const_str_plain_AESCCM);
    PyTuple_SET_ITEM(const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 2, const_str_plain_ChaCha20Poly1305); Py_INCREF(const_str_plain_ChaCha20Poly1305);
    PyTuple_SET_ITEM(const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 3, const_str_plain_AESGCM); Py_INCREF(const_str_plain_AESGCM);
    const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 0, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    PyTuple_SET_ITEM(const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 1, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    PyTuple_SET_ITEM(const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 2, const_str_plain_data_len); Py_INCREF(const_str_plain_data_len);
    const_str_plain_intptr = UNSTREAM_STRING(&constant_bin[ 573873 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 3, const_str_plain_intptr); Py_INCREF(const_str_plain_intptr);
    PyTuple_SET_ITEM(const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 4, const_str_plain_res); Py_INCREF(const_str_plain_res);
    const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple = PyTuple_New(14);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 0, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 1, const_str_plain_cipher); Py_INCREF(const_str_plain_cipher);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 2, const_str_plain_nonce); Py_INCREF(const_str_plain_nonce);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 3, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 4, const_str_plain_associated_data); Py_INCREF(const_str_plain_associated_data);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 5, const_str_plain_tag_length); Py_INCREF(const_str_plain_tag_length);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 6, const_str_plain_buf); Py_INCREF(const_str_plain_buf);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 7, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 8, const_str_plain_cipher_name); Py_INCREF(const_str_plain_cipher_name);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 9, const_str_plain_tag); Py_INCREF(const_str_plain_tag);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 10, const_str_plain_AESCCM); Py_INCREF(const_str_plain_AESCCM);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 11, const_str_plain_outlen); Py_INCREF(const_str_plain_outlen);
    const_str_plain_processed_data = UNSTREAM_STRING(&constant_bin[ 573879 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 12, const_str_plain_processed_data); Py_INCREF(const_str_plain_processed_data);
    PyTuple_SET_ITEM(const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 13, const_str_plain_res); Py_INCREF(const_str_plain_res);
    const_str_digest_013b0351da76eb3c78ef643ab8fcf5b0 = UNSTREAM_STRING(&constant_bin[ 573893 ], 17, 0);
    const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 0, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    PyTuple_SET_ITEM(const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 1, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    PyTuple_SET_ITEM(const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 2, const_str_plain_associated_data); Py_INCREF(const_str_plain_associated_data);
    PyTuple_SET_ITEM(const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 3, const_str_plain_res); Py_INCREF(const_str_plain_res);
    PyTuple_SET_ITEM(const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 4, const_str_plain_outlen); Py_INCREF(const_str_plain_outlen);
    const_str_plain__process_data = UNSTREAM_STRING(&constant_bin[ 18768 ], 13, 1);
    const_str_plain__set_length = UNSTREAM_STRING(&constant_bin[ 18687 ], 11, 1);
    const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 0, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    PyTuple_SET_ITEM(const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 1, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    PyTuple_SET_ITEM(const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 2, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 3, const_str_plain_outlen); Py_INCREF(const_str_plain_outlen);
    PyTuple_SET_ITEM(const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 4, const_str_plain_res); Py_INCREF(const_str_plain_res);
    PyTuple_SET_ITEM(const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 5, const_str_plain_buf); Py_INCREF(const_str_plain_buf);
    const_str_digest_0200c5f381fa9051b8fa2aec882acd07 = UNSTREAM_STRING(&constant_bin[ 573910 ], 50, 0);
    const_str_digest_7f1f5e3a0003d7597f6f62fb992555f5 = UNSTREAM_STRING(&constant_bin[ 573960 ], 10, 0);
    const_str_plain__process_aad = UNSTREAM_STRING(&constant_bin[ 18727 ], 12, 1);
    const_str_plain__aead_setup = UNSTREAM_STRING(&constant_bin[ 18647 ], 11, 1);
    const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple = PyTuple_New(14);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 0, const_str_plain_backend); Py_INCREF(const_str_plain_backend);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 1, const_str_plain_cipher); Py_INCREF(const_str_plain_cipher);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 2, const_str_plain_nonce); Py_INCREF(const_str_plain_nonce);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 3, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 4, const_str_plain_associated_data); Py_INCREF(const_str_plain_associated_data);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 5, const_str_plain_tag_length); Py_INCREF(const_str_plain_tag_length);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 6, const_str_plain_res); Py_INCREF(const_str_plain_res);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 7, const_str_plain_cipher_name); Py_INCREF(const_str_plain_cipher_name);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 8, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 9, const_str_plain_AESCCM); Py_INCREF(const_str_plain_AESCCM);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 10, const_str_plain_outlen); Py_INCREF(const_str_plain_outlen);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 11, const_str_plain_processed_data); Py_INCREF(const_str_plain_processed_data);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 12, const_str_plain_tag_buf); Py_INCREF(const_str_plain_tag_buf);
    PyTuple_SET_ITEM(const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 13, const_str_plain_tag); Py_INCREF(const_str_plain_tag);
    const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple, 0, const_str_plain_AESCCM); Py_INCREF(const_str_plain_AESCCM);
    PyTuple_SET_ITEM(const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple, 1, const_str_plain_AESGCM); Py_INCREF(const_str_plain_AESGCM);
    PyTuple_SET_ITEM(const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple, 2, const_str_plain_ChaCha20Poly1305); Py_INCREF(const_str_plain_ChaCha20Poly1305);
    const_tuple_str_plain_InvalidTag_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_InvalidTag_tuple, 0, const_str_plain_InvalidTag); Py_INCREF(const_str_plain_InvalidTag);
    const_str_digest_f013577484eb102b5e57aa69da980e93 = UNSTREAM_STRING(&constant_bin[ 573970 ], 44, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$openssl$aead(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6caa69772547f2f368b0d43313571162;
static PyCodeObject *codeobj_08c966a08505062b76a8448ae5633861;
static PyCodeObject *codeobj_c7df55639bd3a732209020894a8b244d;
static PyCodeObject *codeobj_f82af7874c1defa2905946686d041d48;
static PyCodeObject *codeobj_bb9e465c6f90f23b2187d40605267a27;
static PyCodeObject *codeobj_a046ab226f23da164267eab55cb45945;
static PyCodeObject *codeobj_230175f9317c009e2c41dea38ce96329;
static PyCodeObject *codeobj_a7fca93f1979d3e1fbded2ecfad162ef;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_f013577484eb102b5e57aa69da980e93);
    codeobj_6caa69772547f2f368b0d43313571162 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_0200c5f381fa9051b8fa2aec882acd07, const_tuple_empty, 0, 0, 0);
    codeobj_08c966a08505062b76a8448ae5633861 = MAKE_CODEOBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__aead_cipher_name, const_tuple_d2dbf38e48ec663ba80da175fce07805_tuple, 1, 0, 0);
    codeobj_c7df55639bd3a732209020894a8b244d = MAKE_CODEOBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__aead_setup, const_tuple_e17aa2e96797d8b56233a9320929bf1e_tuple, 7, 0, 0);
    codeobj_f82af7874c1defa2905946686d041d48 = MAKE_CODEOBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__decrypt, const_tuple_a6eb21563fd3229bd446f8bb1d1a4201_tuple, 6, 0, 0);
    codeobj_bb9e465c6f90f23b2187d40605267a27 = MAKE_CODEOBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__encrypt, const_tuple_e0bdea77666810b87c7e46dd070c139b_tuple, 6, 0, 0);
    codeobj_a046ab226f23da164267eab55cb45945 = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__process_aad, const_tuple_55c0c2b9ad7075dc8f14a1e062442fd4_tuple, 3, 0, 0);
    codeobj_230175f9317c009e2c41dea38ce96329 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__process_data, const_tuple_3464ba7cd4c62c6c5465c486aad9aa6e_tuple, 3, 0, 0);
    codeobj_a7fca93f1979d3e1fbded2ecfad162ef = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__set_length, const_tuple_cec3d8065d06745b9083a0228d7945a0_tuple, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cipher = python_pars[0];
    PyObject *var_AESCCM = NULL;
    PyObject *var_ChaCha20Poly1305 = NULL;
    PyObject *var_AESGCM = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_08c966a08505062b76a8448ae5633861;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_08c966a08505062b76a8448ae5633861 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_08c966a08505062b76a8448ae5633861, codeobj_08c966a08505062b76a8448ae5633861, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_08c966a08505062b76a8448ae5633861 = cache_frame_08c966a08505062b76a8448ae5633861;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_08c966a08505062b76a8448ae5633861);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_08c966a08505062b76a8448ae5633861) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_336255be11d158429da8946aefa0f283;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_AESCCM_str_plain_AESGCM_str_plain_ChaCha20Poly1305_tuple;
        tmp_level_name_1 = const_int_0;
        frame_08c966a08505062b76a8448ae5633861->m_frame.f_lineno = 15;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_AESCCM);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_AESCCM == NULL);
        var_AESCCM = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_AESGCM);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_AESGCM == NULL);
        var_AESGCM = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_ChaCha20Poly1305);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_ChaCha20Poly1305 == NULL);
        var_ChaCha20Poly1305 = tmp_assign_source_4;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_cipher);
        tmp_isinstance_inst_1 = par_cipher;
        CHECK_OBJECT(var_ChaCha20Poly1305);
        tmp_isinstance_cls_1 = var_ChaCha20Poly1305;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
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
        tmp_return_value = const_str_digest_013b0351da76eb3c78ef643ab8fcf5b0;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT(par_cipher);
            tmp_isinstance_inst_2 = par_cipher;
            CHECK_OBJECT(var_AESCCM);
            tmp_isinstance_cls_2 = var_AESCCM;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_instance_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_len_arg_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_right_name_1;
                tmp_source_name_1 = const_str_digest_7f1f5e3a0003d7597f6f62fb992555f5;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_format);
                assert(!(tmp_called_name_1 == NULL));
                CHECK_OBJECT(par_cipher);
                tmp_source_name_2 = par_cipher;
                tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__key);
                if (tmp_len_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 21;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
                Py_DECREF(tmp_len_arg_1);
                if (tmp_left_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 21;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = const_int_pos_8;
                tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_left_name_1);
                assert(!(tmp_args_element_name_1 == NULL));
                frame_08c966a08505062b76a8448ae5633861->m_frame.f_lineno = 21;
                tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_called_instance_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_08c966a08505062b76a8448ae5633861->m_frame.f_lineno = 21;
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_plain_ascii_tuple, 0));

                Py_DECREF(tmp_called_instance_1);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_isinstance_inst_3;
                PyObject *tmp_isinstance_cls_3;
                CHECK_OBJECT(par_cipher);
                tmp_isinstance_inst_3 = par_cipher;
                CHECK_OBJECT(var_AESGCM);
                tmp_isinstance_cls_3 = var_AESGCM;
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_raise_type_1;
                    tmp_raise_type_1 = PyExc_AssertionError;
                    exception_type = tmp_raise_type_1;
                    Py_INCREF(tmp_raise_type_1);
                    exception_lineno = 23;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_len_arg_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_right_name_2;
                tmp_source_name_3 = const_str_digest_8f6206d93f29c1a41fb463cbda41f3c0;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_format);
                assert(!(tmp_called_name_2 == NULL));
                CHECK_OBJECT(par_cipher);
                tmp_source_name_4 = par_cipher;
                tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__key);
                if (tmp_len_arg_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 24;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_2 = BUILTIN_LEN(tmp_len_arg_2);
                Py_DECREF(tmp_len_arg_2);
                if (tmp_left_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 24;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = const_int_pos_8;
                tmp_args_element_name_2 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_left_name_2);
                assert(!(tmp_args_element_name_2 == NULL));
                frame_08c966a08505062b76a8448ae5633861->m_frame.f_lineno = 24;
                tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_called_instance_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_08c966a08505062b76a8448ae5633861->m_frame.f_lineno = 24;
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_plain_ascii_tuple, 0));

                Py_DECREF(tmp_called_instance_2);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_08c966a08505062b76a8448ae5633861);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_08c966a08505062b76a8448ae5633861);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_08c966a08505062b76a8448ae5633861);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08c966a08505062b76a8448ae5633861, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_08c966a08505062b76a8448ae5633861->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08c966a08505062b76a8448ae5633861, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_08c966a08505062b76a8448ae5633861,
        type_description_1,
        par_cipher,
        var_AESCCM,
        var_ChaCha20Poly1305,
        var_AESGCM
    );


    // Release cached frame.
    if (frame_08c966a08505062b76a8448ae5633861 == cache_frame_08c966a08505062b76a8448ae5633861) {
        Py_DECREF(frame_08c966a08505062b76a8448ae5633861);
    }
    cache_frame_08c966a08505062b76a8448ae5633861 = NULL;

    assertFrameObject(frame_08c966a08505062b76a8448ae5633861);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_AESCCM);
    Py_DECREF(var_AESCCM);
    var_AESCCM = NULL;

    CHECK_OBJECT((PyObject *)var_ChaCha20Poly1305);
    Py_DECREF(var_ChaCha20Poly1305);
    var_ChaCha20Poly1305 = NULL;

    CHECK_OBJECT((PyObject *)var_AESGCM);
    Py_DECREF(var_AESGCM);
    var_AESGCM = NULL;

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

    Py_XDECREF(var_AESCCM);
    var_AESCCM = NULL;

    Py_XDECREF(var_ChaCha20Poly1305);
    var_ChaCha20Poly1305 = NULL;

    Py_XDECREF(var_AESGCM);
    var_AESGCM = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_cipher_name = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *par_nonce = python_pars[3];
    PyObject *par_tag = python_pars[4];
    PyObject *par_tag_len = python_pars[5];
    PyObject *par_operation = python_pars[6];
    PyObject *var_nonce_ptr = NULL;
    PyObject *var_res = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_key_ptr = NULL;
    PyObject *var_evp_cipher = NULL;
    struct Nuitka_FrameObject *frame_c7df55639bd3a732209020894a8b244d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c7df55639bd3a732209020894a8b244d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_c7df55639bd3a732209020894a8b244d, codeobj_c7df55639bd3a732209020894a8b244d, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_c7df55639bd3a732209020894a8b244d = cache_frame_c7df55639bd3a732209020894a8b244d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c7df55639bd3a732209020894a8b244d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c7df55639bd3a732209020894a8b244d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_1 = par_backend;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__lib);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cipher_name);
        tmp_args_element_name_1 = par_cipher_name;
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_EVP_get_cipherbyname, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_evp_cipher == NULL);
        var_evp_cipher = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_backend);
        tmp_source_name_2 = par_backend;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_openssl_assert);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_evp_cipher);
        tmp_compexpr_left_1 = var_evp_cipher;
        CHECK_OBJECT(par_backend);
        tmp_source_name_4 = par_backend;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__ffi);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 29;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_3);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 29;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 29;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 29;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_backend);
        tmp_source_name_5 = par_backend;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__lib);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 30;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_EVP_CIPHER_CTX_new);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT(par_backend);
        tmp_source_name_7 = par_backend;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__ffi);
        if (tmp_source_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_gc);
        Py_DECREF(tmp_source_name_6);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_3 = var_ctx;
        CHECK_OBJECT(par_backend);
        tmp_source_name_9 = par_backend;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__lib);
        if (tmp_source_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 31;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_EVP_CIPHER_CTX_free);
        Py_DECREF(tmp_source_name_8);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 31;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ctx;
            assert(old != NULL);
            var_ctx = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_11 = par_backend;
        tmp_source_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain__lib);
        if (tmp_source_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_EVP_CipherInit_ex);
        Py_DECREF(tmp_source_name_10);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_5 = var_ctx;
        CHECK_OBJECT(var_evp_cipher);
        tmp_args_element_name_6 = var_evp_cipher;
        CHECK_OBJECT(par_backend);
        tmp_source_name_13 = par_backend;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__ffi);
        if (tmp_source_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 34;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_12);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 34;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_source_name_15 = par_backend;
        tmp_source_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain__ffi);
        if (tmp_source_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 35;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_14);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 35;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_source_name_17 = par_backend;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__ffi);
        if (tmp_source_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 36;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_16);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 36;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_operation);
        tmp_compexpr_left_2 = par_operation;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ENCRYPT);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_9);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18514 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 37;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_1;
        tmp_int_arg_1 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_9);

            exception_lineno = 37;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);
            Py_DECREF(tmp_args_element_name_9);

            exception_lineno = 37;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_18;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_backend);
        tmp_source_name_18 = par_backend;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_openssl_assert);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_3 = var_res;
        tmp_compexpr_right_3 = const_int_0;
        tmp_args_element_name_11 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 39;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 39;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_19;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_20 = par_backend;
        tmp_source_name_19 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain__lib);
        if (tmp_source_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_EVP_CIPHER_CTX_set_key_length);
        Py_DECREF(tmp_source_name_19);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_12 = var_ctx;
        CHECK_OBJECT(par_key);
        tmp_len_arg_1 = par_key;
        tmp_args_element_name_13 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 40;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert(old != NULL);
            var_res = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_21;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_backend);
        tmp_source_name_21 = par_backend;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_openssl_assert);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooo";
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

            exception_lineno = 41;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 41;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_22;
        PyObject *tmp_source_name_23;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_source_name_24;
        PyObject *tmp_source_name_25;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_source_name_26;
        PyObject *tmp_source_name_27;
        CHECK_OBJECT(par_backend);
        tmp_source_name_23 = par_backend;
        tmp_source_name_22 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain__lib);
        if (tmp_source_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_EVP_CIPHER_CTX_ctrl);
        Py_DECREF(tmp_source_name_22);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_15 = var_ctx;
        CHECK_OBJECT(par_backend);
        tmp_source_name_25 = par_backend;
        tmp_source_name_24 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain__lib);
        if (tmp_source_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 43;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_EVP_CTRL_AEAD_SET_IVLEN);
        Py_DECREF(tmp_source_name_24);
        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 43;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nonce);
        tmp_len_arg_2 = par_nonce;
        tmp_args_element_name_17 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_16);

            exception_lineno = 43;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_source_name_27 = par_backend;
        tmp_source_name_26 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain__ffi);
        if (tmp_source_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_16);
            Py_DECREF(tmp_args_element_name_17);

            exception_lineno = 44;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_26);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_16);
            Py_DECREF(tmp_args_element_name_17);

            exception_lineno = 44;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_16);
        Py_DECREF(tmp_args_element_name_17);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert(old != NULL);
            var_res = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_28;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(par_backend);
        tmp_source_name_28 = par_backend;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_openssl_assert);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_5 = var_res;
        tmp_compexpr_right_5 = const_int_0;
        tmp_args_element_name_19 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 46;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_operation);
        tmp_compexpr_left_6 = par_operation;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__DECRYPT);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__DECRYPT);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18551 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 47;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_6 = tmp_mvar_value_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_29;
            PyObject *tmp_source_name_30;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_source_name_31;
            PyObject *tmp_source_name_32;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_args_element_name_23;
            CHECK_OBJECT(par_backend);
            tmp_source_name_30 = par_backend;
            tmp_source_name_29 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain__lib);
            if (tmp_source_name_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_EVP_CIPHER_CTX_ctrl);
            Py_DECREF(tmp_source_name_29);
            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_ctx);
            tmp_args_element_name_20 = var_ctx;
            CHECK_OBJECT(par_backend);
            tmp_source_name_32 = par_backend;
            tmp_source_name_31 = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain__lib);
            if (tmp_source_name_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_9);

                exception_lineno = 49;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_21 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_EVP_CTRL_AEAD_SET_TAG);
            Py_DECREF(tmp_source_name_31);
            if (tmp_args_element_name_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_9);

                exception_lineno = 49;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_tag);
            tmp_len_arg_3 = par_tag;
            tmp_args_element_name_22 = BUILTIN_LEN(tmp_len_arg_3);
            if (tmp_args_element_name_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_9);
                Py_DECREF(tmp_args_element_name_21);

                exception_lineno = 49;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_tag);
            tmp_args_element_name_23 = par_tag;
            frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 48;
            {
                PyObject *call_args[] = {tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23};
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_9, call_args);
            }

            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_21);
            Py_DECREF(tmp_args_element_name_22);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert(old != NULL);
                var_res = tmp_assign_source_7;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_33;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(par_backend);
            tmp_source_name_33 = par_backend;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_33, const_str_plain_openssl_assert);
            if (tmp_called_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_res);
            tmp_compexpr_left_7 = var_res;
            tmp_compexpr_right_7 = const_int_0;
            tmp_args_element_name_24 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_args_element_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_10);

                exception_lineno = 51;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 51;
            tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_24);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_args_element_name_24);
            if (tmp_call_result_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_5);
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_34;
            PyObject *tmp_source_name_35;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_source_name_36;
            PyObject *tmp_source_name_37;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_source_name_38;
            PyObject *tmp_source_name_39;
            CHECK_OBJECT(par_backend);
            tmp_source_name_35 = par_backend;
            tmp_source_name_34 = LOOKUP_ATTRIBUTE(tmp_source_name_35, const_str_plain__lib);
            if (tmp_source_name_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_34, const_str_plain_EVP_CIPHER_CTX_ctrl);
            Py_DECREF(tmp_source_name_34);
            if (tmp_called_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_ctx);
            tmp_args_element_name_25 = var_ctx;
            CHECK_OBJECT(par_backend);
            tmp_source_name_37 = par_backend;
            tmp_source_name_36 = LOOKUP_ATTRIBUTE(tmp_source_name_37, const_str_plain__lib);
            if (tmp_source_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_11);

                exception_lineno = 54;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_26 = LOOKUP_ATTRIBUTE(tmp_source_name_36, const_str_plain_EVP_CTRL_AEAD_SET_TAG);
            Py_DECREF(tmp_source_name_36);
            if (tmp_args_element_name_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_11);

                exception_lineno = 54;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_tag_len);
            tmp_args_element_name_27 = par_tag_len;
            CHECK_OBJECT(par_backend);
            tmp_source_name_39 = par_backend;
            tmp_source_name_38 = LOOKUP_ATTRIBUTE(tmp_source_name_39, const_str_plain__ffi);
            if (tmp_source_name_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_11);
                Py_DECREF(tmp_args_element_name_26);

                exception_lineno = 54;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_38, const_str_plain_NULL);
            Py_DECREF(tmp_source_name_38);
            if (tmp_args_element_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_11);
                Py_DECREF(tmp_args_element_name_26);

                exception_lineno = 54;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28};
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_11, call_args);
            }

            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_26);
            Py_DECREF(tmp_args_element_name_28);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert(old != NULL);
                var_res = tmp_assign_source_8;
                Py_DECREF(old);
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_40;
        PyObject *tmp_args_element_name_29;
        CHECK_OBJECT(par_backend);
        tmp_source_name_40 = par_backend;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_40, const_str_plain__ffi);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nonce);
        tmp_args_element_name_29 = par_nonce;
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_29};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_from_buffer, call_args);
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nonce_ptr == NULL);
        var_nonce_ptr = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_41;
        PyObject *tmp_args_element_name_30;
        CHECK_OBJECT(par_backend);
        tmp_source_name_41 = par_backend;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_source_name_41, const_str_plain__ffi);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_name_30 = par_key;
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_name_30};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_from_buffer, call_args);
        }

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_ptr == NULL);
        var_key_ptr = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_42;
        PyObject *tmp_source_name_43;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_source_name_44;
        PyObject *tmp_source_name_45;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_source_name_46;
        PyObject *tmp_source_name_47;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(par_backend);
        tmp_source_name_43 = par_backend;
        tmp_source_name_42 = LOOKUP_ATTRIBUTE(tmp_source_name_43, const_str_plain__lib);
        if (tmp_source_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_42, const_str_plain_EVP_CipherInit_ex);
        Py_DECREF(tmp_source_name_42);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_31 = var_ctx;
        CHECK_OBJECT(par_backend);
        tmp_source_name_45 = par_backend;
        tmp_source_name_44 = LOOKUP_ATTRIBUTE(tmp_source_name_45, const_str_plain__ffi);
        if (tmp_source_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_32 = LOOKUP_ATTRIBUTE(tmp_source_name_44, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_44);
        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 61;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_source_name_47 = par_backend;
        tmp_source_name_46 = LOOKUP_ATTRIBUTE(tmp_source_name_47, const_str_plain__ffi);
        if (tmp_source_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_32);

            exception_lineno = 62;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_33 = LOOKUP_ATTRIBUTE(tmp_source_name_46, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_46);
        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_32);

            exception_lineno = 62;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key_ptr);
        tmp_args_element_name_34 = var_key_ptr;
        CHECK_OBJECT(var_nonce_ptr);
        tmp_args_element_name_35 = var_nonce_ptr;
        CHECK_OBJECT(par_operation);
        tmp_compexpr_left_8 = par_operation;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ENCRYPT);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_32);
            Py_DECREF(tmp_args_element_name_33);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18514 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 65;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_8 = tmp_mvar_value_3;
        tmp_int_arg_2 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_32);
            Py_DECREF(tmp_args_element_name_33);

            exception_lineno = 65;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_36 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_element_name_32);
            Py_DECREF(tmp_args_element_name_33);

            exception_lineno = 65;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_name_31, tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS6(tmp_called_name_12, call_args);
        }

        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_32);
        Py_DECREF(tmp_args_element_name_33);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert(old != NULL);
            var_res = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_48;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT(par_backend);
        tmp_source_name_48 = par_backend;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_48, const_str_plain_openssl_assert);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_9 = var_res;
        tmp_compexpr_right_9 = const_int_0;
        tmp_args_element_name_37 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_c7df55639bd3a732209020894a8b244d->m_frame.f_lineno = 67;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7df55639bd3a732209020894a8b244d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7df55639bd3a732209020894a8b244d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7df55639bd3a732209020894a8b244d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c7df55639bd3a732209020894a8b244d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7df55639bd3a732209020894a8b244d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7df55639bd3a732209020894a8b244d,
        type_description_1,
        par_backend,
        par_cipher_name,
        par_key,
        par_nonce,
        par_tag,
        par_tag_len,
        par_operation,
        var_nonce_ptr,
        var_res,
        var_ctx,
        var_key_ptr,
        var_evp_cipher
    );


    // Release cached frame.
    if (frame_c7df55639bd3a732209020894a8b244d == cache_frame_c7df55639bd3a732209020894a8b244d) {
        Py_DECREF(frame_c7df55639bd3a732209020894a8b244d);
    }
    cache_frame_c7df55639bd3a732209020894a8b244d = NULL;

    assertFrameObject(frame_c7df55639bd3a732209020894a8b244d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_ctx);
    tmp_return_value = var_ctx;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_nonce_ptr);
    Py_DECREF(var_nonce_ptr);
    var_nonce_ptr = NULL;

    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;

    CHECK_OBJECT((PyObject *)var_key_ptr);
    Py_DECREF(var_key_ptr);
    var_key_ptr = NULL;

    CHECK_OBJECT((PyObject *)var_evp_cipher);
    Py_DECREF(var_evp_cipher);
    var_evp_cipher = NULL;

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

    Py_XDECREF(var_nonce_ptr);
    var_nonce_ptr = NULL;

    Py_XDECREF(var_res);
    var_res = NULL;

    Py_XDECREF(var_ctx);
    var_ctx = NULL;

    Py_XDECREF(var_key_ptr);
    var_key_ptr = NULL;

    Py_XDECREF(var_evp_cipher);
    var_evp_cipher = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_cipher_name);
    Py_DECREF(par_cipher_name);
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_tag_len);
    Py_DECREF(par_tag_len);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_cipher_name);
    Py_DECREF(par_cipher_name);
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_operation);
    Py_DECREF(par_operation);
    CHECK_OBJECT(par_tag_len);
    Py_DECREF(par_tag_len);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_ctx = python_pars[1];
    PyObject *par_data_len = python_pars[2];
    PyObject *var_intptr = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_a7fca93f1979d3e1fbded2ecfad162ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7fca93f1979d3e1fbded2ecfad162ef = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a7fca93f1979d3e1fbded2ecfad162ef, codeobj_a7fca93f1979d3e1fbded2ecfad162ef, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a7fca93f1979d3e1fbded2ecfad162ef = cache_frame_a7fca93f1979d3e1fbded2ecfad162ef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7fca93f1979d3e1fbded2ecfad162ef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7fca93f1979d3e1fbded2ecfad162ef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_1 = par_backend;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__ffi);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a7fca93f1979d3e1fbded2ecfad162ef->m_frame.f_lineno = 72;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM(const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_intptr == NULL);
        var_intptr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(par_backend);
        tmp_source_name_3 = par_backend;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__lib);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_EVP_CipherUpdate);
        Py_DECREF(tmp_source_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_args_element_name_1 = par_ctx;
        CHECK_OBJECT(par_backend);
        tmp_source_name_5 = par_backend;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__ffi);
        if (tmp_source_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_4);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_intptr);
        tmp_args_element_name_3 = var_intptr;
        CHECK_OBJECT(par_backend);
        tmp_source_name_7 = par_backend;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__ffi);
        if (tmp_source_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_6);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data_len);
        tmp_args_element_name_5 = par_data_len;
        frame_a7fca93f1979d3e1fbded2ecfad162ef->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_8 = par_backend;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_openssl_assert);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_6 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a7fca93f1979d3e1fbded2ecfad162ef->m_frame.f_lineno = 80;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7fca93f1979d3e1fbded2ecfad162ef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7fca93f1979d3e1fbded2ecfad162ef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7fca93f1979d3e1fbded2ecfad162ef, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a7fca93f1979d3e1fbded2ecfad162ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7fca93f1979d3e1fbded2ecfad162ef, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7fca93f1979d3e1fbded2ecfad162ef,
        type_description_1,
        par_backend,
        par_ctx,
        par_data_len,
        var_intptr,
        var_res
    );


    // Release cached frame.
    if (frame_a7fca93f1979d3e1fbded2ecfad162ef == cache_frame_a7fca93f1979d3e1fbded2ecfad162ef) {
        Py_DECREF(frame_a7fca93f1979d3e1fbded2ecfad162ef);
    }
    cache_frame_a7fca93f1979d3e1fbded2ecfad162ef = NULL;

    assertFrameObject(frame_a7fca93f1979d3e1fbded2ecfad162ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_3__set_length);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_intptr);
    Py_DECREF(var_intptr);
    var_intptr = NULL;

    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

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

    Py_XDECREF(var_intptr);
    var_intptr = NULL;

    Py_XDECREF(var_res);
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_3__set_length);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data_len);
    Py_DECREF(par_data_len);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data_len);
    Py_DECREF(par_data_len);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_ctx = python_pars[1];
    PyObject *par_associated_data = python_pars[2];
    PyObject *var_res = NULL;
    PyObject *var_outlen = NULL;
    struct Nuitka_FrameObject *frame_a046ab226f23da164267eab55cb45945;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a046ab226f23da164267eab55cb45945 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a046ab226f23da164267eab55cb45945, codeobj_a046ab226f23da164267eab55cb45945, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a046ab226f23da164267eab55cb45945 = cache_frame_a046ab226f23da164267eab55cb45945;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a046ab226f23da164267eab55cb45945);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a046ab226f23da164267eab55cb45945) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_1 = par_backend;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__ffi);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a046ab226f23da164267eab55cb45945->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM(const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outlen == NULL);
        var_outlen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_3 = par_backend;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__lib);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_EVP_CipherUpdate);
        Py_DECREF(tmp_source_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_args_element_name_1 = par_ctx;
        CHECK_OBJECT(par_backend);
        tmp_source_name_5 = par_backend;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__ffi);
        if (tmp_source_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_4);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outlen);
        tmp_args_element_name_3 = var_outlen;
        CHECK_OBJECT(par_associated_data);
        tmp_args_element_name_4 = par_associated_data;
        CHECK_OBJECT(par_associated_data);
        tmp_len_arg_1 = par_associated_data;
        tmp_args_element_name_5 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a046ab226f23da164267eab55cb45945->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_6 = par_backend;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_openssl_assert);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_6 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a046ab226f23da164267eab55cb45945->m_frame.f_lineno = 88;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a046ab226f23da164267eab55cb45945);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a046ab226f23da164267eab55cb45945);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a046ab226f23da164267eab55cb45945, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a046ab226f23da164267eab55cb45945->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a046ab226f23da164267eab55cb45945, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a046ab226f23da164267eab55cb45945,
        type_description_1,
        par_backend,
        par_ctx,
        par_associated_data,
        var_res,
        var_outlen
    );


    // Release cached frame.
    if (frame_a046ab226f23da164267eab55cb45945 == cache_frame_a046ab226f23da164267eab55cb45945) {
        Py_DECREF(frame_a046ab226f23da164267eab55cb45945);
    }
    cache_frame_a046ab226f23da164267eab55cb45945 = NULL;

    assertFrameObject(frame_a046ab226f23da164267eab55cb45945);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

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
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_associated_data);
    Py_DECREF(par_associated_data);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_associated_data);
    Py_DECREF(par_associated_data);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_ctx = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *var_outlen = NULL;
    PyObject *var_res = NULL;
    PyObject *var_buf = NULL;
    struct Nuitka_FrameObject *frame_230175f9317c009e2c41dea38ce96329;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_230175f9317c009e2c41dea38ce96329 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_230175f9317c009e2c41dea38ce96329, codeobj_230175f9317c009e2c41dea38ce96329, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_230175f9317c009e2c41dea38ce96329 = cache_frame_230175f9317c009e2c41dea38ce96329;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_230175f9317c009e2c41dea38ce96329);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_230175f9317c009e2c41dea38ce96329) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_1 = par_backend;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__ffi);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_230175f9317c009e2c41dea38ce96329->m_frame.f_lineno = 92;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM(const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outlen == NULL);
        var_outlen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_3 = par_backend;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__ffi);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_new);
        Py_DECREF(tmp_source_name_2);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_args_element_name_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_230175f9317c009e2c41dea38ce96329->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_buf == NULL);
        var_buf = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_backend);
        tmp_source_name_5 = par_backend;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__lib);
        if (tmp_source_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_EVP_CipherUpdate);
        Py_DECREF(tmp_source_name_4);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_args_element_name_3 = par_ctx;
        CHECK_OBJECT(var_buf);
        tmp_args_element_name_4 = var_buf;
        CHECK_OBJECT(var_outlen);
        tmp_args_element_name_5 = var_outlen;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_6 = par_data;
        CHECK_OBJECT(par_data);
        tmp_len_arg_2 = par_data;
        tmp_args_element_name_7 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_230175f9317c009e2c41dea38ce96329->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_6 = par_backend;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_openssl_assert);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_8 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_230175f9317c009e2c41dea38ce96329->m_frame.f_lineno = 95;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT(par_backend);
        tmp_source_name_8 = par_backend;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__ffi);
        if (tmp_source_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_buffer);
        Py_DECREF(tmp_source_name_7);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_buf);
        tmp_args_element_name_9 = var_buf;
        CHECK_OBJECT(var_outlen);
        tmp_subscribed_name_1 = var_outlen;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_230175f9317c009e2c41dea38ce96329->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_slice_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_slice_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
        Py_DECREF(tmp_slice_source_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_230175f9317c009e2c41dea38ce96329);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_230175f9317c009e2c41dea38ce96329);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_230175f9317c009e2c41dea38ce96329);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_230175f9317c009e2c41dea38ce96329, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_230175f9317c009e2c41dea38ce96329->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_230175f9317c009e2c41dea38ce96329, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_230175f9317c009e2c41dea38ce96329,
        type_description_1,
        par_backend,
        par_ctx,
        par_data,
        var_outlen,
        var_res,
        var_buf
    );


    // Release cached frame.
    if (frame_230175f9317c009e2c41dea38ce96329 == cache_frame_230175f9317c009e2c41dea38ce96329) {
        Py_DECREF(frame_230175f9317c009e2c41dea38ce96329);
    }
    cache_frame_230175f9317c009e2c41dea38ce96329 = NULL;

    assertFrameObject(frame_230175f9317c009e2c41dea38ce96329);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_5__process_data);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_outlen);
    Py_DECREF(var_outlen);
    var_outlen = NULL;

    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)var_buf);
    Py_DECREF(var_buf);
    var_buf = NULL;

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

    Py_XDECREF(var_outlen);
    var_outlen = NULL;

    Py_XDECREF(var_res);
    var_res = NULL;

    Py_XDECREF(var_buf);
    var_buf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_5__process_data);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_cipher = python_pars[1];
    PyObject *par_nonce = python_pars[2];
    PyObject *par_data = python_pars[3];
    PyObject *par_associated_data = python_pars[4];
    PyObject *par_tag_length = python_pars[5];
    PyObject *var_res = NULL;
    PyObject *var_cipher_name = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_AESCCM = NULL;
    PyObject *var_outlen = NULL;
    PyObject *var_processed_data = NULL;
    PyObject *var_tag_buf = NULL;
    PyObject *var_tag = NULL;
    struct Nuitka_FrameObject *frame_bb9e465c6f90f23b2187d40605267a27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bb9e465c6f90f23b2187d40605267a27 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_bb9e465c6f90f23b2187d40605267a27, codeobj_bb9e465c6f90f23b2187d40605267a27, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_bb9e465c6f90f23b2187d40605267a27 = cache_frame_bb9e465c6f90f23b2187d40605267a27;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bb9e465c6f90f23b2187d40605267a27);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bb9e465c6f90f23b2187d40605267a27) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_336255be11d158429da8946aefa0f283;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_AESCCM_tuple;
        tmp_level_name_1 = const_int_0;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 100;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_AESCCM);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_AESCCM == NULL);
        var_AESCCM = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_cipher_name);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_cipher_name);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18588 ], 46, 0);
            exception_tb = NULL;

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_cipher);
        tmp_args_element_name_1 = par_cipher;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 101;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cipher_name == NULL);
        var_cipher_name = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_setup);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_setup);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18634 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_2 = par_backend;
        CHECK_OBJECT(var_cipher_name);
        tmp_args_element_name_3 = var_cipher_name;
        CHECK_OBJECT(par_cipher);
        tmp_source_name_1 = par_cipher;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__key);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nonce);
        tmp_args_element_name_5 = par_nonce;
        tmp_args_element_name_6 = Py_None;
        CHECK_OBJECT(par_tag_length);
        tmp_args_element_name_7 = par_tag_length;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ENCRYPT);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_args_element_name_4);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18514 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = tmp_mvar_value_3;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_cipher);
        tmp_isinstance_inst_1 = par_cipher;
        CHECK_OBJECT(var_AESCCM);
        tmp_isinstance_cls_1 = var_AESCCM;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_len_arg_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__set_length);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__set_length);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18674 ], 40, 0);
                exception_tb = NULL;

                exception_lineno = 108;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT(par_backend);
            tmp_args_element_name_9 = par_backend;
            CHECK_OBJECT(var_ctx);
            tmp_args_element_name_10 = var_ctx;
            CHECK_OBJECT(par_data);
            tmp_len_arg_1 = par_data;
            tmp_args_element_name_11 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_args_element_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 108;
            {
                PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
            }

            Py_DECREF(tmp_args_element_name_11);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_aad);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__process_aad);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18714 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_12 = par_backend;
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_13 = var_ctx;
        CHECK_OBJECT(par_associated_data);
        tmp_args_element_name_14 = par_associated_data;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_data);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__process_data);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18755 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_15 = par_backend;
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_16 = var_ctx;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_17 = par_data;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_processed_data == NULL);
        var_processed_data = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_backend);
        tmp_source_name_2 = par_backend;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__ffi);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 112;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM(const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_outlen == NULL);
        var_outlen = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(par_backend);
        tmp_source_name_4 = par_backend;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__lib);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_EVP_CipherFinal_ex);
        Py_DECREF(tmp_source_name_3);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_18 = var_ctx;
        CHECK_OBJECT(par_backend);
        tmp_source_name_6 = par_backend;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__ffi);
        if (tmp_source_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_NULL);
        Py_DECREF(tmp_source_name_5);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outlen);
        tmp_args_element_name_20 = var_outlen;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_7 = par_backend;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_openssl_assert);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_1 = var_res;
        tmp_compexpr_right_1 = const_int_0;
        tmp_args_element_name_21 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 114;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_backend);
        tmp_source_name_8 = par_backend;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_openssl_assert);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_outlen);
        tmp_subscribed_name_1 = var_outlen;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_args_element_name_22 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 115;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        CHECK_OBJECT(par_backend);
        tmp_source_name_9 = par_backend;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__ffi);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_23 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
        CHECK_OBJECT(par_tag_length);
        tmp_args_element_name_24 = par_tag_length;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_new, call_args);
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tag_buf == NULL);
        var_tag_buf = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        CHECK_OBJECT(par_backend);
        tmp_source_name_11 = par_backend;
        tmp_source_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain__lib);
        if (tmp_source_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_EVP_CIPHER_CTX_ctrl);
        Py_DECREF(tmp_source_name_10);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_25 = var_ctx;
        CHECK_OBJECT(par_backend);
        tmp_source_name_13 = par_backend;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__lib);
        if (tmp_source_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_EVP_CTRL_AEAD_GET_TAG);
        Py_DECREF(tmp_source_name_12);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tag_length);
        tmp_args_element_name_27 = par_tag_length;
        CHECK_OBJECT(var_tag_buf);
        tmp_args_element_name_28 = var_tag_buf;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_9, call_args);
        }

        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res;
            assert(old != NULL);
            var_res = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_backend);
        tmp_source_name_14 = par_backend;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_openssl_assert);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_compexpr_left_3 = var_res;
        tmp_compexpr_right_3 = const_int_0;
        tmp_args_element_name_29 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 120;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_9;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_element_name_30;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT(par_backend);
        tmp_source_name_15 = par_backend;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain__ffi);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tag_buf);
        tmp_args_element_name_30 = var_tag_buf;
        frame_bb9e465c6f90f23b2187d40605267a27->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = {tmp_args_element_name_30};
            tmp_slice_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_buffer, call_args);
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_slice_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
        Py_DECREF(tmp_slice_source_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tag == NULL);
        var_tag = tmp_assign_source_9;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_processed_data);
        tmp_left_name_1 = var_processed_data;
        CHECK_OBJECT(var_tag);
        tmp_right_name_1 = var_tag;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb9e465c6f90f23b2187d40605267a27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb9e465c6f90f23b2187d40605267a27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb9e465c6f90f23b2187d40605267a27);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb9e465c6f90f23b2187d40605267a27, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bb9e465c6f90f23b2187d40605267a27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb9e465c6f90f23b2187d40605267a27, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb9e465c6f90f23b2187d40605267a27,
        type_description_1,
        par_backend,
        par_cipher,
        par_nonce,
        par_data,
        par_associated_data,
        par_tag_length,
        var_res,
        var_cipher_name,
        var_ctx,
        var_AESCCM,
        var_outlen,
        var_processed_data,
        var_tag_buf,
        var_tag
    );


    // Release cached frame.
    if (frame_bb9e465c6f90f23b2187d40605267a27 == cache_frame_bb9e465c6f90f23b2187d40605267a27) {
        Py_DECREF(frame_bb9e465c6f90f23b2187d40605267a27);
    }
    cache_frame_bb9e465c6f90f23b2187d40605267a27 = NULL;

    assertFrameObject(frame_bb9e465c6f90f23b2187d40605267a27);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)var_cipher_name);
    Py_DECREF(var_cipher_name);
    var_cipher_name = NULL;

    CHECK_OBJECT((PyObject *)var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;

    CHECK_OBJECT((PyObject *)var_AESCCM);
    Py_DECREF(var_AESCCM);
    var_AESCCM = NULL;

    CHECK_OBJECT((PyObject *)var_outlen);
    Py_DECREF(var_outlen);
    var_outlen = NULL;

    CHECK_OBJECT((PyObject *)var_processed_data);
    Py_DECREF(var_processed_data);
    var_processed_data = NULL;

    CHECK_OBJECT((PyObject *)var_tag_buf);
    Py_DECREF(var_tag_buf);
    var_tag_buf = NULL;

    CHECK_OBJECT((PyObject *)var_tag);
    Py_DECREF(var_tag);
    var_tag = NULL;

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

    Py_XDECREF(var_cipher_name);
    var_cipher_name = NULL;

    Py_XDECREF(var_ctx);
    var_ctx = NULL;

    Py_XDECREF(var_AESCCM);
    var_AESCCM = NULL;

    Py_XDECREF(var_outlen);
    var_outlen = NULL;

    Py_XDECREF(var_processed_data);
    var_processed_data = NULL;

    Py_XDECREF(var_tag_buf);
    var_tag_buf = NULL;

    Py_XDECREF(var_tag);
    var_tag = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_associated_data);
    Py_DECREF(par_associated_data);
    CHECK_OBJECT(par_tag_length);
    Py_DECREF(par_tag_length);
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_associated_data);
    Py_DECREF(par_associated_data);
    CHECK_OBJECT(par_tag_length);
    Py_DECREF(par_tag_length);
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_cipher = python_pars[1];
    PyObject *par_nonce = python_pars[2];
    PyObject *par_data = python_pars[3];
    PyObject *par_associated_data = python_pars[4];
    PyObject *par_tag_length = python_pars[5];
    PyObject *var_buf = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_cipher_name = NULL;
    PyObject *var_tag = NULL;
    PyObject *var_AESCCM = NULL;
    PyObject *var_outlen = NULL;
    PyObject *var_processed_data = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_f82af7874c1defa2905946686d041d48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f82af7874c1defa2905946686d041d48 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_f82af7874c1defa2905946686d041d48, codeobj_f82af7874c1defa2905946686d041d48, module_cryptography$hazmat$backends$openssl$aead, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_f82af7874c1defa2905946686d041d48 = cache_frame_f82af7874c1defa2905946686d041d48;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f82af7874c1defa2905946686d041d48);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f82af7874c1defa2905946686d041d48) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_336255be11d158429da8946aefa0f283;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_AESCCM_tuple;
        tmp_level_name_1 = const_int_0;
        frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 127;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_AESCCM);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_AESCCM == NULL);
        var_AESCCM = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tag_length);
        tmp_compexpr_right_1 = par_tag_length;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidTag);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18797 ], 39, 0);
                exception_tb = NULL;

                exception_lineno = 129;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = tmp_mvar_value_1;
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_lineno = 129;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_data);
        tmp_slice_source_1 = par_data;
        CHECK_OBJECT(par_tag_length);
        tmp_operand_name_1 = par_tag_length;
        tmp_slice_lower_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        if (tmp_slice_lower_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, Py_None);
        Py_DECREF(tmp_slice_lower_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tag == NULL);
        var_tag = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_data);
        tmp_slice_source_2 = par_data;
        CHECK_OBJECT(par_tag_length);
        tmp_operand_name_2 = par_tag_length;
        tmp_slice_upper_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_2);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_SLICE(tmp_slice_source_2, Py_None, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_cipher_name);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_cipher_name);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18588 ], 46, 0);
            exception_tb = NULL;

            exception_lineno = 132;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(par_cipher);
        tmp_args_element_name_1 = par_cipher;
        frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 132;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cipher_name == NULL);
        var_cipher_name = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_setup);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__aead_setup);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18634 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 133;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_2 = par_backend;
        CHECK_OBJECT(var_cipher_name);
        tmp_args_element_name_3 = var_cipher_name;
        CHECK_OBJECT(par_cipher);
        tmp_source_name_1 = par_cipher;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__key);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nonce);
        tmp_args_element_name_5 = par_nonce;
        CHECK_OBJECT(var_tag);
        tmp_args_element_name_6 = var_tag;
        CHECK_OBJECT(par_tag_length);
        tmp_args_element_name_7 = par_tag_length;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__DECRYPT);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__DECRYPT);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_args_element_name_4);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18551 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 134;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = tmp_mvar_value_4;
        frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS7(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_cipher);
        tmp_isinstance_inst_1 = par_cipher;
        CHECK_OBJECT(var_AESCCM);
        tmp_isinstance_cls_1 = var_AESCCM;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_len_arg_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__set_length);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__set_length);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18674 ], 40, 0);
                exception_tb = NULL;

                exception_lineno = 139;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            CHECK_OBJECT(par_backend);
            tmp_args_element_name_9 = par_backend;
            CHECK_OBJECT(var_ctx);
            tmp_args_element_name_10 = var_ctx;
            CHECK_OBJECT(par_data);
            tmp_len_arg_2 = par_data;
            tmp_args_element_name_11 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_args_element_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 139;
            {
                PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11};
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
            }

            Py_DECREF(tmp_args_element_name_11);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_aad);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__process_aad);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18714 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT(par_backend);
        tmp_args_element_name_12 = par_backend;
        CHECK_OBJECT(var_ctx);
        tmp_args_element_name_13 = var_ctx;
        CHECK_OBJECT(par_associated_data);
        tmp_args_element_name_14 = par_associated_data;
        frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_cipher);
        tmp_isinstance_inst_2 = par_cipher;
        CHECK_OBJECT(var_AESCCM);
        tmp_isinstance_cls_2 = var_AESCCM;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_backend);
            tmp_source_name_2 = par_backend;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__ffi);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 145;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_new, &PyTuple_GET_ITEM(const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0));

            Py_DECREF(tmp_called_instance_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_outlen == NULL);
            var_outlen = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_len_arg_3;
            CHECK_OBJECT(par_backend);
            tmp_source_name_4 = par_backend;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__ffi);
            if (tmp_source_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_new);
            Py_DECREF(tmp_source_name_3);
            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_15 = const_str_digest_81f1b0dfcc7a862e6940580ec4cc42d3;
            CHECK_OBJECT(par_data);
            tmp_len_arg_3 = par_data;
            tmp_args_element_name_16 = BUILTIN_LEN(tmp_len_arg_3);
            if (tmp_args_element_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);

                exception_lineno = 146;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16};
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
            }

            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_buf == NULL);
            var_buf = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_len_arg_4;
            CHECK_OBJECT(par_backend);
            tmp_source_name_6 = par_backend;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__lib);
            if (tmp_source_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_EVP_CipherUpdate);
            Py_DECREF(tmp_source_name_5);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_ctx);
            tmp_args_element_name_17 = var_ctx;
            CHECK_OBJECT(var_buf);
            tmp_args_element_name_18 = var_buf;
            CHECK_OBJECT(var_outlen);
            tmp_args_element_name_19 = var_outlen;
            CHECK_OBJECT(par_data);
            tmp_args_element_name_20 = par_data;
            CHECK_OBJECT(par_data);
            tmp_len_arg_4 = par_data;
            tmp_args_element_name_21 = BUILTIN_LEN(tmp_len_arg_4);
            if (tmp_args_element_name_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_6);

                exception_lineno = 147;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 147;
            {
                PyObject *call_args[] = {tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21};
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_6, call_args);
            }

            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_21);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_res == NULL);
            var_res = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(var_res);
            tmp_compexpr_left_2 = var_res;
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_call_result_3;
                CHECK_OBJECT(par_backend);
                tmp_called_instance_2 = par_backend;
                frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 149;
                tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain__consume_errors);
                if (tmp_call_result_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_3);
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_mvar_value_7;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag);

                if (unlikely(tmp_mvar_value_7 == NULL)) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidTag);
                }

                if (tmp_mvar_value_7 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 18797 ], 39, 0);
                    exception_tb = NULL;

                    exception_lineno = 150;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_raise_type_2 = tmp_mvar_value_7;
                exception_type = tmp_raise_type_2;
                Py_INCREF(tmp_raise_type_2);
                exception_lineno = 150;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_9;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT(par_backend);
            tmp_source_name_8 = par_backend;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__ffi);
            if (tmp_source_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_buffer);
            Py_DECREF(tmp_source_name_7);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_buf);
            tmp_args_element_name_22 = var_buf;
            CHECK_OBJECT(var_outlen);
            tmp_subscribed_name_1 = var_outlen;
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_23 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_args_element_name_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 152;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 152;
            {
                PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23};
                tmp_slice_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
            }

            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_23);
            if (tmp_slice_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = LOOKUP_INDEX_SLICE(tmp_slice_source_3, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
            Py_DECREF(tmp_slice_source_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_processed_data == NULL);
            var_processed_data = tmp_assign_source_9;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_data);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__process_data);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18755 ], 42, 0);
                exception_tb = NULL;

                exception_lineno = 154;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_8;
            CHECK_OBJECT(par_backend);
            tmp_args_element_name_24 = par_backend;
            CHECK_OBJECT(var_ctx);
            tmp_args_element_name_25 = var_ctx;
            CHECK_OBJECT(par_data);
            tmp_args_element_name_26 = par_data;
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26};
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, call_args);
            }

            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_processed_data == NULL);
            var_processed_data = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT(par_backend);
            tmp_source_name_9 = par_backend;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__ffi);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 155;
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_new, &PyTuple_GET_ITEM(const_tuple_str_digest_3b3aae0d4ec6dd9681b22e6097ce791a_tuple, 0));

            Py_DECREF(tmp_called_instance_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_outlen == NULL);
            var_outlen = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_29;
            CHECK_OBJECT(par_backend);
            tmp_source_name_11 = par_backend;
            tmp_source_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain__lib);
            if (tmp_source_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_EVP_CipherFinal_ex);
            Py_DECREF(tmp_source_name_10);
            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_ctx);
            tmp_args_element_name_27 = var_ctx;
            CHECK_OBJECT(par_backend);
            tmp_source_name_13 = par_backend;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__ffi);
            if (tmp_source_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_9);

                exception_lineno = 156;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_NULL);
            Py_DECREF(tmp_source_name_12);
            if (tmp_args_element_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_9);

                exception_lineno = 156;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_outlen);
            tmp_args_element_name_29 = var_outlen;
            frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 156;
            {
                PyObject *call_args[] = {tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29};
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, call_args);
            }

            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_28);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_res == NULL);
            var_res = tmp_assign_source_12;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(var_res);
            tmp_compexpr_left_3 = var_res;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_4;
                CHECK_OBJECT(par_backend);
                tmp_called_instance_4 = par_backend;
                frame_f82af7874c1defa2905946686d041d48->m_frame.f_lineno = 158;
                tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain__consume_errors);
                if (tmp_call_result_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_4);
            }
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_mvar_value_9;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag);

                if (unlikely(tmp_mvar_value_9 == NULL)) {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidTag);
                }

                if (tmp_mvar_value_9 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 18797 ], 39, 0);
                    exception_tb = NULL;

                    exception_lineno = 159;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_raise_type_3 = tmp_mvar_value_9;
                exception_type = tmp_raise_type_3;
                Py_INCREF(tmp_raise_type_3);
                exception_lineno = 159;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f82af7874c1defa2905946686d041d48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f82af7874c1defa2905946686d041d48);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f82af7874c1defa2905946686d041d48, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f82af7874c1defa2905946686d041d48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f82af7874c1defa2905946686d041d48, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f82af7874c1defa2905946686d041d48,
        type_description_1,
        par_backend,
        par_cipher,
        par_nonce,
        par_data,
        par_associated_data,
        par_tag_length,
        var_buf,
        var_ctx,
        var_cipher_name,
        var_tag,
        var_AESCCM,
        var_outlen,
        var_processed_data,
        var_res
    );


    // Release cached frame.
    if (frame_f82af7874c1defa2905946686d041d48 == cache_frame_f82af7874c1defa2905946686d041d48) {
        Py_DECREF(frame_f82af7874c1defa2905946686d041d48);
    }
    cache_frame_f82af7874c1defa2905946686d041d48 = NULL;

    assertFrameObject(frame_f82af7874c1defa2905946686d041d48);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_processed_data);
    tmp_return_value = var_processed_data;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_buf);
    var_buf = NULL;

    CHECK_OBJECT((PyObject *)var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;

    CHECK_OBJECT((PyObject *)var_cipher_name);
    Py_DECREF(var_cipher_name);
    var_cipher_name = NULL;

    CHECK_OBJECT((PyObject *)var_tag);
    Py_DECREF(var_tag);
    var_tag = NULL;

    CHECK_OBJECT((PyObject *)var_AESCCM);
    Py_DECREF(var_AESCCM);
    var_AESCCM = NULL;

    CHECK_OBJECT((PyObject *)var_outlen);
    Py_DECREF(var_outlen);
    var_outlen = NULL;

    CHECK_OBJECT((PyObject *)var_processed_data);
    Py_DECREF(var_processed_data);
    var_processed_data = NULL;

    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)par_data);
    Py_DECREF(par_data);
    par_data = NULL;

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

    Py_XDECREF(var_buf);
    var_buf = NULL;

    Py_XDECREF(var_ctx);
    var_ctx = NULL;

    Py_XDECREF(var_cipher_name);
    var_cipher_name = NULL;

    Py_XDECREF(var_tag);
    var_tag = NULL;

    Py_XDECREF(var_AESCCM);
    var_AESCCM = NULL;

    Py_XDECREF(var_outlen);
    var_outlen = NULL;

    Py_XDECREF(var_processed_data);
    var_processed_data = NULL;

    Py_XDECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_associated_data);
    Py_DECREF(par_associated_data);
    CHECK_OBJECT(par_tag_length);
    Py_DECREF(par_tag_length);
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nonce);
    Py_DECREF(par_nonce);
    CHECK_OBJECT(par_associated_data);
    Py_DECREF(par_associated_data);
    CHECK_OBJECT(par_tag_length);
    Py_DECREF(par_tag_length);
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name,
        const_str_plain__aead_cipher_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_08c966a08505062b76a8448ae5633861,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup,
        const_str_plain__aead_setup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c7df55639bd3a732209020894a8b244d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length,
        const_str_plain__set_length,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a7fca93f1979d3e1fbded2ecfad162ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad,
        const_str_plain__process_aad,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a046ab226f23da164267eab55cb45945,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data,
        const_str_plain__process_data,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_230175f9317c009e2c41dea38ce96329,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt,
        const_str_plain__encrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bb9e465c6f90f23b2187d40605267a27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt,
        const_str_plain__decrypt,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f82af7874c1defa2905946686d041d48,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$openssl$aead,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$backends$openssl$aead =
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

function_impl_code functable_cryptography$hazmat$backends$openssl$aead[] = {
    impl_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name,
    impl_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup,
    impl_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length,
    impl_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad,
    impl_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data,
    impl_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt,
    impl_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt,
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

    function_impl_code *current = functable_cryptography$hazmat$backends$openssl$aead;
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

    if (offset > sizeof(functable_cryptography$hazmat$backends$openssl$aead) || offset < 0) {
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
        functable_cryptography$hazmat$backends$openssl$aead[offset],
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
        module_cryptography$hazmat$backends$openssl$aead,
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
PyObject *modulecode_cryptography$hazmat$backends$openssl$aead(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_cryptography$hazmat$backends$openssl$aead;
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
    PRINT_STRING("cryptography.hazmat.backends.openssl.aead: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.openssl.aead: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.openssl.aead: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$backends$openssl$aead\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$backends$openssl$aead = Py_InitModule4(
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
    mdef_cryptography$hazmat$backends$openssl$aead.m_name = module_full_name;
    module_cryptography$hazmat$backends$openssl$aead = PyModule_Create(&mdef_cryptography$hazmat$backends$openssl$aead);
#endif

    moduledict_cryptography$hazmat$backends$openssl$aead = MODULE_DICT(module_cryptography$hazmat$backends$openssl$aead);

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
        moduledict_cryptography$hazmat$backends$openssl$aead,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$openssl$aead,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$openssl$aead,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$aead,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$aead,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$backends$openssl$aead);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_cryptography$hazmat$backends$openssl$aead);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_6caa69772547f2f368b0d43313571162;
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
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_6caa69772547f2f368b0d43313571162 = MAKE_MODULE_FRAME(codeobj_6caa69772547f2f368b0d43313571162, module_cryptography$hazmat$backends$openssl$aead);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6caa69772547f2f368b0d43313571162);
    assert(Py_REFCNT(frame_6caa69772547f2f368b0d43313571162) == 2);

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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6);
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
        tmp_name_name_1 = const_str_digest_82e5b7f1075745a8638e06059354d03c;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$aead;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_InvalidTag_tuple;
        tmp_level_name_1 = const_int_0;
        frame_6caa69772547f2f368b0d43313571162->m_frame.f_lineno = 7;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_InvalidTag);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain_InvalidTag, tmp_assign_source_7);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6caa69772547f2f368b0d43313571162);
#endif
    popFrameStack();

    assertFrameObject(frame_6caa69772547f2f368b0d43313571162);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6caa69772547f2f368b0d43313571162);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_6caa69772547f2f368b0d43313571162, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6caa69772547f2f368b0d43313571162->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6caa69772547f2f368b0d43313571162, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_1;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__ENCRYPT, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_0;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__DECRYPT, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_1__aead_cipher_name();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_cipher_name, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_2__aead_setup();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__aead_setup, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_3__set_length();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__set_length, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_4__process_aad();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_aad, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_5__process_data();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__process_data, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_6__encrypt();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__encrypt, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$aead$$$function_7__decrypt();



        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$aead, (Nuitka_StringObject *)const_str_plain__decrypt, tmp_assign_source_16);
    }

    return module_cryptography$hazmat$backends$openssl$aead;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
