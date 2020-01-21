/* Generated code for Python module 'future.backports.email'
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

/* The "_module_future$backports$email" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports$email;
PyDictObject *moduledict_future$backports$email;

/* The declarations of module constants used, if any. */
static PyObject *const_unicode_plain_header;
extern PyObject *const_str_plain_surrogateescape;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_ea5769b86ffca871976b136a6f086911_tuple;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_parsestr;
static PyObject *const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple;
static PyObject *const_unicode_plain_encoders;
static PyObject *const_tuple_str_plain_Parser_tuple;
extern PyObject *const_str_plain_email;
extern PyObject *const_str_plain_BytesParser;
extern PyObject *const_str_plain_NUITKA_PACKAGE_future_backports;
static PyObject *const_tuple_759d56719f41b27368cc97695d365ba2_tuple;
static PyObject *const_unicode_plain_message_from_string;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_digest_2b1332b4491fab05529a8d7cfada4719;
static PyObject *const_unicode_digest_7021414e710b97d4b9ffdc814b3e115b;
static PyObject *const_unicode_plain_base64mime;
extern PyObject *const_str_plain_NUITKA_PACKAGE_future;
static PyObject *const_unicode_plain_message_from_file;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_parse;
static PyObject *const_unicode_plain_mime;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_Parser;
static PyObject *const_unicode_plain_feedparser;
static PyObject *const_unicode_digest_8241d94f3f38fd04f85017d6481c999f;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_c320213d94b705a82c5cf98af85bbb32_tuple;
static PyObject *const_unicode_plain_quoprimime;
extern PyObject *const_str_plain___all__;
static PyObject *const_unicode_digest_3b7932806a101349ea3f70a5ea1b2d62;
static PyObject *const_tuple_str_plain_BytesParser_tuple;
extern PyObject *const_str_plain_register_surrogateescape;
static PyObject *const_unicode_plain_utils;
static PyObject *const_str_plain_message_from_bytes;
static PyObject *const_str_plain_kws;
static PyObject *const_tuple_str_plain_surrogateescape_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb;
extern PyObject *const_unicode_plain_message;
static PyObject *const_str_digest_3b3c8209efa0c60f7197571c4cee7c44;
static PyObject *const_unicode_digest_8938abcc2e9a3814d2031b06a773099e;
static PyObject *const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
static PyObject *const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
static PyObject *const_unicode_plain_parser;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_fp;
static PyObject *const_unicode_digest_9d39f38d2d4c5d9ed2831f2dd1614500;
extern PyObject *const_str_plain_parsebytes;
static PyObject *const_unicode_plain_message_from_binary_file;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_unicode_digest_9be3b7477143c298d0d99ee8f2ddca56;
static PyObject *const_str_plain_message_from_binary_file;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_message_from_string;
extern PyObject *const_int_0;
static PyObject *const_unicode_plain_generator;
extern PyObject *const_str_plain_environ;
static PyObject *const_unicode_plain_errors;
static PyObject *const_str_plain_message_from_file;
extern PyObject *const_unicode_plain_charset;
static PyObject *const_str_digest_ca8e7a6f2b5a70db1d7c0cea4e9ca4e0;
extern PyObject *const_str_plain_args;
static PyObject *const_unicode_plain_message_from_bytes;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
static PyObject *const_list_33396c4d198184e17eae3120a4bd99cc_list;
extern PyObject *const_tuple_ce5ef95e5f7bb584d1ea7349939dd02c_tuple;
static PyObject *const_unicode_plain_iterators;
static PyObject *const_str_plain_NUITKA_PACKAGE_future_backports_email;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_unicode_plain_header = UNSTREAM_UNICODE(&constant_bin[ 9779 ], 6);
    const_tuple_ea5769b86ffca871976b136a6f086911_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 0, const_str_plain_fp); Py_INCREF(const_str_plain_fp);
    PyTuple_SET_ITEM(const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, const_str_plain_args); Py_INCREF(const_str_plain_args);
    const_str_plain_kws = UNSTREAM_STRING(&constant_bin[ 653558 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 2, const_str_plain_kws); Py_INCREF(const_str_plain_kws);
    PyTuple_SET_ITEM(const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 3, const_str_plain_BytesParser); Py_INCREF(const_str_plain_BytesParser);
    const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 0, const_str_plain_s); Py_INCREF(const_str_plain_s);
    PyTuple_SET_ITEM(const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 2, const_str_plain_kws); Py_INCREF(const_str_plain_kws);
    PyTuple_SET_ITEM(const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 3, const_str_plain_BytesParser); Py_INCREF(const_str_plain_BytesParser);
    const_unicode_plain_encoders = UNSTREAM_UNICODE(&constant_bin[ 42742 ], 8);
    const_tuple_str_plain_Parser_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Parser_tuple, 0, const_str_plain_Parser); Py_INCREF(const_str_plain_Parser);
    const_tuple_759d56719f41b27368cc97695d365ba2_tuple = PyTuple_New(2);
    const_str_plain_NUITKA_PACKAGE_future_backports_email = UNSTREAM_STRING(&constant_bin[ 653561 ], 37, 1);
    PyTuple_SET_ITEM(const_tuple_759d56719f41b27368cc97695d365ba2_tuple, 0, const_str_plain_NUITKA_PACKAGE_future_backports_email); Py_INCREF(const_str_plain_NUITKA_PACKAGE_future_backports_email);
    PyTuple_SET_ITEM(const_tuple_759d56719f41b27368cc97695d365ba2_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242); Py_INCREF(const_str_digest_5bfaf90dbd407b4fc29090c8f6415242);
    const_unicode_plain_message_from_string = UNSTREAM_UNICODE(&constant_bin[ 653598 ], 19);
    const_str_digest_2b1332b4491fab05529a8d7cfada4719 = UNSTREAM_STRING(&constant_bin[ 653617 ], 34, 0);
    const_unicode_digest_7021414e710b97d4b9ffdc814b3e115b = UNSTREAM_UNICODE(&constant_bin[ 653651 ], 138);
    const_unicode_plain_base64mime = UNSTREAM_UNICODE(&constant_bin[ 45369 ], 10);
    const_unicode_plain_message_from_file = UNSTREAM_UNICODE(&constant_bin[ 653789 ], 17);
    const_unicode_plain_mime = UNSTREAM_UNICODE(&constant_bin[ 45375 ], 4);
    const_unicode_plain_feedparser = UNSTREAM_UNICODE(&constant_bin[ 653806 ], 10);
    const_unicode_digest_8241d94f3f38fd04f85017d6481c999f = UNSTREAM_UNICODE(&constant_bin[ 653816 ], 118);
    const_unicode_plain_quoprimime = UNSTREAM_UNICODE(&constant_bin[ 653934 ], 10);
    const_unicode_digest_3b7932806a101349ea3f70a5ea1b2d62 = UNSTREAM_UNICODE(&constant_bin[ 653944 ], 124);
    const_tuple_str_plain_BytesParser_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_BytesParser_tuple, 0, const_str_plain_BytesParser); Py_INCREF(const_str_plain_BytesParser);
    const_unicode_plain_utils = UNSTREAM_UNICODE(&constant_bin[ 21463 ], 5);
    const_str_plain_message_from_bytes = UNSTREAM_STRING(&constant_bin[ 654068 ], 18, 1);
    const_tuple_str_plain_surrogateescape_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_surrogateescape_tuple, 0, const_str_plain_surrogateescape); Py_INCREF(const_str_plain_surrogateescape);
    const_str_digest_3b3c8209efa0c60f7197571c4cee7c44 = UNSTREAM_STRING(&constant_bin[ 654086 ], 31, 0);
    const_unicode_digest_8938abcc2e9a3814d2031b06a773099e = UNSTREAM_UNICODE(&constant_bin[ 654117 ], 126);
    const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_s); Py_INCREF(const_str_plain_s);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws); Py_INCREF(const_str_plain_kws);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser); Py_INCREF(const_str_plain_Parser);
    const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_fp); Py_INCREF(const_str_plain_fp);
    PyTuple_SET_ITEM(const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws); Py_INCREF(const_str_plain_kws);
    PyTuple_SET_ITEM(const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser); Py_INCREF(const_str_plain_Parser);
    const_unicode_plain_parser = UNSTREAM_UNICODE(&constant_bin[ 47406 ], 6);
    const_unicode_digest_9d39f38d2d4c5d9ed2831f2dd1614500 = UNSTREAM_UNICODE(&constant_bin[ 654243 ], 5);
    const_unicode_plain_message_from_binary_file = UNSTREAM_UNICODE(&constant_bin[ 654248 ], 24);
    const_unicode_digest_9be3b7477143c298d0d99ee8f2ddca56 = UNSTREAM_UNICODE(&constant_bin[ 654272 ], 145);
    const_str_plain_message_from_binary_file = UNSTREAM_STRING(&constant_bin[ 654248 ], 24, 1);
    const_unicode_plain_generator = UNSTREAM_UNICODE(&constant_bin[ 569689 ], 9);
    const_unicode_plain_errors = UNSTREAM_UNICODE(&constant_bin[ 7128 ], 6);
    const_str_plain_message_from_file = UNSTREAM_STRING(&constant_bin[ 653789 ], 17, 1);
    const_str_digest_ca8e7a6f2b5a70db1d7c0cea4e9ca4e0 = UNSTREAM_STRING(&constant_bin[ 653624 ], 15, 0);
    const_unicode_plain_message_from_bytes = UNSTREAM_UNICODE(&constant_bin[ 654068 ], 18);
    const_list_33396c4d198184e17eae3120a4bd99cc_list = PyList_New(17);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 0, const_unicode_plain_base64mime); Py_INCREF(const_unicode_plain_base64mime);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 1, const_unicode_plain_charset); Py_INCREF(const_unicode_plain_charset);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 2, const_unicode_plain_encoders); Py_INCREF(const_unicode_plain_encoders);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 3, const_unicode_plain_errors); Py_INCREF(const_unicode_plain_errors);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 4, const_unicode_plain_feedparser); Py_INCREF(const_unicode_plain_feedparser);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 5, const_unicode_plain_generator); Py_INCREF(const_unicode_plain_generator);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 6, const_unicode_plain_header); Py_INCREF(const_unicode_plain_header);
    const_unicode_plain_iterators = UNSTREAM_UNICODE(&constant_bin[ 654417 ], 9);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 7, const_unicode_plain_iterators); Py_INCREF(const_unicode_plain_iterators);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 8, const_unicode_plain_message); Py_INCREF(const_unicode_plain_message);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 9, const_unicode_plain_message_from_file); Py_INCREF(const_unicode_plain_message_from_file);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 10, const_unicode_plain_message_from_binary_file); Py_INCREF(const_unicode_plain_message_from_binary_file);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 11, const_unicode_plain_message_from_string); Py_INCREF(const_unicode_plain_message_from_string);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 12, const_unicode_plain_message_from_bytes); Py_INCREF(const_unicode_plain_message_from_bytes);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 13, const_unicode_plain_mime); Py_INCREF(const_unicode_plain_mime);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 14, const_unicode_plain_parser); Py_INCREF(const_unicode_plain_parser);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 15, const_unicode_plain_quoprimime); Py_INCREF(const_unicode_plain_quoprimime);
    PyList_SET_ITEM(const_list_33396c4d198184e17eae3120a4bd99cc_list, 16, const_unicode_plain_utils); Py_INCREF(const_unicode_plain_utils);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports$email(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_28ed5582ce28c2bf8c8601d1478a00a4;
static PyCodeObject *codeobj_3406e88a09d725f7585e3d7612f12621;
static PyCodeObject *codeobj_9d7ed483e7a8d26983b7fa60e426a0c8;
static PyCodeObject *codeobj_5fc322d251d8737fe09bdad56624dafd;
static PyCodeObject *codeobj_45d0e8379a84ae45fea30152ca205388;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_2b1332b4491fab05529a8d7cfada4719);
    codeobj_28ed5582ce28c2bf8c8601d1478a00a4 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_digest_3b3c8209efa0c60f7197571c4cee7c44, const_tuple_empty, 0, 0, 0);
    codeobj_3406e88a09d725f7585e3d7612f12621 = MAKE_CODEOBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_message_from_binary_file, const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, 0, 0);
    codeobj_9d7ed483e7a8d26983b7fa60e426a0c8 = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_message_from_bytes, const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, 0, 0);
    codeobj_5fc322d251d8737fe09bdad56624dafd = MAKE_CODEOBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_message_from_file, const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, 0, 0);
    codeobj_45d0e8379a84ae45fea30152ca205388 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_message_from_string, const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_1_message_from_string();


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_2_message_from_bytes();


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_3_message_from_file();


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_4_message_from_binary_file();


// The module function definitions.
static PyObject *impl_future$backports$email$$$function_1_message_from_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kws = python_pars[2];
    PyObject *var_Parser = NULL;
    struct Nuitka_FrameObject *frame_45d0e8379a84ae45fea30152ca205388;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_45d0e8379a84ae45fea30152ca205388 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_45d0e8379a84ae45fea30152ca205388, codeobj_45d0e8379a84ae45fea30152ca205388, module_future$backports$email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_45d0e8379a84ae45fea30152ca205388 = cache_frame_45d0e8379a84ae45fea30152ca205388;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_45d0e8379a84ae45fea30152ca205388);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_45d0e8379a84ae45fea30152ca205388) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Parser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_45d0e8379a84ae45fea30152ca205388->m_frame.f_lineno = 53;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_Parser);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_Parser == NULL);
        var_Parser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_Parser);
        tmp_dircall_arg1_1 = var_Parser;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kws);
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_args_element_name_1 = par_s;
        frame_45d0e8379a84ae45fea30152ca205388->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_parsestr, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_45d0e8379a84ae45fea30152ca205388);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_45d0e8379a84ae45fea30152ca205388);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_45d0e8379a84ae45fea30152ca205388);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45d0e8379a84ae45fea30152ca205388, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_45d0e8379a84ae45fea30152ca205388->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45d0e8379a84ae45fea30152ca205388, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45d0e8379a84ae45fea30152ca205388,
        type_description_1,
        par_s,
        par_args,
        par_kws,
        var_Parser
    );


    // Release cached frame.
    if (frame_45d0e8379a84ae45fea30152ca205388 == cache_frame_45d0e8379a84ae45fea30152ca205388) {
        Py_DECREF(frame_45d0e8379a84ae45fea30152ca205388);
    }
    cache_frame_45d0e8379a84ae45fea30152ca205388 = NULL;

    assertFrameObject(frame_45d0e8379a84ae45fea30152ca205388);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_1_message_from_string);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_Parser);
    Py_DECREF(var_Parser);
    var_Parser = NULL;

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

    Py_XDECREF(var_Parser);
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_1_message_from_string);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$$$function_2_message_from_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kws = python_pars[2];
    PyObject *var_BytesParser = NULL;
    struct Nuitka_FrameObject *frame_9d7ed483e7a8d26983b7fa60e426a0c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d7ed483e7a8d26983b7fa60e426a0c8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_9d7ed483e7a8d26983b7fa60e426a0c8, codeobj_9d7ed483e7a8d26983b7fa60e426a0c8, module_future$backports$email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_9d7ed483e7a8d26983b7fa60e426a0c8 = cache_frame_9d7ed483e7a8d26983b7fa60e426a0c8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d7ed483e7a8d26983b7fa60e426a0c8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d7ed483e7a8d26983b7fa60e426a0c8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_BytesParser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_9d7ed483e7a8d26983b7fa60e426a0c8->m_frame.f_lineno = 61;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_BytesParser);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_BytesParser == NULL);
        var_BytesParser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_BytesParser);
        tmp_dircall_arg1_1 = var_BytesParser;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kws);
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_args_element_name_1 = par_s;
        frame_9d7ed483e7a8d26983b7fa60e426a0c8->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_parsebytes, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d7ed483e7a8d26983b7fa60e426a0c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d7ed483e7a8d26983b7fa60e426a0c8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d7ed483e7a8d26983b7fa60e426a0c8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d7ed483e7a8d26983b7fa60e426a0c8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9d7ed483e7a8d26983b7fa60e426a0c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d7ed483e7a8d26983b7fa60e426a0c8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d7ed483e7a8d26983b7fa60e426a0c8,
        type_description_1,
        par_s,
        par_args,
        par_kws,
        var_BytesParser
    );


    // Release cached frame.
    if (frame_9d7ed483e7a8d26983b7fa60e426a0c8 == cache_frame_9d7ed483e7a8d26983b7fa60e426a0c8) {
        Py_DECREF(frame_9d7ed483e7a8d26983b7fa60e426a0c8);
    }
    cache_frame_9d7ed483e7a8d26983b7fa60e426a0c8 = NULL;

    assertFrameObject(frame_9d7ed483e7a8d26983b7fa60e426a0c8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_2_message_from_bytes);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_BytesParser);
    Py_DECREF(var_BytesParser);
    var_BytesParser = NULL;

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

    Py_XDECREF(var_BytesParser);
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_2_message_from_bytes);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$$$function_3_message_from_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kws = python_pars[2];
    PyObject *var_Parser = NULL;
    struct Nuitka_FrameObject *frame_5fc322d251d8737fe09bdad56624dafd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5fc322d251d8737fe09bdad56624dafd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_5fc322d251d8737fe09bdad56624dafd, codeobj_5fc322d251d8737fe09bdad56624dafd, module_future$backports$email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_5fc322d251d8737fe09bdad56624dafd = cache_frame_5fc322d251d8737fe09bdad56624dafd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5fc322d251d8737fe09bdad56624dafd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5fc322d251d8737fe09bdad56624dafd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Parser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_5fc322d251d8737fe09bdad56624dafd->m_frame.f_lineno = 69;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_Parser);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_Parser == NULL);
        var_Parser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_Parser);
        tmp_dircall_arg1_1 = var_Parser;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kws);
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fp);
        tmp_args_element_name_1 = par_fp;
        frame_5fc322d251d8737fe09bdad56624dafd->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_parse, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
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
    RESTORE_FRAME_EXCEPTION(frame_5fc322d251d8737fe09bdad56624dafd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fc322d251d8737fe09bdad56624dafd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fc322d251d8737fe09bdad56624dafd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5fc322d251d8737fe09bdad56624dafd, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5fc322d251d8737fe09bdad56624dafd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fc322d251d8737fe09bdad56624dafd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5fc322d251d8737fe09bdad56624dafd,
        type_description_1,
        par_fp,
        par_args,
        par_kws,
        var_Parser
    );


    // Release cached frame.
    if (frame_5fc322d251d8737fe09bdad56624dafd == cache_frame_5fc322d251d8737fe09bdad56624dafd) {
        Py_DECREF(frame_5fc322d251d8737fe09bdad56624dafd);
    }
    cache_frame_5fc322d251d8737fe09bdad56624dafd = NULL;

    assertFrameObject(frame_5fc322d251d8737fe09bdad56624dafd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_3_message_from_file);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_Parser);
    Py_DECREF(var_Parser);
    var_Parser = NULL;

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

    Py_XDECREF(var_Parser);
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_3_message_from_file);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fp);
    Py_DECREF(par_fp);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fp);
    Py_DECREF(par_fp);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$$$function_4_message_from_binary_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kws = python_pars[2];
    PyObject *var_BytesParser = NULL;
    struct Nuitka_FrameObject *frame_3406e88a09d725f7585e3d7612f12621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3406e88a09d725f7585e3d7612f12621 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_3406e88a09d725f7585e3d7612f12621, codeobj_3406e88a09d725f7585e3d7612f12621, module_future$backports$email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_3406e88a09d725f7585e3d7612f12621 = cache_frame_3406e88a09d725f7585e3d7612f12621;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3406e88a09d725f7585e3d7612f12621);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3406e88a09d725f7585e3d7612f12621) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_BytesParser_tuple;
        tmp_level_name_1 = const_int_0;
        frame_3406e88a09d725f7585e3d7612f12621->m_frame.f_lineno = 77;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_BytesParser);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_BytesParser == NULL);
        var_BytesParser = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_BytesParser);
        tmp_dircall_arg1_1 = var_BytesParser;
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kws);
        tmp_dircall_arg3_1 = par_kws;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fp);
        tmp_args_element_name_1 = par_fp;
        frame_3406e88a09d725f7585e3d7612f12621->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_parse, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3406e88a09d725f7585e3d7612f12621);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3406e88a09d725f7585e3d7612f12621);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3406e88a09d725f7585e3d7612f12621);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3406e88a09d725f7585e3d7612f12621, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3406e88a09d725f7585e3d7612f12621->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3406e88a09d725f7585e3d7612f12621, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3406e88a09d725f7585e3d7612f12621,
        type_description_1,
        par_fp,
        par_args,
        par_kws,
        var_BytesParser
    );


    // Release cached frame.
    if (frame_3406e88a09d725f7585e3d7612f12621 == cache_frame_3406e88a09d725f7585e3d7612f12621) {
        Py_DECREF(frame_3406e88a09d725f7585e3d7612f12621);
    }
    cache_frame_3406e88a09d725f7585e3d7612f12621 = NULL;

    assertFrameObject(frame_3406e88a09d725f7585e3d7612f12621);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_4_message_from_binary_file);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_BytesParser);
    Py_DECREF(var_BytesParser);
    var_BytesParser = NULL;

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

    Py_XDECREF(var_BytesParser);
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$$$function_4_message_from_binary_file);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fp);
    Py_DECREF(par_fp);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fp);
    Py_DECREF(par_fp);
    CHECK_OBJECT(par_kws);
    Py_DECREF(par_kws);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_1_message_from_string() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_1_message_from_string,
        const_str_plain_message_from_string,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45d0e8379a84ae45fea30152ca205388,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email,
        const_unicode_digest_8241d94f3f38fd04f85017d6481c999f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_2_message_from_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_2_message_from_bytes,
        const_str_plain_message_from_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9d7ed483e7a8d26983b7fa60e426a0c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email,
        const_unicode_digest_3b7932806a101349ea3f70a5ea1b2d62,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_3_message_from_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_3_message_from_file,
        const_str_plain_message_from_file,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5fc322d251d8737fe09bdad56624dafd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email,
        const_unicode_digest_7021414e710b97d4b9ffdc814b3e115b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_4_message_from_binary_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_4_message_from_binary_file,
        const_str_plain_message_from_binary_file,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3406e88a09d725f7585e3d7612f12621,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email,
        const_unicode_digest_9be3b7477143c298d0d99ee8f2ddca56,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports$email =
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

function_impl_code functable_future$backports$email[] = {
    impl_future$backports$email$$$function_1_message_from_string,
    impl_future$backports$email$$$function_2_message_from_bytes,
    impl_future$backports$email$$$function_3_message_from_file,
    impl_future$backports$email$$$function_4_message_from_binary_file,
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

    function_impl_code *current = functable_future$backports$email;
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

    if (offset > sizeof(functable_future$backports$email) || offset < 0) {
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
        functable_future$backports$email[offset],
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
        module_future$backports$email,
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
PyObject *modulecode_future$backports$email(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$backports$email;
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
    PRINT_STRING("future.backports.email: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$backports$email\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports$email = Py_InitModule4(
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
    mdef_future$backports$email.m_name = module_full_name;
    module_future$backports$email = PyModule_Create(&mdef_future$backports$email);
#endif

    moduledict_future$backports$email = MODULE_DICT(module_future$backports$email);

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
        moduledict_future$backports$email,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$backports$email,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$backports$email,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$backports$email);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$backports$email);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___name__),
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
#if 1
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_28ed5582ce28c2bf8c8601d1478a00a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_digest_8938abcc2e9a3814d2031b06a773099e;
        UPDATE_STRING_DICT0(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_28ed5582ce28c2bf8c8601d1478a00a4 = MAKE_MODULE_FRAME(codeobj_28ed5582ce28c2bf8c8601d1478a00a4, module_future$backports$email);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_28ed5582ce28c2bf8c8601d1478a00a4);
    assert(Py_REFCNT(frame_28ed5582ce28c2bf8c8601d1478a00a4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_3;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_source_name_1 = PyObject_GetAttr(module, const_str_plain_path);
            } else {
                tmp_source_name_1 = NULL;
            }
        }

        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_dirname);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(4);
        PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_source_name_2 = PyObject_GetAttr(module, const_str_plain_path);
            } else {
                tmp_source_name_2 = NULL;
            }
        }

        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_join);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_called_instance_1 = PyObject_GetAttr(module, const_str_plain_environ);
            } else {
                tmp_called_instance_1 = NULL;
            }
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_ce5ef95e5f7bb584d1ea7349939dd02c_tuple, 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_digest_ca8e7a6f2b5a70db1d7c0cea4e9ca4e0;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_source_name_3 = PyObject_GetAttr(module, const_str_plain_path);
            } else {
                tmp_source_name_3 = NULL;
            }
        }

        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_join);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_called_instance_2 = PyObject_GetAttr(module, const_str_plain_environ);
            } else {
                tmp_called_instance_2 = NULL;
            }
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_c320213d94b705a82c5cf98af85bbb32_tuple, 0));

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_email;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely(module != NULL)) {
                tmp_called_instance_3 = PyObject_GetAttr(module, const_str_plain_environ);
            } else {
                tmp_called_instance_3 = NULL;
            }
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_759d56719f41b27368cc97695d365ba2_tuple, 0));

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_3);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 11;
        tmp_import_name_from_2 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_2 == NULL));
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_division);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 12;
        tmp_import_name_from_3 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_3 == NULL));
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_absolute_import);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_118c8611317729818c37c760127e23b2;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_surrogateescape_tuple;
        tmp_level_name_1 = const_int_0;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 16;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_surrogateescape);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_surrogateescape, tmp_assign_source_7);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_surrogateescape);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_surrogateescape);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_called_instance_4 = tmp_mvar_value_1;
        frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame.f_lineno = 17;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_register_surrogateescape);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_28ed5582ce28c2bf8c8601d1478a00a4);
#endif
    popFrameStack();

    assertFrameObject(frame_28ed5582ce28c2bf8c8601d1478a00a4);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_28ed5582ce28c2bf8c8601d1478a00a4);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_28ed5582ce28c2bf8c8601d1478a00a4, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_28ed5582ce28c2bf8c8601d1478a00a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28ed5582ce28c2bf8c8601d1478a00a4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_unicode_digest_9d39f38d2d4c5d9ed2831f2dd1614500;
        UPDATE_STRING_DICT0(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = LIST_COPY(const_list_33396c4d198184e17eae3120a4bd99cc_list);
        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_future$backports$email$$$function_1_message_from_string();



        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_string, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_future$backports$email$$$function_2_message_from_bytes();



        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_bytes, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_future$backports$email$$$function_3_message_from_file();



        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_file, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_future$backports$email$$$function_4_message_from_binary_file();



        UPDATE_STRING_DICT1(moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_binary_file, tmp_assign_source_13);
    }

    return module_future$backports$email;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
