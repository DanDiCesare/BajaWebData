/* Generated code for Python module 'asn1crypto.parser'
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

/* The "_module_asn1crypto$parser" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_asn1crypto$parser;
PyDictObject *moduledict_asn1crypto$parser;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_d8498194b4aa4245dad6dd2c71b3dbb9;
extern PyObject *const_str_plain_chr_cls;
static PyObject *const_dict_3c5d687e86f9ce834fad732b85d74f2b;
static PyObject *const_str_plain_length_bytes;
extern PyObject *const_dict_c8fd5d39765b5b318c1c2eaf124070a3;
extern PyObject *const_str_plain__dump_header;
static PyObject *const_str_plain__INSUFFICIENT_DATA_MESSAGE;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_length;
static PyObject *const_str_digest_6e2d8c4a94a8e6e9f86104be7e5a1821;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_contents_str_plain_info_str_plain_consumed_tuple;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_strict;
static PyObject *const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple;
extern PyObject *const_str_plain_class_;
extern PyObject *const_str_plain_encoded_data;
extern PyObject *const_int_pos_128;
extern PyObject *const_int_pos_127;
extern PyObject *const_str_plain_signed;
static PyObject *const_tuple_str_plain_byte_cls_str_plain_chr_cls_str_plain_type_name_tuple;
extern PyObject *const_str_plain_byte_cls;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_emit;
extern PyObject *const_str_plain__types;
static PyObject *const_str_plain_consumed;
static PyObject *const_unicode_digest_8c0dbe35619d8668551406ac3c280586;
static PyObject *const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple;
extern PyObject *const_str_plain__parse;
static PyObject *const_unicode_digest_6eeacd706c502e6d1ed48b7098dbf0a4;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain_contents;
static PyObject *const_str_plain_lengths_only;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_unicode_digest_edd12dce9dc0116e8bd3279c477a4311;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_int_from_bytes_str_plain_int_to_bytes_tuple;
static PyObject *const_str_plain_length_octets;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_unicode_digest_20213faac67754cef7e386bac70d0836;
static PyObject *const_unicode_digest_95f85022142edf8d2147d933303bdd64;
static PyObject *const_unicode_digest_8d8cd7bbd02d0ef8cd8b2500e2349547;
static PyObject *const_unicode_digest_3040e22dffd758eef6da063b3a6ff6cb;
static PyObject *const_unicode_digest_9645b45bda907b0e915c796eb2d7a429;
extern PyObject *const_str_plain_pointer;
extern PyObject *const_str_plain_int_to_bytes;
extern PyObject *const_str_plain_contents_len;
static PyObject *const_unicode_digest_e75f69f7a469060ecea0ae6ca6a03d94;
extern PyObject *const_str_plain_int_from_bytes;
static PyObject *const_unicode_digest_2951bf695be54c414da9b7e3046fc6cc;
static PyObject *const_tuple_int_0_false_tuple;
static PyObject *const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_continuation_bit;
extern PyObject *const_int_pos_31;
extern PyObject *const_str_plain_num;
static PyObject *const_tuple_0172406fc2ac9179e060acb89ba65bac_tuple;
static PyObject *const_unicode_digest_d0f8ab9f2057f0e09b19d37e47d8b89c;
static PyObject *const_unicode_digest_29ef324a408ad0ea3a0b8bbb59648b1e;
static PyObject *const_str_plain_contents_end;
static PyObject *const_str_plain_sub_header_end;
static PyObject *const_unicode_digest_2f386208292a359de911a57cf58e1e68;
static PyObject *const_str_plain_length_octet;
static PyObject *const_str_plain_id_num;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_digest_217f120cab9a53b0d434c9e0d81ae45e;
extern PyObject *const_str_plain_util;
extern PyObject *const_unicode_digest_8b9fef3251b346c26753f505ae4d067a;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_unicode_digest_b3250ebfb6c6fc1eaedb8daa8652a8b9;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain__PY2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_type_name;
static PyObject *const_str_plain_first_octet;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_data_len;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_peek;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_dict_3c5d687e86f9ce834fad732b85d74f2b = _PyDict_NewPresized( 1 );
    const_str_plain_lengths_only = UNSTREAM_STRING(&constant_bin[ 250207 ], 12, 1);
    PyDict_SetItem(const_dict_3c5d687e86f9ce834fad732b85d74f2b, const_str_plain_lengths_only, Py_True);
    assert(PyDict_Size(const_dict_3c5d687e86f9ce834fad732b85d74f2b) == 1);
    const_str_plain_length_bytes = UNSTREAM_STRING(&constant_bin[ 250219 ], 12, 1);
    const_str_plain__INSUFFICIENT_DATA_MESSAGE = UNSTREAM_STRING(&constant_bin[ 13452 ], 26, 1);
    const_str_digest_6e2d8c4a94a8e6e9f86104be7e5a1821 = UNSTREAM_STRING(&constant_bin[ 250231 ], 26, 0);
    const_tuple_str_plain_contents_str_plain_info_str_plain_consumed_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_contents_str_plain_info_str_plain_consumed_tuple, 0, const_str_plain_contents); Py_INCREF(const_str_plain_contents);
    PyTuple_SET_ITEM(const_tuple_str_plain_contents_str_plain_info_str_plain_consumed_tuple, 1, const_str_plain_info); Py_INCREF(const_str_plain_info);
    const_str_plain_consumed = UNSTREAM_STRING(&constant_bin[ 221184 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_contents_str_plain_info_str_plain_consumed_tuple, 2, const_str_plain_consumed); Py_INCREF(const_str_plain_consumed);
    const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple, 0, const_str_plain_contents); Py_INCREF(const_str_plain_contents);
    PyTuple_SET_ITEM(const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple, 1, const_str_plain_strict); Py_INCREF(const_str_plain_strict);
    PyTuple_SET_ITEM(const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple, 2, const_str_plain_info); Py_INCREF(const_str_plain_info);
    PyTuple_SET_ITEM(const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple, 3, const_str_plain_consumed); Py_INCREF(const_str_plain_consumed);
    PyTuple_SET_ITEM(const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple, 4, const_str_plain_contents_len); Py_INCREF(const_str_plain_contents_len);
    const_tuple_str_plain_byte_cls_str_plain_chr_cls_str_plain_type_name_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_byte_cls_str_plain_chr_cls_str_plain_type_name_tuple, 0, const_str_plain_byte_cls); Py_INCREF(const_str_plain_byte_cls);
    PyTuple_SET_ITEM(const_tuple_str_plain_byte_cls_str_plain_chr_cls_str_plain_type_name_tuple, 1, const_str_plain_chr_cls); Py_INCREF(const_str_plain_chr_cls);
    PyTuple_SET_ITEM(const_tuple_str_plain_byte_cls_str_plain_chr_cls_str_plain_type_name_tuple, 2, const_str_plain_type_name); Py_INCREF(const_str_plain_type_name);
    const_str_plain_emit = UNSTREAM_STRING(&constant_bin[ 124954 ], 4, 1);
    const_unicode_digest_8c0dbe35619d8668551406ac3c280586 = UNSTREAM_UNICODE(&constant_bin[ 250257 ], 29);
    const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple = PyTuple_New(12);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 0, const_str_plain_encoded_data); Py_INCREF(const_str_plain_encoded_data);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 1, const_str_plain_data_len); Py_INCREF(const_str_plain_data_len);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 2, const_str_plain_pointer); Py_INCREF(const_str_plain_pointer);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 3, const_str_plain_lengths_only); Py_INCREF(const_str_plain_lengths_only);
    const_str_plain_contents_end = UNSTREAM_STRING(&constant_bin[ 250286 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 4, const_str_plain_contents_end); Py_INCREF(const_str_plain_contents_end);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 5, const_str_plain_num); Py_INCREF(const_str_plain_num);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 6, const_str_plain_start); Py_INCREF(const_str_plain_start);
    const_str_plain_length_octet = UNSTREAM_STRING(&constant_bin[ 250298 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 7, const_str_plain_length_octet); Py_INCREF(const_str_plain_length_octet);
    const_str_plain_length_octets = UNSTREAM_STRING(&constant_bin[ 250310 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 8, const_str_plain_length_octets); Py_INCREF(const_str_plain_length_octets);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 9, const_str_plain_tag); Py_INCREF(const_str_plain_tag);
    const_str_plain_sub_header_end = UNSTREAM_STRING(&constant_bin[ 250323 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 10, const_str_plain_sub_header_end); Py_INCREF(const_str_plain_sub_header_end);
    const_str_plain_first_octet = UNSTREAM_STRING(&constant_bin[ 250337 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 11, const_str_plain_first_octet); Py_INCREF(const_str_plain_first_octet);
    const_unicode_digest_6eeacd706c502e6d1ed48b7098dbf0a4 = UNSTREAM_UNICODE(&constant_bin[ 250348 ], 38);
    const_unicode_digest_edd12dce9dc0116e8bd3279c477a4311 = UNSTREAM_UNICODE(&constant_bin[ 250386 ], 37);
    const_unicode_digest_20213faac67754cef7e386bac70d0836 = UNSTREAM_UNICODE(&constant_bin[ 250423 ], 876);
    const_unicode_digest_95f85022142edf8d2147d933303bdd64 = UNSTREAM_UNICODE(&constant_bin[ 251299 ], 665);
    const_unicode_digest_8d8cd7bbd02d0ef8cd8b2500e2349547 = UNSTREAM_UNICODE(&constant_bin[ 251964 ], 669);
    const_unicode_digest_3040e22dffd758eef6da063b3a6ff6cb = UNSTREAM_UNICODE(&constant_bin[ 252633 ], 455);
    const_unicode_digest_9645b45bda907b0e915c796eb2d7a429 = UNSTREAM_UNICODE(&constant_bin[ 253088 ], 42);
    const_unicode_digest_e75f69f7a469060ecea0ae6ca6a03d94 = UNSTREAM_UNICODE(&constant_bin[ 253130 ], 200);
    const_unicode_digest_2951bf695be54c414da9b7e3046fc6cc = UNSTREAM_UNICODE(&constant_bin[ 253330 ], 599);
    const_tuple_int_0_false_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_int_0_false_tuple, 0, const_int_0); Py_INCREF(const_int_0);
    PyTuple_SET_ITEM(const_tuple_int_0_false_tuple, 1, Py_False); Py_INCREF(Py_False);
    const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 0, const_str_plain_class_); Py_INCREF(const_str_plain_class_);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 1, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 2, const_str_plain_tag); Py_INCREF(const_str_plain_tag);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 3, const_str_plain_contents); Py_INCREF(const_str_plain_contents);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 4, const_str_plain_header); Py_INCREF(const_str_plain_header);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 5, const_str_plain_length_bytes); Py_INCREF(const_str_plain_length_bytes);
    const_str_plain_id_num = UNSTREAM_STRING(&constant_bin[ 224973 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 6, const_str_plain_id_num); Py_INCREF(const_str_plain_id_num);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 7, const_str_plain_length); Py_INCREF(const_str_plain_length);
    const_str_plain_continuation_bit = UNSTREAM_STRING(&constant_bin[ 253929 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 8, const_str_plain_continuation_bit); Py_INCREF(const_str_plain_continuation_bit);
    const_tuple_0172406fc2ac9179e060acb89ba65bac_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_0172406fc2ac9179e060acb89ba65bac_tuple, 0, const_str_plain_class_); Py_INCREF(const_str_plain_class_);
    PyTuple_SET_ITEM(const_tuple_0172406fc2ac9179e060acb89ba65bac_tuple, 1, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_0172406fc2ac9179e060acb89ba65bac_tuple, 2, const_str_plain_tag); Py_INCREF(const_str_plain_tag);
    PyTuple_SET_ITEM(const_tuple_0172406fc2ac9179e060acb89ba65bac_tuple, 3, const_str_plain_contents); Py_INCREF(const_str_plain_contents);
    const_unicode_digest_d0f8ab9f2057f0e09b19d37e47d8b89c = UNSTREAM_UNICODE(&constant_bin[ 253945 ], 33);
    const_unicode_digest_29ef324a408ad0ea3a0b8bbb59648b1e = UNSTREAM_UNICODE(&constant_bin[ 253978 ], 60);
    const_unicode_digest_2f386208292a359de911a57cf58e1e68 = UNSTREAM_UNICODE(&constant_bin[ 254038 ], 33);
    const_str_digest_217f120cab9a53b0d434c9e0d81ae45e = UNSTREAM_STRING(&constant_bin[ 254071 ], 20, 0);
    const_unicode_digest_b3250ebfb6c6fc1eaedb8daa8652a8b9 = UNSTREAM_UNICODE(&constant_bin[ 205899 ], 30);
    const_str_plain_peek = UNSTREAM_STRING(&constant_bin[ 95155 ], 4, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_asn1crypto$parser(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c328a10e6700d1ea03b0ec36c5fe26bd;
static PyCodeObject *codeobj_0f6eb73ea6d56afe91b421b98c742520;
static PyCodeObject *codeobj_e70070aa91f9554d490c5971dce893e1;
static PyCodeObject *codeobj_a7327f1030b72edda0d5202ba14b5fec;
static PyCodeObject *codeobj_b7ecde55a9e45d8dc4cf33fb0238288c;
static PyCodeObject *codeobj_d86b8119d436cd7d855adde222bfe8dd;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_217f120cab9a53b0d434c9e0d81ae45e);
    codeobj_c328a10e6700d1ea03b0ec36c5fe26bd = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_6e2d8c4a94a8e6e9f86104be7e5a1821, const_tuple_empty, 0, 0, 0);
    codeobj_0f6eb73ea6d56afe91b421b98c742520 = MAKE_CODEOBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__dump_header, const_tuple_8df740ca6442c762b8a9dff924ed2c08_tuple, 4, 0, 0);
    codeobj_e70070aa91f9554d490c5971dce893e1 = MAKE_CODEOBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__parse, const_tuple_67be80066710e9156cbe72c9cf7c1fc6_tuple, 4, 0, 0);
    codeobj_a7327f1030b72edda0d5202ba14b5fec = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_emit, const_tuple_0172406fc2ac9179e060acb89ba65bac_tuple, 4, 0, 0);
    codeobj_b7ecde55a9e45d8dc4cf33fb0238288c = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_parse, const_tuple_60811c8f941c8d869e62a440d2a4d36b_tuple, 2, 0, 0);
    codeobj_d86b8119d436cd7d855adde222bfe8dd = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_peek, const_tuple_str_plain_contents_str_plain_info_str_plain_consumed_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_1_emit();


static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_2_parse(PyObject *defaults);


static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_3_peek();


static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_4__parse(PyObject *defaults);


static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_5__dump_header();


// The module function definitions.
static PyObject *impl_asn1crypto$parser$$$function_1_emit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_class_ = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_tag = python_pars[2];
    PyObject *par_contents = python_pars[3];
    struct Nuitka_FrameObject *frame_a7327f1030b72edda0d5202ba14b5fec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a7327f1030b72edda0d5202ba14b5fec = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a7327f1030b72edda0d5202ba14b5fec, codeobj_a7327f1030b72edda0d5202ba14b5fec, module_asn1crypto$parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a7327f1030b72edda0d5202ba14b5fec = cache_frame_a7327f1030b72edda0d5202ba14b5fec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7327f1030b72edda0d5202ba14b5fec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7327f1030b72edda0d5202ba14b5fec) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_class_);
        tmp_isinstance_inst_1 = par_class_;
        tmp_isinstance_cls_1 = (PyObject *)&PyInt_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            tmp_left_name_1 = const_unicode_digest_2f386208292a359de911a57cf58e1e68;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_type_name);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type_name);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6301 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 51;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_class_);
            tmp_args_element_name_1 = par_class_;
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 51;
            tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_make_exception_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 51;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 51;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_class_);
        tmp_compexpr_left_1 = par_class_;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_class_);
        tmp_compexpr_left_2 = par_class_;
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_unicode_digest_9645b45bda907b0e915c796eb2d7a429;
            CHECK_OBJECT(par_class_);
            tmp_right_name_2 = par_class_;
            tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
            if (tmp_make_exception_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 54;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
            Py_DECREF(tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 54;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_method);
        tmp_isinstance_inst_2 = par_method;
        tmp_isinstance_cls_2 = (PyObject *)&PyInt_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_left_name_3 = const_unicode_digest_d0f8ab9f2057f0e09b19d37e47d8b89c;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_type_name);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type_name);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6301 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 57;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT(par_method);
            tmp_args_element_name_2 = par_method;
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 57;
            tmp_right_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            if (tmp_right_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
            Py_DECREF(tmp_right_name_3);
            if (tmp_make_exception_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 57;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
            Py_DECREF(tmp_make_exception_arg_3);
            assert(!(tmp_raise_type_3 == NULL));
            exception_type = tmp_raise_type_3;
            exception_lineno = 57;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_3 = par_method;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_4 = par_method;
        tmp_compexpr_right_4 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_4 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            tmp_left_name_4 = const_unicode_digest_8c0dbe35619d8668551406ac3c280586;
            CHECK_OBJECT(par_method);
            tmp_right_name_4 = par_method;
            tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_4);
            if (tmp_make_exception_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 60;
            tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
            Py_DECREF(tmp_make_exception_arg_4);
            assert(!(tmp_raise_type_4 == NULL));
            exception_type = tmp_raise_type_4;
            exception_lineno = 60;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_tag);
        tmp_isinstance_inst_3 = par_tag;
        tmp_isinstance_cls_3 = (PyObject *)&PyInt_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_5;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_5 = const_unicode_digest_b3250ebfb6c6fc1eaedb8daa8652a8b9;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_type_name);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type_name);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6301 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 63;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT(par_tag);
            tmp_args_element_name_3 = par_tag;
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 63;
            tmp_right_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
            if (tmp_right_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_5);
            Py_DECREF(tmp_right_name_5);
            if (tmp_make_exception_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 63;
            tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_5);
            Py_DECREF(tmp_make_exception_arg_5);
            assert(!(tmp_raise_type_5 == NULL));
            exception_type = tmp_raise_type_5;
            exception_lineno = 63;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(par_tag);
        tmp_compexpr_left_5 = par_tag;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_make_exception_arg_6;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            tmp_left_name_6 = const_unicode_digest_edd12dce9dc0116e8bd3279c477a4311;
            CHECK_OBJECT(par_tag);
            tmp_right_name_6 = par_tag;
            tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_6, tmp_right_name_6);
            if (tmp_make_exception_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 66;
            tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_6);
            Py_DECREF(tmp_make_exception_arg_6);
            assert(!(tmp_raise_type_6 == NULL));
            exception_type = tmp_raise_type_6;
            exception_lineno = 66;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(par_contents);
        tmp_isinstance_inst_4 = par_contents;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_byte_cls);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_cls);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6264 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_4 = tmp_mvar_value_4;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_make_exception_arg_7;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            tmp_left_name_7 = const_unicode_digest_6eeacd706c502e6d1ed48b7098dbf0a4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_type_name);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type_name);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6301 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 69;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            CHECK_OBJECT(par_contents);
            tmp_args_element_name_4 = par_contents;
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 69;
            tmp_right_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
            if (tmp_right_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_7, tmp_right_name_7);
            Py_DECREF(tmp_right_name_7);
            if (tmp_make_exception_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 69;
            tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_7);
            Py_DECREF(tmp_make_exception_arg_7);
            assert(!(tmp_raise_type_7 == NULL));
            exception_type = tmp_raise_type_7;
            exception_lineno = 69;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_left_name_8;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_right_name_8;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__dump_header);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dump_header);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9760 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_6;
        CHECK_OBJECT(par_class_);
        tmp_args_element_name_5 = par_class_;
        CHECK_OBJECT(par_method);
        tmp_args_element_name_6 = par_method;
        CHECK_OBJECT(par_tag);
        tmp_args_element_name_7 = par_tag;
        CHECK_OBJECT(par_contents);
        tmp_args_element_name_8 = par_contents;
        frame_a7327f1030b72edda0d5202ba14b5fec->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_5, call_args);
        }

        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_contents);
        tmp_right_name_8 = par_contents;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_left_name_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7327f1030b72edda0d5202ba14b5fec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7327f1030b72edda0d5202ba14b5fec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7327f1030b72edda0d5202ba14b5fec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7327f1030b72edda0d5202ba14b5fec, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a7327f1030b72edda0d5202ba14b5fec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7327f1030b72edda0d5202ba14b5fec, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7327f1030b72edda0d5202ba14b5fec,
        type_description_1,
        par_class_,
        par_method,
        par_tag,
        par_contents
    );


    // Release cached frame.
    if (frame_a7327f1030b72edda0d5202ba14b5fec == cache_frame_a7327f1030b72edda0d5202ba14b5fec) {
        Py_DECREF(frame_a7327f1030b72edda0d5202ba14b5fec);
    }
    cache_frame_a7327f1030b72edda0d5202ba14b5fec = NULL;

    assertFrameObject(frame_a7327f1030b72edda0d5202ba14b5fec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_1_emit);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_class_);
    Py_DECREF(par_class_);
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_class_);
    Py_DECREF(par_class_);
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_asn1crypto$parser$$$function_2_parse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_contents = python_pars[0];
    PyObject *par_strict = python_pars[1];
    PyObject *var_info = NULL;
    PyObject *var_consumed = NULL;
    PyObject *var_contents_len = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b7ecde55a9e45d8dc4cf33fb0238288c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b7ecde55a9e45d8dc4cf33fb0238288c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b7ecde55a9e45d8dc4cf33fb0238288c, codeobj_b7ecde55a9e45d8dc4cf33fb0238288c, module_asn1crypto$parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b7ecde55a9e45d8dc4cf33fb0238288c = cache_frame_b7ecde55a9e45d8dc4cf33fb0238288c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b7ecde55a9e45d8dc4cf33fb0238288c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b7ecde55a9e45d8dc4cf33fb0238288c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_contents);
        tmp_isinstance_inst_1 = par_contents;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_byte_cls);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_cls);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6264 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_left_name_1 = const_unicode_digest_6eeacd706c502e6d1ed48b7098dbf0a4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_type_name);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type_name);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6301 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT(par_contents);
            tmp_args_element_name_1 = par_contents;
            frame_b7ecde55a9e45d8dc4cf33fb0238288c->m_frame.f_lineno = 104;
            tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_make_exception_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_b7ecde55a9e45d8dc4cf33fb0238288c->m_frame.f_lineno = 104;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 104;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_contents);
        tmp_len_arg_1 = par_contents;
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_contents_len == NULL);
        var_contents_len = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__parse);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__parse);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9977 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT(par_contents);
        tmp_args_element_name_2 = par_contents;
        CHECK_OBJECT(var_contents_len);
        tmp_args_element_name_3 = var_contents_len;
        frame_b7ecde55a9e45d8dc4cf33fb0238288c->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 107;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 107;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 107;
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

            type_description_1 = "ooooo";
            exception_lineno = 107;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_info = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_consumed == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_consumed = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_strict);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_strict);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_consumed);
        tmp_compexpr_left_1 = var_consumed;
        CHECK_OBJECT(var_contents_len);
        tmp_compexpr_right_1 = var_contents_len;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_left_name_2 = const_unicode_digest_8b9fef3251b346c26753f505ae4d067a;
            CHECK_OBJECT(var_contents_len);
            tmp_left_name_3 = var_contents_len;
            CHECK_OBJECT(var_consumed);
            tmp_right_name_3 = var_consumed;
            tmp_right_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_make_exception_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_b7ecde55a9e45d8dc4cf33fb0238288c->m_frame.f_lineno = 109;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
            Py_DECREF(tmp_make_exception_arg_2);
            assert(!(tmp_raise_type_2 == NULL));
            exception_type = tmp_raise_type_2;
            exception_lineno = 109;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7ecde55a9e45d8dc4cf33fb0238288c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b7ecde55a9e45d8dc4cf33fb0238288c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7ecde55a9e45d8dc4cf33fb0238288c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b7ecde55a9e45d8dc4cf33fb0238288c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7ecde55a9e45d8dc4cf33fb0238288c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7ecde55a9e45d8dc4cf33fb0238288c,
        type_description_1,
        par_contents,
        par_strict,
        var_info,
        var_consumed,
        var_contents_len
    );


    // Release cached frame.
    if (frame_b7ecde55a9e45d8dc4cf33fb0238288c == cache_frame_b7ecde55a9e45d8dc4cf33fb0238288c) {
        Py_DECREF(frame_b7ecde55a9e45d8dc4cf33fb0238288c);
    }
    cache_frame_b7ecde55a9e45d8dc4cf33fb0238288c = NULL;

    assertFrameObject(frame_b7ecde55a9e45d8dc4cf33fb0238288c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_info);
    tmp_return_value = var_info;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_2_parse);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_info);
    Py_DECREF(var_info);
    var_info = NULL;

    CHECK_OBJECT((PyObject *)var_consumed);
    Py_DECREF(var_consumed);
    var_consumed = NULL;

    CHECK_OBJECT((PyObject *)var_contents_len);
    Py_DECREF(var_contents_len);
    var_contents_len = NULL;

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

    Py_XDECREF(var_info);
    var_info = NULL;

    Py_XDECREF(var_consumed);
    var_consumed = NULL;

    Py_XDECREF(var_contents_len);
    var_contents_len = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_2_parse);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_strict);
    Py_DECREF(par_strict);
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_asn1crypto$parser$$$function_3_peek(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_contents = python_pars[0];
    PyObject *var_info = NULL;
    PyObject *var_consumed = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d86b8119d436cd7d855adde222bfe8dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d86b8119d436cd7d855adde222bfe8dd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d86b8119d436cd7d855adde222bfe8dd, codeobj_d86b8119d436cd7d855adde222bfe8dd, module_asn1crypto$parser, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d86b8119d436cd7d855adde222bfe8dd = cache_frame_d86b8119d436cd7d855adde222bfe8dd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d86b8119d436cd7d855adde222bfe8dd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d86b8119d436cd7d855adde222bfe8dd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_contents);
        tmp_isinstance_inst_1 = par_contents;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_byte_cls);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_cls);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6264 ], 37, 0);
            exception_tb = NULL;

            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_left_name_1 = const_unicode_digest_6eeacd706c502e6d1ed48b7098dbf0a4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_type_name);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_type_name);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6301 ], 38, 0);
                exception_tb = NULL;

                exception_lineno = 133;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT(par_contents);
            tmp_args_element_name_1 = par_contents;
            frame_d86b8119d436cd7d855adde222bfe8dd->m_frame.f_lineno = 133;
            tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_make_exception_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_d86b8119d436cd7d855adde222bfe8dd->m_frame.f_lineno = 133;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 133;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__parse);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__parse);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9977 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT(par_contents);
        tmp_args_element_name_2 = par_contents;
        CHECK_OBJECT(par_contents);
        tmp_len_arg_1 = par_contents;
        tmp_args_element_name_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_d86b8119d436cd7d855adde222bfe8dd->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
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


            type_description_1 = "ooo";
            exception_lineno = 135;
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


            type_description_1 = "ooo";
            exception_lineno = 135;
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

                    type_description_1 = "ooo";
                    exception_lineno = 135;
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

            type_description_1 = "ooo";
            exception_lineno = 135;
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d86b8119d436cd7d855adde222bfe8dd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d86b8119d436cd7d855adde222bfe8dd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d86b8119d436cd7d855adde222bfe8dd, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d86b8119d436cd7d855adde222bfe8dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d86b8119d436cd7d855adde222bfe8dd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d86b8119d436cd7d855adde222bfe8dd,
        type_description_1,
        par_contents,
        var_info,
        var_consumed
    );


    // Release cached frame.
    if (frame_d86b8119d436cd7d855adde222bfe8dd == cache_frame_d86b8119d436cd7d855adde222bfe8dd) {
        Py_DECREF(frame_d86b8119d436cd7d855adde222bfe8dd);
    }
    cache_frame_d86b8119d436cd7d855adde222bfe8dd = NULL;

    assertFrameObject(frame_d86b8119d436cd7d855adde222bfe8dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_info = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_consumed == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_consumed = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT(var_consumed);
    tmp_return_value = var_consumed;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_3_peek);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_info);
    Py_DECREF(var_info);
    var_info = NULL;

    CHECK_OBJECT((PyObject *)var_consumed);
    Py_DECREF(var_consumed);
    var_consumed = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_3_peek);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_asn1crypto$parser$$$function_4__parse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encoded_data = python_pars[0];
    PyObject *par_data_len = python_pars[1];
    PyObject *par_pointer = python_pars[2];
    PyObject *par_lengths_only = python_pars[3];
    PyObject *var_contents_end = NULL;
    PyObject *var_num = NULL;
    PyObject *var_start = NULL;
    PyObject *var_length_octet = NULL;
    PyObject *var_length_octets = NULL;
    PyObject *var_tag = NULL;
    PyObject *var_sub_header_end = NULL;
    PyObject *var_first_octet = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e70070aa91f9554d490c5971dce893e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_e70070aa91f9554d490c5971dce893e1 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e70070aa91f9554d490c5971dce893e1, codeobj_e70070aa91f9554d490c5971dce893e1, module_asn1crypto$parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_e70070aa91f9554d490c5971dce893e1 = cache_frame_e70070aa91f9554d490c5971dce893e1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e70070aa91f9554d490c5971dce893e1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e70070aa91f9554d490c5971dce893e1) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_data_len);
        tmp_compexpr_left_1 = par_data_len;
        CHECK_OBJECT(par_pointer);
        tmp_left_name_1 = par_pointer;
        tmp_right_name_1 = const_int_pos_2;
        tmp_compexpr_right_1 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__INSUFFICIENT_DATA_MESSAGE);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__INSUFFICIENT_DATA_MESSAGE);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 13439 ], 55, 0);
                exception_tb = NULL;

                exception_lineno = 164;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = tmp_mvar_value_1;
            tmp_tuple_element_1 = const_int_pos_2;
            tmp_right_name_2 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_data_len);
            tmp_left_name_3 = par_data_len;
            CHECK_OBJECT(par_pointer);
            tmp_right_name_3 = par_pointer;
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_right_name_2);

                exception_lineno = 164;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_1);
            tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_TUPLE(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_make_exception_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_e70070aa91f9554d490c5971dce893e1->m_frame.f_lineno = 164;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 164;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_pointer);
        tmp_assign_source_1 = par_pointer;
        assert(var_start == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_start = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        PyObject *tmp_ord_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__PY2);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__PY2);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9611 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_encoded_data);
        tmp_subscribed_name_1 = par_encoded_data;
        CHECK_OBJECT(par_pointer);
        tmp_subscript_name_1 = par_pointer;
        tmp_ord_arg_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        if (tmp_ord_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BUILTIN_ORD(tmp_ord_arg_1);
        Py_DECREF(tmp_ord_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_encoded_data);
        tmp_subscribed_name_2 = par_encoded_data;
        CHECK_OBJECT(par_pointer);
        tmp_subscript_name_2 = par_pointer;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_first_octet == NULL);
        var_first_octet = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(par_pointer);
        tmp_left_name_4 = par_pointer;
        tmp_right_name_4 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_4, tmp_right_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_4;
        par_pointer = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(var_first_octet);
        tmp_left_name_5 = var_first_octet;
        tmp_right_name_5 = const_int_pos_31;
        tmp_assign_source_4 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_5, tmp_right_name_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tag == NULL);
        var_tag = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_tag);
        tmp_compexpr_left_2 = var_tag;
        tmp_compexpr_right_2 = const_int_pos_31;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_int_0;
            {
                PyObject *old = var_tag;
                assert(old != NULL);
                var_tag = tmp_assign_source_5;
                Py_INCREF(var_tag);
                Py_DECREF(old);
            }

        }
        loop_start_1:;
        {
            PyObject *tmp_assign_source_6;
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_mvar_value_3;
            int tmp_truth_name_2;
            PyObject *tmp_ord_arg_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__PY2);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__PY2);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 9611 ], 33, 0);
                exception_tb = NULL;

                exception_lineno = 175;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_3);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(par_encoded_data);
            tmp_subscribed_name_3 = par_encoded_data;
            CHECK_OBJECT(par_pointer);
            tmp_subscript_name_3 = par_pointer;
            tmp_ord_arg_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
            if (tmp_ord_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = BUILTIN_ORD(tmp_ord_arg_2);
            Py_DECREF(tmp_ord_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            CHECK_OBJECT(par_encoded_data);
            tmp_subscribed_name_4 = par_encoded_data;
            CHECK_OBJECT(par_pointer);
            tmp_subscript_name_4 = par_pointer;
            tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            condexpr_end_2:;
            {
                PyObject *old = var_num;
                var_num = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT(par_pointer);
            tmp_left_name_6 = par_pointer;
            tmp_right_name_6 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_6, tmp_right_name_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_6;
            par_pointer = tmp_assign_source_7;

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT(var_tag);
            tmp_left_name_7 = var_tag;
            tmp_right_name_7 = const_int_pos_128;
            tmp_result = BINARY_OPERATION_MUL_INPLACE(&tmp_left_name_7, tmp_right_name_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_7;
            var_tag = tmp_assign_source_8;

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT(var_tag);
            tmp_left_name_8 = var_tag;
            CHECK_OBJECT(var_num);
            tmp_left_name_9 = var_num;
            tmp_right_name_9 = const_int_pos_127;
            tmp_right_name_8 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_9, tmp_right_name_9);
            if (tmp_right_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_8, tmp_right_name_8);
            Py_DECREF(tmp_right_name_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = tmp_left_name_8;
            var_tag = tmp_assign_source_9;

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT(var_num);
            tmp_left_name_10 = var_num;
            tmp_right_name_10 = const_int_pos_7;
            tmp_compexpr_left_3 = BINARY_OPERATION_RSHIFT_OBJECT_INT(tmp_left_name_10, tmp_right_name_10);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            goto loop_end_1;
            branch_no_3:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_1;
        loop_end_1:;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_10;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_3;
        PyObject *tmp_ord_arg_3;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__PY2);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__PY2);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 9611 ], 33, 0);
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_mvar_value_4);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(par_encoded_data);
        tmp_subscribed_name_5 = par_encoded_data;
        CHECK_OBJECT(par_pointer);
        tmp_subscript_name_5 = par_pointer;
        tmp_ord_arg_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_5, tmp_subscript_name_5);
        if (tmp_ord_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BUILTIN_ORD(tmp_ord_arg_3);
        Py_DECREF(tmp_ord_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(par_encoded_data);
        tmp_subscribed_name_6 = par_encoded_data;
        CHECK_OBJECT(par_pointer);
        tmp_subscript_name_6 = par_pointer;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_6, tmp_subscript_name_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_3:;
        assert(var_length_octet == NULL);
        var_length_octet = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT(par_pointer);
        tmp_left_name_11 = par_pointer;
        tmp_right_name_11 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_11, tmp_right_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = tmp_left_name_11;
        par_pointer = tmp_assign_source_11;

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT(var_length_octet);
        tmp_left_name_12 = var_length_octet;
        tmp_right_name_12 = const_int_pos_7;
        tmp_compexpr_left_4 = BINARY_OPERATION_RSHIFT_OBJECT_INT(tmp_left_name_12, tmp_right_name_12);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_4;
            CHECK_OBJECT(par_lengths_only);
            tmp_truth_name_4 = CHECK_IF_TRUE(par_lengths_only);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_left_name_13;
                PyObject *tmp_right_name_13;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_14;
                CHECK_OBJECT(par_pointer);
                tmp_tuple_element_2 = par_pointer;
                tmp_return_value = PyTuple_New(2);
                Py_INCREF(tmp_tuple_element_2);
                PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
                CHECK_OBJECT(par_pointer);
                tmp_left_name_13 = par_pointer;
                CHECK_OBJECT(var_length_octet);
                tmp_left_name_14 = var_length_octet;
                tmp_right_name_14 = const_int_pos_127;
                tmp_right_name_13 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_14, tmp_right_name_14);
                if (tmp_right_name_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_return_value);

                    exception_lineno = 187;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_13);
                Py_DECREF(tmp_right_name_13);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_return_value);

                    exception_lineno = 187;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
                goto frame_return_exit_1;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            CHECK_OBJECT(par_pointer);
            tmp_left_name_15 = par_pointer;
            CHECK_OBJECT(var_length_octet);
            tmp_left_name_16 = var_length_octet;
            tmp_right_name_16 = const_int_pos_127;
            tmp_right_name_15 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_16, tmp_right_name_16);
            if (tmp_right_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_15, tmp_right_name_15);
            Py_DECREF(tmp_right_name_15);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_contents_end == NULL);
            var_contents_end = tmp_assign_source_12;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            CHECK_OBJECT(var_length_octet);
            tmp_left_name_17 = var_length_octet;
            tmp_right_name_17 = const_int_pos_127;
            tmp_assign_source_13 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_17, tmp_right_name_17);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_length_octets == NULL);
            var_length_octets = tmp_assign_source_13;
        }
        {
            nuitka_bool tmp_condition_result_9;
            int tmp_truth_name_5;
            CHECK_OBJECT(var_length_octets);
            tmp_truth_name_5 = CHECK_IF_TRUE(var_length_octets);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_left_name_18;
                PyObject *tmp_right_name_18;
                CHECK_OBJECT(par_pointer);
                tmp_left_name_18 = par_pointer;
                CHECK_OBJECT(var_length_octets);
                tmp_right_name_18 = var_length_octets;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_18, tmp_right_name_18);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 193;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_14 = tmp_left_name_18;
                par_pointer = tmp_assign_source_14;

            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_left_name_19;
                PyObject *tmp_right_name_19;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_slice_source_1;
                PyObject *tmp_slice_lower_1;
                PyObject *tmp_left_name_20;
                PyObject *tmp_right_name_20;
                PyObject *tmp_slice_upper_1;
                PyObject *tmp_kw_name_1;
                CHECK_OBJECT(par_pointer);
                tmp_left_name_19 = par_pointer;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_int_from_bytes);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_from_bytes);
                }

                if (tmp_mvar_value_5 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 6689 ], 43, 0);
                    exception_tb = NULL;

                    exception_lineno = 194;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_5;
                CHECK_OBJECT(par_encoded_data);
                tmp_slice_source_1 = par_encoded_data;
                CHECK_OBJECT(par_pointer);
                tmp_left_name_20 = par_pointer;
                CHECK_OBJECT(var_length_octets);
                tmp_right_name_20 = var_length_octets;
                tmp_slice_lower_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_20, tmp_right_name_20);
                if (tmp_slice_lower_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_pointer);
                tmp_slice_upper_1 = par_pointer;
                tmp_tuple_element_3 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1);
                Py_DECREF(tmp_slice_lower_1);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_1 = PyTuple_New(1);
                PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_3);
                tmp_kw_name_1 = PyDict_Copy(const_dict_c8fd5d39765b5b318c1c2eaf124070a3);
                frame_e70070aa91f9554d490c5971dce893e1->m_frame.f_lineno = 194;
                tmp_right_name_19 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
                Py_DECREF(tmp_args_name_1);
                Py_DECREF(tmp_kw_name_1);
                if (tmp_right_name_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_19, tmp_right_name_19);
                Py_DECREF(tmp_right_name_19);
                if (tmp_assign_source_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_contents_end == NULL);
                var_contents_end = tmp_assign_source_15;
            }
            {
                nuitka_bool tmp_condition_result_10;
                int tmp_truth_name_6;
                CHECK_OBJECT(par_lengths_only);
                tmp_truth_name_6 = CHECK_IF_TRUE(par_lengths_only);
                if (tmp_truth_name_6 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 195;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_10 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_7;
                } else {
                    goto branch_no_7;
                }
                branch_yes_7:;
                {
                    PyObject *tmp_tuple_element_4;
                    CHECK_OBJECT(par_pointer);
                    tmp_tuple_element_4 = par_pointer;
                    tmp_return_value = PyTuple_New(2);
                    Py_INCREF(tmp_tuple_element_4);
                    PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_4);
                    CHECK_OBJECT(var_contents_end);
                    tmp_tuple_element_4 = var_contents_end;
                    Py_INCREF(tmp_tuple_element_4);
                    PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_4);
                    goto frame_return_exit_1;
                }
                branch_no_7:;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_16;
                CHECK_OBJECT(par_pointer);
                tmp_assign_source_16 = par_pointer;
                assert(var_contents_end == NULL);
                Py_INCREF(tmp_assign_source_16);
                var_contents_end = tmp_assign_source_16;
            }
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT(var_tag);
                tmp_compexpr_left_5 = var_tag;
                tmp_compexpr_right_5 = const_int_pos_3;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_8;
                } else {
                    goto branch_no_8;
                }
                branch_yes_8:;
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_left_name_21;
                    PyObject *tmp_right_name_21;
                    CHECK_OBJECT(var_contents_end);
                    tmp_left_name_21 = var_contents_end;
                    tmp_right_name_21 = const_int_pos_1;
                    tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_21, tmp_right_name_21);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_17 = tmp_left_name_21;
                    var_contents_end = tmp_assign_source_17;

                }
                branch_no_8:;
            }
            loop_start_2:;
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                CHECK_OBJECT(var_contents_end);
                tmp_compexpr_left_6 = var_contents_end;
                CHECK_OBJECT(par_data_len);
                tmp_compexpr_right_6 = par_data_len;
                tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
                if (tmp_operand_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
                Py_DECREF(tmp_operand_name_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_9;
                } else {
                    goto branch_no_9;
                }
                branch_yes_9:;
                goto loop_end_2;
                branch_no_9:;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_kw_name_2;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__parse);

                if (unlikely(tmp_mvar_value_6 == NULL)) {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__parse);
                }

                if (tmp_mvar_value_6 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 9977 ], 35, 0);
                    exception_tb = NULL;

                    exception_lineno = 211;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_2 = tmp_mvar_value_6;
                CHECK_OBJECT(par_encoded_data);
                tmp_tuple_element_5 = par_encoded_data;
                tmp_args_name_2 = PyTuple_New(3);
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_5);
                CHECK_OBJECT(par_data_len);
                tmp_tuple_element_5 = par_data_len;
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_5);
                CHECK_OBJECT(var_contents_end);
                tmp_tuple_element_5 = var_contents_end;
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_5);
                tmp_kw_name_2 = PyDict_Copy(const_dict_3c5d687e86f9ce834fad732b85d74f2b);
                frame_e70070aa91f9554d490c5971dce893e1->m_frame.f_lineno = 211;
                tmp_iter_arg_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
                Py_DECREF(tmp_args_name_2);
                Py_DECREF(tmp_kw_name_2);
                if (tmp_iter_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__source_iter;
                    tmp_tuple_unpack_1__source_iter = tmp_assign_source_18;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_1, 0);
                if (tmp_assign_source_19 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 211;
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__element_1;
                    tmp_tuple_unpack_1__element_1 = tmp_assign_source_19;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_2, 1);
                if (tmp_assign_source_20 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 211;
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__element_2;
                    tmp_tuple_unpack_1__element_2 = tmp_assign_source_20;
                    Py_XDECREF(old);
                }

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

                            type_description_1 = "oooooooooooo";
                            exception_lineno = 211;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 211;
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
                PyObject *tmp_assign_source_21;
                CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
                tmp_assign_source_21 = tmp_tuple_unpack_1__element_1;
                {
                    PyObject *old = var_sub_header_end;
                    var_sub_header_end = tmp_assign_source_21;
                    Py_INCREF(var_sub_header_end);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_tuple_unpack_1__element_1);
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
                tmp_assign_source_22 = tmp_tuple_unpack_1__element_2;
                {
                    PyObject *old = var_contents_end;
                    assert(old != NULL);
                    var_contents_end = tmp_assign_source_22;
                    Py_INCREF(var_contents_end);
                    Py_DECREF(old);
                }

            }
            Py_XDECREF(tmp_tuple_unpack_1__element_2);
            tmp_tuple_unpack_1__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_13;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_slice_source_2;
                PyObject *tmp_slice_lower_2;
                PyObject *tmp_left_name_22;
                PyObject *tmp_right_name_22;
                PyObject *tmp_slice_upper_2;
                CHECK_OBJECT(var_contents_end);
                tmp_compexpr_left_7 = var_contents_end;
                CHECK_OBJECT(var_sub_header_end);
                tmp_compexpr_right_7 = var_sub_header_end;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
                if (tmp_and_left_truth_1 == 1) {
                    goto and_right_1;
                } else {
                    goto and_left_1;
                }
                and_right_1:;
                CHECK_OBJECT(par_encoded_data);
                tmp_slice_source_2 = par_encoded_data;
                CHECK_OBJECT(var_contents_end);
                tmp_left_name_22 = var_contents_end;
                tmp_right_name_22 = const_int_pos_2;
                tmp_slice_lower_2 = BINARY_OPERATION_SUB_OBJECT_INT(tmp_left_name_22, tmp_right_name_22);
                if (tmp_slice_lower_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(var_contents_end);
                tmp_slice_upper_2 = var_contents_end;
                tmp_compexpr_left_8 = LOOKUP_SLICE(tmp_slice_source_2, tmp_slice_lower_2, tmp_slice_upper_2);
                Py_DECREF(tmp_slice_lower_2);
                if (tmp_compexpr_left_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_8 = const_str_digest_d8498194b4aa4245dad6dd2c71b3dbb9;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
                Py_DECREF(tmp_compexpr_left_8);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_13 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_13 = tmp_and_left_value_1;
                and_end_1:;
                if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_10;
                } else {
                    goto branch_no_10;
                }
                branch_yes_10:;
                goto loop_end_2;
                branch_no_10:;
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            goto loop_start_2;
            loop_end_2:;
            {
                nuitka_bool tmp_condition_result_14;
                int tmp_truth_name_7;
                CHECK_OBJECT(par_lengths_only);
                tmp_truth_name_7 = CHECK_IF_TRUE(par_lengths_only);
                if (tmp_truth_name_7 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 214;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_14 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_11;
                } else {
                    goto branch_no_11;
                }
                branch_yes_11:;
                {
                    PyObject *tmp_tuple_element_6;
                    CHECK_OBJECT(par_pointer);
                    tmp_tuple_element_6 = par_pointer;
                    tmp_return_value = PyTuple_New(2);
                    Py_INCREF(tmp_tuple_element_6);
                    PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_6);
                    if (var_contents_end == NULL) {
                        Py_DECREF(tmp_return_value);
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
                        exception_tb = NULL;

                        exception_lineno = 215;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_tuple_element_6 = var_contents_end;
                    Py_INCREF(tmp_tuple_element_6);
                    PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_6);
                    goto frame_return_exit_1;
                }
                branch_no_11:;
            }
            {
                nuitka_bool tmp_condition_result_15;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                if (var_contents_end == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
                    exception_tb = NULL;

                    exception_lineno = 216;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_9 = var_contents_end;
                CHECK_OBJECT(par_data_len);
                tmp_compexpr_right_9 = par_data_len;
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_12;
                } else {
                    goto branch_no_12;
                }
                branch_yes_12:;
                {
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    PyObject *tmp_left_name_23;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_right_name_23;
                    PyObject *tmp_tuple_element_7;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__INSUFFICIENT_DATA_MESSAGE);

                    if (unlikely(tmp_mvar_value_7 == NULL)) {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__INSUFFICIENT_DATA_MESSAGE);
                    }

                    if (tmp_mvar_value_7 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 13439 ], 55, 0);
                        exception_tb = NULL;

                        exception_lineno = 217;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_left_name_23 = tmp_mvar_value_7;
                    if (var_contents_end == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
                        exception_tb = NULL;

                        exception_lineno = 217;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_tuple_element_7 = var_contents_end;
                    tmp_right_name_23 = PyTuple_New(2);
                    Py_INCREF(tmp_tuple_element_7);
                    PyTuple_SET_ITEM(tmp_right_name_23, 0, tmp_tuple_element_7);
                    CHECK_OBJECT(par_data_len);
                    tmp_tuple_element_7 = par_data_len;
                    Py_INCREF(tmp_tuple_element_7);
                    PyTuple_SET_ITEM(tmp_right_name_23, 1, tmp_tuple_element_7);
                    tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_TUPLE(tmp_left_name_23, tmp_right_name_23);
                    Py_DECREF(tmp_right_name_23);
                    if (tmp_make_exception_arg_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 217;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_e70070aa91f9554d490c5971dce893e1->m_frame.f_lineno = 217;
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
                    Py_DECREF(tmp_make_exception_arg_2);
                    assert(!(tmp_raise_type_2 == NULL));
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 217;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_12:;
            }
            {
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_left_name_24;
                PyObject *tmp_right_name_24;
                PyObject *tmp_left_name_25;
                PyObject *tmp_left_name_26;
                PyObject *tmp_right_name_25;
                PyObject *tmp_right_name_26;
                PyObject *tmp_slice_source_3;
                PyObject *tmp_slice_lower_3;
                PyObject *tmp_slice_upper_3;
                PyObject *tmp_slice_source_4;
                PyObject *tmp_slice_lower_4;
                PyObject *tmp_slice_upper_4;
                PyObject *tmp_left_name_27;
                PyObject *tmp_right_name_27;
                CHECK_OBJECT(var_first_octet);
                tmp_left_name_24 = var_first_octet;
                tmp_right_name_24 = const_int_pos_6;
                tmp_tuple_element_9 = BINARY_OPERATION_RSHIFT_OBJECT_INT(tmp_left_name_24, tmp_right_name_24);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_8 = PyTuple_New(6);
                PyTuple_SET_ITEM(tmp_tuple_element_8, 0, tmp_tuple_element_9);
                CHECK_OBJECT(var_first_octet);
                tmp_left_name_26 = var_first_octet;
                tmp_right_name_25 = const_int_pos_5;
                tmp_left_name_25 = BINARY_OPERATION_RSHIFT_OBJECT_INT(tmp_left_name_26, tmp_right_name_25);
                if (tmp_left_name_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_tuple_element_8);

                    exception_lineno = 221;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_26 = const_int_pos_1;
                tmp_tuple_element_9 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_25, tmp_right_name_26);
                Py_DECREF(tmp_left_name_25);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_tuple_element_8);

                    exception_lineno = 221;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_8, 1, tmp_tuple_element_9);
                CHECK_OBJECT(var_tag);
                tmp_tuple_element_9 = var_tag;
                Py_INCREF(tmp_tuple_element_9);
                PyTuple_SET_ITEM(tmp_tuple_element_8, 2, tmp_tuple_element_9);
                CHECK_OBJECT(par_encoded_data);
                tmp_slice_source_3 = par_encoded_data;
                CHECK_OBJECT(var_start);
                tmp_slice_lower_3 = var_start;
                CHECK_OBJECT(par_pointer);
                tmp_slice_upper_3 = par_pointer;
                tmp_tuple_element_9 = LOOKUP_SLICE(tmp_slice_source_3, tmp_slice_lower_3, tmp_slice_upper_3);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_tuple_element_8);

                    exception_lineno = 223;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_8, 3, tmp_tuple_element_9);
                CHECK_OBJECT(par_encoded_data);
                tmp_slice_source_4 = par_encoded_data;
                CHECK_OBJECT(par_pointer);
                tmp_slice_lower_4 = par_pointer;
                if (var_contents_end == NULL) {
                    Py_DECREF(tmp_tuple_element_8);
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
                    exception_tb = NULL;

                    exception_lineno = 224;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_27 = var_contents_end;
                tmp_right_name_27 = const_int_pos_2;
                tmp_slice_upper_4 = BINARY_OPERATION_SUB_OBJECT_INT(tmp_left_name_27, tmp_right_name_27);
                if (tmp_slice_upper_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_tuple_element_8);

                    exception_lineno = 224;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_9 = LOOKUP_SLICE(tmp_slice_source_4, tmp_slice_lower_4, tmp_slice_upper_4);
                Py_DECREF(tmp_slice_upper_4);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_tuple_element_8);

                    exception_lineno = 224;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_8, 4, tmp_tuple_element_9);
                tmp_tuple_element_9 = const_str_digest_d8498194b4aa4245dad6dd2c71b3dbb9;
                Py_INCREF(tmp_tuple_element_9);
                PyTuple_SET_ITEM(tmp_tuple_element_8, 5, tmp_tuple_element_9);
                tmp_return_value = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_8);
                if (var_contents_end == NULL) {
                    Py_DECREF(tmp_return_value);
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
                    exception_tb = NULL;

                    exception_lineno = 227;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_8 = var_contents_end;
                Py_INCREF(tmp_tuple_element_8);
                PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_8);
                goto frame_return_exit_1;
            }
            branch_end_6:;
        }
        branch_end_4:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        if (var_contents_end == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
            exception_tb = NULL;

            exception_lineno = 230;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_10 = var_contents_end;
        CHECK_OBJECT(par_data_len);
        tmp_compexpr_right_10 = par_data_len;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_left_name_28;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_right_name_28;
            PyObject *tmp_tuple_element_10;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__INSUFFICIENT_DATA_MESSAGE);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__INSUFFICIENT_DATA_MESSAGE);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 13439 ], 55, 0);
                exception_tb = NULL;

                exception_lineno = 231;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_28 = tmp_mvar_value_8;
            if (var_contents_end == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
                exception_tb = NULL;

                exception_lineno = 231;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_10 = var_contents_end;
            tmp_right_name_28 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_right_name_28, 0, tmp_tuple_element_10);
            CHECK_OBJECT(par_data_len);
            tmp_tuple_element_10 = par_data_len;
            Py_INCREF(tmp_tuple_element_10);
            PyTuple_SET_ITEM(tmp_right_name_28, 1, tmp_tuple_element_10);
            tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_TUPLE(tmp_left_name_28, tmp_right_name_28);
            Py_DECREF(tmp_right_name_28);
            if (tmp_make_exception_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_e70070aa91f9554d490c5971dce893e1->m_frame.f_lineno = 231;
            tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
            Py_DECREF(tmp_make_exception_arg_3);
            assert(!(tmp_raise_type_3 == NULL));
            exception_type = tmp_raise_type_3;
            exception_lineno = 231;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_13:;
    }
    {
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_30;
        PyObject *tmp_right_name_31;
        PyObject *tmp_slice_source_5;
        PyObject *tmp_slice_lower_5;
        PyObject *tmp_slice_upper_5;
        PyObject *tmp_slice_source_6;
        PyObject *tmp_slice_lower_6;
        PyObject *tmp_slice_upper_6;
        CHECK_OBJECT(var_first_octet);
        tmp_left_name_29 = var_first_octet;
        tmp_right_name_29 = const_int_pos_6;
        tmp_tuple_element_12 = BINARY_OPERATION_RSHIFT_OBJECT_INT(tmp_left_name_29, tmp_right_name_29);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = PyTuple_New(6);
        PyTuple_SET_ITEM(tmp_tuple_element_11, 0, tmp_tuple_element_12);
        CHECK_OBJECT(var_first_octet);
        tmp_left_name_31 = var_first_octet;
        tmp_right_name_30 = const_int_pos_5;
        tmp_left_name_30 = BINARY_OPERATION_RSHIFT_OBJECT_INT(tmp_left_name_31, tmp_right_name_30);
        if (tmp_left_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tuple_element_11);

            exception_lineno = 235;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_31 = const_int_pos_1;
        tmp_tuple_element_12 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_30, tmp_right_name_31);
        Py_DECREF(tmp_left_name_30);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tuple_element_11);

            exception_lineno = 235;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_tuple_element_11, 1, tmp_tuple_element_12);
        CHECK_OBJECT(var_tag);
        tmp_tuple_element_12 = var_tag;
        Py_INCREF(tmp_tuple_element_12);
        PyTuple_SET_ITEM(tmp_tuple_element_11, 2, tmp_tuple_element_12);
        CHECK_OBJECT(par_encoded_data);
        tmp_slice_source_5 = par_encoded_data;
        CHECK_OBJECT(var_start);
        tmp_slice_lower_5 = var_start;
        if (par_pointer == NULL) {
            Py_DECREF(tmp_tuple_element_11);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "pointer");
            exception_tb = NULL;

            exception_lineno = 237;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_slice_upper_5 = par_pointer;
        tmp_tuple_element_12 = LOOKUP_SLICE(tmp_slice_source_5, tmp_slice_lower_5, tmp_slice_upper_5);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tuple_element_11);

            exception_lineno = 237;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_tuple_element_11, 3, tmp_tuple_element_12);
        CHECK_OBJECT(par_encoded_data);
        tmp_slice_source_6 = par_encoded_data;
        if (par_pointer == NULL) {
            Py_DECREF(tmp_tuple_element_11);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "pointer");
            exception_tb = NULL;

            exception_lineno = 238;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_slice_lower_6 = par_pointer;
        if (var_contents_end == NULL) {
            Py_DECREF(tmp_tuple_element_11);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
            exception_tb = NULL;

            exception_lineno = 238;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_slice_upper_6 = var_contents_end;
        tmp_tuple_element_12 = LOOKUP_SLICE(tmp_slice_source_6, tmp_slice_lower_6, tmp_slice_upper_6);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tuple_element_11);

            exception_lineno = 238;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_tuple_element_11, 4, tmp_tuple_element_12);
        tmp_tuple_element_12 = const_str_empty;
        Py_INCREF(tmp_tuple_element_12);
        PyTuple_SET_ITEM(tmp_tuple_element_11, 5, tmp_tuple_element_12);
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_11);
        if (var_contents_end == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "contents_end");
            exception_tb = NULL;

            exception_lineno = 241;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_11 = var_contents_end;
        Py_INCREF(tmp_tuple_element_11);
        PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_11);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e70070aa91f9554d490c5971dce893e1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e70070aa91f9554d490c5971dce893e1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e70070aa91f9554d490c5971dce893e1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e70070aa91f9554d490c5971dce893e1, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e70070aa91f9554d490c5971dce893e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e70070aa91f9554d490c5971dce893e1, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e70070aa91f9554d490c5971dce893e1,
        type_description_1,
        par_encoded_data,
        par_data_len,
        par_pointer,
        par_lengths_only,
        var_contents_end,
        var_num,
        var_start,
        var_length_octet,
        var_length_octets,
        var_tag,
        var_sub_header_end,
        var_first_octet
    );


    // Release cached frame.
    if (frame_e70070aa91f9554d490c5971dce893e1 == cache_frame_e70070aa91f9554d490c5971dce893e1) {
        Py_DECREF(frame_e70070aa91f9554d490c5971dce893e1);
    }
    cache_frame_e70070aa91f9554d490c5971dce893e1 = NULL;

    assertFrameObject(frame_e70070aa91f9554d490c5971dce893e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_4__parse);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_contents_end);
    var_contents_end = NULL;

    Py_XDECREF(var_num);
    var_num = NULL;

    CHECK_OBJECT((PyObject *)var_start);
    Py_DECREF(var_start);
    var_start = NULL;

    CHECK_OBJECT((PyObject *)var_length_octet);
    Py_DECREF(var_length_octet);
    var_length_octet = NULL;

    Py_XDECREF(var_length_octets);
    var_length_octets = NULL;

    CHECK_OBJECT((PyObject *)var_tag);
    Py_DECREF(var_tag);
    var_tag = NULL;

    Py_XDECREF(var_sub_header_end);
    var_sub_header_end = NULL;

    CHECK_OBJECT((PyObject *)var_first_octet);
    Py_DECREF(var_first_octet);
    var_first_octet = NULL;

    Py_XDECREF(par_pointer);
    par_pointer = NULL;

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

    Py_XDECREF(var_contents_end);
    var_contents_end = NULL;

    Py_XDECREF(var_num);
    var_num = NULL;

    Py_XDECREF(var_start);
    var_start = NULL;

    Py_XDECREF(var_length_octet);
    var_length_octet = NULL;

    Py_XDECREF(var_length_octets);
    var_length_octets = NULL;

    Py_XDECREF(var_tag);
    var_tag = NULL;

    Py_XDECREF(var_sub_header_end);
    var_sub_header_end = NULL;

    Py_XDECREF(var_first_octet);
    var_first_octet = NULL;

    Py_XDECREF(par_pointer);
    par_pointer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_4__parse);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data_len);
    Py_DECREF(par_data_len);
    CHECK_OBJECT(par_encoded_data);
    Py_DECREF(par_encoded_data);
    CHECK_OBJECT(par_lengths_only);
    Py_DECREF(par_lengths_only);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data_len);
    Py_DECREF(par_data_len);
    CHECK_OBJECT(par_encoded_data);
    Py_DECREF(par_encoded_data);
    CHECK_OBJECT(par_lengths_only);
    Py_DECREF(par_lengths_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_asn1crypto$parser$$$function_5__dump_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_class_ = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_tag = python_pars[2];
    PyObject *par_contents = python_pars[3];
    PyObject *var_header = NULL;
    PyObject *var_length_bytes = NULL;
    PyObject *var_id_num = NULL;
    PyObject *var_length = NULL;
    PyObject *var_continuation_bit = NULL;
    struct Nuitka_FrameObject *frame_0f6eb73ea6d56afe91b421b98c742520;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0f6eb73ea6d56afe91b421b98c742520 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0f6eb73ea6d56afe91b421b98c742520, codeobj_0f6eb73ea6d56afe91b421b98c742520, module_asn1crypto$parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0f6eb73ea6d56afe91b421b98c742520 = cache_frame_0f6eb73ea6d56afe91b421b98c742520;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0f6eb73ea6d56afe91b421b98c742520);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0f6eb73ea6d56afe91b421b98c742520) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = const_int_0;
        CHECK_OBJECT(par_class_);
        tmp_left_name_2 = par_class_;
        tmp_right_name_2 = const_int_pos_6;
        tmp_right_name_1 = BINARY_OPERATION_LSHIFT_OBJECT_INT(tmp_left_name_2, tmp_right_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_BITOR_INT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_id_num == NULL);
        var_id_num = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT(var_id_num);
        tmp_left_name_3 = var_id_num;
        CHECK_OBJECT(par_method);
        tmp_left_name_4 = par_method;
        tmp_right_name_4 = const_int_pos_5;
        tmp_right_name_3 = BINARY_OPERATION_LSHIFT_OBJECT_INT(tmp_left_name_4, tmp_right_name_4);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_INPLACE(PyNumber_InPlaceOr, &tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_left_name_3;
        var_id_num = tmp_assign_source_2;

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_tag);
        tmp_compexpr_left_1 = par_tag;
        tmp_compexpr_right_1 = const_int_pos_31;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            tmp_left_name_5 = const_str_empty;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_chr_cls);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_chr_cls);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 10366 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 273;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(var_id_num);
            tmp_left_name_6 = var_id_num;
            tmp_right_name_6 = const_int_pos_31;
            tmp_args_element_name_1 = BINARY_OPERATION_BITOR_OBJECT_INT(tmp_left_name_6, tmp_right_name_6);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0f6eb73ea6d56afe91b421b98c742520->m_frame.f_lineno = 273;
            tmp_right_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_right_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_ADD_STR_OBJECT(tmp_left_name_5, tmp_right_name_5);
            Py_DECREF(tmp_right_name_5);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_header == NULL);
            var_header = tmp_assign_source_3;
        }
        loop_start_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(par_tag);
            tmp_compexpr_left_2 = par_tag;
            tmp_compexpr_right_2 = const_int_0;
            tmp_operand_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_operand_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            Py_DECREF(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            goto loop_end_1;
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(par_tag);
            tmp_compexpr_left_3 = par_tag;
            tmp_compexpr_right_3 = const_int_pos_127;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_assign_source_4 = const_int_pos_128;
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_assign_source_4 = const_int_0;
            condexpr_end_1:;
            {
                PyObject *old = var_continuation_bit;
                var_continuation_bit = tmp_assign_source_4;
                Py_INCREF(var_continuation_bit);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT(var_header);
            tmp_left_name_7 = var_header;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_chr_cls);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_chr_cls);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 10366 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 276;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT(var_continuation_bit);
            tmp_left_name_8 = var_continuation_bit;
            CHECK_OBJECT(par_tag);
            tmp_left_name_9 = par_tag;
            tmp_right_name_9 = const_int_pos_127;
            tmp_right_name_8 = BINARY_OPERATION_BITAND_OBJECT_INT(tmp_left_name_9, tmp_right_name_9);
            if (tmp_right_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_8);
            Py_DECREF(tmp_right_name_8);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0f6eb73ea6d56afe91b421b98c742520->m_frame.f_lineno = 276;
            tmp_right_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_right_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_7, tmp_right_name_7);
            Py_DECREF(tmp_right_name_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = tmp_left_name_7;
            var_header = tmp_assign_source_5;

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT(par_tag);
            tmp_left_name_10 = par_tag;
            tmp_right_name_10 = const_int_pos_7;
            tmp_assign_source_6 = BINARY_OPERATION_RSHIFT_OBJECT_INT(tmp_left_name_10, tmp_right_name_10);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_tag;
                assert(old != NULL);
                par_tag = tmp_assign_source_6;
                Py_DECREF(old);
            }

        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_1;
        loop_end_1:;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            tmp_left_name_11 = const_str_empty;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_chr_cls);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_chr_cls);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 10366 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 279;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT(var_id_num);
            tmp_left_name_12 = var_id_num;
            CHECK_OBJECT(par_tag);
            tmp_right_name_12 = par_tag;
            tmp_args_element_name_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_12);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0f6eb73ea6d56afe91b421b98c742520->m_frame.f_lineno = 279;
            tmp_right_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_right_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = BINARY_OPERATION_ADD_STR_OBJECT(tmp_left_name_11, tmp_right_name_11);
            Py_DECREF(tmp_right_name_11);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_header == NULL);
            var_header = tmp_assign_source_7;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_contents);
        tmp_len_arg_1 = par_contents;
        tmp_assign_source_8 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_length);
        tmp_compexpr_left_4 = var_length;
        tmp_compexpr_right_4 = const_int_pos_127;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            if (var_header == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "header");
                exception_tb = NULL;

                exception_lineno = 283;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_13 = var_header;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_chr_cls);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_chr_cls);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 10366 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 283;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT(var_length);
            tmp_args_element_name_4 = var_length;
            frame_0f6eb73ea6d56afe91b421b98c742520->m_frame.f_lineno = 283;
            tmp_right_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
            if (tmp_right_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_13, tmp_right_name_13);
            Py_DECREF(tmp_right_name_13);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = tmp_left_name_13;
            var_header = tmp_assign_source_9;

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_int_to_bytes);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int_to_bytes);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6490 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 285;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT(var_length);
            tmp_args_element_name_5 = var_length;
            frame_0f6eb73ea6d56afe91b421b98c742520->m_frame.f_lineno = 285;
            tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_length_bytes == NULL);
            var_length_bytes = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            PyObject *tmp_len_arg_2;
            if (var_header == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "header");
                exception_tb = NULL;

                exception_lineno = 286;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_14 = var_header;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_chr_cls);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_chr_cls);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 10366 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 286;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_6;
            tmp_left_name_15 = const_int_pos_128;
            CHECK_OBJECT(var_length_bytes);
            tmp_len_arg_2 = var_length_bytes;
            tmp_right_name_15 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_right_name_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = BINARY_OPERATION_BITOR_INT_OBJECT(tmp_left_name_15, tmp_right_name_15);
            Py_DECREF(tmp_right_name_15);
            assert(!(tmp_args_element_name_6 == NULL));
            frame_0f6eb73ea6d56afe91b421b98c742520->m_frame.f_lineno = 286;
            tmp_right_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_right_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_14, tmp_right_name_14);
            Py_DECREF(tmp_right_name_14);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = tmp_left_name_14;
            var_header = tmp_assign_source_11;

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            CHECK_OBJECT(var_header);
            tmp_left_name_16 = var_header;
            CHECK_OBJECT(var_length_bytes);
            tmp_right_name_16 = var_length_bytes;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_16, tmp_right_name_16);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = tmp_left_name_16;
            var_header = tmp_assign_source_12;

        }
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f6eb73ea6d56afe91b421b98c742520);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f6eb73ea6d56afe91b421b98c742520);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f6eb73ea6d56afe91b421b98c742520, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0f6eb73ea6d56afe91b421b98c742520->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f6eb73ea6d56afe91b421b98c742520, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f6eb73ea6d56afe91b421b98c742520,
        type_description_1,
        par_class_,
        par_method,
        par_tag,
        par_contents,
        var_header,
        var_length_bytes,
        var_id_num,
        var_length,
        var_continuation_bit
    );


    // Release cached frame.
    if (frame_0f6eb73ea6d56afe91b421b98c742520 == cache_frame_0f6eb73ea6d56afe91b421b98c742520) {
        Py_DECREF(frame_0f6eb73ea6d56afe91b421b98c742520);
    }
    cache_frame_0f6eb73ea6d56afe91b421b98c742520 = NULL;

    assertFrameObject(frame_0f6eb73ea6d56afe91b421b98c742520);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_header);
    tmp_return_value = var_header;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_5__dump_header);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_header);
    Py_DECREF(var_header);
    var_header = NULL;

    Py_XDECREF(var_length_bytes);
    var_length_bytes = NULL;

    CHECK_OBJECT((PyObject *)var_id_num);
    Py_DECREF(var_id_num);
    var_id_num = NULL;

    CHECK_OBJECT((PyObject *)var_length);
    Py_DECREF(var_length);
    var_length = NULL;

    Py_XDECREF(par_tag);
    par_tag = NULL;

    Py_XDECREF(var_continuation_bit);
    var_continuation_bit = NULL;

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

    Py_XDECREF(var_header);
    var_header = NULL;

    Py_XDECREF(var_length_bytes);
    var_length_bytes = NULL;

    Py_XDECREF(var_id_num);
    var_id_num = NULL;

    Py_XDECREF(var_length);
    var_length = NULL;

    Py_XDECREF(par_tag);
    par_tag = NULL;

    Py_XDECREF(var_continuation_bit);
    var_continuation_bit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(asn1crypto$parser$$$function_5__dump_header);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_class_);
    Py_DECREF(par_class_);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_class_);
    Py_DECREF(par_class_);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_contents);
    Py_DECREF(par_contents);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_1_emit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$parser$$$function_1_emit,
        const_str_plain_emit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a7327f1030b72edda0d5202ba14b5fec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$parser,
        const_unicode_digest_95f85022142edf8d2147d933303bdd64,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_2_parse(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$parser$$$function_2_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7ecde55a9e45d8dc4cf33fb0238288c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$parser,
        const_unicode_digest_20213faac67754cef7e386bac70d0836,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_3_peek() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$parser$$$function_3_peek,
        const_str_plain_peek,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d86b8119d436cd7d855adde222bfe8dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$parser,
        const_unicode_digest_2951bf695be54c414da9b7e3046fc6cc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_4__parse(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$parser$$$function_4__parse,
        const_str_plain__parse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e70070aa91f9554d490c5971dce893e1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$parser,
        const_unicode_digest_8d8cd7bbd02d0ef8cd8b2500e2349547,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$parser$$$function_5__dump_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$parser$$$function_5__dump_header,
        const_str_plain__dump_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0f6eb73ea6d56afe91b421b98c742520,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$parser,
        const_unicode_digest_3040e22dffd758eef6da063b3a6ff6cb,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_asn1crypto$parser =
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

function_impl_code functable_asn1crypto$parser[] = {
    impl_asn1crypto$parser$$$function_1_emit,
    impl_asn1crypto$parser$$$function_2_parse,
    impl_asn1crypto$parser$$$function_3_peek,
    impl_asn1crypto$parser$$$function_4__parse,
    impl_asn1crypto$parser$$$function_5__dump_header,
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

    function_impl_code *current = functable_asn1crypto$parser;
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

    if (offset > sizeof(functable_asn1crypto$parser) || offset < 0) {
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
        functable_asn1crypto$parser[offset],
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
        module_asn1crypto$parser,
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
PyObject *modulecode_asn1crypto$parser(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_asn1crypto$parser;
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
    PRINT_STRING("asn1crypto.parser: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("asn1crypto.parser: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("asn1crypto.parser: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initasn1crypto$parser\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_asn1crypto$parser = Py_InitModule4(
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
    mdef_asn1crypto$parser.m_name = module_full_name;
    module_asn1crypto$parser = PyModule_Create(&mdef_asn1crypto$parser);
#endif

    moduledict_asn1crypto$parser = MODULE_DICT(module_asn1crypto$parser);

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
        moduledict_asn1crypto$parser,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_asn1crypto$parser,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_asn1crypto$parser,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$parser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$parser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_asn1crypto$parser);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_asn1crypto$parser);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_c328a10e6700d1ea03b0ec36c5fe26bd;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_digest_e75f69f7a469060ecea0ae6ca6a03d94;
        UPDATE_STRING_DICT0(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
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
    frame_c328a10e6700d1ea03b0ec36c5fe26bd = MAKE_MODULE_FRAME(codeobj_c328a10e6700d1ea03b0ec36c5fe26bd, module_asn1crypto$parser);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c328a10e6700d1ea03b0ec36c5fe26bd);
    assert(Py_REFCNT(frame_c328a10e6700d1ea03b0ec36c5fe26bd) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4);
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


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_absolute_import);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_print_function);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_asn1crypto$parser;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c328a10e6700d1ea03b0ec36c5fe26bd->m_frame.f_lineno = 16;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain__types;
        tmp_globals_name_2 = (PyObject *)moduledict_asn1crypto$parser;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_byte_cls_str_plain_chr_cls_str_plain_type_name_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_c328a10e6700d1ea03b0ec36c5fe26bd->m_frame.f_lineno = 18;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_byte_cls);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_byte_cls, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_chr_cls);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_chr_cls, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_type_name);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_type_name, tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_util;
        tmp_globals_name_3 = (PyObject *)moduledict_asn1crypto$parser;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_int_from_bytes_str_plain_int_to_bytes_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_c328a10e6700d1ea03b0ec36c5fe26bd->m_frame.f_lineno = 19;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_int_from_bytes);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_int_from_bytes, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_int_to_bytes);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_int_to_bytes, tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 3017 ], 25, 0);
            exception_tb = NULL;

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_version_info);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_3_tuple;
        tmp_assign_source_16 = RICH_COMPARE_LTE_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__PY2, tmp_assign_source_16);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c328a10e6700d1ea03b0ec36c5fe26bd);
#endif
    popFrameStack();

    assertFrameObject(frame_c328a10e6700d1ea03b0ec36c5fe26bd);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c328a10e6700d1ea03b0ec36c5fe26bd);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_c328a10e6700d1ea03b0ec36c5fe26bd, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c328a10e6700d1ea03b0ec36c5fe26bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c328a10e6700d1ea03b0ec36c5fe26bd, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_unicode_digest_29ef324a408ad0ea3a0b8bbb59648b1e;
        UPDATE_STRING_DICT0(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__INSUFFICIENT_DATA_MESSAGE, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_asn1crypto$parser$$$function_1_emit();



        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_emit, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_19 = MAKE_FUNCTION_asn1crypto$parser$$$function_2_parse(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_parse, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_asn1crypto$parser$$$function_3_peek();



        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain_peek, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_0_false_tuple;
        Py_INCREF(tmp_defaults_2);
        tmp_assign_source_21 = MAKE_FUNCTION_asn1crypto$parser$$$function_4__parse(tmp_defaults_2);



        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__parse, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_asn1crypto$parser$$$function_5__dump_header();



        UPDATE_STRING_DICT1(moduledict_asn1crypto$parser, (Nuitka_StringObject *)const_str_plain__dump_header, tmp_assign_source_22);
    }

    return module_asn1crypto$parser;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
