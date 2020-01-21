/* Generated code for Python module 'cryptography.hazmat.primitives.asymmetric.x448'
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

/* The "_module_cryptography$hazmat$primitives$asymmetric$x448" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$x448;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$x448;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_private_bytes;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain__Reasons;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
extern PyObject *const_str_plain_x448_supported;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_backend_tuple;
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
extern PyObject *const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple;
extern PyObject *const_str_plain_from_private_bytes;
extern PyObject *const_str_digest_fd2c91f8c4fd532166957eb31c19c9eb;
extern PyObject *const_str_plain_cls;
extern PyObject *const_tuple_str_plain_self_str_plain_peer_public_key_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_fa7149025065d4987e1e8c45d72f2516;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_exchange;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_UnsupportedAlgorithm;
extern PyObject *const_str_plain_X448PrivateKey;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_backend;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_object;
extern PyObject *const_tuple_str_plain_cls_str_plain_backend_tuple;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_x448_load_private_bytes;
extern PyObject *const_str_plain_generate;
extern PyObject *const_str_plain_X448PublicKey;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_x448_generate_key;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_digest_e5da453eec06bc74f49160d873ea344d;
extern PyObject *const_str_plain_from_public_bytes;
extern PyObject *const_str_plain_public_bytes;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_x448_load_public_bytes;
extern PyObject *const_str_plain_encryption_algorithm;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_ede3571e9144b3be34f4244ff26e2f38;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_peer_public_key;
extern PyObject *const_str_digest_1e7ea53eea340bc9447121d62227119f;
extern PyObject *const_str_digest_5b3cd79718c9aecf40b16c2ee5af53ae;
extern PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_8a21cfaaeb642017799c0e29973530da;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM;
extern PyObject *const_str_plain_ABCMeta;
extern PyObject *const_str_plain_public_key;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_fa7149025065d4987e1e8c45d72f2516 = UNSTREAM_STRING(&constant_bin[ 605387 ], 49, 0);
    const_str_digest_ede3571e9144b3be34f4244ff26e2f38 = UNSTREAM_STRING(&constant_bin[ 605436 ], 55, 0);
    const_str_digest_8a21cfaaeb642017799c0e29973530da = UNSTREAM_STRING(&constant_bin[ 605491 ], 49, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$x448(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8631dbc94f697c6f3a79f734f9fe4fb7;
static PyCodeObject *codeobj_6c080eafec88853e6f0a547b07b2193b;
static PyCodeObject *codeobj_7c74435d8c3905776b8659d59bae7736;
static PyCodeObject *codeobj_65004c5ada2544a1eeec9b450814cff9;
static PyCodeObject *codeobj_b12b77146a0b34661b7352573c64d5b5;
static PyCodeObject *codeobj_1c4186d8f826935fc075242aa0bd386a;
static PyCodeObject *codeobj_e18f431cdf7875303a8e2494af4e546f;
static PyCodeObject *codeobj_e279c0197fd494c5c3e6489106e8c02d;
static PyCodeObject *codeobj_ec09dcde0b6faa2b9106051d641b6a31;
static PyCodeObject *codeobj_9a0b393b1aeb5dd8c4b5a3f5ba9ac1af;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_fa7149025065d4987e1e8c45d72f2516);
    codeobj_8631dbc94f697c6f3a79f734f9fe4fb7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_ede3571e9144b3be34f4244ff26e2f38, const_tuple_empty, 0, 0, 0);
    codeobj_6c080eafec88853e6f0a547b07b2193b = MAKE_CODEOBJECT(module_filename_obj, 35, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_X448PrivateKey, const_tuple_empty, 0, 0, 0);
    codeobj_7c74435d8c3905776b8659d59bae7736 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_X448PublicKey, const_tuple_empty, 0, 0, 0);
    codeobj_65004c5ada2544a1eeec9b450814cff9 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_exchange, const_tuple_str_plain_self_str_plain_peer_public_key_tuple, 2, 0, 0);
    codeobj_b12b77146a0b34661b7352573c64d5b5 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_from_private_bytes, const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 2, 0, 0);
    codeobj_1c4186d8f826935fc075242aa0bd386a = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_from_public_bytes, const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 2, 0, 0);
    codeobj_e18f431cdf7875303a8e2494af4e546f = MAKE_CODEOBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_generate, const_tuple_str_plain_cls_str_plain_backend_tuple, 1, 0, 0);
    codeobj_e279c0197fd494c5c3e6489106e8c02d = MAKE_CODEOBJECT(module_filename_obj, 63, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_private_bytes, const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, 4, 0, 0);
    codeobj_ec09dcde0b6faa2b9106051d641b6a31 = MAKE_CODEOBJECT(module_filename_obj, 27, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_public_bytes, const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, 3, 0, 0);
    codeobj_9a0b393b1aeb5dd8c4b5a3f5ba9ac1af = MAKE_CODEOBJECT(module_filename_obj, 57, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_public_key, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_2_public_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_5_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_6_private_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_7_exchange();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_1c4186d8f826935fc075242aa0bd386a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1c4186d8f826935fc075242aa0bd386a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_1c4186d8f826935fc075242aa0bd386a, codeobj_1c4186d8f826935fc075242aa0bd386a, module_cryptography$hazmat$primitives$asymmetric$x448, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_1c4186d8f826935fc075242aa0bd386a = cache_frame_1c4186d8f826935fc075242aa0bd386a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c4186d8f826935fc075242aa0bd386a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c4186d8f826935fc075242aa0bd386a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x448;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_1c4186d8f826935fc075242aa0bd386a->m_frame.f_lineno = 18;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_1 = var_backend;
        frame_1c4186d8f826935fc075242aa0bd386a->m_frame.f_lineno = 19;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_x448_supported);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
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
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18283 ], 49, 0);
                exception_tb = NULL;

                exception_lineno = 20;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_args_element_name_1 = const_str_digest_8a21cfaaeb642017799c0e29973530da;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain__Reasons);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21484 ], 37, 0);
                exception_tb = NULL;

                exception_lineno = 22;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_1c4186d8f826935fc075242aa0bd386a->m_frame.f_lineno = 20;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_args_element_name_2);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 20;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_2 = var_backend;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_3 = par_data;
        frame_1c4186d8f826935fc075242aa0bd386a->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_x448_load_public_bytes, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c4186d8f826935fc075242aa0bd386a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c4186d8f826935fc075242aa0bd386a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c4186d8f826935fc075242aa0bd386a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c4186d8f826935fc075242aa0bd386a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1c4186d8f826935fc075242aa0bd386a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c4186d8f826935fc075242aa0bd386a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c4186d8f826935fc075242aa0bd386a,
        type_description_1,
        par_cls,
        par_data,
        var_backend
    );


    // Release cached frame.
    if (frame_1c4186d8f826935fc075242aa0bd386a == cache_frame_1c4186d8f826935fc075242aa0bd386a) {
        Py_DECREF(frame_1c4186d8f826935fc075242aa0bd386a);
    }
    cache_frame_1c4186d8f826935fc075242aa0bd386a = NULL;

    assertFrameObject(frame_1c4186d8f826935fc075242aa0bd386a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_e18f431cdf7875303a8e2494af4e546f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e18f431cdf7875303a8e2494af4e546f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e18f431cdf7875303a8e2494af4e546f, codeobj_e18f431cdf7875303a8e2494af4e546f, module_cryptography$hazmat$primitives$asymmetric$x448, sizeof(void *)+sizeof(void *));
    frame_e18f431cdf7875303a8e2494af4e546f = cache_frame_e18f431cdf7875303a8e2494af4e546f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e18f431cdf7875303a8e2494af4e546f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e18f431cdf7875303a8e2494af4e546f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x448;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_e18f431cdf7875303a8e2494af4e546f->m_frame.f_lineno = 38;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_1 = var_backend;
        frame_e18f431cdf7875303a8e2494af4e546f->m_frame.f_lineno = 39;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_x448_supported);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
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
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18283 ], 49, 0);
                exception_tb = NULL;

                exception_lineno = 40;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_args_element_name_1 = const_str_digest_8a21cfaaeb642017799c0e29973530da;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain__Reasons);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21484 ], 37, 0);
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_e18f431cdf7875303a8e2494af4e546f->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_args_element_name_2);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 40;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_2 = var_backend;
        frame_e18f431cdf7875303a8e2494af4e546f->m_frame.f_lineno = 44;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_x448_generate_key);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e18f431cdf7875303a8e2494af4e546f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e18f431cdf7875303a8e2494af4e546f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e18f431cdf7875303a8e2494af4e546f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e18f431cdf7875303a8e2494af4e546f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e18f431cdf7875303a8e2494af4e546f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e18f431cdf7875303a8e2494af4e546f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e18f431cdf7875303a8e2494af4e546f,
        type_description_1,
        par_cls,
        var_backend
    );


    // Release cached frame.
    if (frame_e18f431cdf7875303a8e2494af4e546f == cache_frame_e18f431cdf7875303a8e2494af4e546f) {
        Py_DECREF(frame_e18f431cdf7875303a8e2494af4e546f);
    }
    cache_frame_e18f431cdf7875303a8e2494af4e546f = NULL;

    assertFrameObject(frame_e18f431cdf7875303a8e2494af4e546f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_backend = NULL;
    struct Nuitka_FrameObject *frame_b12b77146a0b34661b7352573c64d5b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b12b77146a0b34661b7352573c64d5b5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b12b77146a0b34661b7352573c64d5b5, codeobj_b12b77146a0b34661b7352573c64d5b5, module_cryptography$hazmat$primitives$asymmetric$x448, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b12b77146a0b34661b7352573c64d5b5 = cache_frame_b12b77146a0b34661b7352573c64d5b5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b12b77146a0b34661b7352573c64d5b5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b12b77146a0b34661b7352573c64d5b5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x448;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_1 = const_int_0;
        frame_b12b77146a0b34661b7352573c64d5b5->m_frame.f_lineno = 48;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_backend);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_backend == NULL);
        var_backend = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_1 = var_backend;
        frame_b12b77146a0b34661b7352573c64d5b5->m_frame.f_lineno = 49;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_x448_supported);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18283 ], 49, 0);
                exception_tb = NULL;

                exception_lineno = 50;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_args_element_name_1 = const_str_digest_8a21cfaaeb642017799c0e29973530da;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain__Reasons);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21484 ], 37, 0);
                exception_tb = NULL;

                exception_lineno = 52;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_b12b77146a0b34661b7352573c64d5b5->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_args_element_name_2);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 50;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_backend);
        tmp_called_instance_2 = var_backend;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_3 = par_data;
        frame_b12b77146a0b34661b7352573c64d5b5->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_x448_load_private_bytes, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b12b77146a0b34661b7352573c64d5b5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b12b77146a0b34661b7352573c64d5b5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b12b77146a0b34661b7352573c64d5b5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b12b77146a0b34661b7352573c64d5b5, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b12b77146a0b34661b7352573c64d5b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b12b77146a0b34661b7352573c64d5b5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b12b77146a0b34661b7352573c64d5b5,
        type_description_1,
        par_cls,
        par_data,
        var_backend
    );


    // Release cached frame.
    if (frame_b12b77146a0b34661b7352573c64d5b5 == cache_frame_b12b77146a0b34661b7352573c64d5b5) {
        Py_DECREF(frame_b12b77146a0b34661b7352573c64d5b5);
    }
    cache_frame_b12b77146a0b34661b7352573c64d5b5 = NULL;

    assertFrameObject(frame_b12b77146a0b34661b7352573c64d5b5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backend);
    Py_DECREF(var_backend);
    var_backend = NULL;

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

    Py_XDECREF(var_backend);
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes,
        const_str_plain_from_public_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c4186d8f826935fc075242aa0bd386a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x448,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_2_public_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ec09dcde0b6faa2b9106051d641b6a31,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x448,
        const_str_digest_1e7ea53eea340bc9447121d62227119f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate,
        const_str_plain_generate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e18f431cdf7875303a8e2494af4e546f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x448,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes,
        const_str_plain_from_private_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b12b77146a0b34661b7352573c64d5b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x448,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_5_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9a0b393b1aeb5dd8c4b5a3f5ba9ac1af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x448,
        const_str_digest_1e7ea53eea340bc9447121d62227119f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_6_private_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_private_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e279c0197fd494c5c3e6489106e8c02d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x448,
        const_str_digest_e5da453eec06bc74f49160d873ea344d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_7_exchange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_exchange,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_65004c5ada2544a1eeec9b450814cff9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x448,
        const_str_digest_5b3cd79718c9aecf40b16c2ee5af53ae,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$asymmetric$x448 =
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

function_impl_code functable_cryptography$hazmat$primitives$asymmetric$x448[] = {
    impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes,
    NULL,
    impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate,
    impl_cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes,
    NULL,
    NULL,
    NULL,
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

    function_impl_code *current = functable_cryptography$hazmat$primitives$asymmetric$x448;
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

    if (offset > sizeof(functable_cryptography$hazmat$primitives$asymmetric$x448) || offset < 0) {
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
        functable_cryptography$hazmat$primitives$asymmetric$x448[offset],
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
        module_cryptography$hazmat$primitives$asymmetric$x448,
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
PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x448(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_cryptography$hazmat$primitives$asymmetric$x448;
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
    PRINT_STRING("cryptography.hazmat.primitives.asymmetric.x448: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.asymmetric.x448: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.asymmetric.x448: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$primitives$asymmetric$x448\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$asymmetric$x448 = Py_InitModule4(
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
    mdef_cryptography$hazmat$primitives$asymmetric$x448.m_name = module_full_name;
    module_cryptography$hazmat$primitives$asymmetric$x448 = PyModule_Create(&mdef_cryptography$hazmat$primitives$asymmetric$x448);
#endif

    moduledict_cryptography$hazmat$primitives$asymmetric$x448 = MODULE_DICT(module_cryptography$hazmat$primitives$asymmetric$x448);

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
        moduledict_cryptography$hazmat$primitives$asymmetric$x448,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$x448,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$x448,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$x448,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$x448,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$asymmetric$x448);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_cryptography$hazmat$primitives$asymmetric$x448);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_8631dbc94f697c6f3a79f734f9fe4fb7;
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
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$x448_15 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_7c74435d8c3905776b8659d59bae7736_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c74435d8c3905776b8659d59bae7736_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$x448_35 = NULL;
    struct Nuitka_FrameObject *frame_6c080eafec88853e6f0a547b07b2193b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c080eafec88853e6f0a547b07b2193b_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_8631dbc94f697c6f3a79f734f9fe4fb7 = MAKE_MODULE_FRAME(codeobj_8631dbc94f697c6f3a79f734f9fe4fb7, module_cryptography$hazmat$primitives$asymmetric$x448);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8631dbc94f697c6f3a79f734f9fe4fb7);
    assert(Py_REFCNT(frame_8631dbc94f697c6f3a79f734f9fe4fb7) == 2);

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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
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
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6);
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_abc;
        tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x448;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 7;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_six;
        tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x448;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_82e5b7f1075745a8638e06059354d03c;
        tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x448;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
        tmp_level_name_3 = const_int_0;
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 11;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_UnsupportedAlgorithm);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain__Reasons);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain__Reasons, tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$x448_15 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_fd2c91f8c4fd532166957eb31c19c9eb;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_15, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_7c74435d8c3905776b8659d59bae7736_2, codeobj_7c74435d8c3905776b8659d59bae7736, module_cryptography$hazmat$primitives$asymmetric$x448, 0);
        frame_7c74435d8c3905776b8659d59bae7736_2 = cache_frame_7c74435d8c3905776b8659d59bae7736_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7c74435d8c3905776b8659d59bae7736_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7c74435d8c3905776b8659d59bae7736_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_classmethod_arg_1;
            tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_1_from_public_bytes();



            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_15, const_str_plain_from_public_bytes, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 27;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_2_public_bytes();



            frame_7c74435d8c3905776b8659d59bae7736_2->m_frame.f_lineno = 27;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_15, const_str_plain_public_bytes, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7c74435d8c3905776b8659d59bae7736_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7c74435d8c3905776b8659d59bae7736_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7c74435d8c3905776b8659d59bae7736_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_7c74435d8c3905776b8659d59bae7736_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7c74435d8c3905776b8659d59bae7736_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_7c74435d8c3905776b8659d59bae7736_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_7c74435d8c3905776b8659d59bae7736_2 == cache_frame_7c74435d8c3905776b8659d59bae7736_2) {
            Py_DECREF(frame_7c74435d8c3905776b8659d59bae7736_2);
        }
        cache_frame_7c74435d8c3905776b8659d59bae7736_2 = NULL;

        assertFrameObject(frame_7c74435d8c3905776b8659d59bae7736_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_assign_source_12 = locals_cryptography$hazmat$primitives$asymmetric$x448_15;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$x448_15);
        locals_cryptography$hazmat$primitives$asymmetric$x448_15 = NULL;
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

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$x448_15);
        locals_cryptography$hazmat$primitives$asymmetric$x448_15 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448);
        return NULL;
        outline_exception_1:;
        exception_lineno = 15;
        goto try_except_handler_3;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
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


            exception_lineno = 15;

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
        tmp_assign_source_13 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_13);
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_2 = const_str_plain_X448PublicKey;
        tmp_args_element_name_3 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_4 = tmp_class_creation_1__class_dict;
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 14;

            goto try_except_handler_3;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_add_metaclass);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 14;

            goto try_except_handler_3;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_ABCMeta);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 14;

            goto try_except_handler_3;
        }
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 14;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_args_element_name_6 = tmp_class_creation_1__class;
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 14;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert(old != NULL);
            tmp_class_creation_1__class = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
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

    Py_XDECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;

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
    try_end_3:;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_16 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_X448PublicKey, tmp_assign_source_16);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_cryptography$hazmat$primitives$asymmetric$x448_35 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_fd2c91f8c4fd532166957eb31c19c9eb;
        tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_35, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_6c080eafec88853e6f0a547b07b2193b_3, codeobj_6c080eafec88853e6f0a547b07b2193b, module_cryptography$hazmat$primitives$asymmetric$x448, 0);
        frame_6c080eafec88853e6f0a547b07b2193b_3 = cache_frame_6c080eafec88853e6f0a547b07b2193b_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6c080eafec88853e6f0a547b07b2193b_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6c080eafec88853e6f0a547b07b2193b_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_classmethod_arg_2;
            tmp_classmethod_arg_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_3_generate();



            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_35, const_str_plain_generate, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_classmethod_arg_3;
            tmp_classmethod_arg_3 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_4_from_private_bytes();



            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_35, const_str_plain_from_private_bytes, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 57;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            tmp_args_element_name_7 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_5_public_key();



            frame_6c080eafec88853e6f0a547b07b2193b_3->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = {tmp_args_element_name_7};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_35, const_str_plain_public_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 63;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_3 = tmp_mvar_value_5;
            tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_6_private_bytes();



            frame_6c080eafec88853e6f0a547b07b2193b_3->m_frame.f_lineno = 63;
            {
                PyObject *call_args[] = {tmp_args_element_name_8};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_35, const_str_plain_private_bytes, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_9;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_abc);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
                exception_tb = NULL;

                exception_lineno = 69;

                goto frame_exception_exit_3;
            }

            tmp_called_instance_4 = tmp_mvar_value_6;
            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x448$$$function_7_exchange();



            frame_6c080eafec88853e6f0a547b07b2193b_3->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = {tmp_args_element_name_9};
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_abstractmethod, call_args);
            }

            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_cryptography$hazmat$primitives$asymmetric$x448_35, const_str_plain_exchange, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6c080eafec88853e6f0a547b07b2193b_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6c080eafec88853e6f0a547b07b2193b_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6c080eafec88853e6f0a547b07b2193b_3, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_6c080eafec88853e6f0a547b07b2193b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6c080eafec88853e6f0a547b07b2193b_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_6c080eafec88853e6f0a547b07b2193b_3,
            type_description_2
        );


        // Release cached frame.
        if (frame_6c080eafec88853e6f0a547b07b2193b_3 == cache_frame_6c080eafec88853e6f0a547b07b2193b_3) {
            Py_DECREF(frame_6c080eafec88853e6f0a547b07b2193b_3);
        }
        cache_frame_6c080eafec88853e6f0a547b07b2193b_3 = NULL;

        assertFrameObject(frame_6c080eafec88853e6f0a547b07b2193b_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        tmp_assign_source_17 = locals_cryptography$hazmat$primitives$asymmetric$x448_35;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448);
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$x448_35);
        locals_cryptography$hazmat$primitives$asymmetric$x448_35 = NULL;
        goto outline_result_2;
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

        Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$x448_35);
        locals_cryptography$hazmat$primitives$asymmetric$x448_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(cryptography$hazmat$primitives$asymmetric$x448);
        return NULL;
        outline_exception_2:;
        exception_lineno = 35;
        goto try_except_handler_5;
        outline_result_2:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_dict_name_3 = tmp_class_creation_2__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_dict;
        tmp_key_name_4 = const_str_plain___metaclass__;
        tmp_assign_source_18 = DICT_GET_ITEM(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_18);
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_4 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_10 = const_str_plain_X448PrivateKey;
        tmp_args_element_name_11 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_12 = tmp_class_creation_2__class_dict;
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_six);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18489 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 34;

            goto try_except_handler_5;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_add_metaclass);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_abc);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_abc);
        }

        if (tmp_mvar_value_8 == NULL) {
            Py_DECREF(tmp_called_name_6);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18464 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 34;

            goto try_except_handler_5;
        }

        tmp_source_name_4 = tmp_mvar_value_8;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_ABCMeta);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 34;

            goto try_except_handler_5;
        }
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 34;
        tmp_called_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_args_element_name_14 = tmp_class_creation_2__class;
        frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame.f_lineno = 34;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert(old != NULL);
            tmp_class_creation_2__class = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    goto try_end_4;
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

    Py_XDECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;

    Py_XDECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8631dbc94f697c6f3a79f734f9fe4fb7);
#endif
    popFrameStack();

    assertFrameObject(frame_8631dbc94f697c6f3a79f734f9fe4fb7);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8631dbc94f697c6f3a79f734f9fe4fb7);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_8631dbc94f697c6f3a79f734f9fe4fb7, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8631dbc94f697c6f3a79f734f9fe4fb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8631dbc94f697c6f3a79f734f9fe4fb7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_21 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$x448, (Nuitka_StringObject *)const_str_plain_X448PrivateKey, tmp_assign_source_21);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class);
    Py_DECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;


    return module_cryptography$hazmat$primitives$asymmetric$x448;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
