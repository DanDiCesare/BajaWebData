/* Generated code for Python module 'future.backports.email.base64mime'
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

/* The "_module_future$backports$email$base64mime" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports$email$base64mime;
PyDictObject *moduledict_future$backports$email$base64mime;

/* The declarations of module constants used, if any. */
extern PyObject *const_unicode_plain_header_encode;
extern PyObject *const_unicode_newline;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_unicode_digest_7ca129d2d421fe965ad48cbb290b579b;
extern PyObject *const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
extern PyObject *const_str_plain_EMPTYSTRING;
extern PyObject *const_str_plain_leftover;
extern PyObject *const_tuple_unicode_digest_20861594150da1e43b5ee3f86b9deef6_tuple;
static PyObject *const_str_plain_MISC_LEN;
static PyObject *const_unicode_digest_f68a3db01b78fe08d1ae41575d5f3121;
extern PyObject *const_tuple_unicode_digest_0fb3f57013d21cde8ac4f9e3be987cc2_tuple;
extern PyObject *const_unicode_plain_body_encode;
static PyObject *const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_plain_max_unencoded;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_header_encode;
extern PyObject *const_str_plain_base64;
static PyObject *const_str_digest_ae4fabf7769b5ed82d2b01aad626e47e;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_i;
static PyObject *const_list_4e5537aecf97a87b09ef6010c6e3f466_list;
static PyObject *const_str_digest_886c223163ef2feaff914fde1ceadda0;
extern PyObject *const_str_plain_bytearray;
extern PyObject *const_unicode_empty;
extern PyObject *const_str_plain_maxlinelen;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_unicode_plain_decodestring;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_76;
extern PyObject *const_int_0;
extern PyObject *const_unicode_digest_0fb3f57013d21cde8ac4f9e3be987cc2;
extern PyObject *const_str_plain_bytes;
static PyObject *const_str_plain_encvec;
extern PyObject *const_str_plain_encode;
extern PyObject *const_unicode_plain_decode;
extern PyObject *const_unicode_digest_20861594150da1e43b5ee3f86b9deef6;
extern PyObject *const_str_plain_body_encode;
extern PyObject *const_str_plain___file__;
static PyObject *const_unicode_digest_6ef73059ff7a75ac16db97ed10100cd2;
extern PyObject *const_str_plain_body_decode;
extern PyObject *const_str_plain_encoded;
extern PyObject *const_unicode_plain_ascii;
extern PyObject *const_str_plain_binascii;
static PyObject *const_unicode_digest_54076a9648667c29f0457044be51e1ff;
static PyObject *const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_s;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_charset;
static PyObject *const_tuple_95fb954a021a7b25331b93d933838a2d_tuple;
extern PyObject *const_unicode_plain_header_length;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_range_tuple;
static PyObject *const_tuple_str_plain_string_tuple;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_n;
extern PyObject *const_unicode_plain_body_decode;
extern PyObject *const_str_plain_eol;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_NL;
extern PyObject *const_str_plain_groups_of_3;
extern PyObject *const_tuple_unicode_plain_ascii_tuple;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_str_plain_a2b_base64;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_CRLF;
static PyObject *const_str_plain_b2a_base64;
extern PyObject *const_str_plain_header_bytes;
extern PyObject *const_str_plain_string;
extern PyObject *const_str_plain_enc;
static PyObject *const_unicode_digest_2f077fb247b5c663b5b646d27ee2b7c0;
extern PyObject *const_tuple_str_plain_bytes_tuple;
static PyObject *const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple;
static PyObject *const_unicode_digest_b7e2b4a95526d60d232ef26fa928c066;
extern PyObject *const_str_plain_decodestring;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain_header_length;
extern PyObject *const_str_plain_b64encode;
static PyObject *const_unicode_digest_ed177ae0b7f6918622a6592157d34d2a;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_MISC_LEN = UNSTREAM_STRING(&constant_bin[ 668866 ], 8, 1);
    const_unicode_digest_f68a3db01b78fe08d1ae41575d5f3121 = UNSTREAM_UNICODE(&constant_bin[ 668874 ], 11);
    const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 0, const_str_plain_header_bytes); Py_INCREF(const_str_plain_header_bytes);
    PyTuple_SET_ITEM(const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 1, const_str_plain_charset); Py_INCREF(const_str_plain_charset);
    PyTuple_SET_ITEM(const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 2, const_str_plain_encoded); Py_INCREF(const_str_plain_encoded);
    const_str_plain_max_unencoded = UNSTREAM_STRING(&constant_bin[ 668885 ], 13, 1);
    const_str_digest_ae4fabf7769b5ed82d2b01aad626e47e = UNSTREAM_STRING(&constant_bin[ 668898 ], 42, 0);
    const_list_4e5537aecf97a87b09ef6010c6e3f466_list = PyList_New(6);
    PyList_SET_ITEM(const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 0, const_unicode_plain_body_decode); Py_INCREF(const_unicode_plain_body_decode);
    PyList_SET_ITEM(const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 1, const_unicode_plain_body_encode); Py_INCREF(const_unicode_plain_body_encode);
    PyList_SET_ITEM(const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 2, const_unicode_plain_decode); Py_INCREF(const_unicode_plain_decode);
    PyList_SET_ITEM(const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 3, const_unicode_plain_decodestring); Py_INCREF(const_unicode_plain_decodestring);
    PyList_SET_ITEM(const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 4, const_unicode_plain_header_encode); Py_INCREF(const_unicode_plain_header_encode);
    PyList_SET_ITEM(const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 5, const_unicode_plain_header_length); Py_INCREF(const_unicode_plain_header_length);
    const_str_digest_886c223163ef2feaff914fde1ceadda0 = UNSTREAM_STRING(&constant_bin[ 668940 ], 36, 0);
    const_str_plain_encvec = UNSTREAM_STRING(&constant_bin[ 668976 ], 6, 1);
    const_unicode_digest_6ef73059ff7a75ac16db97ed10100cd2 = UNSTREAM_UNICODE(&constant_bin[ 668982 ], 212);
    const_unicode_digest_54076a9648667c29f0457044be51e1ff = UNSTREAM_UNICODE(&constant_bin[ 669194 ], 254);
    const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple = PyTuple_New(2);
    const_str_plain_b2a_base64 = UNSTREAM_STRING(&constant_bin[ 43695 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple, 0, const_str_plain_b2a_base64); Py_INCREF(const_str_plain_b2a_base64);
    const_str_plain_a2b_base64 = UNSTREAM_STRING(&constant_bin[ 43765 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple, 1, const_str_plain_a2b_base64); Py_INCREF(const_str_plain_a2b_base64);
    const_tuple_95fb954a021a7b25331b93d933838a2d_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_95fb954a021a7b25331b93d933838a2d_tuple, 0, const_str_plain_bytearray); Py_INCREF(const_str_plain_bytearray);
    PyTuple_SET_ITEM(const_tuple_95fb954a021a7b25331b93d933838a2d_tuple, 1, const_str_plain_leftover); Py_INCREF(const_str_plain_leftover);
    PyTuple_SET_ITEM(const_tuple_95fb954a021a7b25331b93d933838a2d_tuple, 2, const_str_plain_groups_of_3); Py_INCREF(const_str_plain_groups_of_3);
    PyTuple_SET_ITEM(const_tuple_95fb954a021a7b25331b93d933838a2d_tuple, 3, const_str_plain_n); Py_INCREF(const_str_plain_n);
    const_tuple_str_plain_string_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_string_tuple, 0, const_str_plain_string); Py_INCREF(const_str_plain_string);
    const_unicode_digest_2f077fb247b5c663b5b646d27ee2b7c0 = UNSTREAM_UNICODE(&constant_bin[ 669448 ], 54);
    const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 0, const_str_plain_s); Py_INCREF(const_str_plain_s);
    PyTuple_SET_ITEM(const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 1, const_str_plain_maxlinelen); Py_INCREF(const_str_plain_maxlinelen);
    PyTuple_SET_ITEM(const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 2, const_str_plain_eol); Py_INCREF(const_str_plain_eol);
    PyTuple_SET_ITEM(const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 3, const_str_plain_i); Py_INCREF(const_str_plain_i);
    PyTuple_SET_ITEM(const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 4, const_str_plain_max_unencoded); Py_INCREF(const_str_plain_max_unencoded);
    PyTuple_SET_ITEM(const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 5, const_str_plain_encvec); Py_INCREF(const_str_plain_encvec);
    PyTuple_SET_ITEM(const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 6, const_str_plain_enc); Py_INCREF(const_str_plain_enc);
    const_unicode_digest_b7e2b4a95526d60d232ef26fa928c066 = UNSTREAM_UNICODE(&constant_bin[ 669502 ], 923);
    const_unicode_digest_ed177ae0b7f6918622a6592157d34d2a = UNSTREAM_UNICODE(&constant_bin[ 670425 ], 305);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports$email$base64mime(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2568158c08915aaaf1fcc60126e8db43;
static PyCodeObject *codeobj_298d40a4a1f196fbd0b0030dafadcb96;
static PyCodeObject *codeobj_7c2bf13d8fdfc96f96d8210e7ed500de;
static PyCodeObject *codeobj_c63f069c7e46ac6bcf9d766b9b08803a;
static PyCodeObject *codeobj_2a2b397b37da31ec003e28e62b450a58;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_886c223163ef2feaff914fde1ceadda0);
    codeobj_2568158c08915aaaf1fcc60126e8db43 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_digest_ae4fabf7769b5ed82d2b01aad626e47e, const_tuple_empty, 0, 0, 0);
    codeobj_298d40a4a1f196fbd0b0030dafadcb96 = MAKE_CODEOBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_body_encode, const_tuple_c13f7c02f562225eb523d550ea6e0c66_tuple, 3, 0, 0);
    codeobj_7c2bf13d8fdfc96f96d8210e7ed500de = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_decode, const_tuple_str_plain_string_tuple, 1, 0, 0);
    codeobj_c63f069c7e46ac6bcf9d766b9b08803a = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_header_encode, const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 2, 0, 0);
    codeobj_2a2b397b37da31ec003e28e62b450a58 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_header_length, const_tuple_95fb954a021a7b25331b93d933838a2d_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_1_header_length();


static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_2_header_encode(PyObject *defaults);


static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_3_body_encode(PyObject *defaults);


static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_4_decode();


// The module function definitions.
static PyObject *impl_future$backports$email$base64mime$$$function_1_header_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bytearray = python_pars[0];
    PyObject *var_leftover = NULL;
    PyObject *var_groups_of_3 = NULL;
    PyObject *var_n = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2a2b397b37da31ec003e28e62b450a58;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2a2b397b37da31ec003e28e62b450a58 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_2a2b397b37da31ec003e28e62b450a58, codeobj_2a2b397b37da31ec003e28e62b450a58, module_future$backports$email$base64mime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_2a2b397b37da31ec003e28e62b450a58 = cache_frame_2a2b397b37da31ec003e28e62b450a58;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2a2b397b37da31ec003e28e62b450a58);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2a2b397b37da31ec003e28e62b450a58) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_bytearray);
        tmp_len_arg_1 = par_bytearray;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_right_name_1 = const_int_pos_3;
        tmp_iter_arg_1 = BUILTIN_DIVMOD(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
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


            type_description_1 = "oooo";
            exception_lineno = 56;
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


            type_description_1 = "oooo";
            exception_lineno = 56;
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

                    type_description_1 = "oooo";
                    exception_lineno = 56;
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

            type_description_1 = "oooo";
            exception_lineno = 56;
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
        assert(var_groups_of_3 == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_groups_of_3 = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_leftover == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_leftover = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(var_groups_of_3);
        tmp_left_name_2 = var_groups_of_3;
        tmp_right_name_2 = const_int_pos_4;
        tmp_assign_source_6 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_leftover);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_leftover);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT(var_n);
            tmp_left_name_3 = var_n;
            tmp_right_name_3 = const_int_pos_4;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_3, tmp_right_name_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_3;
            var_n = tmp_assign_source_7;

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a2b397b37da31ec003e28e62b450a58);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a2b397b37da31ec003e28e62b450a58);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a2b397b37da31ec003e28e62b450a58, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_2a2b397b37da31ec003e28e62b450a58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a2b397b37da31ec003e28e62b450a58, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a2b397b37da31ec003e28e62b450a58,
        type_description_1,
        par_bytearray,
        var_leftover,
        var_groups_of_3,
        var_n
    );


    // Release cached frame.
    if (frame_2a2b397b37da31ec003e28e62b450a58 == cache_frame_2a2b397b37da31ec003e28e62b450a58) {
        Py_DECREF(frame_2a2b397b37da31ec003e28e62b450a58);
    }
    cache_frame_2a2b397b37da31ec003e28e62b450a58 = NULL;

    assertFrameObject(frame_2a2b397b37da31ec003e28e62b450a58);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_n);
    tmp_return_value = var_n;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$base64mime$$$function_1_header_length);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_leftover);
    Py_DECREF(var_leftover);
    var_leftover = NULL;

    CHECK_OBJECT((PyObject *)var_groups_of_3);
    Py_DECREF(var_groups_of_3);
    var_groups_of_3 = NULL;

    CHECK_OBJECT((PyObject *)var_n);
    Py_DECREF(var_n);
    var_n = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_leftover);
    var_leftover = NULL;

    Py_XDECREF(var_groups_of_3);
    var_groups_of_3 = NULL;

    Py_XDECREF(var_n);
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$base64mime$$$function_1_header_length);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bytearray);
    Py_DECREF(par_bytearray);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bytearray);
    Py_DECREF(par_bytearray);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$base64mime$$$function_2_header_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_header_bytes = python_pars[0];
    PyObject *par_charset = python_pars[1];
    PyObject *var_encoded = NULL;
    struct Nuitka_FrameObject *frame_c63f069c7e46ac6bcf9d766b9b08803a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c63f069c7e46ac6bcf9d766b9b08803a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_c63f069c7e46ac6bcf9d766b9b08803a, codeobj_c63f069c7e46ac6bcf9d766b9b08803a, module_future$backports$email$base64mime, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_c63f069c7e46ac6bcf9d766b9b08803a = cache_frame_c63f069c7e46ac6bcf9d766b9b08803a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c63f069c7e46ac6bcf9d766b9b08803a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c63f069c7e46ac6bcf9d766b9b08803a) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_header_bytes);
        tmp_operand_name_1 = par_header_bytes;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
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
        tmp_return_value = const_unicode_empty;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_header_bytes);
        tmp_isinstance_inst_1 = par_header_bytes;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_header_bytes);
            tmp_called_instance_1 = par_header_bytes;
            CHECK_OBJECT(par_charset);
            tmp_args_element_name_1 = par_charset;
            frame_c63f069c7e46ac6bcf9d766b9b08803a->m_frame.f_lineno = 73;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, call_args);
            }

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_header_bytes;
                assert(old != NULL);
                par_header_bytes = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b64encode);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43644 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_header_bytes);
        tmp_args_element_name_2 = par_header_bytes;
        frame_c63f069c7e46ac6bcf9d766b9b08803a->m_frame.f_lineno = 74;
        tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c63f069c7e46ac6bcf9d766b9b08803a->m_frame.f_lineno = 74;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_unicode_plain_ascii_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_encoded == NULL);
        var_encoded = tmp_assign_source_2;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_unicode_digest_f68a3db01b78fe08d1ae41575d5f3121;
        CHECK_OBJECT(par_charset);
        tmp_tuple_element_1 = par_charset;
        tmp_right_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_encoded);
        tmp_tuple_element_1 = var_encoded;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        tmp_return_value = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c63f069c7e46ac6bcf9d766b9b08803a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c63f069c7e46ac6bcf9d766b9b08803a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c63f069c7e46ac6bcf9d766b9b08803a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c63f069c7e46ac6bcf9d766b9b08803a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c63f069c7e46ac6bcf9d766b9b08803a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c63f069c7e46ac6bcf9d766b9b08803a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c63f069c7e46ac6bcf9d766b9b08803a,
        type_description_1,
        par_header_bytes,
        par_charset,
        var_encoded
    );


    // Release cached frame.
    if (frame_c63f069c7e46ac6bcf9d766b9b08803a == cache_frame_c63f069c7e46ac6bcf9d766b9b08803a) {
        Py_DECREF(frame_c63f069c7e46ac6bcf9d766b9b08803a);
    }
    cache_frame_c63f069c7e46ac6bcf9d766b9b08803a = NULL;

    assertFrameObject(frame_c63f069c7e46ac6bcf9d766b9b08803a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$base64mime$$$function_2_header_encode);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_encoded);
    var_encoded = NULL;

    Py_XDECREF(par_header_bytes);
    par_header_bytes = NULL;

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

    Py_XDECREF(var_encoded);
    var_encoded = NULL;

    Py_XDECREF(par_header_bytes);
    par_header_bytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$base64mime$$$function_2_header_encode);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_charset);
    Py_DECREF(par_charset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$base64mime$$$function_3_body_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_maxlinelen = python_pars[1];
    PyObject *par_eol = python_pars[2];
    PyObject *var_i = NULL;
    PyObject *var_max_unencoded = NULL;
    PyObject *var_encvec = NULL;
    PyObject *var_enc = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_298d40a4a1f196fbd0b0030dafadcb96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_298d40a4a1f196fbd0b0030dafadcb96 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_298d40a4a1f196fbd0b0030dafadcb96, codeobj_298d40a4a1f196fbd0b0030dafadcb96, module_future$backports$email$base64mime, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_298d40a4a1f196fbd0b0030dafadcb96 = cache_frame_298d40a4a1f196fbd0b0030dafadcb96;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_298d40a4a1f196fbd0b0030dafadcb96);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_298d40a4a1f196fbd0b0030dafadcb96) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_s);
        tmp_operand_name_1 = par_s;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_encvec == NULL);
        var_encvec = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(par_maxlinelen);
        tmp_left_name_2 = par_maxlinelen;
        tmp_right_name_1 = const_int_pos_3;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_4;
        tmp_assign_source_2 = BINARY_OPERATION_FLOORDIV_OBJECT_INT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_unencoded == NULL);
        var_max_unencoded = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_range);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_range);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10165 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_int_0;
        CHECK_OBJECT(par_s);
        tmp_len_arg_1 = par_s;
        tmp_args_element_name_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_max_unencoded);
        tmp_args_element_name_3 = var_max_unencoded;
        frame_298d40a4a1f196fbd0b0030dafadcb96->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 93;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_5;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b2a_base64);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_b2a_base64);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43682 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_s);
        tmp_slice_source_1 = par_s;
        CHECK_OBJECT(var_i);
        tmp_slice_lower_1 = var_i;
        CHECK_OBJECT(var_i);
        tmp_left_name_3 = var_i;
        CHECK_OBJECT(var_max_unencoded);
        tmp_right_name_3 = var_max_unencoded;
        tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_slice_upper_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_4 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
        Py_DECREF(tmp_slice_upper_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_298d40a4a1f196fbd0b0030dafadcb96->m_frame.f_lineno = 96;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_298d40a4a1f196fbd0b0030dafadcb96->m_frame.f_lineno = 96;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_unicode_plain_ascii_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_enc;
            var_enc = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(var_enc);
        tmp_source_name_1 = var_enc;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_endswith);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NL);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43721 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_5 = tmp_mvar_value_3;
        frame_298d40a4a1f196fbd0b0030dafadcb96->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_eol);
        tmp_compexpr_left_1 = par_eol;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NL);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43721 ], 31, 0);
            exception_tb = NULL;

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_4;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_4;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_2;
            PyObject *tmp_right_name_4;
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = -1;
            CHECK_OBJECT(var_enc);
            tmp_slice_source_2 = var_enc;
            tmp_left_name_4 = LOOKUP_INDEX_SLICE(tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
            if (tmp_left_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_eol);
            tmp_right_name_4 = par_eol;
            tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
            Py_DECREF(tmp_left_name_4);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_enc;
                assert(old != NULL);
                var_enc = tmp_assign_source_7;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_encvec);
        tmp_called_instance_2 = var_encvec;
        CHECK_OBJECT(var_enc);
        tmp_args_element_name_6 = var_enc;
        frame_298d40a4a1f196fbd0b0030dafadcb96->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_name_6};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 93;
        type_description_1 = "ooooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT(var_encvec);
        tmp_args_element_name_7 = var_encvec;
        frame_298d40a4a1f196fbd0b0030dafadcb96->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_join, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_298d40a4a1f196fbd0b0030dafadcb96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_298d40a4a1f196fbd0b0030dafadcb96);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_298d40a4a1f196fbd0b0030dafadcb96);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_298d40a4a1f196fbd0b0030dafadcb96, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_298d40a4a1f196fbd0b0030dafadcb96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_298d40a4a1f196fbd0b0030dafadcb96, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_298d40a4a1f196fbd0b0030dafadcb96,
        type_description_1,
        par_s,
        par_maxlinelen,
        par_eol,
        var_i,
        var_max_unencoded,
        var_encvec,
        var_enc
    );


    // Release cached frame.
    if (frame_298d40a4a1f196fbd0b0030dafadcb96 == cache_frame_298d40a4a1f196fbd0b0030dafadcb96) {
        Py_DECREF(frame_298d40a4a1f196fbd0b0030dafadcb96);
    }
    cache_frame_298d40a4a1f196fbd0b0030dafadcb96 = NULL;

    assertFrameObject(frame_298d40a4a1f196fbd0b0030dafadcb96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$base64mime$$$function_3_body_encode);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_max_unencoded);
    var_max_unencoded = NULL;

    Py_XDECREF(var_encvec);
    var_encvec = NULL;

    Py_XDECREF(var_enc);
    var_enc = NULL;

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

    Py_XDECREF(var_max_unencoded);
    var_max_unencoded = NULL;

    Py_XDECREF(var_encvec);
    var_encvec = NULL;

    Py_XDECREF(var_enc);
    var_enc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$base64mime$$$function_3_body_encode);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_maxlinelen);
    Py_DECREF(par_maxlinelen);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_eol);
    Py_DECREF(par_eol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_maxlinelen);
    Py_DECREF(par_maxlinelen);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_eol);
    Py_DECREF(par_eol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$base64mime$$$function_4_decode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[0];
    struct Nuitka_FrameObject *frame_7c2bf13d8fdfc96f96d8210e7ed500de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c2bf13d8fdfc96f96d8210e7ed500de = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_7c2bf13d8fdfc96f96d8210e7ed500de, codeobj_7c2bf13d8fdfc96f96d8210e7ed500de, module_future$backports$email$base64mime, sizeof(void *));
    frame_7c2bf13d8fdfc96f96d8210e7ed500de = cache_frame_7c2bf13d8fdfc96f96d8210e7ed500de;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7c2bf13d8fdfc96f96d8210e7ed500de);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7c2bf13d8fdfc96f96d8210e7ed500de) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_string);
        tmp_operand_name_1 = par_string;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_bytes);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 41164 ], 34, 0);
                exception_tb = NULL;

                exception_lineno = 111;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_7c2bf13d8fdfc96f96d8210e7ed500de->m_frame.f_lineno = 111;
            tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT(par_string);
            tmp_isinstance_inst_1 = par_string;
            tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_instance_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_a2b_base64);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_a2b_base64);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 43752 ], 39, 0);
                    exception_tb = NULL;

                    exception_lineno = 113;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                CHECK_OBJECT(par_string);
                tmp_called_instance_1 = par_string;
                frame_7c2bf13d8fdfc96f96d8210e7ed500de->m_frame.f_lineno = 113;
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_unicode_digest_0fb3f57013d21cde8ac4f9e3be987cc2_tuple, 0));

                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                frame_7c2bf13d8fdfc96f96d8210e7ed500de->m_frame.f_lineno = 113;
                tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_a2b_base64);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_a2b_base64);
                }

                if (tmp_mvar_value_3 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 43752 ], 39, 0);
                    exception_tb = NULL;

                    exception_lineno = 115;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_3;
                CHECK_OBJECT(par_string);
                tmp_args_element_name_2 = par_string;
                frame_7c2bf13d8fdfc96f96d8210e7ed500de->m_frame.f_lineno = 115;
                tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7c2bf13d8fdfc96f96d8210e7ed500de);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7c2bf13d8fdfc96f96d8210e7ed500de);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7c2bf13d8fdfc96f96d8210e7ed500de);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c2bf13d8fdfc96f96d8210e7ed500de, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_7c2bf13d8fdfc96f96d8210e7ed500de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c2bf13d8fdfc96f96d8210e7ed500de, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7c2bf13d8fdfc96f96d8210e7ed500de,
        type_description_1,
        par_string
    );


    // Release cached frame.
    if (frame_7c2bf13d8fdfc96f96d8210e7ed500de == cache_frame_7c2bf13d8fdfc96f96d8210e7ed500de) {
        Py_DECREF(frame_7c2bf13d8fdfc96f96d8210e7ed500de);
    }
    cache_frame_7c2bf13d8fdfc96f96d8210e7ed500de = NULL;

    assertFrameObject(frame_7c2bf13d8fdfc96f96d8210e7ed500de);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$base64mime$$$function_4_decode);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_1_header_length() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_1_header_length,
        const_str_plain_header_length,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2a2b397b37da31ec003e28e62b450a58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_2f077fb247b5c663b5b646d27ee2b7c0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_2_header_encode(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_2_header_encode,
        const_str_plain_header_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c63f069c7e46ac6bcf9d766b9b08803a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_6ef73059ff7a75ac16db97ed10100cd2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_3_body_encode(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_3_body_encode,
        const_str_plain_body_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_298d40a4a1f196fbd0b0030dafadcb96,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_ed177ae0b7f6918622a6592157d34d2a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_4_decode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_4_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7c2bf13d8fdfc96f96d8210e7ed500de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_54076a9648667c29f0457044be51e1ff,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports$email$base64mime =
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

function_impl_code functable_future$backports$email$base64mime[] = {
    impl_future$backports$email$base64mime$$$function_1_header_length,
    impl_future$backports$email$base64mime$$$function_2_header_encode,
    impl_future$backports$email$base64mime$$$function_3_body_encode,
    impl_future$backports$email$base64mime$$$function_4_decode,
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

    function_impl_code *current = functable_future$backports$email$base64mime;
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

    if (offset > sizeof(functable_future$backports$email$base64mime) || offset < 0) {
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
        functable_future$backports$email$base64mime[offset],
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
        module_future$backports$email$base64mime,
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
PyObject *modulecode_future$backports$email$base64mime(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$backports$email$base64mime;
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
    PRINT_STRING("future.backports.email.base64mime: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email.base64mime: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email.base64mime: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$backports$email$base64mime\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports$email$base64mime = Py_InitModule4(
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
    mdef_future$backports$email$base64mime.m_name = module_full_name;
    module_future$backports$email$base64mime = PyModule_Create(&mdef_future$backports$email$base64mime);
#endif

    moduledict_future$backports$email$base64mime = MODULE_DICT(module_future$backports$email$base64mime);

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
        moduledict_future$backports$email$base64mime,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$backports$email$base64mime,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$backports$email$base64mime,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email$base64mime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email$base64mime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$backports$email$base64mime);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$backports$email$base64mime);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2568158c08915aaaf1fcc60126e8db43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_digest_b7e2b4a95526d60d232ef26fa928c066;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_2568158c08915aaaf1fcc60126e8db43 = MAKE_MODULE_FRAME(codeobj_2568158c08915aaaf1fcc60126e8db43, module_future$backports$email$base64mime);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_2568158c08915aaaf1fcc60126e8db43);
    assert(Py_REFCNT(frame_2568158c08915aaaf1fcc60126e8db43) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_2568158c08915aaaf1fcc60126e8db43->m_frame.f_lineno = 26;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        frame_2568158c08915aaaf1fcc60126e8db43->m_frame.f_lineno = 27;
        tmp_import_name_from_2 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_2 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_division);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_3;
        frame_2568158c08915aaaf1fcc60126e8db43->m_frame.f_lineno = 28;
        tmp_import_name_from_3 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_3 == NULL));
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_absolute_import);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email$base64mime;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_range_tuple;
        tmp_level_name_1 = const_int_0;
        frame_2568158c08915aaaf1fcc60126e8db43->m_frame.f_lineno = 29;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_range);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
        tmp_globals_name_2 = (PyObject *)moduledict_future$backports$email$base64mime;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_bytes_tuple;
        tmp_level_name_2 = const_int_0;
        frame_2568158c08915aaaf1fcc60126e8db43->m_frame.f_lineno = 30;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_bytes);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY(const_list_4e5537aecf97a87b09ef6010c6e3f466_list);
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_base64;
        tmp_globals_name_3 = (PyObject *)moduledict_future$backports$email$base64mime;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_b64encode_tuple;
        tmp_level_name_3 = const_int_0;
        frame_2568158c08915aaaf1fcc60126e8db43->m_frame.f_lineno = 42;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_b64encode);
        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_9);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2568158c08915aaaf1fcc60126e8db43);
#endif
    popFrameStack();

    assertFrameObject(frame_2568158c08915aaaf1fcc60126e8db43);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2568158c08915aaaf1fcc60126e8db43);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_2568158c08915aaaf1fcc60126e8db43, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_2568158c08915aaaf1fcc60126e8db43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2568158c08915aaaf1fcc60126e8db43, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_binascii;
        tmp_globals_name_4 = (PyObject *)moduledict_future$backports$email$base64mime;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple;
        tmp_level_name_4 = const_int_0;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_b2a_base64);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b2a_base64, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_a2b_base64);
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_a2b_base64, tmp_assign_source_12);
    }
    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_unicode_digest_7ca129d2d421fe965ad48cbb290b579b;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_CRLF, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_unicode_newline;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_unicode_empty;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_pos_7;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_MISC_LEN, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_1_header_length();



        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_header_length, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_unicode_digest_20861594150da1e43b5ee3f86b9deef6_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_18 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_2_header_encode(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_header_encode, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_tuple_element_1 = const_int_pos_76;
        tmp_defaults_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_1);
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NL);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_tuple_element_1 = tmp_mvar_value_1;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_1);
        tmp_assign_source_19 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_3_body_encode(tmp_defaults_2);



        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_body_encode, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_4_decode();



        UPDATE_STRING_DICT1(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decode, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decode);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_decode);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assign_source_21 = tmp_mvar_value_2;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_body_decode, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decode);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_decode);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_assign_source_22 = tmp_mvar_value_3;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decodestring, tmp_assign_source_22);
    }

    return module_future$backports$email$base64mime;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
