/* Generated code for Python module 'chardet.sbcsgroupprober'
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

/* The "_module_chardet$sbcsgroupprober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$sbcsgroupprober;
PyDictObject *moduledict_chardet$sbcsgroupprober;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_Ibm855Model;
static PyObject *const_str_digest_5be317a1d4f47b238e8360b0b93bbe50;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple;
static PyObject *const_tuple_str_plain_SingleByteCharSetProber_tuple;
extern PyObject *const_str_plain_Latin5TurkishModel;
static PyObject *const_str_digest_2c059e9a0c932665d39545c1df0da978;
extern PyObject *const_str_plain_Koi8rModel;
static PyObject *const_str_plain_langcyrillicmodel;
static PyObject *const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple;
extern PyObject *const_str_plain_SingleByteCharSetProber;
static PyObject *const_tuple_4718770696a749132e8430c48931b9e8_tuple;
static PyObject *const_tuple_str_plain_TIS620ThaiModel_tuple;
extern PyObject *const_str_plain_MacCyrillicModel;
extern PyObject *const_str_plain_Win1251CyrillicModel;
extern PyObject *const_str_plain_TIS620ThaiModel;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_SBCSGroupProber;
extern PyObject *const_str_plain_Latin5CyrillicModel;
extern PyObject *const_str_plain_Latin5BulgarianModel;
static PyObject *const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple;
extern PyObject *const_str_plain_Win1253GreekModel;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_visual_hebrew_prober;
static PyObject *const_tuple_str_plain_Latin5TurkishModel_tuple;
static PyObject *const_str_plain_logical_hebrew_prober;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_langturkishmodel;
extern PyObject *const_str_plain_HebrewProber;
static PyObject *const_str_plain_langgreekmodel;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_extend;
static PyObject *const_str_plain_hebrew_prober;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_sbcharsetprober;
static PyObject *const_tuple_str_plain_HebrewProber_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_CharSetGroupProber;
extern PyObject *const_str_plain_Win1251BulgarianModel;
static PyObject *const_str_digest_b18170e8601aeac7ef5014d02e0da13c;
extern PyObject *const_str_plain_charsetgroupprober;
extern PyObject *const_str_plain_probers;
static PyObject *const_tuple_str_plain_Win1255HebrewModel_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_langthaimodel;
static PyObject *const_str_plain_langhebrewmodel;
extern PyObject *const_str_plain_Ibm866Model;
extern PyObject *const_tuple_str_plain_CharSetGroupProber_tuple;
extern PyObject *const_str_plain_Win1255HebrewModel;
static PyObject *const_str_plain_hebrewprober;
extern PyObject *const_str_plain_set_model_probers;
extern PyObject *const_str_plain_Latin7GreekModel;
static PyObject *const_str_plain_langbulgarianmodel;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_5be317a1d4f47b238e8360b0b93bbe50 = UNSTREAM_STRING(&constant_bin[ 564910 ], 23, 0);
    const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_hebrew_prober = UNSTREAM_STRING(&constant_bin[ 564933 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 1, const_str_plain_hebrew_prober); Py_INCREF(const_str_plain_hebrew_prober);
    const_str_plain_logical_hebrew_prober = UNSTREAM_STRING(&constant_bin[ 564946 ], 21, 1);
    PyTuple_SET_ITEM(const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 2, const_str_plain_logical_hebrew_prober); Py_INCREF(const_str_plain_logical_hebrew_prober);
    const_str_plain_visual_hebrew_prober = UNSTREAM_STRING(&constant_bin[ 564967 ], 20, 1);
    PyTuple_SET_ITEM(const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 3, const_str_plain_visual_hebrew_prober); Py_INCREF(const_str_plain_visual_hebrew_prober);
    const_tuple_str_plain_SingleByteCharSetProber_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SingleByteCharSetProber_tuple, 0, const_str_plain_SingleByteCharSetProber); Py_INCREF(const_str_plain_SingleByteCharSetProber);
    const_str_digest_2c059e9a0c932665d39545c1df0da978 = UNSTREAM_STRING(&constant_bin[ 564987 ], 32, 0);
    const_str_plain_langcyrillicmodel = UNSTREAM_STRING(&constant_bin[ 461939 ], 17, 1);
    const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple, 0, const_str_plain_Latin7GreekModel); Py_INCREF(const_str_plain_Latin7GreekModel);
    PyTuple_SET_ITEM(const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple, 1, const_str_plain_Win1253GreekModel); Py_INCREF(const_str_plain_Win1253GreekModel);
    const_tuple_4718770696a749132e8430c48931b9e8_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_4718770696a749132e8430c48931b9e8_tuple, 0, const_str_plain_Latin5BulgarianModel); Py_INCREF(const_str_plain_Latin5BulgarianModel);
    PyTuple_SET_ITEM(const_tuple_4718770696a749132e8430c48931b9e8_tuple, 1, const_str_plain_Win1251BulgarianModel); Py_INCREF(const_str_plain_Win1251BulgarianModel);
    const_tuple_str_plain_TIS620ThaiModel_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_TIS620ThaiModel_tuple, 0, const_str_plain_TIS620ThaiModel); Py_INCREF(const_str_plain_TIS620ThaiModel);
    const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 0, const_str_plain_Win1251CyrillicModel); Py_INCREF(const_str_plain_Win1251CyrillicModel);
    PyTuple_SET_ITEM(const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 1, const_str_plain_Koi8rModel); Py_INCREF(const_str_plain_Koi8rModel);
    PyTuple_SET_ITEM(const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 2, const_str_plain_Latin5CyrillicModel); Py_INCREF(const_str_plain_Latin5CyrillicModel);
    PyTuple_SET_ITEM(const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 3, const_str_plain_MacCyrillicModel); Py_INCREF(const_str_plain_MacCyrillicModel);
    PyTuple_SET_ITEM(const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 4, const_str_plain_Ibm866Model); Py_INCREF(const_str_plain_Ibm866Model);
    PyTuple_SET_ITEM(const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple, 5, const_str_plain_Ibm855Model); Py_INCREF(const_str_plain_Ibm855Model);
    const_tuple_str_plain_Latin5TurkishModel_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Latin5TurkishModel_tuple, 0, const_str_plain_Latin5TurkishModel); Py_INCREF(const_str_plain_Latin5TurkishModel);
    const_str_plain_langturkishmodel = UNSTREAM_STRING(&constant_bin[ 530155 ], 16, 1);
    const_str_plain_langgreekmodel = UNSTREAM_STRING(&constant_bin[ 486331 ], 14, 1);
    const_str_plain_sbcharsetprober = UNSTREAM_STRING(&constant_bin[ 564630 ], 15, 1);
    const_tuple_str_plain_HebrewProber_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_HebrewProber_tuple, 0, const_str_plain_HebrewProber); Py_INCREF(const_str_plain_HebrewProber);
    const_str_digest_b18170e8601aeac7ef5014d02e0da13c = UNSTREAM_STRING(&constant_bin[ 565019 ], 26, 0);
    const_tuple_str_plain_Win1255HebrewModel_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Win1255HebrewModel_tuple, 0, const_str_plain_Win1255HebrewModel); Py_INCREF(const_str_plain_Win1255HebrewModel);
    const_str_plain_langthaimodel = UNSTREAM_STRING(&constant_bin[ 530075 ], 13, 1);
    const_str_plain_langhebrewmodel = UNSTREAM_STRING(&constant_bin[ 486439 ], 15, 1);
    const_str_plain_hebrewprober = UNSTREAM_STRING(&constant_bin[ 354421 ], 12, 1);
    const_str_plain_langbulgarianmodel = UNSTREAM_STRING(&constant_bin[ 412975 ], 18, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$sbcsgroupprober(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2d4ee766a3b2a0a92f2bec156286e79c;
static PyCodeObject *codeobj_cdb9ef75f9ef67f25ded32068d501d4c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_b18170e8601aeac7ef5014d02e0da13c);
    codeobj_2d4ee766a3b2a0a92f2bec156286e79c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_2c059e9a0c932665d39545c1df0da978, const_tuple_empty, 0, 0, 0);
    codeobj_cdb9ef75f9ef67f25ded32068d501d4c = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_b1c9da44cb8525683cd762dc4f53ea6d_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$sbcsgroupprober$$$function_1___init__();


// The module function definitions.
static PyObject *impl_chardet$sbcsgroupprober$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_hebrew_prober = NULL;
    PyObject *var_logical_hebrew_prober = NULL;
    PyObject *var_visual_hebrew_prober = NULL;
    struct Nuitka_FrameObject *frame_cdb9ef75f9ef67f25ded32068d501d4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cdb9ef75f9ef67f25ded32068d501d4c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_cdb9ef75f9ef67f25ded32068d501d4c, codeobj_cdb9ef75f9ef67f25ded32068d501d4c, module_chardet$sbcsgroupprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_cdb9ef75f9ef67f25ded32068d501d4c = cache_frame_cdb9ef75f9ef67f25ded32068d501d4c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cdb9ef75f9ef67f25ded32068d501d4c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cdb9ef75f9ef67f25ded32068d501d4c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17527 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 45;
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


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 45;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain___init__);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17571 ], 49, 0);
            exception_tb = NULL;

            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_3;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 47;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = PyList_New(12);
        PyList_SET_ITEM(tmp_assattr_name_1, 0, tmp_list_element_1);
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Koi8rModel);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Koi8rModel);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17620 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_5;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 48;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 1, tmp_list_element_1);
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17659 ], 48, 0);
            exception_tb = NULL;

            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_7;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 49;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 2, tmp_list_element_1);
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_8 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17707 ], 45, 0);
            exception_tb = NULL;

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_9;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 50;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 3, tmp_list_element_1);
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm866Model);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Ibm866Model);
        }

        if (tmp_mvar_value_11 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17752 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_11;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 51;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 4, tmp_list_element_1);
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_12 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_12;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm855Model);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Ibm855Model);
        }

        if (tmp_mvar_value_13 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17792 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = tmp_mvar_value_13;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 52;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 5, tmp_list_element_1);
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_14 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_14;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel);
        }

        if (tmp_mvar_value_15 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17832 ], 45, 0);
            exception_tb = NULL;

            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = tmp_mvar_value_15;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 53;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 6, tmp_list_element_1);
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_16 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_16;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel);
        }

        if (tmp_mvar_value_17 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17877 ], 46, 0);
            exception_tb = NULL;

            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = tmp_mvar_value_17;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 54;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_8);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 7, tmp_list_element_1);
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_18 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel);
        }

        if (tmp_mvar_value_19 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17923 ], 49, 0);
            exception_tb = NULL;

            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_19;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 55;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_9);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 8, tmp_list_element_1);
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_20 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel);
        }

        if (tmp_mvar_value_21 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17972 ], 50, 0);
            exception_tb = NULL;

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = tmp_mvar_value_21;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 56;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_10);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 9, tmp_list_element_1);
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_22 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel);
        }

        if (tmp_mvar_value_23 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18022 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = tmp_mvar_value_23;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 61;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_11);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 10, tmp_list_element_1);
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_24 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5TurkishModel);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin5TurkishModel);
        }

        if (tmp_mvar_value_25 == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18066 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_12 = tmp_mvar_value_25;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 62;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_12);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assattr_name_1, 11, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_probers, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_HebrewProber);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HebrewProber);
        }

        if (tmp_mvar_value_26 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 16436 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_26;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 64;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_13);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_hebrew_prober == NULL);
        var_hebrew_prober = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_27 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_27;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel);
        }

        if (tmp_mvar_value_28 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18113 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_13 = tmp_mvar_value_28;
        tmp_args_element_name_14 = Py_False;
        CHECK_OBJECT(var_hebrew_prober);
        tmp_args_element_name_15 = var_hebrew_prober;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_14, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_logical_hebrew_prober == NULL);
        var_logical_hebrew_prober = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_29 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 17382 ], 52, 0);
            exception_tb = NULL;

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_29;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel);
        }

        if (tmp_mvar_value_30 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18113 ], 47, 0);
            exception_tb = NULL;

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_16 = tmp_mvar_value_30;
        tmp_args_element_name_17 = Py_True;
        CHECK_OBJECT(var_hebrew_prober);
        tmp_args_element_name_18 = var_hebrew_prober;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_15, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_visual_hebrew_prober == NULL);
        var_visual_hebrew_prober = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT(var_hebrew_prober);
        tmp_called_instance_2 = var_hebrew_prober;
        CHECK_OBJECT(var_logical_hebrew_prober);
        tmp_args_element_name_19 = var_logical_hebrew_prober;
        CHECK_OBJECT(var_visual_hebrew_prober);
        tmp_args_element_name_20 = var_visual_hebrew_prober;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_set_model_probers, call_args);
        }

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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_probers);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hebrew_prober);
        tmp_list_element_2 = var_hebrew_prober;
        tmp_args_element_name_21 = PyList_New(3);
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_args_element_name_21, 0, tmp_list_element_2);
        CHECK_OBJECT(var_logical_hebrew_prober);
        tmp_list_element_2 = var_logical_hebrew_prober;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_args_element_name_21, 1, tmp_list_element_2);
        CHECK_OBJECT(var_visual_hebrew_prober);
        tmp_list_element_2 = var_visual_hebrew_prober;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_args_element_name_21, 2, tmp_list_element_2);
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_name_21};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_extend, call_args);
        }

        Py_DECREF(tmp_called_instance_3);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame.f_lineno = 73;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_reset);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cdb9ef75f9ef67f25ded32068d501d4c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cdb9ef75f9ef67f25ded32068d501d4c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cdb9ef75f9ef67f25ded32068d501d4c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_cdb9ef75f9ef67f25ded32068d501d4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdb9ef75f9ef67f25ded32068d501d4c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdb9ef75f9ef67f25ded32068d501d4c,
        type_description_1,
        par_self,
        var_hebrew_prober,
        var_logical_hebrew_prober,
        var_visual_hebrew_prober
    );


    // Release cached frame.
    if (frame_cdb9ef75f9ef67f25ded32068d501d4c == cache_frame_cdb9ef75f9ef67f25ded32068d501d4c) {
        Py_DECREF(frame_cdb9ef75f9ef67f25ded32068d501d4c);
    }
    cache_frame_cdb9ef75f9ef67f25ded32068d501d4c = NULL;

    assertFrameObject(frame_cdb9ef75f9ef67f25ded32068d501d4c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$sbcsgroupprober$$$function_1___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_hebrew_prober);
    Py_DECREF(var_hebrew_prober);
    var_hebrew_prober = NULL;

    CHECK_OBJECT((PyObject *)var_logical_hebrew_prober);
    Py_DECREF(var_logical_hebrew_prober);
    var_logical_hebrew_prober = NULL;

    CHECK_OBJECT((PyObject *)var_visual_hebrew_prober);
    Py_DECREF(var_visual_hebrew_prober);
    var_visual_hebrew_prober = NULL;

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

    Py_XDECREF(var_hebrew_prober);
    var_hebrew_prober = NULL;

    Py_XDECREF(var_logical_hebrew_prober);
    var_logical_hebrew_prober = NULL;

    Py_XDECREF(var_visual_hebrew_prober);
    var_visual_hebrew_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcsgroupprober$$$function_1___init__);
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



static PyObject *MAKE_FUNCTION_chardet$sbcsgroupprober$$$function_1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcsgroupprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cdb9ef75f9ef67f25ded32068d501d4c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcsgroupprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$sbcsgroupprober =
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

function_impl_code functable_chardet$sbcsgroupprober[] = {
    impl_chardet$sbcsgroupprober$$$function_1___init__,
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

    function_impl_code *current = functable_chardet$sbcsgroupprober;
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

    if (offset > sizeof(functable_chardet$sbcsgroupprober) || offset < 0) {
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
        functable_chardet$sbcsgroupprober[offset],
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
        module_chardet$sbcsgroupprober,
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
PyObject *modulecode_chardet$sbcsgroupprober(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$sbcsgroupprober;
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
    PRINT_STRING("chardet.sbcsgroupprober: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.sbcsgroupprober: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.sbcsgroupprober: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$sbcsgroupprober\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$sbcsgroupprober = Py_InitModule4(
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
    mdef_chardet$sbcsgroupprober.m_name = module_full_name;
    module_chardet$sbcsgroupprober = PyModule_Create(&mdef_chardet$sbcsgroupprober);
#endif

    moduledict_chardet$sbcsgroupprober = MODULE_DICT(module_chardet$sbcsgroupprober);

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
        moduledict_chardet$sbcsgroupprober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$sbcsgroupprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$sbcsgroupprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcsgroupprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcsgroupprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$sbcsgroupprober);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$sbcsgroupprober);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_2d4ee766a3b2a0a92f2bec156286e79c;
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
    PyObject *locals_chardet$sbcsgroupprober_43 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
        UPDATE_STRING_DICT0(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_2d4ee766a3b2a0a92f2bec156286e79c = MAKE_MODULE_FRAME(codeobj_2d4ee766a3b2a0a92f2bec156286e79c, module_chardet$sbcsgroupprober);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_2d4ee766a3b2a0a92f2bec156286e79c);
    assert(Py_REFCNT(frame_2d4ee766a3b2a0a92f2bec156286e79c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_charsetgroupprober;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetGroupProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 29;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_CharSetGroupProber);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sbcharsetprober;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_SingleByteCharSetProber_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 30;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_SingleByteCharSetProber);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_langcyrillicmodel;
        tmp_globals_name_3 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_da1ffc8dadc55d2c9388cb7fe90c9085_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 31;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_Win1251CyrillicModel);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251CyrillicModel, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_Koi8rModel);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Koi8rModel, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_Latin5CyrillicModel);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5CyrillicModel, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_MacCyrillicModel);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_MacCyrillicModel, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_Ibm866Model);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm866Model, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_Ibm855Model);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Ibm855Model, tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_langgreekmodel;
        tmp_globals_name_4 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_Latin7GreekModel_str_plain_Win1253GreekModel_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 34;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_Latin7GreekModel);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin7GreekModel, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_Win1253GreekModel);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1253GreekModel, tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_langbulgarianmodel;
        tmp_globals_name_5 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_4718770696a749132e8430c48931b9e8_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 35;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_Latin5BulgarianModel);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_Win1251BulgarianModel);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel, tmp_assign_source_17);
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

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_langthaimodel;
        tmp_globals_name_6 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_TIS620ThaiModel_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 37;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_TIS620ThaiModel);
        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_TIS620ThaiModel, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_langhebrewmodel;
        tmp_globals_name_7 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_Win1255HebrewModel_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 38;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_Win1255HebrewModel);
        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Win1255HebrewModel, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_hebrewprober;
        tmp_globals_name_8 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_HebrewProber_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 39;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_HebrewProber);
        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_HebrewProber, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_langturkishmodel;
        tmp_globals_name_9 = (PyObject *)moduledict_chardet$sbcsgroupprober;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_Latin5TurkishModel_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 40;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_Latin5TurkishModel);
        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_Latin5TurkishModel, tmp_assign_source_21);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15207 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 43;

            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_22 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_chardet$sbcsgroupprober_43 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_5be317a1d4f47b238e8360b0b93bbe50;
        tmp_res = PyDict_SetItem(locals_chardet$sbcsgroupprober_43, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$sbcsgroupprober$$$function_1___init__();



        tmp_res = PyDict_SetItem(locals_chardet$sbcsgroupprober_43, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_23 = locals_chardet$sbcsgroupprober_43;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcsgroupprober);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_chardet$sbcsgroupprober_43);
        locals_chardet$sbcsgroupprober_43 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$sbcsgroupprober);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
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


            exception_lineno = 43;

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
        tmp_assign_source_24 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_25 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_4;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_25;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_24 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_7;
            }
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcsgroupprober);
        return NULL;
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
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_24 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_24 == NULL));
            goto try_return_handler_6;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcsgroupprober);
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$sbcsgroupprober);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_SBCSGroupProber;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_26;
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
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d4ee766a3b2a0a92f2bec156286e79c);
#endif
    popFrameStack();

    assertFrameObject(frame_2d4ee766a3b2a0a92f2bec156286e79c);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d4ee766a3b2a0a92f2bec156286e79c);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_2d4ee766a3b2a0a92f2bec156286e79c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_2d4ee766a3b2a0a92f2bec156286e79c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d4ee766a3b2a0a92f2bec156286e79c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_27 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_chardet$sbcsgroupprober, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber, tmp_assign_source_27);
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


    return module_chardet$sbcsgroupprober;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
