/* Generated code for Python module 'future.builtins.newsuper'
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

/* The "_module_future$builtins$newsuper" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins$newsuper;
PyDictObject *moduledict_future$builtins$newsuper;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_13569ae8314b164bc170dddb7b597610;
extern PyObject *const_str_plain___get__;
static PyObject *const_list_str_plain_newsuper_list;
extern PyObject *const_str_plain_meth;
static PyObject *const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple;
static PyObject *const_dict_bf684948c9a3a3a41e8450cd0aa098f6;
static PyObject *const_str_digest_aa6f788861a7c8a6617e5fe5c9774d54;
extern PyObject *const_str_plain_fget;
static PyObject *const_str_plain_co_name;
extern PyObject *const_str_plain__SENTINEL;
extern PyObject *const_str_plain_mro;
extern PyObject *const_str_plain_PY3;
static PyObject *const_tuple_str_plain_args_str_plain_kwds_str_plain_nm_str_plain_f_tuple;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain_FunctionType;
static PyObject *const_str_digest_a7218ca331dc57c73b31ab0698b8228b;
extern PyObject *const_str_plain_types;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_newsuper;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_f_code;
extern PyObject *const_str_plain___func__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_co_varnames;
static PyObject *const_str_digest_a30c33ea9d17b62dfeabe26e476d2e8d;
static PyObject *const_str_digest_4d018927db300010e8bdcaf308694498;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_PY3_str_plain_PY26_tuple;
static PyObject *const_str_plain_framedepth;
static PyObject *const_str_digest_c45a696f69e33b77a718b412d02ec200;
static PyObject *const_tuple_str_plain_FunctionType_tuple;
extern PyObject *const_str_plain_func_code;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_type_AttributeError_type_RuntimeError_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain__getframe;
static PyObject *const_str_digest_15bce4212eb2e8d0fcdf615539816e6e;
extern PyObject *const_str_plain_super;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_typ;
static PyObject *const_str_plain_nm;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_superm;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain__builtin_super;
extern PyObject *const_int_0;
static PyObject *const_str_plain_type_or_obj;
static PyObject *const_tuple_type_IndexError_type_KeyError_tuple;
extern PyObject *const_str_plain_kwds;
extern PyObject *const_str_plain_args;
extern PyObject *const_tuple_type_AttributeError_type_TypeError_tuple;
extern PyObject *const_str_plain_f_locals;
extern PyObject *const_str_plain_PY26;
extern PyObject *const_str_plain___mro__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_13569ae8314b164bc170dddb7b597610 = UNSTREAM_STRING(&constant_bin[ 795953 ], 31, 0);
    const_list_str_plain_newsuper_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_newsuper_list, 0, const_str_plain_newsuper); Py_INCREF(const_str_plain_newsuper);
    const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple = PyTuple_New(6);
    const_str_plain_typ = UNSTREAM_STRING(&constant_bin[ 439 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 0, const_str_plain_typ); Py_INCREF(const_str_plain_typ);
    const_str_plain_type_or_obj = UNSTREAM_STRING(&constant_bin[ 795984 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 1, const_str_plain_type_or_obj); Py_INCREF(const_str_plain_type_or_obj);
    const_str_plain_framedepth = UNSTREAM_STRING(&constant_bin[ 795995 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 2, const_str_plain_framedepth); Py_INCREF(const_str_plain_framedepth);
    PyTuple_SET_ITEM(const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 3, const_str_plain_f); Py_INCREF(const_str_plain_f);
    PyTuple_SET_ITEM(const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 4, const_str_plain_mro); Py_INCREF(const_str_plain_mro);
    PyTuple_SET_ITEM(const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 5, const_str_plain_meth); Py_INCREF(const_str_plain_meth);
    const_dict_bf684948c9a3a3a41e8450cd0aa098f6 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_bf684948c9a3a3a41e8450cd0aa098f6, const_str_plain_framedepth, const_int_pos_2);
    assert(PyDict_Size(const_dict_bf684948c9a3a3a41e8450cd0aa098f6) == 1);
    const_str_digest_aa6f788861a7c8a6617e5fe5c9774d54 = UNSTREAM_STRING(&constant_bin[ 796005 ], 1128, 0);
    const_str_plain_co_name = UNSTREAM_STRING(&constant_bin[ 797133 ], 7, 1);
    const_tuple_str_plain_args_str_plain_kwds_str_plain_nm_str_plain_f_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_str_plain_args_str_plain_kwds_str_plain_nm_str_plain_f_tuple, 0, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_str_plain_args_str_plain_kwds_str_plain_nm_str_plain_f_tuple, 1, const_str_plain_kwds); Py_INCREF(const_str_plain_kwds);
    const_str_plain_nm = UNSTREAM_STRING(&constant_bin[ 49308 ], 2, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_args_str_plain_kwds_str_plain_nm_str_plain_f_tuple, 2, const_str_plain_nm); Py_INCREF(const_str_plain_nm);
    PyTuple_SET_ITEM(const_tuple_str_plain_args_str_plain_kwds_str_plain_nm_str_plain_f_tuple, 3, const_str_plain_f); Py_INCREF(const_str_plain_f);
    const_str_plain_FunctionType = UNSTREAM_STRING(&constant_bin[ 58239 ], 12, 1);
    const_str_digest_a7218ca331dc57c73b31ab0698b8228b = UNSTREAM_STRING(&constant_bin[ 797140 ], 27, 0);
    const_str_plain_f_code = UNSTREAM_STRING(&constant_bin[ 797167 ], 6, 1);
    const_str_plain_co_varnames = UNSTREAM_STRING(&constant_bin[ 797173 ], 11, 1);
    const_str_digest_a30c33ea9d17b62dfeabe26e476d2e8d = UNSTREAM_STRING(&constant_bin[ 797184 ], 33, 0);
    const_str_digest_4d018927db300010e8bdcaf308694498 = UNSTREAM_STRING(&constant_bin[ 797217 ], 38, 0);
    const_tuple_str_plain_PY3_str_plain_PY26_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_PY3_str_plain_PY26_tuple, 0, const_str_plain_PY3); Py_INCREF(const_str_plain_PY3);
    PyTuple_SET_ITEM(const_tuple_str_plain_PY3_str_plain_PY26_tuple, 1, const_str_plain_PY26); Py_INCREF(const_str_plain_PY26);
    const_str_digest_c45a696f69e33b77a718b412d02ec200 = UNSTREAM_STRING(&constant_bin[ 797255 ], 181, 0);
    const_tuple_str_plain_FunctionType_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_FunctionType_tuple, 0, const_str_plain_FunctionType); Py_INCREF(const_str_plain_FunctionType);
    const_tuple_type_AttributeError_type_RuntimeError_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_type_AttributeError_type_RuntimeError_tuple, 0, (PyObject *)PyExc_AttributeError); Py_INCREF((PyObject *)PyExc_AttributeError);
    PyTuple_SET_ITEM(const_tuple_type_AttributeError_type_RuntimeError_tuple, 1, (PyObject *)PyExc_RuntimeError); Py_INCREF((PyObject *)PyExc_RuntimeError);
    const_str_digest_15bce4212eb2e8d0fcdf615539816e6e = UNSTREAM_STRING(&constant_bin[ 797436 ], 39, 0);
    const_str_plain_superm = UNSTREAM_STRING(&constant_bin[ 797475 ], 6, 1);
    const_str_plain__builtin_super = UNSTREAM_STRING(&constant_bin[ 58280 ], 14, 1);
    const_tuple_type_IndexError_type_KeyError_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_type_IndexError_type_KeyError_tuple, 0, (PyObject *)PyExc_IndexError); Py_INCREF((PyObject *)PyExc_IndexError);
    PyTuple_SET_ITEM(const_tuple_type_IndexError_type_KeyError_tuple, 1, (PyObject *)PyExc_KeyError); Py_INCREF((PyObject *)PyExc_KeyError);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins$newsuper(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_84239b0e91655ef11db2a1f58381af6d;
static PyCodeObject *codeobj_952f5225d8fed0380f47557e084b1f1d;
static PyCodeObject *codeobj_507b39b61e094b7e313242cc19d0e701;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_a7218ca331dc57c73b31ab0698b8228b);
    codeobj_84239b0e91655ef11db2a1f58381af6d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_digest_a30c33ea9d17b62dfeabe26e476d2e8d, const_tuple_empty, 0, 0, 0);
    codeobj_952f5225d8fed0380f47557e084b1f1d = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_newsuper, const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 3, 0, 0);
    codeobj_507b39b61e094b7e313242cc19d0e701 = MAKE_CODEOBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_superm, const_tuple_str_plain_args_str_plain_kwds_str_plain_nm_str_plain_f_tuple, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_1_newsuper(PyObject *defaults);


static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_2_superm();


// The module function definitions.
static PyObject *impl_future$builtins$newsuper$$$function_1_newsuper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_typ = python_pars[0];
    PyObject *par_type_or_obj = python_pars[1];
    PyObject *par_framedepth = python_pars[2];
    PyObject *var_f = NULL;
    PyObject *var_mro = NULL;
    PyObject *var_meth = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__break_indicator = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_952f5225d8fed0380f47557e084b1f1d;
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
    bool tmp_result;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_952f5225d8fed0380f47557e084b1f1d = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_952f5225d8fed0380f47557e084b1f1d, codeobj_952f5225d8fed0380f47557e084b1f1d, module_future$builtins$newsuper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_952f5225d8fed0380f47557e084b1f1d = cache_frame_952f5225d8fed0380f47557e084b1f1d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_952f5225d8fed0380f47557e084b1f1d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_952f5225d8fed0380f47557e084b1f1d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_typ);
        tmp_compexpr_left_1 = par_typ;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38320 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
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
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_sys);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 3010 ], 32, 0);
                exception_tb = NULL;

                exception_lineno = 54;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT(par_framedepth);
            tmp_args_element_name_1 = par_framedepth;
            frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__getframe, call_args);
            }

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert(var_f == NULL);
            var_f = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(var_f);
            tmp_source_name_1 = var_f;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_f_locals);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_f);
            tmp_source_name_3 = var_f;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_f_code);
            if (tmp_source_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_1);

                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_co_varnames);
            Py_DECREF(tmp_source_name_2);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_1);

                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_subscript_name_2 = const_int_0;
            tmp_subscript_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
            Py_DECREF(tmp_subscribed_name_2);
            if (tmp_subscript_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_1);

                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            Py_DECREF(tmp_subscript_name_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = par_type_or_obj;
                assert(old != NULL);
                par_type_or_obj = tmp_assign_source_2;
                Py_DECREF(old);
            }

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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
        if (exception_keeper_tb_1 == NULL) {
            exception_keeper_tb_1 = MAKE_TRACEBACK(frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_1);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_1);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
        PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = const_tuple_type_IndexError_type_KeyError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oooooo";
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
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_15bce4212eb2e8d0fcdf615539816e6e;
                frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 60;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
                assert(!(tmp_raise_type_1 == NULL));
                exception_type = tmp_raise_type_1;
                exception_lineno = 60;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 56;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_952f5225d8fed0380f47557e084b1f1d->m_frame) frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
            branch_end_2:;
        }
        // End of try:
        try_end_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(par_type_or_obj);
            tmp_source_name_4 = par_type_or_obj;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain___mro__);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            assert(var_mro == NULL);
            var_mro = tmp_assign_source_3;
        }
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
        if (exception_keeper_tb_2 == NULL) {
            exception_keeper_tb_2 = MAKE_TRACEBACK(frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_2);
        } else if (exception_keeper_lineno_2 != 0) {
            exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_2);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
        PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_3 = const_tuple_type_AttributeError_type_RuntimeError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_source_name_6;
                CHECK_OBJECT(par_type_or_obj);
                tmp_source_name_6 = par_type_or_obj;
                tmp_source_name_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_6);
                if (tmp_source_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_1 = "oooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain___mro__);
                Py_DECREF(tmp_source_name_5);
                if (tmp_assign_source_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 67;
                    type_description_1 = "oooooo";
                    goto try_except_handler_4;
                }
                assert(var_mro == NULL);
                var_mro = tmp_assign_source_4;
            }
            goto try_end_3;
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

            // Preserve existing published exception.
            PRESERVE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
            if (exception_keeper_tb_3 == NULL) {
                exception_keeper_tb_3 = MAKE_TRACEBACK(frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_3);
            } else if (exception_keeper_lineno_3 != 0) {
                exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_3);
            }

            NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
            PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_4 = PyExc_AttributeError;
                tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    tmp_make_exception_arg_2 = const_str_digest_4d018927db300010e8bdcaf308694498;
                    frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 69;
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
                    assert(!(tmp_raise_type_2 == NULL));
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 69;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 66;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_952f5225d8fed0380f47557e084b1f1d->m_frame) frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
                branch_end_4:;
            }
            // End of try:
            try_end_3:;
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 62;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_952f5225d8fed0380f47557e084b1f1d->m_frame) frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
            branch_end_3:;
        }
        goto try_end_2;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$builtins$newsuper$$$function_1_newsuper);
        return NULL;
        // End of try:
        try_end_2:;
        {
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            if (var_mro == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "mro");
                exception_tb = NULL;

                exception_lineno = 75;
                type_description_1 = "oooooo";
                goto try_except_handler_5;
            }

            tmp_iter_arg_1 = var_mro;
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "oooooo";
                goto try_except_handler_5;
            }
            assert(tmp_for_loop_1__for_iterator == NULL);
            tmp_for_loop_1__for_iterator = tmp_assign_source_6;
        }
        // Tried code:
        loop_start_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_value_name_1;
            CHECK_OBJECT(tmp_for_loop_1__for_iterator);
            tmp_value_name_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_value_name_1);
            if (tmp_assign_source_7 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooo";
                exception_lineno = 75;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = exception_keeper_type_4;
            tmp_compexpr_right_5 = PyExc_StopIteration;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_4);
                Py_XDECREF(exception_keeper_value_4);
                Py_XDECREF(exception_keeper_tb_4);

                exception_lineno = 75;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                nuitka_bool tmp_assign_source_8;
                tmp_assign_source_8 = NUITKA_BOOL_TRUE;
                tmp_for_loop_1__break_indicator = tmp_assign_source_8;
            }
            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);
            goto loop_end_1;
            goto branch_end_5;
            branch_no_5:;
            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_6;
            branch_end_5:;
        }
        // End of try:
        try_end_4:;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_for_loop_1__iter_value);
            tmp_assign_source_9 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = par_typ;
                assert(old != NULL);
                par_typ = tmp_assign_source_9;
                Py_INCREF(par_typ);
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = Py_False;
            {
                PyObject *old = tmp_for_loop_2__break_indicator;
                tmp_for_loop_2__break_indicator = tmp_assign_source_10;
                Py_INCREF(tmp_for_loop_2__break_indicator);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(par_typ);
            tmp_source_name_7 = par_typ;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_source_name_7);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "oooooo";
                goto try_except_handler_8;
            }
            frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 77;
            tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_values);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "oooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "oooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_value_name_2;
            CHECK_OBJECT(tmp_for_loop_2__for_iterator);
            tmp_value_name_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_value_name_2);
            if (tmp_assign_source_12 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooo";
                exception_lineno = 77;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            tmp_compexpr_left_6 = exception_keeper_type_5;
            tmp_compexpr_right_6 = PyExc_StopIteration;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                Py_DECREF(exception_keeper_type_5);
                Py_XDECREF(exception_keeper_value_5);
                Py_XDECREF(exception_keeper_tb_5);

                exception_lineno = 77;
                type_description_1 = "oooooo";
                goto try_except_handler_9;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_13;
                tmp_assign_source_13 = Py_True;
                {
                    PyObject *old = tmp_for_loop_2__break_indicator;
                    assert(old != NULL);
                    tmp_for_loop_2__break_indicator = tmp_assign_source_13;
                    Py_INCREF(tmp_for_loop_2__break_indicator);
                    Py_DECREF(old);
                }

            }
            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);
            goto loop_end_2;
            goto branch_end_6;
            branch_no_6:;
            // Re-raise.
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto try_except_handler_9;
            branch_end_6:;
        }
        // End of try:
        try_end_5:;
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_for_loop_2__iter_value);
            tmp_assign_source_14 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_meth;
                var_meth = tmp_assign_source_14;
                Py_INCREF(var_meth);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_3:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_3;
            if (var_meth == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "meth");
                exception_tb = NULL;

                exception_lineno = 81;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
            }

            tmp_isinstance_inst_1 = var_meth;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_FunctionType);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionType);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58226 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 81;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_3;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
            }
            tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
            }
            tmp_operand_name_1 = (tmp_res == 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            goto loop_end_3;
            branch_no_7:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            if (var_meth == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "meth");
                exception_tb = NULL;

                exception_lineno = 82;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
            }

            tmp_isinstance_inst_2 = var_meth;
            tmp_isinstance_cls_2 = (PyObject *)&PyProperty_Type;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_source_name_8;
                if (var_meth == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "meth");
                    exception_tb = NULL;

                    exception_lineno = 86;
                    type_description_1 = "oooooo";
                    goto try_except_handler_11;
                }

                tmp_source_name_8 = var_meth;
                tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_fget);
                if (tmp_assign_source_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_1 = "oooooo";
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = var_meth;
                    var_meth = tmp_assign_source_15;
                    Py_XDECREF(old);
                }

            }
            goto branch_end_8;
            branch_no_8:;
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_source_name_9;
                if (var_meth == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "meth");
                    exception_tb = NULL;

                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto try_except_handler_12;
                }

                tmp_source_name_9 = var_meth;
                tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain___func__);
                if (tmp_assign_source_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_1 = "oooooo";
                    goto try_except_handler_12;
                }
                {
                    PyObject *old = var_meth;
                    var_meth = tmp_assign_source_16;
                    Py_XDECREF(old);
                }

            }
            goto try_end_6;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Preserve existing published exception.
            PRESERVE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
            if (exception_keeper_tb_6 == NULL) {
                exception_keeper_tb_6 = MAKE_TRACEBACK(frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_6);
            } else if (exception_keeper_lineno_6 != 0) {
                exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_6);
            }

            NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
            PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_7 = PyExc_AttributeError;
                tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_7, tmp_compexpr_right_7);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 90;
                    type_description_1 = "oooooo";
                    goto try_except_handler_11;
                }
                tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_9;
                } else {
                    goto branch_no_9;
                }
                branch_yes_9:;
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_args_element_name_3;
                    if (var_meth == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "meth");
                        exception_tb = NULL;

                        exception_lineno = 91;
                        type_description_1 = "oooooo";
                        goto try_except_handler_11;
                    }

                    tmp_called_instance_3 = var_meth;
                    CHECK_OBJECT(par_type_or_obj);
                    tmp_args_element_name_2 = par_type_or_obj;
                    CHECK_OBJECT(par_typ);
                    tmp_args_element_name_3 = par_typ;
                    frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 91;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                        tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain___get__, call_args);
                    }

                    if (tmp_assign_source_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;
                        type_description_1 = "oooooo";
                        goto try_except_handler_11;
                    }
                    {
                        PyObject *old = var_meth;
                        var_meth = tmp_assign_source_17;
                        Py_XDECREF(old);
                    }

                }
                goto branch_end_9;
                branch_no_9:;
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 88;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_952f5225d8fed0380f47557e084b1f1d->m_frame) frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooo";
                goto try_except_handler_11;
                branch_end_9:;
            }
            goto try_end_6;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE(future$builtins$newsuper$$$function_1_newsuper);
            return NULL;
            // End of try:
            try_end_6:;
            branch_end_8:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto try_except_handler_11;
        }
        goto loop_start_3;
        loop_end_3:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
        if (exception_keeper_tb_7 == NULL) {
            exception_keeper_tb_7 = MAKE_TRACEBACK(frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_7);
        } else if (exception_keeper_lineno_7 != 0) {
            exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_952f5225d8fed0380f47557e084b1f1d, exception_keeper_lineno_7);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
        PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_8 = const_tuple_type_AttributeError_type_TypeError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto try_except_handler_9;
            }
            tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
            branch_yes_10:;
            goto loop_start_2;
            goto branch_end_10;
            branch_no_10:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 80;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_952f5225d8fed0380f47557e084b1f1d->m_frame) frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooo";
            goto try_except_handler_9;
            branch_end_10:;
        }
        // End of try:
        try_end_7:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            if (var_meth == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "meth");
                exception_tb = NULL;

                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto try_except_handler_9;
            }

            tmp_source_name_10 = var_meth;
            tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_func_code);
            if (tmp_compexpr_left_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto try_except_handler_9;
            }
            CHECK_OBJECT(var_f);
            tmp_source_name_11 = var_f;
            tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_f_code);
            if (tmp_compexpr_right_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_9);

                exception_lineno = 94;
                type_description_1 = "oooooo";
                goto try_except_handler_9;
            }
            tmp_condition_result_11 = (tmp_compexpr_left_9 == tmp_compexpr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_compexpr_left_9);
            Py_DECREF(tmp_compexpr_right_9);
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            goto loop_end_2;
            branch_no_11:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto try_except_handler_9;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_8;
        // End of try:
        try_end_8:;
        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        {
            nuitka_bool tmp_condition_result_12;
            nuitka_bool tmp_compexpr_left_10;
            nuitka_bool tmp_compexpr_right_10;
            int tmp_truth_name_1;
            CHECK_OBJECT(tmp_for_loop_2__break_indicator);
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_for_loop_2__break_indicator);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "oooooo";
                goto try_except_handler_8;
            }
            tmp_compexpr_left_10 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_compexpr_right_10 = NUITKA_BOOL_TRUE;
            tmp_condition_result_12 = (tmp_compexpr_left_10 == tmp_compexpr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            branch_yes_12:;
            goto try_continue_handler_8;
            branch_no_12:;
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_for_loop_2__break_indicator);
        tmp_for_loop_2__break_indicator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_6;
        // try continue handler code:
        try_continue_handler_8:;
        CHECK_OBJECT((PyObject *)tmp_for_loop_2__break_indicator);
        Py_DECREF(tmp_for_loop_2__break_indicator);
        tmp_for_loop_2__break_indicator = NULL;

        goto loop_start_1;
        // End of try:
        try_end_9:;
        CHECK_OBJECT((PyObject *)tmp_for_loop_2__break_indicator);
        Py_DECREF(tmp_for_loop_2__break_indicator);
        tmp_for_loop_2__break_indicator = NULL;

        goto loop_end_1;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_10;
        // Exception handler code:
        try_except_handler_6:;
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

        goto try_except_handler_5;
        // End of try:
        try_end_10:;
        Py_XDECREF(tmp_for_loop_1__iter_value);
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
        Py_DECREF(tmp_for_loop_1__for_iterator);
        tmp_for_loop_1__for_iterator = NULL;

        {
            nuitka_bool tmp_condition_result_13;
            nuitka_bool tmp_compexpr_left_11;
            nuitka_bool tmp_compexpr_right_11;
            assert(tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_11 = tmp_for_loop_1__break_indicator;
            tmp_compexpr_right_11 = NUITKA_BOOL_TRUE;
            tmp_condition_result_13 = (tmp_compexpr_left_11 == tmp_compexpr_right_11) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
            branch_yes_13:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_13569ae8314b164bc170dddb7b597610;
                frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 100;
                tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_3);
                assert(!(tmp_raise_type_3 == NULL));
                exception_type = tmp_raise_type_3;
                exception_lineno = 100;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                goto try_except_handler_5;
            }
            branch_no_13:;
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_1;
        // End of try:
        try_end_11:;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(par_type_or_obj);
        tmp_compexpr_left_12 = par_type_or_obj;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 38320 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_12 = tmp_mvar_value_4;
        tmp_condition_result_14 = (tmp_compexpr_left_12 != tmp_compexpr_right_12) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__builtin_super);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_super);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58267 ], 43, 0);
                exception_tb = NULL;

                exception_lineno = 104;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_5;
            if (par_typ == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "typ");
                exception_tb = NULL;

                exception_lineno = 104;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = par_typ;
            CHECK_OBJECT(par_type_or_obj);
            tmp_args_element_name_5 = par_type_or_obj;
            frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_14:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__builtin_super);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_super);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 58267 ], 43, 0);
            exception_tb = NULL;

            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        if (par_typ == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "typ");
            exception_tb = NULL;

            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_typ;
        frame_952f5225d8fed0380f47557e084b1f1d->m_frame.f_lineno = 105;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_952f5225d8fed0380f47557e084b1f1d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_952f5225d8fed0380f47557e084b1f1d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_952f5225d8fed0380f47557e084b1f1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_952f5225d8fed0380f47557e084b1f1d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_952f5225d8fed0380f47557e084b1f1d,
        type_description_1,
        par_typ,
        par_type_or_obj,
        par_framedepth,
        var_f,
        var_mro,
        var_meth
    );


    // Release cached frame.
    if (frame_952f5225d8fed0380f47557e084b1f1d == cache_frame_952f5225d8fed0380f47557e084b1f1d) {
        Py_DECREF(frame_952f5225d8fed0380f47557e084b1f1d);
    }
    cache_frame_952f5225d8fed0380f47557e084b1f1d = NULL;

    assertFrameObject(frame_952f5225d8fed0380f47557e084b1f1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$builtins$newsuper$$$function_1_newsuper);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_f);
    var_f = NULL;

    CHECK_OBJECT((PyObject *)par_type_or_obj);
    Py_DECREF(par_type_or_obj);
    par_type_or_obj = NULL;

    Py_XDECREF(par_typ);
    par_typ = NULL;

    Py_XDECREF(var_mro);
    var_mro = NULL;

    Py_XDECREF(var_meth);
    var_meth = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_f);
    var_f = NULL;

    Py_XDECREF(par_type_or_obj);
    par_type_or_obj = NULL;

    Py_XDECREF(par_typ);
    par_typ = NULL;

    Py_XDECREF(var_mro);
    var_mro = NULL;

    Py_XDECREF(var_meth);
    var_meth = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$newsuper$$$function_1_newsuper);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_framedepth);
    Py_DECREF(par_framedepth);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_framedepth);
    Py_DECREF(par_framedepth);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$builtins$newsuper$$$function_2_superm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwds = python_pars[1];
    PyObject *var_nm = NULL;
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_507b39b61e094b7e313242cc19d0e701;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_507b39b61e094b7e313242cc19d0e701 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_507b39b61e094b7e313242cc19d0e701, codeobj_507b39b61e094b7e313242cc19d0e701, module_future$builtins$newsuper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_507b39b61e094b7e313242cc19d0e701 = cache_frame_507b39b61e094b7e313242cc19d0e701;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_507b39b61e094b7e313242cc19d0e701);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_507b39b61e094b7e313242cc19d0e701) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3010 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_507b39b61e094b7e313242cc19d0e701->m_frame.f_lineno = 109;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__getframe, &PyTuple_GET_ITEM(const_tuple_int_pos_1_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(var_f);
        tmp_source_name_2 = var_f;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_f_code);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_co_name);
        Py_DECREF(tmp_source_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_nm == NULL);
        var_nm = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_newsuper);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_newsuper);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 58310 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_kw_name_1 = PyDict_Copy(const_dict_bf684948c9a3a3a41e8450cd0aa098f6);
        frame_507b39b61e094b7e313242cc19d0e701->m_frame.f_lineno = 111;
        tmp_getattr_target_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_nm);
        tmp_getattr_attr_1 = var_nm;
        tmp_dircall_arg1_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwds);
        tmp_dircall_arg3_1 = par_kwds;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_507b39b61e094b7e313242cc19d0e701);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_507b39b61e094b7e313242cc19d0e701);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_507b39b61e094b7e313242cc19d0e701);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_507b39b61e094b7e313242cc19d0e701, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_507b39b61e094b7e313242cc19d0e701->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_507b39b61e094b7e313242cc19d0e701, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_507b39b61e094b7e313242cc19d0e701,
        type_description_1,
        par_args,
        par_kwds,
        var_nm,
        var_f
    );


    // Release cached frame.
    if (frame_507b39b61e094b7e313242cc19d0e701 == cache_frame_507b39b61e094b7e313242cc19d0e701) {
        Py_DECREF(frame_507b39b61e094b7e313242cc19d0e701);
    }
    cache_frame_507b39b61e094b7e313242cc19d0e701 = NULL;

    assertFrameObject(frame_507b39b61e094b7e313242cc19d0e701);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$builtins$newsuper$$$function_2_superm);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_nm);
    Py_DECREF(var_nm);
    var_nm = NULL;

    CHECK_OBJECT((PyObject *)var_f);
    Py_DECREF(var_f);
    var_f = NULL;

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

    Py_XDECREF(var_nm);
    var_nm = NULL;

    Py_XDECREF(var_f);
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$newsuper$$$function_2_superm);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwds);
    Py_DECREF(par_kwds);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwds);
    Py_DECREF(par_kwds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_1_newsuper(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$newsuper$$$function_1_newsuper,
        const_str_plain_newsuper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_952f5225d8fed0380f47557e084b1f1d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$newsuper,
        const_str_digest_c45a696f69e33b77a718b412d02ec200,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_2_superm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$newsuper$$$function_2_superm,
        const_str_plain_superm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_507b39b61e094b7e313242cc19d0e701,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$newsuper,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins$newsuper =
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

function_impl_code functable_future$builtins$newsuper[] = {
    impl_future$builtins$newsuper$$$function_1_newsuper,
    impl_future$builtins$newsuper$$$function_2_superm,
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

    function_impl_code *current = functable_future$builtins$newsuper;
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

    if (offset > sizeof(functable_future$builtins$newsuper) || offset < 0) {
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
        functable_future$builtins$newsuper[offset],
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
        module_future$builtins$newsuper,
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
PyObject *modulecode_future$builtins$newsuper(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$builtins$newsuper;
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
    PRINT_STRING("future.builtins.newsuper: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins.newsuper: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins.newsuper: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$builtins$newsuper\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins$newsuper = Py_InitModule4(
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
    mdef_future$builtins$newsuper.m_name = module_full_name;
    module_future$builtins$newsuper = PyModule_Create(&mdef_future$builtins$newsuper);
#endif

    moduledict_future$builtins$newsuper = MODULE_DICT(module_future$builtins$newsuper);

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
        moduledict_future$builtins$newsuper,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$builtins$newsuper,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$builtins$newsuper,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins$newsuper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins$newsuper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$builtins$newsuper);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$builtins$newsuper);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_84239b0e91655ef11db2a1f58381af6d;
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
        tmp_assign_source_1 = const_str_digest_aa6f788861a7c8a6617e5fe5c9774d54;
        UPDATE_STRING_DICT0(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_84239b0e91655ef11db2a1f58381af6d = MAKE_MODULE_FRAME(codeobj_84239b0e91655ef11db2a1f58381af6d, module_future$builtins$newsuper);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_84239b0e91655ef11db2a1f58381af6d);
    assert(Py_REFCNT(frame_84239b0e91655ef11db2a1f58381af6d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_84239b0e91655ef11db2a1f58381af6d->m_frame.f_lineno = 34;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_future$builtins$newsuper;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_84239b0e91655ef11db2a1f58381af6d->m_frame.f_lineno = 35;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_types;
        tmp_globals_name_2 = (PyObject *)moduledict_future$builtins$newsuper;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_FunctionType_tuple;
        tmp_level_name_2 = const_int_0;
        frame_84239b0e91655ef11db2a1f58381af6d->m_frame.f_lineno = 36;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_FunctionType);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_FunctionType, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_118c8611317729818c37c760127e23b2;
        tmp_globals_name_3 = (PyObject *)moduledict_future$builtins$newsuper;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PY3_str_plain_PY26_tuple;
        tmp_level_name_3 = const_int_0;
        frame_84239b0e91655ef11db2a1f58381af6d->m_frame.f_lineno = 38;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_PY3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_PY26);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_PY26, tmp_assign_source_8);
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
        tmp_assign_source_9 = (PyObject *)&PySuper_Type;
        UPDATE_STRING_DICT0(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__builtin_super, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = (PyObject *)&PyBaseObject_Type;
        frame_84239b0e91655ef11db2a1f58381af6d->m_frame.f_lineno = 43;
        tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL, tmp_assign_source_10);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_84239b0e91655ef11db2a1f58381af6d);
#endif
    popFrameStack();

    assertFrameObject(frame_84239b0e91655ef11db2a1f58381af6d);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_84239b0e91655ef11db2a1f58381af6d);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_84239b0e91655ef11db2a1f58381af6d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_84239b0e91655ef11db2a1f58381af6d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84239b0e91655ef11db2a1f58381af6d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_defaults_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_int_pos_1;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_defaults_1, 2, tmp_tuple_element_1);
        tmp_assign_source_11 = MAKE_FUNCTION_future$builtins$newsuper$$$function_1_newsuper(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_newsuper, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_future$builtins$newsuper$$$function_2_superm();



        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_superm, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = LIST_COPY(const_list_str_plain_newsuper_list);
        UPDATE_STRING_DICT1(moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13);
    }

    return module_future$builtins$newsuper;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
