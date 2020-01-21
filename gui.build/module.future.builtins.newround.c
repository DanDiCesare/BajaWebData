/* Generated code for Python module 'future.builtins.newround'
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

/* The "_module_future$builtins$newround" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins$newround;
PyDictObject *moduledict_future$builtins$newround;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_aea8c6bdca65c826db05f059c8f7e763;
extern PyObject *const_str_plain_decimal;
static PyObject *const_list_str_plain_newround_list;
static PyObject *const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_return_int;
extern PyObject *const_str_plain_number;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
static PyObject *const_str_plain_quantize;
static PyObject *const_str_plain___round__;
static PyObject *const_str_plain_from_float_26;
static PyObject *const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple;
static PyObject *const_str_plain_isnan;
static PyObject *const_str_plain_10;
extern PyObject *const_str_plain_int;
static PyObject *const_str_digest_c32d5978fb3b614d0fbb920ea0828fc9;
static PyObject *const_str_plain_ndigits;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple;
extern PyObject *const_str_plain_PYPY;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple;
static PyObject *const_str_plain_copysign;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_as_integer_ratio;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_bind_method;
static PyObject *const_str_plain__dec_from_triple;
extern PyObject *const_str_plain__math;
extern PyObject *const_str_plain_long;
static PyObject *const_tuple_str_plain__dec_from_triple_tuple;
extern PyObject *const_tuple_type_int_type_long_tuple;
extern PyObject *const_str_plain_math;
static PyObject *const_str_digest_581449c1345414f368f6bb97763b0acc;
static PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_result;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_newround;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_ROUND_HALF_EVEN;
static PyObject *const_str_digest_cb99e28c4cf8b9d9e5f4f3379e4185af;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_str_plain_10_tuple;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_817f131a36d8d58d40ce3a6b147136f7;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Decimal;
extern PyObject *const_str_plain_bit_length;
extern PyObject *const_str_plain_from_float;
static PyObject *const_str_plain_rounding;
static PyObject *const_str_digest_cfbdb197751f82ef8616be88ebcb4cea;
extern PyObject *const_str_plain_exponent;
static PyObject *const_str_plain_isinf;
extern PyObject *const_str_plain_PY26;
extern PyObject *const_tuple_str_plain_d_tuple;
extern PyObject *const_str_plain_f;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_aea8c6bdca65c826db05f059c8f7e763 = UNSTREAM_STRING(&constant_bin[ 794550 ], 68, 0);
    const_list_str_plain_newround_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_newround_list, 0, const_str_plain_newround); Py_INCREF(const_str_plain_newround);
    const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple, 0, const_str_plain_Decimal); Py_INCREF(const_str_plain_Decimal);
    const_str_plain_ROUND_HALF_EVEN = UNSTREAM_STRING(&constant_bin[ 58153 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple, 1, const_str_plain_ROUND_HALF_EVEN); Py_INCREF(const_str_plain_ROUND_HALF_EVEN);
    const_str_plain_return_int = UNSTREAM_STRING(&constant_bin[ 794618 ], 10, 1);
    const_str_plain_quantize = UNSTREAM_STRING(&constant_bin[ 794628 ], 8, 1);
    const_str_plain___round__ = UNSTREAM_STRING(&constant_bin[ 794636 ], 9, 1);
    const_str_plain_from_float_26 = UNSTREAM_STRING(&constant_bin[ 58197 ], 13, 1);
    const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 0, const_str_plain_f); Py_INCREF(const_str_plain_f);
    const_str_plain__dec_from_triple = UNSTREAM_STRING(&constant_bin[ 794645 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 1, const_str_plain__dec_from_triple); Py_INCREF(const_str_plain__dec_from_triple);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 2, const_str_plain_d); Py_INCREF(const_str_plain_d);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 3, const_str_plain_k); Py_INCREF(const_str_plain_k);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 4, const_str_plain_n); Py_INCREF(const_str_plain_n);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 5, const_str_plain_result); Py_INCREF(const_str_plain_result);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 6, const_str_plain__math); Py_INCREF(const_str_plain__math);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 7, const_str_plain_bit_length); Py_INCREF(const_str_plain_bit_length);
    PyTuple_SET_ITEM(const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 8, const_str_plain_sign); Py_INCREF(const_str_plain_sign);
    const_str_plain_isnan = UNSTREAM_STRING(&constant_bin[ 794661 ], 5, 1);
    const_str_plain_10 = UNSTREAM_STRING(&constant_bin[ 40157 ], 2, 0);
    const_str_digest_c32d5978fb3b614d0fbb920ea0828fc9 = UNSTREAM_STRING(&constant_bin[ 794666 ], 34, 0);
    const_str_plain_ndigits = UNSTREAM_STRING(&constant_bin[ 794675 ], 7, 1);
    const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple, 0, const_str_plain_number); Py_INCREF(const_str_plain_number);
    PyTuple_SET_ITEM(const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple, 1, const_str_plain_ndigits); Py_INCREF(const_str_plain_ndigits);
    PyTuple_SET_ITEM(const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple, 2, const_str_plain_d); Py_INCREF(const_str_plain_d);
    PyTuple_SET_ITEM(const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple, 3, const_str_plain_return_int); Py_INCREF(const_str_plain_return_int);
    PyTuple_SET_ITEM(const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple, 4, const_str_plain_exponent); Py_INCREF(const_str_plain_exponent);
    const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, 0, const_str_plain_PYPY); Py_INCREF(const_str_plain_PYPY);
    PyTuple_SET_ITEM(const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, 1, const_str_plain_PY26); Py_INCREF(const_str_plain_PY26);
    PyTuple_SET_ITEM(const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, 2, const_str_plain_bind_method); Py_INCREF(const_str_plain_bind_method);
    const_str_plain_copysign = UNSTREAM_STRING(&constant_bin[ 794700 ], 8, 1);
    const_tuple_str_plain__dec_from_triple_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain__dec_from_triple_tuple, 0, const_str_plain__dec_from_triple); Py_INCREF(const_str_plain__dec_from_triple);
    const_str_digest_581449c1345414f368f6bb97763b0acc = UNSTREAM_STRING(&constant_bin[ 794708 ], 33, 0);
    const_str_plain_numpy = UNSTREAM_STRING(&constant_bin[ 794741 ], 5, 1);
    const_str_digest_cb99e28c4cf8b9d9e5f4f3379e4185af = UNSTREAM_STRING(&constant_bin[ 794746 ], 425, 0);
    const_tuple_str_plain_10_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_10_tuple, 0, const_str_plain_10); Py_INCREF(const_str_plain_10);
    const_str_digest_817f131a36d8d58d40ce3a6b147136f7 = UNSTREAM_STRING(&constant_bin[ 795171 ], 27, 0);
    const_str_plain_rounding = UNSTREAM_STRING(&constant_bin[ 659586 ], 8, 1);
    const_str_digest_cfbdb197751f82ef8616be88ebcb4cea = UNSTREAM_STRING(&constant_bin[ 795198 ], 750, 0);
    const_str_plain_isinf = UNSTREAM_STRING(&constant_bin[ 795948 ], 5, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins$newround(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6086ff5776ff67a77008dfff112abb3f;
static PyCodeObject *codeobj_d3fed0ff3dcd2b525131d6acb45b21a0;
static PyCodeObject *codeobj_b3bb280947ad93f10d233d7179ae3f3b;
static PyCodeObject *codeobj_75376d84b0f0ae917a1c27c011146cd2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_817f131a36d8d58d40ce3a6b147136f7);
    codeobj_6086ff5776ff67a77008dfff112abb3f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_581449c1345414f368f6bb97763b0acc, const_tuple_empty, 0, 0, 0);
    codeobj_d3fed0ff3dcd2b525131d6acb45b21a0 = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_bit_length, const_tuple_str_plain_d_tuple, 1, 0, 0);
    codeobj_b3bb280947ad93f10d233d7179ae3f3b = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_from_float_26, const_tuple_48ab80a3a1a96a98edfc27c134514441_tuple, 1, 0, 0);
    codeobj_75376d84b0f0ae917a1c27c011146cd2 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_newround, const_tuple_3b7e4331e66d5068ba4f034b237df24f_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_1_newround(PyObject *defaults);


static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26();


static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length();


// The module function definitions.
static PyObject *impl_future$builtins$newround$$$function_1_newround(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_number = python_pars[0];
    PyObject *par_ndigits = python_pars[1];
    PyObject *var_d = NULL;
    nuitka_bool var_return_int = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_exponent = NULL;
    struct Nuitka_FrameObject *frame_75376d84b0f0ae917a1c27c011146cd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_75376d84b0f0ae917a1c27c011146cd2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_FALSE;
        var_return_int = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ndigits);
        tmp_compexpr_left_1 = par_ndigits;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_assign_source_2;
            tmp_assign_source_2 = NUITKA_BOOL_TRUE;
            var_return_int = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_int_0;
            {
                PyObject *old = par_ndigits;
                assert(old != NULL);
                par_ndigits = tmp_assign_source_3;
                Py_INCREF(par_ndigits);
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_75376d84b0f0ae917a1c27c011146cd2, codeobj_75376d84b0f0ae917a1c27c011146cd2, module_future$builtins$newround, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_75376d84b0f0ae917a1c27c011146cd2 = cache_frame_75376d84b0f0ae917a1c27c011146cd2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_75376d84b0f0ae917a1c27c011146cd2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_75376d84b0f0ae917a1c27c011146cd2) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_number);
        tmp_source_name_1 = par_number;
        tmp_attribute_name_1 = const_str_plain___round__;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooobo";
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
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_number);
            tmp_called_instance_1 = par_number;
            CHECK_OBJECT(par_ndigits);
            tmp_args_element_name_1 = par_ndigits;
            frame_75376d84b0f0ae917a1c27c011146cd2->m_frame.f_lineno = 30;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain___round__, call_args);
            }

            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_ndigits);
        tmp_compexpr_left_2 = par_ndigits;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooobo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_c32d5978fb3b614d0fbb920ea0828fc9;
            frame_75376d84b0f0ae917a1c27c011146cd2->m_frame.f_lineno = 33;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 33;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 58038 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 34;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_75376d84b0f0ae917a1c27c011146cd2->m_frame.f_lineno = 34;
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_str_plain_10_tuple, 0));

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ndigits);
        tmp_operand_name_1 = par_ndigits;
        tmp_right_name_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 34;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_POW_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }
        assert(var_exponent == NULL);
        var_exponent = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PYPY);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PYPY);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 58074 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 36;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_type_arg_1;
            tmp_compexpr_left_3 = const_str_plain_numpy;
            CHECK_OBJECT(par_number);
            tmp_type_arg_1 = par_number;
            tmp_operand_name_2 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_operand_name_2 == NULL));
            tmp_compexpr_right_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_name_2);
            Py_DECREF(tmp_operand_name_2);
            if (tmp_compexpr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
            Py_DECREF(tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_float_arg_1;
                CHECK_OBJECT(par_number);
                tmp_float_arg_1 = par_number;
                tmp_assign_source_5 = TO_FLOAT(tmp_float_arg_1);
                if (tmp_assign_source_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_1 = "ooobo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_number;
                    assert(old != NULL);
                    par_number = tmp_assign_source_5;
                    Py_DECREF(old);
                }

            }
            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PY26);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PY26);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 58107 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 41;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_3 = tmp_mvar_value_3;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooobo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58038 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_from_float);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            if (par_number == NULL) {
                Py_DECREF(tmp_called_name_3);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "number");
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = par_number;
            frame_75376d84b0f0ae917a1c27c011146cd2->m_frame.f_lineno = 42;
            tmp_source_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_called_name_3);
            if (tmp_source_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_quantize);
            Py_DECREF(tmp_source_name_2);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_exponent);
            tmp_tuple_element_1 = var_exponent;
            tmp_args_name_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN);
            }

            if (tmp_mvar_value_5 == NULL) {
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58140 ], 44, 0);
                exception_tb = NULL;

                exception_lineno = 43;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = tmp_mvar_value_5;
            tmp_dict_key_1 = const_str_plain_rounding;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_75376d84b0f0ae917a1c27c011146cd2->m_frame.f_lineno = 42;
            tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            assert(var_d == NULL);
            var_d = tmp_assign_source_6;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_from_float_26);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_from_float_26);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58184 ], 42, 0);
                exception_tb = NULL;

                exception_lineno = 45;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_6;
            if (par_number == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "number");
                exception_tb = NULL;

                exception_lineno = 45;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_3 = par_number;
            frame_75376d84b0f0ae917a1c27c011146cd2->m_frame.f_lineno = 45;
            tmp_source_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_3);
            if (tmp_source_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_quantize);
            Py_DECREF(tmp_source_name_4);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_exponent);
            tmp_tuple_element_2 = var_exponent;
            tmp_args_name_2 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN);
            }

            if (tmp_mvar_value_7 == NULL) {
                Py_DECREF(tmp_called_name_4);
                Py_DECREF(tmp_args_name_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58140 ], 44, 0);
                exception_tb = NULL;

                exception_lineno = 45;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_2 = tmp_mvar_value_7;
            tmp_dict_key_2 = const_str_plain_rounding;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_75376d84b0f0ae917a1c27c011146cd2->m_frame.f_lineno = 45;
            tmp_assign_source_7 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_2);
            Py_DECREF(tmp_kw_name_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            assert(var_d == NULL);
            var_d = tmp_assign_source_7;
        }
        branch_end_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        assert(var_return_int != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_7 = var_return_int;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT(var_d);
            tmp_int_arg_1 = var_d;
            tmp_return_value = PyNumber_Int(tmp_int_arg_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_float_arg_2;
            CHECK_OBJECT(var_d);
            tmp_float_arg_2 = var_d;
            tmp_return_value = TO_FLOAT(tmp_float_arg_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "ooobo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_7:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75376d84b0f0ae917a1c27c011146cd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_75376d84b0f0ae917a1c27c011146cd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_75376d84b0f0ae917a1c27c011146cd2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75376d84b0f0ae917a1c27c011146cd2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_75376d84b0f0ae917a1c27c011146cd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75376d84b0f0ae917a1c27c011146cd2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_75376d84b0f0ae917a1c27c011146cd2,
        type_description_1,
        par_number,
        par_ndigits,
        var_d,
        (int)var_return_int,
        var_exponent
    );


    // Release cached frame.
    if (frame_75376d84b0f0ae917a1c27c011146cd2 == cache_frame_75376d84b0f0ae917a1c27c011146cd2) {
        Py_DECREF(frame_75376d84b0f0ae917a1c27c011146cd2);
    }
    cache_frame_75376d84b0f0ae917a1c27c011146cd2 = NULL;

    assertFrameObject(frame_75376d84b0f0ae917a1c27c011146cd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$builtins$newround$$$function_1_newround);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_d);
    var_d = NULL;

    CHECK_OBJECT((PyObject *)par_ndigits);
    Py_DECREF(par_ndigits);
    par_ndigits = NULL;

    Py_XDECREF(par_number);
    par_number = NULL;

    Py_XDECREF(var_exponent);
    var_exponent = NULL;

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

    Py_XDECREF(var_d);
    var_d = NULL;

    CHECK_OBJECT((PyObject *)par_ndigits);
    Py_DECREF(par_ndigits);
    par_ndigits = NULL;

    Py_XDECREF(par_number);
    par_number = NULL;

    Py_XDECREF(var_exponent);
    var_exponent = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$newround$$$function_1_newround);
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$builtins$newround$$$function_2_from_float_26(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *var__dec_from_triple = NULL;
    PyObject *var_d = NULL;
    PyObject *var_k = NULL;
    PyObject *var_n = NULL;
    PyObject *var_result = NULL;
    PyObject *var__math = NULL;
    PyObject *var_bit_length = NULL;
    PyObject *var_sign = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b3bb280947ad93f10d233d7179ae3f3b;
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
    static struct Nuitka_FrameObject *cache_frame_b3bb280947ad93f10d233d7179ae3f3b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_math;
        tmp_globals_name_1 = (PyObject *)moduledict_future$builtins$newround;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_1 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var__math == NULL);
        var__math = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b3bb280947ad93f10d233d7179ae3f3b, codeobj_b3bb280947ad93f10d233d7179ae3f3b, module_future$builtins$newround, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b3bb280947ad93f10d233d7179ae3f3b = cache_frame_b3bb280947ad93f10d233d7179ae3f3b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b3bb280947ad93f10d233d7179ae3f3b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b3bb280947ad93f10d233d7179ae3f3b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_decimal;
        tmp_globals_name_2 = (PyObject *)moduledict_future$builtins$newround;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain__dec_from_triple_tuple;
        frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 77;
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain__dec_from_triple);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__dec_from_triple == NULL);
        var__dec_from_triple = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_f);
        tmp_isinstance_inst_1 = par_f;
        tmp_isinstance_cls_1 = const_tuple_type_int_type_long_tuple;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58038 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 80;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_f);
            tmp_args_element_name_1 = par_f;
            frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 80;
            tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(var__math);
        tmp_called_instance_1 = var__math;
        CHECK_OBJECT(par_f);
        tmp_args_element_name_2 = par_f;
        frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_isinf, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var__math);
        tmp_called_instance_2 = var__math;
        CHECK_OBJECT(par_f);
        tmp_args_element_name_3 = par_f;
        frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_isnan, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_2);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_operand_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 58038 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 82;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT(par_f);
            tmp_operand_name_1 = par_f;
            tmp_args_element_name_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_name_1);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 82;
            tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var__math);
        tmp_called_instance_3 = var__math;
        tmp_args_element_name_5 = const_float_1_0;
        CHECK_OBJECT(par_f);
        tmp_args_element_name_6 = par_f;
        frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_copysign, call_args);
        }

        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_float_1_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_int_0;
            assert(var_sign == NULL);
            Py_INCREF(tmp_assign_source_3);
            var_sign = tmp_assign_source_3;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_int_pos_1;
            assert(var_sign == NULL);
            Py_INCREF(tmp_assign_source_4);
            var_sign = tmp_assign_source_4;
        }
        branch_end_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_abs_arg_1;
        CHECK_OBJECT(par_f);
        tmp_abs_arg_1 = par_f;
        tmp_called_instance_4 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 87;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_as_integer_ratio);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
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
            exception_lineno = 87;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
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
            exception_lineno = 87;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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
                    exception_lineno = 87;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 87;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_n = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_d == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_d = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length();



        assert(var_bit_length == NULL);
        var_bit_length = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_bit_length);
        tmp_called_name_3 = var_bit_length;
        CHECK_OBJECT(var_d);
        tmp_args_element_name_7 = var_d;
        frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 94;
        tmp_left_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_7);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_k == NULL);
        var_k = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_str_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var__dec_from_triple);
        tmp_called_name_4 = var__dec_from_triple;
        CHECK_OBJECT(var_sign);
        tmp_args_element_name_8 = var_sign;
        CHECK_OBJECT(var_n);
        tmp_left_name_2 = var_n;
        tmp_left_name_3 = const_int_pos_5;
        CHECK_OBJECT(var_k);
        tmp_right_name_3 = var_k;
        tmp_right_name_2 = BINARY_OPERATION_POW_INT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_str_arg_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_str_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_9 = PyObject_Str(tmp_str_arg_1);
        Py_DECREF(tmp_str_arg_1);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_k);
        tmp_operand_name_2 = var_k;
        tmp_args_element_name_10 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_2);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_9);

            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3bb280947ad93f10d233d7179ae3f3b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3bb280947ad93f10d233d7179ae3f3b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3bb280947ad93f10d233d7179ae3f3b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3bb280947ad93f10d233d7179ae3f3b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b3bb280947ad93f10d233d7179ae3f3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3bb280947ad93f10d233d7179ae3f3b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3bb280947ad93f10d233d7179ae3f3b,
        type_description_1,
        par_f,
        var__dec_from_triple,
        var_d,
        var_k,
        var_n,
        var_result,
        var__math,
        var_bit_length,
        var_sign
    );


    // Release cached frame.
    if (frame_b3bb280947ad93f10d233d7179ae3f3b == cache_frame_b3bb280947ad93f10d233d7179ae3f3b) {
        Py_DECREF(frame_b3bb280947ad93f10d233d7179ae3f3b);
    }
    cache_frame_b3bb280947ad93f10d233d7179ae3f3b = NULL;

    assertFrameObject(frame_b3bb280947ad93f10d233d7179ae3f3b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$builtins$newround$$$function_2_from_float_26);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var__dec_from_triple);
    Py_DECREF(var__dec_from_triple);
    var__dec_from_triple = NULL;

    Py_XDECREF(var_d);
    var_d = NULL;

    Py_XDECREF(var_k);
    var_k = NULL;

    Py_XDECREF(var_n);
    var_n = NULL;

    Py_XDECREF(var_result);
    var_result = NULL;

    CHECK_OBJECT((PyObject *)var__math);
    Py_DECREF(var__math);
    var__math = NULL;

    Py_XDECREF(var_bit_length);
    var_bit_length = NULL;

    Py_XDECREF(var_sign);
    var_sign = NULL;

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

    Py_XDECREF(var__dec_from_triple);
    var__dec_from_triple = NULL;

    Py_XDECREF(var_d);
    var_d = NULL;

    Py_XDECREF(var_k);
    var_k = NULL;

    Py_XDECREF(var_n);
    var_n = NULL;

    CHECK_OBJECT((PyObject *)var__math);
    Py_DECREF(var__math);
    var__math = NULL;

    Py_XDECREF(var_bit_length);
    var_bit_length = NULL;

    Py_XDECREF(var_sign);
    var_sign = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$newround$$$function_2_from_float_26);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[0];
    struct Nuitka_FrameObject *frame_d3fed0ff3dcd2b525131d6acb45b21a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d3fed0ff3dcd2b525131d6acb45b21a0 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_d3fed0ff3dcd2b525131d6acb45b21a0, codeobj_d3fed0ff3dcd2b525131d6acb45b21a0, module_future$builtins$newround, sizeof(void *));
    frame_d3fed0ff3dcd2b525131d6acb45b21a0 = cache_frame_d3fed0ff3dcd2b525131d6acb45b21a0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d3fed0ff3dcd2b525131d6acb45b21a0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d3fed0ff3dcd2b525131d6acb45b21a0) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_d);
        tmp_compexpr_left_1 = par_d;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_bin_arg_1;
            PyObject *tmp_abs_arg_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(par_d);
            tmp_abs_arg_1 = par_d;
            tmp_bin_arg_1 = BUILTIN_ABS(tmp_abs_arg_1);
            if (tmp_bin_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_len_arg_1 = BUILTIN_BIN(tmp_bin_arg_1);
            Py_DECREF(tmp_bin_arg_1);
            if (tmp_len_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
            Py_DECREF(tmp_len_arg_1);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_2;
            tmp_return_value = BINARY_OPERATION_SUB_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_left_name_1);
            assert(!(tmp_return_value == NULL));
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_int_0;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3fed0ff3dcd2b525131d6acb45b21a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3fed0ff3dcd2b525131d6acb45b21a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3fed0ff3dcd2b525131d6acb45b21a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3fed0ff3dcd2b525131d6acb45b21a0, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d3fed0ff3dcd2b525131d6acb45b21a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3fed0ff3dcd2b525131d6acb45b21a0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3fed0ff3dcd2b525131d6acb45b21a0,
        type_description_1,
        par_d
    );


    // Release cached frame.
    if (frame_d3fed0ff3dcd2b525131d6acb45b21a0 == cache_frame_d3fed0ff3dcd2b525131d6acb45b21a0) {
        Py_DECREF(frame_d3fed0ff3dcd2b525131d6acb45b21a0);
    }
    cache_frame_d3fed0ff3dcd2b525131d6acb45b21a0 = NULL;

    assertFrameObject(frame_d3fed0ff3dcd2b525131d6acb45b21a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_1_newround(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$newround$$$function_1_newround,
        const_str_plain_newround,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_75376d84b0f0ae917a1c27c011146cd2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$newround,
        const_str_digest_cb99e28c4cf8b9d9e5f4f3379e4185af,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$newround$$$function_2_from_float_26,
        const_str_plain_from_float_26,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b3bb280947ad93f10d233d7179ae3f3b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$newround,
        const_str_digest_cfbdb197751f82ef8616be88ebcb4cea,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length,
        const_str_plain_bit_length,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d3fed0ff3dcd2b525131d6acb45b21a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$builtins$newround,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins$newround =
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

function_impl_code functable_future$builtins$newround[] = {
    impl_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length,
    impl_future$builtins$newround$$$function_1_newround,
    impl_future$builtins$newround$$$function_2_from_float_26,
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

    function_impl_code *current = functable_future$builtins$newround;
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

    if (offset > sizeof(functable_future$builtins$newround) || offset < 0) {
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
        functable_future$builtins$newround[offset],
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
        module_future$builtins$newround,
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
PyObject *modulecode_future$builtins$newround(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$builtins$newround;
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
    PRINT_STRING("future.builtins.newround: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins.newround: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.builtins.newround: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$builtins$newround\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins$newround = Py_InitModule4(
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
    mdef_future$builtins$newround.m_name = module_full_name;
    module_future$builtins$newround = PyModule_Create(&mdef_future$builtins$newround);
#endif

    moduledict_future$builtins$newround = MODULE_DICT(module_future$builtins$newround);

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
        moduledict_future$builtins$newround,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$builtins$newround,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$builtins$newround,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins$newround,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$builtins$newround,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$builtins$newround);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$builtins$newround);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_6086ff5776ff67a77008dfff112abb3f;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_aea8c6bdca65c826db05f059c8f7e763;
        UPDATE_STRING_DICT0(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_6086ff5776ff67a77008dfff112abb3f = MAKE_MODULE_FRAME(codeobj_6086ff5776ff67a77008dfff112abb3f, module_future$builtins$newround);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6086ff5776ff67a77008dfff112abb3f);
    assert(Py_REFCNT(frame_6086ff5776ff67a77008dfff112abb3f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_118c8611317729818c37c760127e23b2;
        tmp_globals_name_1 = (PyObject *)moduledict_future$builtins$newround;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple;
        frame_6086ff5776ff67a77008dfff112abb3f->m_frame.f_lineno = 5;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_PYPY);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PYPY, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_PY26);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PY26, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_bind_method);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_bind_method, tmp_assign_source_6);
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
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_decimal;
        tmp_globals_name_2 = (PyObject *)moduledict_future$builtins$newround;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple;
        frame_6086ff5776ff67a77008dfff112abb3f->m_frame.f_lineno = 9;
        tmp_assign_source_7 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_Decimal);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_ROUND_HALF_EVEN);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN, tmp_assign_source_9);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6086ff5776ff67a77008dfff112abb3f);
#endif
    popFrameStack();

    assertFrameObject(frame_6086ff5776ff67a77008dfff112abb3f);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6086ff5776ff67a77008dfff112abb3f);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_6086ff5776ff67a77008dfff112abb3f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6086ff5776ff67a77008dfff112abb3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6086ff5776ff67a77008dfff112abb3f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_10 = MAKE_FUNCTION_future$builtins$newround$$$function_1_newround(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_newround, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26();



        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_from_float_26, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = LIST_COPY(const_list_str_plain_newround_list);
        UPDATE_STRING_DICT1(moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12);
    }

    return module_future$builtins$newround;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
