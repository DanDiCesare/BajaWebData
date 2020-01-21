/* Generated code for Python module 'future.types.newdict'
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

/* The "_module_future$types$newdict" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$types$newdict;
PyDictObject *moduledict_future$types$newdict;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___instancecheck__;
extern PyObject *const_tuple_int_pos_2_int_pos_6_tuple;
extern PyObject *const_str_plain_items;
extern PyObject *const_tuple_str_plain_cls_str_plain_instance_tuple;
extern PyObject *const_str_plain_iterkeys;
extern PyObject *const_str_digest_3695001d00f9777077b5a356b34987b1;
extern PyObject *const_str_plain_iteritems;
extern PyObject *const_tuple_c2c8099b105f654c90ee88605af5086c_tuple;
extern PyObject *const_str_plain_viewitems;
extern PyObject *const_tuple_str_plain_newobject_tuple;
extern PyObject *const_str_plain_newdict;
extern PyObject *const_tuple_str_plain_with_metaclass_tuple;
extern PyObject *const_tuple_type_type_tuple;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain___new__;
static PyObject *const_str_digest_9ef8ac114b1b2679a6877062342a9d7e;
static PyObject *const_str_plain__builtin_dict;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_BaseNewDict;
static PyObject *const_str_digest_845c25df37f884120dadad5dbe0ac2f4;
extern PyObject *const_str_plain_with_metaclass;
extern PyObject *const_str_plain___native__;
extern PyObject *const_str_plain_viewvalues;
extern PyObject *const_str_plain_instance;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_viewkeys;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_9ab047132101b4d25be51bdf878f9467;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_int_pos_2_int_pos_7_tuple;
static PyObject *const_str_digest_baf2ec2d314a97fff639718a4d30131c;
static PyObject *const_str_digest_7a523f4add82938a370a9417b958a44e;
static PyObject *const_str_digest_b4b0d7de9b372bb94c27048aeefcdf84;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_newobject;
static PyObject *const_str_digest_4f1d60263763967bac7e451cba9942d6;
extern PyObject *const_str_plain_ver;
extern PyObject *const_str_digest_e4f7f1f1dc834c6bea8d49ea7d15f20c;
extern PyObject *const_str_plain_dict;
extern PyObject *const_int_pos_6;
static PyObject *const_list_str_plain_newdict_list;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_digest_6a0089605ddc0752a6af37032f60a18e;
extern PyObject *const_str_plain_itervalues;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_951a9ccfd7b8fd0dcf33942f0f1ce39f;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_int_pos_3_int_0_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_9ef8ac114b1b2679a6877062342a9d7e = UNSTREAM_STRING(&constant_bin[ 814320 ], 185, 0);
    const_str_plain__builtin_dict = UNSTREAM_STRING(&constant_bin[ 59671 ], 13, 1);
    const_str_plain_BaseNewDict = UNSTREAM_STRING(&constant_bin[ 59738 ], 11, 1);
    const_str_digest_845c25df37f884120dadad5dbe0ac2f4 = UNSTREAM_STRING(&constant_bin[ 814505 ], 23, 0);
    const_str_digest_9ab047132101b4d25be51bdf878f9467 = UNSTREAM_STRING(&constant_bin[ 814528 ], 177, 0);
    const_str_digest_baf2ec2d314a97fff639718a4d30131c = UNSTREAM_STRING(&constant_bin[ 814705 ], 181, 0);
    const_str_digest_7a523f4add82938a370a9417b958a44e = UNSTREAM_STRING(&constant_bin[ 814886 ], 29, 0);
    const_str_digest_b4b0d7de9b372bb94c27048aeefcdf84 = UNSTREAM_STRING(&constant_bin[ 814915 ], 483, 0);
    const_str_digest_4f1d60263763967bac7e451cba9942d6 = UNSTREAM_STRING(&constant_bin[ 815398 ], 55, 0);
    const_list_str_plain_newdict_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_newdict_list, 0, const_str_plain_newdict); Py_INCREF(const_str_plain_newdict);
    const_str_digest_951a9ccfd7b8fd0dcf33942f0f1ce39f = UNSTREAM_STRING(&constant_bin[ 815453 ], 452, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$types$newdict(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8f79a78aa3ff5adbf3f9abae38f0d71d;
static PyCodeObject *codeobj_97c0d8384555dfae5c38fc3259a0c626;
static PyCodeObject *codeobj_e800280826daa5eec2df03d8ca96258e;
static PyCodeObject *codeobj_faac6a2b546b45d3caca165d7bd33f26;
static PyCodeObject *codeobj_5c858f37db411d147ba3b7f8a6341bc3;
static PyCodeObject *codeobj_a6a8ad5ddde9ef3ebd18db7044c5c42c;
static PyCodeObject *codeobj_4f10f33184f9cc12e28a70d600c0ced6;
static PyCodeObject *codeobj_9a746fada6b29416813a01a3b514fef3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_845c25df37f884120dadad5dbe0ac2f4);
    codeobj_8f79a78aa3ff5adbf3f9abae38f0d71d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_7a523f4add82938a370a9417b958a44e, const_tuple_empty, 0, 0, 0);
    codeobj_97c0d8384555dfae5c38fc3259a0c626 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___instancecheck__, const_tuple_str_plain_cls_str_plain_instance_tuple, 2, 0, 0);
    codeobj_e800280826daa5eec2df03d8ca96258e = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___native__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_faac6a2b546b45d3caca165d7bd33f26 = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain___new__, const_tuple_c2c8099b105f654c90ee88605af5086c_tuple, 1, 0, 0);
    codeobj_5c858f37db411d147ba3b7f8a6341bc3 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_items, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_a6a8ad5ddde9ef3ebd18db7044c5c42c = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_keys, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_4f10f33184f9cc12e28a70d600c0ced6 = MAKE_CODEOBJECT(module_filename_obj, 37, CO_NEWLOCALS | CO_NOFREE, const_str_plain_newdict, const_tuple_empty, 0, 0, 0);
    codeobj_9a746fada6b29416813a01a3b514fef3 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_values, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_1___instancecheck__();


static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_2_items();


static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_3_keys();


static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_4_values();


static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_5___new__();


static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_6___native__();


// The module function definitions.
static PyObject *impl_future$types$newdict$$$function_1___instancecheck__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_instance = python_pars[1];
    struct Nuitka_FrameObject *frame_97c0d8384555dfae5c38fc3259a0c626;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_97c0d8384555dfae5c38fc3259a0c626 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_97c0d8384555dfae5c38fc3259a0c626, codeobj_97c0d8384555dfae5c38fc3259a0c626, module_future$types$newdict, sizeof(void *)+sizeof(void *));
    frame_97c0d8384555dfae5c38fc3259a0c626 = cache_frame_97c0d8384555dfae5c38fc3259a0c626;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_97c0d8384555dfae5c38fc3259a0c626);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_97c0d8384555dfae5c38fc3259a0c626) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_cls);
        tmp_compexpr_left_1 = par_cls;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_newdict);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_newdict);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 59622 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
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
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT(par_instance);
            tmp_isinstance_inst_1 = par_instance;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain__builtin_dict);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_dict);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 59658 ], 42, 0);
                exception_tb = NULL;

                exception_lineno = 32;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_2;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
            Py_INCREF(tmp_return_value);
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_1 = LOOKUP_BUILTIN(const_str_plain_issubclass);
            assert(tmp_called_name_1 != NULL);
            CHECK_OBJECT(par_instance);
            tmp_source_name_1 = par_instance;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_cls);
            tmp_args_element_name_2 = par_cls;
            frame_97c0d8384555dfae5c38fc3259a0c626->m_frame.f_lineno = 34;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_args_element_name_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_97c0d8384555dfae5c38fc3259a0c626);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_97c0d8384555dfae5c38fc3259a0c626);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_97c0d8384555dfae5c38fc3259a0c626);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97c0d8384555dfae5c38fc3259a0c626, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_97c0d8384555dfae5c38fc3259a0c626->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97c0d8384555dfae5c38fc3259a0c626, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_97c0d8384555dfae5c38fc3259a0c626,
        type_description_1,
        par_cls,
        par_instance
    );


    // Release cached frame.
    if (frame_97c0d8384555dfae5c38fc3259a0c626 == cache_frame_97c0d8384555dfae5c38fc3259a0c626) {
        Py_DECREF(frame_97c0d8384555dfae5c38fc3259a0c626);
    }
    cache_frame_97c0d8384555dfae5c38fc3259a0c626 = NULL;

    assertFrameObject(frame_97c0d8384555dfae5c38fc3259a0c626);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newdict$$$function_1___instancecheck__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_instance);
    Py_DECREF(par_instance);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$types$newdict$$$function_2_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5c858f37db411d147ba3b7f8a6341bc3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5c858f37db411d147ba3b7f8a6341bc3 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_5c858f37db411d147ba3b7f8a6341bc3, codeobj_5c858f37db411d147ba3b7f8a6341bc3, module_future$types$newdict, sizeof(void *));
    frame_5c858f37db411d147ba3b7f8a6341bc3 = cache_frame_5c858f37db411d147ba3b7f8a6341bc3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5c858f37db411d147ba3b7f8a6341bc3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5c858f37db411d147ba3b7f8a6341bc3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = const_tuple_int_pos_2_int_pos_7_tuple;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_5c858f37db411d147ba3b7f8a6341bc3->m_frame.f_lineno = 49;
            tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_viewitems);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
                exception_tb = NULL;

                exception_lineno = 50;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_2 = tmp_mvar_value_2;
            tmp_compexpr_right_2 = const_tuple_int_pos_2_int_pos_6_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
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
                PyObject *tmp_called_instance_2;
                CHECK_OBJECT(par_self);
                tmp_called_instance_2 = par_self;
                frame_5c858f37db411d147ba3b7f8a6341bc3->m_frame.f_lineno = 51;
                tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_iteritems);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
                }

                if (tmp_mvar_value_3 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
                    exception_tb = NULL;

                    exception_lineno = 52;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_3 = tmp_mvar_value_3;
                tmp_compexpr_right_3 = const_tuple_int_pos_3_int_0_tuple;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
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
                    PyObject *tmp_called_instance_3;
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_3 = par_self;
                    frame_5c858f37db411d147ba3b7f8a6341bc3->m_frame.f_lineno = 53;
                    tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_items);
                    if (tmp_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c858f37db411d147ba3b7f8a6341bc3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c858f37db411d147ba3b7f8a6341bc3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c858f37db411d147ba3b7f8a6341bc3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c858f37db411d147ba3b7f8a6341bc3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5c858f37db411d147ba3b7f8a6341bc3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c858f37db411d147ba3b7f8a6341bc3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c858f37db411d147ba3b7f8a6341bc3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_5c858f37db411d147ba3b7f8a6341bc3 == cache_frame_5c858f37db411d147ba3b7f8a6341bc3) {
        Py_DECREF(frame_5c858f37db411d147ba3b7f8a6341bc3);
    }
    cache_frame_5c858f37db411d147ba3b7f8a6341bc3 = NULL;

    assertFrameObject(frame_5c858f37db411d147ba3b7f8a6341bc3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newdict$$$function_2_items);
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


static PyObject *impl_future$types$newdict$$$function_3_keys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a6a8ad5ddde9ef3ebd18db7044c5c42c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a6a8ad5ddde9ef3ebd18db7044c5c42c = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a6a8ad5ddde9ef3ebd18db7044c5c42c, codeobj_a6a8ad5ddde9ef3ebd18db7044c5c42c, module_future$types$newdict, sizeof(void *));
    frame_a6a8ad5ddde9ef3ebd18db7044c5c42c = cache_frame_a6a8ad5ddde9ef3ebd18db7044c5c42c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 62;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = const_tuple_int_pos_2_int_pos_7_tuple;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_a6a8ad5ddde9ef3ebd18db7044c5c42c->m_frame.f_lineno = 63;
            tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_viewkeys);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
                exception_tb = NULL;

                exception_lineno = 64;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_2 = tmp_mvar_value_2;
            tmp_compexpr_right_2 = const_tuple_int_pos_2_int_pos_6_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
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
                PyObject *tmp_called_instance_2;
                CHECK_OBJECT(par_self);
                tmp_called_instance_2 = par_self;
                frame_a6a8ad5ddde9ef3ebd18db7044c5c42c->m_frame.f_lineno = 65;
                tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_iterkeys);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
                }

                if (tmp_mvar_value_3 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
                    exception_tb = NULL;

                    exception_lineno = 66;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_3 = tmp_mvar_value_3;
                tmp_compexpr_right_3 = const_tuple_int_pos_3_int_0_tuple;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
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
                    PyObject *tmp_called_instance_3;
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_3 = par_self;
                    frame_a6a8ad5ddde9ef3ebd18db7044c5c42c->m_frame.f_lineno = 67;
                    tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_keys);
                    if (tmp_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a6a8ad5ddde9ef3ebd18db7044c5c42c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6a8ad5ddde9ef3ebd18db7044c5c42c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6a8ad5ddde9ef3ebd18db7044c5c42c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_a6a8ad5ddde9ef3ebd18db7044c5c42c == cache_frame_a6a8ad5ddde9ef3ebd18db7044c5c42c) {
        Py_DECREF(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c);
    }
    cache_frame_a6a8ad5ddde9ef3ebd18db7044c5c42c = NULL;

    assertFrameObject(frame_a6a8ad5ddde9ef3ebd18db7044c5c42c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newdict$$$function_3_keys);
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


static PyObject *impl_future$types$newdict$$$function_4_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9a746fada6b29416813a01a3b514fef3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9a746fada6b29416813a01a3b514fef3 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_9a746fada6b29416813a01a3b514fef3, codeobj_9a746fada6b29416813a01a3b514fef3, module_future$types$newdict, sizeof(void *));
    frame_9a746fada6b29416813a01a3b514fef3 = cache_frame_9a746fada6b29416813a01a3b514fef3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9a746fada6b29416813a01a3b514fef3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9a746fada6b29416813a01a3b514fef3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = const_tuple_int_pos_2_int_pos_7_tuple;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_9a746fada6b29416813a01a3b514fef3->m_frame.f_lineno = 77;
            tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_viewvalues);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
                exception_tb = NULL;

                exception_lineno = 78;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_2 = tmp_mvar_value_2;
            tmp_compexpr_right_2 = const_tuple_int_pos_2_int_pos_6_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
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
                PyObject *tmp_called_instance_2;
                CHECK_OBJECT(par_self);
                tmp_called_instance_2 = par_self;
                frame_9a746fada6b29416813a01a3b514fef3->m_frame.f_lineno = 79;
                tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_itervalues);
                if (tmp_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ver);
                }

                if (tmp_mvar_value_3 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 59700 ], 32, 0);
                    exception_tb = NULL;

                    exception_lineno = 80;
                    type_description_1 = "o";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_3 = tmp_mvar_value_3;
                tmp_compexpr_right_3 = const_tuple_int_pos_3_int_0_tuple;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;
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
                    PyObject *tmp_called_instance_3;
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_3 = par_self;
                    frame_9a746fada6b29416813a01a3b514fef3->m_frame.f_lineno = 81;
                    tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_values);
                    if (tmp_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 81;
                        type_description_1 = "o";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a746fada6b29416813a01a3b514fef3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a746fada6b29416813a01a3b514fef3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a746fada6b29416813a01a3b514fef3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a746fada6b29416813a01a3b514fef3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9a746fada6b29416813a01a3b514fef3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a746fada6b29416813a01a3b514fef3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a746fada6b29416813a01a3b514fef3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_9a746fada6b29416813a01a3b514fef3 == cache_frame_9a746fada6b29416813a01a3b514fef3) {
        Py_DECREF(frame_9a746fada6b29416813a01a3b514fef3);
    }
    cache_frame_9a746fada6b29416813a01a3b514fef3 = NULL;

    assertFrameObject(frame_9a746fada6b29416813a01a3b514fef3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newdict$$$function_4_values);
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


static PyObject *impl_future$types$newdict$$$function_5___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_faac6a2b546b45d3caca165d7bd33f26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_faac6a2b546b45d3caca165d7bd33f26 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_faac6a2b546b45d3caca165d7bd33f26, codeobj_faac6a2b546b45d3caca165d7bd33f26, module_future$types$newdict, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_faac6a2b546b45d3caca165d7bd33f26 = cache_frame_faac6a2b546b45d3caca165d7bd33f26;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_faac6a2b546b45d3caca165d7bd33f26);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_faac6a2b546b45d3caca165d7bd33f26) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_object_name_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_newdict);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_newdict);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 59622 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 97;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_type_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_cls);
            tmp_object_name_1 = par_cls;
            tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_cls);
            tmp_args_element_name_1 = par_cls;
            frame_faac6a2b546b45d3caca165d7bd33f26->m_frame.f_lineno = 97;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain___new__, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT(par_args);
            tmp_subscribed_name_1 = par_args;
            tmp_subscript_name_1 = const_int_0;
            tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_type_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_2 = BUILTIN_TYPE1(tmp_type_arg_1);
            Py_DECREF(tmp_type_arg_1);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_newdict);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_newdict);
            }

            if (tmp_mvar_value_2 == NULL) {
                Py_DECREF(tmp_compexpr_left_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 59622 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 98;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                CHECK_OBJECT(par_args);
                tmp_subscribed_name_2 = par_args;
                tmp_subscript_name_2 = const_int_0;
                tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
                if (tmp_assign_source_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 99;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                assert(var_value == NULL);
                var_value = tmp_assign_source_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                CHECK_OBJECT(par_args);
                tmp_subscribed_name_3 = par_args;
                tmp_subscript_name_3 = const_int_0;
                tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
                if (tmp_assign_source_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                assert(var_value == NULL);
                var_value = tmp_assign_source_2;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_object_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_newdict);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_newdict);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 59622 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT(par_cls);
        tmp_object_name_2 = par_cls;
        tmp_source_name_1 = BUILTIN_SUPER(tmp_type_name_2, tmp_object_name_2);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___new__);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_name_2 = par_cls;
        if (var_value == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "value");
            exception_tb = NULL;

            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = var_value;
        frame_faac6a2b546b45d3caca165d7bd33f26->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_faac6a2b546b45d3caca165d7bd33f26);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_faac6a2b546b45d3caca165d7bd33f26);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_faac6a2b546b45d3caca165d7bd33f26);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_faac6a2b546b45d3caca165d7bd33f26, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_faac6a2b546b45d3caca165d7bd33f26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faac6a2b546b45d3caca165d7bd33f26, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_faac6a2b546b45d3caca165d7bd33f26,
        type_description_1,
        par_cls,
        par_args,
        par_kwargs,
        var_value
    );


    // Release cached frame.
    if (frame_faac6a2b546b45d3caca165d7bd33f26 == cache_frame_faac6a2b546b45d3caca165d7bd33f26) {
        Py_DECREF(frame_faac6a2b546b45d3caca165d7bd33f26);
    }
    cache_frame_faac6a2b546b45d3caca165d7bd33f26 = NULL;

    assertFrameObject(frame_faac6a2b546b45d3caca165d7bd33f26);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$types$newdict$$$function_5___new__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_value);
    var_value = NULL;

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

    Py_XDECREF(var_value);
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newdict$$$function_5___new__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$types$newdict$$$function_6___native__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e800280826daa5eec2df03d8ca96258e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e800280826daa5eec2df03d8ca96258e = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_e800280826daa5eec2df03d8ca96258e, codeobj_e800280826daa5eec2df03d8ca96258e, module_future$types$newdict, sizeof(void *));
    frame_e800280826daa5eec2df03d8ca96258e = cache_frame_e800280826daa5eec2df03d8ca96258e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e800280826daa5eec2df03d8ca96258e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e800280826daa5eec2df03d8ca96258e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dict_seq_1;
        CHECK_OBJECT(par_self);
        tmp_dict_seq_1 = par_self;
        tmp_return_value = TO_DICT(tmp_dict_seq_1, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e800280826daa5eec2df03d8ca96258e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e800280826daa5eec2df03d8ca96258e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e800280826daa5eec2df03d8ca96258e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e800280826daa5eec2df03d8ca96258e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e800280826daa5eec2df03d8ca96258e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e800280826daa5eec2df03d8ca96258e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e800280826daa5eec2df03d8ca96258e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_e800280826daa5eec2df03d8ca96258e == cache_frame_e800280826daa5eec2df03d8ca96258e) {
        Py_DECREF(frame_e800280826daa5eec2df03d8ca96258e);
    }
    cache_frame_e800280826daa5eec2df03d8ca96258e = NULL;

    assertFrameObject(frame_e800280826daa5eec2df03d8ca96258e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$types$newdict$$$function_6___native__);
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



static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_1___instancecheck__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newdict$$$function_1___instancecheck__,
        const_str_plain___instancecheck__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_97c0d8384555dfae5c38fc3259a0c626,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newdict,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_2_items() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newdict$$$function_2_items,
        const_str_plain_items,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5c858f37db411d147ba3b7f8a6341bc3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newdict,
        const_str_digest_baf2ec2d314a97fff639718a4d30131c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_3_keys() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newdict$$$function_3_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a6a8ad5ddde9ef3ebd18db7044c5c42c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newdict,
        const_str_digest_9ab047132101b4d25be51bdf878f9467,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_4_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newdict$$$function_4_values,
        const_str_plain_values,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9a746fada6b29416813a01a3b514fef3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newdict,
        const_str_digest_9ef8ac114b1b2679a6877062342a9d7e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_5___new__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newdict$$$function_5___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_faac6a2b546b45d3caca165d7bd33f26,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newdict,
        const_str_digest_951a9ccfd7b8fd0dcf33942f0f1ce39f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$types$newdict$$$function_6___native__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$types$newdict$$$function_6___native__,
        const_str_plain___native__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e800280826daa5eec2df03d8ca96258e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$types$newdict,
        const_str_digest_3695001d00f9777077b5a356b34987b1,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$types$newdict =
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

function_impl_code functable_future$types$newdict[] = {
    impl_future$types$newdict$$$function_1___instancecheck__,
    impl_future$types$newdict$$$function_2_items,
    impl_future$types$newdict$$$function_3_keys,
    impl_future$types$newdict$$$function_4_values,
    impl_future$types$newdict$$$function_5___new__,
    impl_future$types$newdict$$$function_6___native__,
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

    function_impl_code *current = functable_future$types$newdict;
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

    if (offset > sizeof(functable_future$types$newdict) || offset < 0) {
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
        functable_future$types$newdict[offset],
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
        module_future$types$newdict,
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
PyObject *modulecode_future$types$newdict(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$types$newdict;
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
    PRINT_STRING("future.types.newdict: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.types.newdict: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.types.newdict: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$types$newdict\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$types$newdict = Py_InitModule4(
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
    mdef_future$types$newdict.m_name = module_full_name;
    module_future$types$newdict = PyModule_Create(&mdef_future$types$newdict);
#endif

    moduledict_future$types$newdict = MODULE_DICT(module_future$types$newdict);

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
        moduledict_future$types$newdict,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$types$newdict,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$types$newdict,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$types$newdict,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$types$newdict,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$types$newdict);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$types$newdict);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_locals_future$types$newdict_29_key___instancecheck__ = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    struct Nuitka_FrameObject *frame_8f79a78aa3ff5adbf3f9abae38f0d71d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_future$types$newdict_37 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4f10f33184f9cc12e28a70d600c0ced6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4f10f33184f9cc12e28a70d600c0ced6_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_b4b0d7de9b372bb94c27048aeefcdf84;
        UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_future$types$newdict;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        assert(!(tmp_assign_source_3 == NULL));
        UPDATE_STRING_DICT1(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_8f79a78aa3ff5adbf3f9abae38f0d71d = MAKE_MODULE_FRAME(codeobj_8f79a78aa3ff5adbf3f9abae38f0d71d, module_future$types$newdict);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8f79a78aa3ff5adbf3f9abae38f0d71d);
    assert(Py_REFCNT(frame_8f79a78aa3ff5adbf3f9abae38f0d71d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_digest_118c8611317729818c37c760127e23b2;
        tmp_globals_name_2 = (PyObject *)moduledict_future$types$newdict;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_with_metaclass_tuple;
        frame_8f79a78aa3ff5adbf3f9abae38f0d71d->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_with_metaclass);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_with_metaclass, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_digest_e4f7f1f1dc834c6bea8d49ea7d15f20c;
        tmp_globals_name_3 = (PyObject *)moduledict_future$types$newdict;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_newobject_tuple;
        frame_8f79a78aa3ff5adbf3f9abae38f0d71d->m_frame.f_lineno = 22;
        tmp_import_name_from_2 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_newobject);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_newobject, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = (PyObject *)&PyDict_Type;
        UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain__builtin_dict, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = 2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3017 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_slice_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_version_info);
        if (tmp_slice_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
        Py_DECREF(tmp_slice_source_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_ver, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_future$types$newdict$$$function_1___instancecheck__();



            assert(tmp_locals_future$types$newdict_29_key___instancecheck__ == NULL);
            tmp_locals_future$types$newdict_29_key___instancecheck__ = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_value_1 = const_str_digest_6a0089605ddc0752a6af37032f60a18e;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_8 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$types$newdict_29_key___instancecheck__);
            tmp_dict_value_2 = tmp_locals_future$types$newdict_29_key___instancecheck__;
            tmp_dict_key_2 = const_str_plain___instancecheck__;
            tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$types$newdict);
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT((PyObject *)tmp_locals_future$types$newdict_29_key___instancecheck__);
        Py_DECREF(tmp_locals_future$types$newdict_29_key___instancecheck__);
        tmp_locals_future$types$newdict_29_key___instancecheck__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$types$newdict);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_8;
    }
    // Tried code:
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


            exception_lineno = 29;

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


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_10);
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_BaseNewDict;
        tmp_args_element_name_2 = const_tuple_type_type_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_8f79a78aa3ff5adbf3f9abae38f0d71d->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_11;
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

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_12 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_BaseNewDict, tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_with_metaclass);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_with_metaclass);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43510 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 37;

            goto try_except_handler_3;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_BaseNewDict);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseNewDict);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 59732 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 37;

            goto try_except_handler_3;
        }

        tmp_args_element_name_4 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain__builtin_dict);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_dict);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 59665 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 37;

            goto try_except_handler_3;
        }

        tmp_args_element_name_5 = tmp_mvar_value_4;
        frame_8f79a78aa3ff5adbf3f9abae38f0d71d->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        tmp_assign_source_13 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_13, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_future$types$newdict_37 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_6a0089605ddc0752a6af37032f60a18e;
        tmp_res = PyDict_SetItem(locals_future$types$newdict_37, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_4f1d60263763967bac7e451cba9942d6;
        tmp_res = PyDict_SetItem(locals_future$types$newdict_37, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$types$newdict$$$function_2_items();



        tmp_res = PyDict_SetItem(locals_future$types$newdict_37, const_str_plain_items, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$types$newdict$$$function_3_keys();



        tmp_res = PyDict_SetItem(locals_future$types$newdict_37, const_str_plain_keys, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$types$newdict$$$function_4_values();



        tmp_res = PyDict_SetItem(locals_future$types$newdict_37, const_str_plain_values, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_4f10f33184f9cc12e28a70d600c0ced6_2, codeobj_4f10f33184f9cc12e28a70d600c0ced6, module_future$types$newdict, 0);
        frame_4f10f33184f9cc12e28a70d600c0ced6_2 = cache_frame_4f10f33184f9cc12e28a70d600c0ced6_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_4f10f33184f9cc12e28a70d600c0ced6_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_4f10f33184f9cc12e28a70d600c0ced6_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_staticmethod_arg_1;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_future$types$newdict$$$function_5___new__();



            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_future$types$newdict_37, const_str_plain___new__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4f10f33184f9cc12e28a70d600c0ced6_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4f10f33184f9cc12e28a70d600c0ced6_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4f10f33184f9cc12e28a70d600c0ced6_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_4f10f33184f9cc12e28a70d600c0ced6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4f10f33184f9cc12e28a70d600c0ced6_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4f10f33184f9cc12e28a70d600c0ced6_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_4f10f33184f9cc12e28a70d600c0ced6_2 == cache_frame_4f10f33184f9cc12e28a70d600c0ced6_2) {
            Py_DECREF(frame_4f10f33184f9cc12e28a70d600c0ced6_2);
        }
        cache_frame_4f10f33184f9cc12e28a70d600c0ced6_2 = NULL;

        assertFrameObject(frame_4f10f33184f9cc12e28a70d600c0ced6_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_future$types$newdict$$$function_6___native__();



        tmp_res = PyDict_SetItem(locals_future$types$newdict_37, const_str_plain___native__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_14 = locals_future$types$newdict_37;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$types$newdict);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_future$types$newdict_37);
        locals_future$types$newdict_37 = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_future$types$newdict_37);
        locals_future$types$newdict_37 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$types$newdict);
        return NULL;
        outline_exception_1:;
        exception_lineno = 37;
        goto try_except_handler_3;
        outline_result_2:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
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


            exception_lineno = 37;

            goto try_except_handler_3;
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
        tmp_assign_source_15 = DICT_GET_ITEM(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_3;
            }
            assert(tmp_select_metaclass_2__base == NULL);
            tmp_select_metaclass_2__base = tmp_assign_source_16;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_source_name_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_15 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_2);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$types$newdict);
        return NULL;
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_15 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_15 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$types$newdict);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_2__base);
        Py_DECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_2__base);
        Py_DECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$types$newdict);
        return NULL;
        outline_result_3:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_3 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_6 = const_str_plain_newdict;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_args_element_name_7 = tmp_class_creation_2__bases;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_8 = tmp_class_creation_2__class_dict;
        frame_8f79a78aa3ff5adbf3f9abae38f0d71d->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_17;
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

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
    RESTORE_FRAME_EXCEPTION(frame_8f79a78aa3ff5adbf3f9abae38f0d71d);
#endif
    popFrameStack();

    assertFrameObject(frame_8f79a78aa3ff5adbf3f9abae38f0d71d);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f79a78aa3ff5adbf3f9abae38f0d71d);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_8f79a78aa3ff5adbf3f9abae38f0d71d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8f79a78aa3ff5adbf3f9abae38f0d71d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f79a78aa3ff5adbf3f9abae38f0d71d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_18 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain_newdict, tmp_assign_source_18);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class);
    Py_DECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = LIST_COPY(const_list_str_plain_newdict_list);
        UPDATE_STRING_DICT1(moduledict_future$types$newdict, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_19);
    }

    return module_future$types$newdict;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
