/* Generated code for Python module 'chardet.universaldetector'
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

/* The "_module_chardet$universaldetector" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$universaldetector;
PyDictObject *moduledict_chardet$universaldetector;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_6e041e68342160b5c52f96a387a10185;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_prober_tuple;
static PyObject *const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple;
static PyObject *const_str_digest_8cd41f9549dd4710d5b9a25284345bff;
static PyObject *const_dict_002c5c06832d6e9c8de1aa07534ece81;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_plain_Latin1Prober_tuple;
static PyObject *const_dict_90f3771d827783d7c3f7c063b068451f;
extern PyObject *const_str_plain_byte_str;
static PyObject *const_str_digest_cd9c0a308cacd46c2f9852ecd7412108;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_plain__charset_probers;
extern PyObject *const_str_plain_language;
static PyObject *const_tuple_str_plain_MBCSGroupProber_tuple;
static PyObject *const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple;
static PyObject *const_str_digest_3feb039d342093a9fc19c97c763be56e;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_9c9170000e8116836a32fb144ec2827a;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_Latin1Prober;
static PyObject *const_str_plain_ISO_WIN_MAP;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_BOM_LE;
static PyObject *const_str_digest_5b492fde186bf9fa2dbf7913e4ddea2c;
static PyObject *const_str_plain_HIGH_BYTE_DETECTOR;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_escprober;
static PyObject *const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple;
static PyObject *const_dict_3bcf27e9da95f233b135a4fa0ccd80da;
extern PyObject *const_str_plain_ALL;
static PyObject *const_str_digest_a37f6b2482adcb3b84a0977a3a98c0da;
static PyObject *const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2;
static PyObject *const_tuple_str_plain_SBCSGroupProber_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple;
static PyObject *const_str_digest_5e73c293e48712f21fb40fe58935766b;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple;
extern PyObject *const_str_plain_MBCSGroupProber;
extern PyObject *const_str_plain_PURE_ASCII;
static PyObject *const_str_digest_d70e7d27197f8dcbcc30bc30e6fb1c47;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_feed;
static PyObject *const_str_plain_latin1prober;
static PyObject *const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple;
static PyObject *const_str_digest_94822410052685fe3f09d986d30eb776;
static PyObject *const_str_digest_5c857a2c1c3044c8de00afb0887f582d;
static PyObject *const_tuple_str_plain_EscCharSetProber_tuple;
extern PyObject *const_str_plain_ProbingState;
static PyObject *const_str_plain__esc_charset_prober;
static PyObject *const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple;
extern PyObject *const_str_plain_BOM_UTF32_LE;
extern PyObject *const_str_plain_LanguageFilter;
static PyObject *const_str_digest_f412f555784f387d309a8e308f5adcf2;
static PyObject *const_str_plain_lower_charset_name;
static PyObject *const_str_digest_2a3dfd37e1ac9d124977072a5f1ce40b;
static PyObject *const_str_digest_5257dff1dc44d02cd9b7b99613dac693;
static PyObject *const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple;
static PyObject *const_str_plain_ESC_DETECTOR;
static PyObject *const_str_digest_5b44479d06839737e5032359828bd044;
static PyObject *const_str_plain__has_win_bytes;
static PyObject *const_str_plain_max_prober;
extern PyObject *const_str_plain_ESC_ASCII;
static PyObject *const_str_plain_sbcsgroupprober;
static PyObject *const_str_digest_8faecd24d45b0f8564cecb06b07f272b;
static PyObject *const_str_digest_ba557194362b608fd158fbd8ee5a7d1f;
extern PyObject *const_str_plain_search;
static PyObject *const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple;
static PyObject *const_str_digest_414f3eb53ddda005f535853eee9ea763;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_BOM_BE;
static PyObject *const_str_plain__input_state;
static PyObject *const_str_plain_MINIMUM_THRESHOLD;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_bytearray;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_charsetgroupprober;
extern PyObject *const_str_plain_HIGH_BYTE;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_mbcsgroupprober;
extern PyObject *const_str_plain_prober;
static PyObject *const_dict_acd3a4b6b498901da52c8b1bd56c8dab;
static PyObject *const_dict_377578fbc5d025df2ee66117cf6a77d3;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_fd972b6d81d84a08e896c65329848fea;
static PyObject *const_dict_a6e4a40c040c4fb964d98e1bfa97ab44;
static PyObject *const_str_digest_24f43beb80981e610617318b075673a8;
static PyObject *const_str_digest_0924862728666b9340d0f8882b51a0c0;
extern PyObject *const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
static PyObject *const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple;
extern PyObject *const_float_0_0;
static PyObject *const_float_0_2;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_enums;
static PyObject *const_str_plain_max_prober_confidence;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_BOM_UTF32_BE;
static PyObject *const_str_digest_28f2c8a8a4aa368a5a1d2260b9fcd67d;
static PyObject *const_str_digest_f3b9cbc02c93f59ab2e2fd1bba7bfc42;
static PyObject *const_str_plain_getEffectiveLevel;
static PyObject *const_str_digest_880529ee285393273b708ebc2cbdff96;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_DEBUG;
static PyObject *const_str_plain_prober_confidence;
static PyObject *const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d;
extern PyObject *const_str_plain_confidence;
extern PyObject *const_str_digest_20861594150da1e43b5ee3f86b9deef6;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_probers;
extern PyObject *const_str_plain_InputState;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_0b5191bf8c38e40cc231bdabfb7650a2;
extern PyObject *const_tuple_str_plain_self_str_plain_lang_filter_tuple;
static PyObject *const_dict_9e25188306b97a758ea0254cbe76ba84;
static PyObject *const_str_digest_09464b1871d24e20ccfd92b25c196849;
static PyObject *const_str_digest_dd1206f138c97d58cbf970bd79a9b717;
static PyObject *const_str_digest_2ced950648ef68ce805626cb9fed7f86;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_logging;
static PyObject *const_str_plain_done;
extern PyObject *const_str_plain_codecs;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_UniversalDetector;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_c2ee01df52e9689b49110b353b517cca;
extern PyObject *const_str_plain__last_char;
extern PyObject *const_str_plain_NON_CJK;
extern PyObject *const_str_plain_SBCSGroupProber;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple;
static PyObject *const_str_digest_308b528f6f3a13b66fca5729f635fa2d;
static PyObject *const_str_plain_group_prober;
static PyObject *const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple;
static PyObject *const_str_plain__got_data;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_32f1e903be2daff919d233b4544c856e;
static PyObject *const_str_digest_70182f142ba67a97f57b332e5e974437;
extern PyObject *const_str_plain_CharSetGroupProber;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_EscCharSetProber;
static PyObject *const_str_plain_WIN_BYTE_DETECTOR;
static PyObject *const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c;
extern PyObject *const_tuple_str_plain_CharSetGroupProber_tuple;
static PyObject *const_str_digest_53766747036085ecfb5d3ad939a250bd;
extern PyObject *const_str_plain_BOM_UTF8;
static PyObject *const_dict_a6d98921e43d818182447b49977eb763;
extern PyObject *const_str_plain_lang_filter;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_6e041e68342160b5c52f96a387a10185 = UNSTREAM_STRING(&constant_bin[ 287551 ], 5, 0);
    const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple = PyTuple_New(1);
    const_str_digest_94822410052685fe3f09d986d30eb776 = UNSTREAM_STRING(&constant_bin[ 565111 ], 25, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple, 0, const_str_digest_94822410052685fe3f09d986d30eb776); Py_INCREF(const_str_digest_94822410052685fe3f09d986d30eb776);
    const_str_digest_8cd41f9549dd4710d5b9a25284345bff = UNSTREAM_STRING(&constant_bin[ 565136 ], 277, 0);
    const_dict_002c5c06832d6e9c8de1aa07534ece81 = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_002c5c06832d6e9c8de1aa07534ece81, const_str_plain_confidence, const_float_1_0);
    PyDict_SetItem(const_dict_002c5c06832d6e9c8de1aa07534ece81, const_str_plain_language, const_str_empty);
    const_str_digest_70182f142ba67a97f57b332e5e974437 = UNSTREAM_STRING(&constant_bin[ 565413 ], 9, 0);
    PyDict_SetItem(const_dict_002c5c06832d6e9c8de1aa07534ece81, const_str_plain_encoding, const_str_digest_70182f142ba67a97f57b332e5e974437);
    assert(PyDict_Size(const_dict_002c5c06832d6e9c8de1aa07534ece81) == 3);
    const_tuple_str_plain_Latin1Prober_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Latin1Prober_tuple, 0, const_str_plain_Latin1Prober); Py_INCREF(const_str_plain_Latin1Prober);
    const_dict_90f3771d827783d7c3f7c063b068451f = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_90f3771d827783d7c3f7c063b068451f, const_str_plain_confidence, const_float_1_0);
    PyDict_SetItem(const_dict_90f3771d827783d7c3f7c063b068451f, const_str_plain_language, const_str_empty);
    PyDict_SetItem(const_dict_90f3771d827783d7c3f7c063b068451f, const_str_plain_encoding, const_str_plain_ascii);
    assert(PyDict_Size(const_dict_90f3771d827783d7c3f7c063b068451f) == 3);
    const_str_digest_cd9c0a308cacd46c2f9852ecd7412108 = UNSTREAM_STRING(&constant_bin[ 565422 ], 12, 0);
    const_str_plain__charset_probers = UNSTREAM_STRING(&constant_bin[ 565434 ], 16, 1);
    const_tuple_str_plain_MBCSGroupProber_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_MBCSGroupProber_tuple, 0, const_str_plain_MBCSGroupProber); Py_INCREF(const_str_plain_MBCSGroupProber);
    const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple = PyTuple_New(1);
    const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2 = UNSTREAM_STRING(&constant_bin[ 565450 ], 17, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple, 0, const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2); Py_INCREF(const_str_digest_bc0b5381d1b0c55d0592ebd7222667f2);
    const_str_digest_3feb039d342093a9fc19c97c763be56e = UNSTREAM_STRING(&constant_bin[ 565467 ], 22, 0);
    const_str_digest_9c9170000e8116836a32fb144ec2827a = UNSTREAM_STRING(&constant_bin[ 565489 ], 28, 0);
    const_str_plain_ISO_WIN_MAP = UNSTREAM_STRING(&constant_bin[ 565517 ], 11, 1);
    const_str_plain_BOM_LE = UNSTREAM_STRING(&constant_bin[ 565528 ], 6, 1);
    const_str_digest_5b492fde186bf9fa2dbf7913e4ddea2c = UNSTREAM_STRING(&constant_bin[ 565534 ], 10, 0);
    const_str_plain_HIGH_BYTE_DETECTOR = UNSTREAM_STRING(&constant_bin[ 565544 ], 18, 1);
    const_str_plain_escprober = UNSTREAM_STRING(&constant_bin[ 290948 ], 9, 1);
    const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple, 0, const_str_plain_InputState); Py_INCREF(const_str_plain_InputState);
    PyTuple_SET_ITEM(const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple, 1, const_str_plain_LanguageFilter); Py_INCREF(const_str_plain_LanguageFilter);
    PyTuple_SET_ITEM(const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple, 2, const_str_plain_ProbingState); Py_INCREF(const_str_plain_ProbingState);
    const_dict_3bcf27e9da95f233b135a4fa0ccd80da = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_3bcf27e9da95f233b135a4fa0ccd80da, const_str_plain_confidence, const_float_1_0);
    PyDict_SetItem(const_dict_3bcf27e9da95f233b135a4fa0ccd80da, const_str_plain_language, const_str_empty);
    const_str_digest_0b5191bf8c38e40cc231bdabfb7650a2 = UNSTREAM_STRING(&constant_bin[ 557999 ], 6, 0);
    PyDict_SetItem(const_dict_3bcf27e9da95f233b135a4fa0ccd80da, const_str_plain_encoding, const_str_digest_0b5191bf8c38e40cc231bdabfb7650a2);
    assert(PyDict_Size(const_dict_3bcf27e9da95f233b135a4fa0ccd80da) == 3);
    const_str_digest_a37f6b2482adcb3b84a0977a3a98c0da = UNSTREAM_STRING(&constant_bin[ 565562 ], 12, 0);
    const_tuple_str_plain_SBCSGroupProber_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SBCSGroupProber_tuple, 0, const_str_plain_SBCSGroupProber); Py_INCREF(const_str_plain_SBCSGroupProber);
    const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple = PyTuple_New(1);
    const_str_digest_5b44479d06839737e5032359828bd044 = UNSTREAM_STRING(&constant_bin[ 565574 ], 32, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple, 0, const_str_digest_5b44479d06839737e5032359828bd044); Py_INCREF(const_str_digest_5b44479d06839737e5032359828bd044);
    const_str_digest_5e73c293e48712f21fb40fe58935766b = UNSTREAM_STRING(&constant_bin[ 565534 ], 8, 0);
    const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 1, const_str_plain_charset_name); Py_INCREF(const_str_plain_charset_name);
    const_str_plain_group_prober = UNSTREAM_STRING(&constant_bin[ 565606 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 2, const_str_plain_group_prober); Py_INCREF(const_str_plain_group_prober);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 3, const_str_plain_confidence); Py_INCREF(const_str_plain_confidence);
    const_str_plain_max_prober_confidence = UNSTREAM_STRING(&constant_bin[ 565618 ], 21, 1);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 4, const_str_plain_max_prober_confidence); Py_INCREF(const_str_plain_max_prober_confidence);
    const_str_plain_max_prober = UNSTREAM_STRING(&constant_bin[ 565618 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 5, const_str_plain_max_prober); Py_INCREF(const_str_plain_max_prober);
    const_str_plain_lower_charset_name = UNSTREAM_STRING(&constant_bin[ 565639 ], 18, 1);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 6, const_str_plain_lower_charset_name); Py_INCREF(const_str_plain_lower_charset_name);
    const_str_plain_prober_confidence = UNSTREAM_STRING(&constant_bin[ 565622 ], 17, 1);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 7, const_str_plain_prober_confidence); Py_INCREF(const_str_plain_prober_confidence);
    PyTuple_SET_ITEM(const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 8, const_str_plain_prober); Py_INCREF(const_str_plain_prober);
    const_str_digest_d70e7d27197f8dcbcc30bc30e6fb1c47 = UNSTREAM_STRING(&constant_bin[ 565657 ], 10, 0);
    const_str_plain_latin1prober = UNSTREAM_STRING(&constant_bin[ 552013 ], 12, 1);
    const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple = PyTuple_New(1);
    const_str_digest_414f3eb53ddda005f535853eee9ea763 = UNSTREAM_STRING(&constant_bin[ 565667 ], 5, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple, 0, const_str_digest_414f3eb53ddda005f535853eee9ea763); Py_INCREF(const_str_digest_414f3eb53ddda005f535853eee9ea763);
    const_str_digest_5c857a2c1c3044c8de00afb0887f582d = UNSTREAM_STRING(&constant_bin[ 565672 ], 12, 0);
    const_tuple_str_plain_EscCharSetProber_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_EscCharSetProber_tuple, 0, const_str_plain_EscCharSetProber); Py_INCREF(const_str_plain_EscCharSetProber);
    const_str_plain__esc_charset_prober = UNSTREAM_STRING(&constant_bin[ 565684 ], 19, 1);
    const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple = PyTuple_New(1);
    const_str_digest_2ced950648ef68ce805626cb9fed7f86 = UNSTREAM_STRING(&constant_bin[ 565703 ], 4, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple, 0, const_str_digest_2ced950648ef68ce805626cb9fed7f86); Py_INCREF(const_str_digest_2ced950648ef68ce805626cb9fed7f86);
    const_str_digest_f412f555784f387d309a8e308f5adcf2 = UNSTREAM_STRING(&constant_bin[ 565707 ], 369, 0);
    const_str_digest_2a3dfd37e1ac9d124977072a5f1ce40b = UNSTREAM_STRING(&constant_bin[ 566076 ], 22, 0);
    const_str_digest_5257dff1dc44d02cd9b7b99613dac693 = UNSTREAM_STRING(&constant_bin[ 566098 ], 12, 0);
    const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 1, const_str_plain_byte_str); Py_INCREF(const_str_plain_byte_str);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 2, const_str_plain_prober); Py_INCREF(const_str_plain_prober);
    const_str_plain_ESC_DETECTOR = UNSTREAM_STRING(&constant_bin[ 566110 ], 12, 1);
    const_str_plain__has_win_bytes = UNSTREAM_STRING(&constant_bin[ 566122 ], 14, 1);
    const_str_plain_sbcsgroupprober = UNSTREAM_STRING(&constant_bin[ 564918 ], 15, 1);
    const_str_digest_8faecd24d45b0f8564cecb06b07f272b = UNSTREAM_STRING(&constant_bin[ 566136 ], 230, 0);
    const_str_digest_ba557194362b608fd158fbd8ee5a7d1f = UNSTREAM_STRING(&constant_bin[ 566366 ], 6, 0);
    const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple, 0, const_str_digest_6e041e68342160b5c52f96a387a10185); Py_INCREF(const_str_digest_6e041e68342160b5c52f96a387a10185);
    const_str_plain_BOM_BE = UNSTREAM_STRING(&constant_bin[ 566372 ], 6, 1);
    const_str_plain__input_state = UNSTREAM_STRING(&constant_bin[ 566378 ], 12, 1);
    const_str_plain_MINIMUM_THRESHOLD = UNSTREAM_STRING(&constant_bin[ 566390 ], 17, 1);
    const_str_plain_mbcsgroupprober = UNSTREAM_STRING(&constant_bin[ 552543 ], 15, 1);
    const_dict_acd3a4b6b498901da52c8b1bd56c8dab = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_acd3a4b6b498901da52c8b1bd56c8dab, const_str_plain_confidence, const_float_1_0);
    PyDict_SetItem(const_dict_acd3a4b6b498901da52c8b1bd56c8dab, const_str_plain_language, const_str_empty);
    PyDict_SetItem(const_dict_acd3a4b6b498901da52c8b1bd56c8dab, const_str_plain_encoding, const_str_digest_3feb039d342093a9fc19c97c763be56e);
    assert(PyDict_Size(const_dict_acd3a4b6b498901da52c8b1bd56c8dab) == 3);
    const_dict_377578fbc5d025df2ee66117cf6a77d3 = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_377578fbc5d025df2ee66117cf6a77d3, const_str_plain_confidence, const_float_1_0);
    PyDict_SetItem(const_dict_377578fbc5d025df2ee66117cf6a77d3, const_str_plain_language, const_str_empty);
    PyDict_SetItem(const_dict_377578fbc5d025df2ee66117cf6a77d3, const_str_plain_encoding, const_str_digest_ba557194362b608fd158fbd8ee5a7d1f);
    assert(PyDict_Size(const_dict_377578fbc5d025df2ee66117cf6a77d3) == 3);
    const_str_digest_fd972b6d81d84a08e896c65329848fea = UNSTREAM_STRING(&constant_bin[ 566407 ], 10, 0);
    const_dict_a6e4a40c040c4fb964d98e1bfa97ab44 = _PyDict_NewPresized( 8 );
    const_str_digest_308b528f6f3a13b66fca5729f635fa2d = UNSTREAM_STRING(&constant_bin[ 566417 ], 10, 0);
    const_str_digest_28f2c8a8a4aa368a5a1d2260b9fcd67d = UNSTREAM_STRING(&constant_bin[ 566427 ], 12, 0);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_308b528f6f3a13b66fca5729f635fa2d, const_str_digest_28f2c8a8a4aa368a5a1d2260b9fcd67d);
    const_str_digest_24f43beb80981e610617318b075673a8 = UNSTREAM_STRING(&constant_bin[ 566439 ], 10, 0);
    const_str_digest_dd1206f138c97d58cbf970bd79a9b717 = UNSTREAM_STRING(&constant_bin[ 566449 ], 12, 0);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_24f43beb80981e610617318b075673a8, const_str_digest_dd1206f138c97d58cbf970bd79a9b717);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_fd972b6d81d84a08e896c65329848fea, const_str_digest_5c857a2c1c3044c8de00afb0887f582d);
    const_str_digest_c2ee01df52e9689b49110b353b517cca = UNSTREAM_STRING(&constant_bin[ 566461 ], 12, 0);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_d70e7d27197f8dcbcc30bc30e6fb1c47, const_str_digest_c2ee01df52e9689b49110b353b517cca);
    const_str_digest_09464b1871d24e20ccfd92b25c196849 = UNSTREAM_STRING(&constant_bin[ 566473 ], 10, 0);
    const_str_digest_0924862728666b9340d0f8882b51a0c0 = UNSTREAM_STRING(&constant_bin[ 566483 ], 12, 0);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_09464b1871d24e20ccfd92b25c196849, const_str_digest_0924862728666b9340d0f8882b51a0c0);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_5b492fde186bf9fa2dbf7913e4ddea2c, const_str_digest_a37f6b2482adcb3b84a0977a3a98c0da);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_20861594150da1e43b5ee3f86b9deef6, const_str_digest_5257dff1dc44d02cd9b7b99613dac693);
    const_str_digest_880529ee285393273b708ebc2cbdff96 = UNSTREAM_STRING(&constant_bin[ 566495 ], 11, 0);
    PyDict_SetItem(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44, const_str_digest_880529ee285393273b708ebc2cbdff96, const_str_digest_cd9c0a308cacd46c2f9852ecd7412108);
    assert(PyDict_Size(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44) == 8);
    const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple, 0, const_str_digest_5e73c293e48712f21fb40fe58935766b); Py_INCREF(const_str_digest_5e73c293e48712f21fb40fe58935766b);
    const_float_0_2 = UNSTREAM_FLOAT(&constant_bin[ 566506 ]);
    const_str_digest_f3b9cbc02c93f59ab2e2fd1bba7bfc42 = UNSTREAM_STRING(&constant_bin[ 566514 ], 509, 0);
    const_str_plain_getEffectiveLevel = UNSTREAM_STRING(&constant_bin[ 567023 ], 17, 1);
    const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d = UNSTREAM_STRING(&constant_bin[ 567040 ], 6, 0);
    const_dict_9e25188306b97a758ea0254cbe76ba84 = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_9e25188306b97a758ea0254cbe76ba84, const_str_plain_confidence, const_float_0_0);
    PyDict_SetItem(const_dict_9e25188306b97a758ea0254cbe76ba84, const_str_plain_language, Py_None);
    PyDict_SetItem(const_dict_9e25188306b97a758ea0254cbe76ba84, const_str_plain_encoding, Py_None);
    assert(PyDict_Size(const_dict_9e25188306b97a758ea0254cbe76ba84) == 3);
    const_str_plain_done = UNSTREAM_STRING(&constant_bin[ 566683 ], 4, 1);
    const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple = PyTuple_New(1);
    const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c = UNSTREAM_STRING(&constant_bin[ 567046 ], 4, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple, 0, const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c); Py_INCREF(const_str_digest_a028f3afac28f8b0b34fa67a3b811d3c);
    const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple, 0, const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d); Py_INCREF(const_str_digest_2d986ab47ee68c55dab8ab4deac33e8d);
    const_str_plain__got_data = UNSTREAM_STRING(&constant_bin[ 567050 ], 9, 1);
    const_str_digest_32f1e903be2daff919d233b4544c856e = UNSTREAM_STRING(&constant_bin[ 567059 ], 34, 0);
    const_str_plain_WIN_BYTE_DETECTOR = UNSTREAM_STRING(&constant_bin[ 567093 ], 17, 1);
    const_str_digest_53766747036085ecfb5d3ad939a250bd = UNSTREAM_STRING(&constant_bin[ 567110 ], 230, 0);
    const_dict_a6d98921e43d818182447b49977eb763 = _PyDict_NewPresized( 3 );
    PyDict_SetItem(const_dict_a6d98921e43d818182447b49977eb763, const_str_plain_confidence, const_float_1_0);
    PyDict_SetItem(const_dict_a6d98921e43d818182447b49977eb763, const_str_plain_language, const_str_empty);
    PyDict_SetItem(const_dict_a6d98921e43d818182447b49977eb763, const_str_plain_encoding, const_str_digest_2a3dfd37e1ac9d124977072a5f1ce40b);
    assert(PyDict_Size(const_dict_a6d98921e43d818182447b49977eb763) == 3);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$universaldetector(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7a17d05661876eb1a568ec2324051756;
static PyCodeObject *codeobj_0c8ab7f6762d913809559f424b1423ed;
static PyCodeObject *codeobj_29f3796e315def737044ad6f960e1543;
static PyCodeObject *codeobj_6cda77d8bb1b7cb24386038d6f02113a;
static PyCodeObject *codeobj_45d7e35d4b09d914c521a60642e6bc45;
static PyCodeObject *codeobj_43022c6b9b314f6d26f22e764d70c6e7;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_9c9170000e8116836a32fb144ec2827a);
    codeobj_7a17d05661876eb1a568ec2324051756 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_32f1e903be2daff919d233b4544c856e, const_tuple_empty, 0, 0, 0);
    codeobj_0c8ab7f6762d913809559f424b1423ed = MAKE_CODEOBJECT(module_filename_obj, 51, CO_NEWLOCALS | CO_NOFREE, const_str_plain_UniversalDetector, const_tuple_empty, 0, 0, 0);
    codeobj_29f3796e315def737044ad6f960e1543 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_lang_filter_tuple, 2, 0, 0);
    codeobj_6cda77d8bb1b7cb24386038d6f02113a = MAKE_CODEOBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_close, const_tuple_4aebc003ac14787e153aa6553cfa3fb7_tuple, 1, 0, 0);
    codeobj_45d7e35d4b09d914c521a60642e6bc45 = MAKE_CODEOBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_feed, const_tuple_str_plain_self_str_plain_byte_str_str_plain_prober_tuple, 2, 0, 0);
    codeobj_43022c6b9b314f6d26f22e764d70c6e7 = MAKE_CODEOBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reset, const_tuple_str_plain_self_str_plain_prober_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_2_reset();


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_3_feed();


static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_4_close();


// The module function definitions.
static PyObject *impl_chardet$universaldetector$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lang_filter = python_pars[1];
    struct Nuitka_FrameObject *frame_29f3796e315def737044ad6f960e1543;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29f3796e315def737044ad6f960e1543 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_29f3796e315def737044ad6f960e1543, codeobj_29f3796e315def737044ad6f960e1543, module_chardet$universaldetector, sizeof(void *)+sizeof(void *));
    frame_29f3796e315def737044ad6f960e1543 = cache_frame_29f3796e315def737044ad6f960e1543;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_29f3796e315def737044ad6f960e1543);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_29f3796e315def737044ad6f960e1543) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__esc_charset_prober, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__charset_probers, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_result, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_done, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__got_data, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__input_state, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain__last_char, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_lang_filter);
        tmp_assattr_name_8 = par_lang_filter;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_lang_filter, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_9;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15288 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_29f3796e315def737044ad6f960e1543->m_frame.f_lineno = 90;
        tmp_assattr_name_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_digest_94822410052685fe3f09d986d30eb776_tuple, 0));

        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_logger, tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain__has_win_bytes, tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_29f3796e315def737044ad6f960e1543->m_frame.f_lineno = 92;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29f3796e315def737044ad6f960e1543);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29f3796e315def737044ad6f960e1543);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29f3796e315def737044ad6f960e1543, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_29f3796e315def737044ad6f960e1543->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29f3796e315def737044ad6f960e1543, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29f3796e315def737044ad6f960e1543,
        type_description_1,
        par_self,
        par_lang_filter
    );


    // Release cached frame.
    if (frame_29f3796e315def737044ad6f960e1543 == cache_frame_29f3796e315def737044ad6f960e1543) {
        Py_DECREF(frame_29f3796e315def737044ad6f960e1543);
    }
    cache_frame_29f3796e315def737044ad6f960e1543 = NULL;

    assertFrameObject(frame_29f3796e315def737044ad6f960e1543);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$universaldetector$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lang_filter);
    Py_DECREF(par_lang_filter);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lang_filter);
    Py_DECREF(par_lang_filter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_chardet$universaldetector$$$function_2_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_prober = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_43022c6b9b314f6d26f22e764d70c6e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_43022c6b9b314f6d26f22e764d70c6e7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_43022c6b9b314f6d26f22e764d70c6e7, codeobj_43022c6b9b314f6d26f22e764d70c6e7, module_chardet$universaldetector, sizeof(void *)+sizeof(void *));
    frame_43022c6b9b314f6d26f22e764d70c6e7 = cache_frame_43022c6b9b314f6d26f22e764d70c6e7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_43022c6b9b314f6d26f22e764d70c6e7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_43022c6b9b314f6d26f22e764d70c6e7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyDict_Copy(const_dict_9e25188306b97a758ea0254cbe76ba84);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_result, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_done, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__got_data, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__has_win_bytes, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assattr_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_PURE_ASCII);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__input_state, tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = const_str_empty;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__last_char, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__esc_charset_prober);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__esc_charset_prober);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_43022c6b9b314f6d26f22e764d70c6e7->m_frame.f_lineno = 107;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__charset_probers);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 108;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_prober;
            var_prober = tmp_assign_source_3;
            Py_INCREF(var_prober);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_prober);
        tmp_called_instance_2 = var_prober;
        frame_43022c6b9b314f6d26f22e764d70c6e7->m_frame.f_lineno = 109;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 108;
        type_description_1 = "oo";
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_43022c6b9b314f6d26f22e764d70c6e7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_43022c6b9b314f6d26f22e764d70c6e7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_43022c6b9b314f6d26f22e764d70c6e7, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_43022c6b9b314f6d26f22e764d70c6e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43022c6b9b314f6d26f22e764d70c6e7, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43022c6b9b314f6d26f22e764d70c6e7,
        type_description_1,
        par_self,
        var_prober
    );


    // Release cached frame.
    if (frame_43022c6b9b314f6d26f22e764d70c6e7 == cache_frame_43022c6b9b314f6d26f22e764d70c6e7) {
        Py_DECREF(frame_43022c6b9b314f6d26f22e764d70c6e7);
    }
    cache_frame_43022c6b9b314f6d26f22e764d70c6e7 = NULL;

    assertFrameObject(frame_43022c6b9b314f6d26f22e764d70c6e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$universaldetector$$$function_2_reset);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prober);
    var_prober = NULL;

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

    Py_XDECREF(var_prober);
    var_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$universaldetector$$$function_2_reset);
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


static PyObject *impl_chardet$universaldetector$$$function_3_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_byte_str = python_pars[1];
    PyObject *var_prober = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_45d7e35d4b09d914c521a60642e6bc45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_45d7e35d4b09d914c521a60642e6bc45 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_45d7e35d4b09d914c521a60642e6bc45, codeobj_45d7e35d4b09d914c521a60642e6bc45, module_chardet$universaldetector, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_45d7e35d4b09d914c521a60642e6bc45 = cache_frame_45d7e35d4b09d914c521a60642e6bc45;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_45d7e35d4b09d914c521a60642e6bc45);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_45d7e35d4b09d914c521a60642e6bc45) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_done);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_byte_str);
        tmp_len_arg_1 = par_byte_str;
        tmp_operand_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_byte_str);
        tmp_isinstance_inst_1 = par_byte_str;
        tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_bytearray_arg_1;
            CHECK_OBJECT(par_byte_str);
            tmp_bytearray_arg_1 = par_byte_str;
            tmp_assign_source_1 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_byte_str;
                assert(old != NULL);
                par_byte_str = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__got_data);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_1;
            int tmp_truth_name_2;
            CHECK_OBJECT(par_byte_str);
            tmp_source_name_3 = par_byte_str;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_startswith);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs);
            }

            if (tmp_mvar_value_1 == NULL) {
                Py_DECREF(tmp_called_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 7412 ], 35, 0);
                exception_tb = NULL;

                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_BOM_UTF8);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 137;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 137;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                tmp_assattr_name_1 = PyDict_Copy(const_dict_002c5c06832d6e9c8de1aa07534ece81);
                CHECK_OBJECT(par_self);
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_result, tmp_assattr_name_1);
                Py_DECREF(tmp_assattr_name_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 139;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_3;
                int tmp_truth_name_3;
                CHECK_OBJECT(par_byte_str);
                tmp_source_name_5 = par_byte_str;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_startswith);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs);
                }

                if (tmp_mvar_value_2 == NULL) {
                    Py_DECREF(tmp_called_name_2);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 7412 ], 35, 0);
                    exception_tb = NULL;

                    exception_lineno = 142;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_6 = tmp_mvar_value_2;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_BOM_UTF32_LE);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 142;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_2 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_args_element_name_2, 0, tmp_tuple_element_1);
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs);
                }

                if (tmp_mvar_value_3 == NULL) {
                    Py_DECREF(tmp_called_name_2);
                    Py_DECREF(tmp_args_element_name_2);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 7412 ], 35, 0);
                    exception_tb = NULL;

                    exception_lineno = 143;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_7 = tmp_mvar_value_3;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_BOM_UTF32_BE);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);
                    Py_DECREF(tmp_args_element_name_2);

                    exception_lineno = 143;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM(tmp_args_element_name_2, 1, tmp_tuple_element_1);
                frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 142;
                tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
                if (tmp_truth_name_3 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_call_result_2);

                    exception_lineno = 142;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_call_result_2);
                if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_6;
                } else {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    PyObject *tmp_assattr_name_2;
                    PyObject *tmp_assattr_target_2;
                    tmp_assattr_name_2 = PyDict_Copy(const_dict_377578fbc5d025df2ee66117cf6a77d3);
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_2 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_result, tmp_assattr_name_2);
                    Py_DECREF(tmp_assattr_name_2);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_6;
                branch_no_6:;
                {
                    nuitka_bool tmp_condition_result_7;
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_call_result_3;
                    int tmp_truth_name_4;
                    CHECK_OBJECT(par_byte_str);
                    tmp_called_instance_1 = par_byte_str;
                    frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 149;
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_digest_a028f3afac28f8b0b34fa67a3b811d3c_tuple, 0));

                    if (tmp_call_result_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
                    if (tmp_truth_name_4 == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_call_result_3);

                        exception_lineno = 149;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF(tmp_call_result_3);
                    if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_7;
                    } else {
                        goto branch_no_7;
                    }
                    branch_yes_7:;
                    {
                        PyObject *tmp_assattr_name_3;
                        PyObject *tmp_assattr_target_3;
                        tmp_assattr_name_3 = PyDict_Copy(const_dict_acd3a4b6b498901da52c8b1bd56c8dab);
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_3 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_result, tmp_assattr_name_3);
                        Py_DECREF(tmp_assattr_name_3);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 151;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_7;
                    branch_no_7:;
                    {
                        nuitka_bool tmp_condition_result_8;
                        PyObject *tmp_called_instance_2;
                        PyObject *tmp_call_result_4;
                        int tmp_truth_name_5;
                        CHECK_OBJECT(par_byte_str);
                        tmp_called_instance_2 = par_byte_str;
                        frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 154;
                        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_digest_2ced950648ef68ce805626cb9fed7f86_tuple, 0));

                        if (tmp_call_result_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
                        if (tmp_truth_name_5 == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_call_result_4);

                            exception_lineno = 154;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_8 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        Py_DECREF(tmp_call_result_4);
                        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_8;
                        } else {
                            goto branch_no_8;
                        }
                        branch_yes_8:;
                        {
                            PyObject *tmp_assattr_name_4;
                            PyObject *tmp_assattr_target_4;
                            tmp_assattr_name_4 = PyDict_Copy(const_dict_a6d98921e43d818182447b49977eb763);
                            CHECK_OBJECT(par_self);
                            tmp_assattr_target_4 = par_self;
                            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_result, tmp_assattr_name_4);
                            Py_DECREF(tmp_assattr_name_4);
                            if (tmp_result == false) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 156;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                        }
                        goto branch_end_8;
                        branch_no_8:;
                        {
                            nuitka_bool tmp_condition_result_9;
                            PyObject *tmp_called_name_3;
                            PyObject *tmp_source_name_8;
                            PyObject *tmp_call_result_5;
                            PyObject *tmp_args_element_name_3;
                            PyObject *tmp_tuple_element_2;
                            PyObject *tmp_source_name_9;
                            PyObject *tmp_mvar_value_4;
                            PyObject *tmp_source_name_10;
                            PyObject *tmp_mvar_value_5;
                            int tmp_truth_name_6;
                            CHECK_OBJECT(par_byte_str);
                            tmp_source_name_8 = par_byte_str;
                            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_startswith);
                            if (tmp_called_name_3 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs);

                            if (unlikely(tmp_mvar_value_4 == NULL)) {
                                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs);
                            }

                            if (tmp_mvar_value_4 == NULL) {
                                Py_DECREF(tmp_called_name_3);
                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 7412 ], 35, 0);
                                exception_tb = NULL;

                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_9 = tmp_mvar_value_4;
                            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_BOM_LE);
                            if (tmp_tuple_element_2 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_name_3);

                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_args_element_name_3 = PyTuple_New(2);
                            PyTuple_SET_ITEM(tmp_args_element_name_3, 0, tmp_tuple_element_2);
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs);

                            if (unlikely(tmp_mvar_value_5 == NULL)) {
                                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_codecs);
                            }

                            if (tmp_mvar_value_5 == NULL) {
                                Py_DECREF(tmp_called_name_3);
                                Py_DECREF(tmp_args_element_name_3);
                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 7412 ], 35, 0);
                                exception_tb = NULL;

                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_10 = tmp_mvar_value_5;
                            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_BOM_BE);
                            if (tmp_tuple_element_2 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_name_3);
                                Py_DECREF(tmp_args_element_name_3);

                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            PyTuple_SET_ITEM(tmp_args_element_name_3, 1, tmp_tuple_element_2);
                            frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 159;
                            tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
                            Py_DECREF(tmp_called_name_3);
                            Py_DECREF(tmp_args_element_name_3);
                            if (tmp_call_result_5 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
                            if (tmp_truth_name_6 == -1) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_call_result_5);

                                exception_lineno = 159;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_9 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            Py_DECREF(tmp_call_result_5);
                            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                                goto branch_yes_9;
                            } else {
                                goto branch_no_9;
                            }
                            branch_yes_9:;
                            {
                                PyObject *tmp_assattr_name_5;
                                PyObject *tmp_assattr_target_5;
                                tmp_assattr_name_5 = PyDict_Copy(const_dict_3bcf27e9da95f233b135a4fa0ccd80da);
                                CHECK_OBJECT(par_self);
                                tmp_assattr_target_5 = par_self;
                                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_result, tmp_assattr_name_5);
                                Py_DECREF(tmp_assattr_name_5);
                                if (tmp_result == false) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 162;
                                    type_description_1 = "ooo";
                                    goto frame_exception_exit_1;
                                }
                            }
                            branch_no_9:;
                        }
                        branch_end_8:;
                    }
                    branch_end_7:;
                }
                branch_end_6:;
            }
            branch_end_5:;
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            tmp_assattr_name_6 = Py_True;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__got_data, tmp_assattr_name_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_11;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_11 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_result);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_str_plain_encoding;
            tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_compexpr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_10 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_compexpr_left_1);
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_assattr_name_7;
                PyObject *tmp_assattr_target_7;
                tmp_assattr_name_7 = Py_True;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_7 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_done, tmp_assattr_name_7);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            tmp_return_value = Py_None;
            Py_INCREF(tmp_return_value);
            goto frame_return_exit_1;
            branch_no_10:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__input_state);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_compexpr_left_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_6;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_PURE_ASCII);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_14;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_4;
            int tmp_truth_name_7;
            CHECK_OBJECT(par_self);
            tmp_source_name_14 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_HIGH_BYTE_DETECTOR);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_byte_str);
            tmp_args_element_name_4 = par_byte_str;
            frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = {tmp_args_element_name_4};
                tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_search, call_args);
            }

            Py_DECREF(tmp_called_instance_3);
            if (tmp_call_result_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_6);
            if (tmp_truth_name_7 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_6);

                exception_lineno = 174;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_12 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_6);
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_assattr_name_8;
                PyObject *tmp_source_name_15;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_assattr_target_8;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

                if (unlikely(tmp_mvar_value_7 == NULL)) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
                }

                if (tmp_mvar_value_7 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
                    exception_tb = NULL;

                    exception_lineno = 175;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_15 = tmp_mvar_value_7;
                tmp_assattr_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_HIGH_BYTE);
                if (tmp_assattr_name_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_8 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain__input_state, tmp_assattr_name_8);
                Py_DECREF(tmp_assattr_name_8);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 175;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_12;
            branch_no_12:;
            {
                nuitka_bool tmp_condition_result_13;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_16;
                PyObject *tmp_source_name_17;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_18;
                PyObject *tmp_source_name_19;
                PyObject *tmp_call_result_7;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_left_name_1;
                PyObject *tmp_source_name_20;
                PyObject *tmp_right_name_1;
                int tmp_truth_name_8;
                CHECK_OBJECT(par_self);
                tmp_source_name_16 = par_self;
                tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__input_state);
                if (tmp_compexpr_left_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

                if (unlikely(tmp_mvar_value_8 == NULL)) {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
                }

                if (tmp_mvar_value_8 == NULL) {
                    Py_DECREF(tmp_compexpr_left_3);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
                    exception_tb = NULL;

                    exception_lineno = 176;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_17 = tmp_mvar_value_8;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_PURE_ASCII);
                if (tmp_compexpr_right_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_compexpr_left_3);

                    exception_lineno = 176;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                Py_DECREF(tmp_compexpr_left_3);
                Py_DECREF(tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_1 = "ooo";
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
                CHECK_OBJECT(par_self);
                tmp_source_name_19 = par_self;
                tmp_source_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_ESC_DETECTOR);
                if (tmp_source_name_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_search);
                Py_DECREF(tmp_source_name_18);
                if (tmp_called_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_20 = par_self;
                tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain__last_char);
                if (tmp_left_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_4);

                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_byte_str);
                tmp_right_name_1 = par_byte_str;
                tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_left_name_1);
                if (tmp_args_element_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_4);

                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 177;
                tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
                Py_DECREF(tmp_called_name_4);
                Py_DECREF(tmp_args_element_name_5);
                if (tmp_call_result_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_7);
                if (tmp_truth_name_8 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_call_result_7);

                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_call_result_7);
                tmp_condition_result_13 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_13 = tmp_and_left_value_1;
                and_end_1:;
                if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_13;
                } else {
                    goto branch_no_13;
                }
                branch_yes_13:;
                {
                    PyObject *tmp_assattr_name_9;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_assattr_target_9;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

                    if (unlikely(tmp_mvar_value_9 == NULL)) {
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
                    }

                    if (tmp_mvar_value_9 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
                        exception_tb = NULL;

                        exception_lineno = 178;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_21 = tmp_mvar_value_9;
                    tmp_assattr_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_ESC_ASCII);
                    if (tmp_assattr_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_9 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain__input_state, tmp_assattr_name_9);
                    Py_DECREF(tmp_assattr_name_9);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 178;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                branch_no_13:;
            }
            branch_end_12:;
        }
        branch_no_11:;
    }
    {
        PyObject *tmp_assattr_name_10;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_assattr_target_10;
        tmp_sliceslicedel_index_lower_1 = -1;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT(par_byte_str);
        tmp_slice_source_1 = par_byte_str;
        tmp_assattr_name_10 = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain__last_char, tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_22;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_10;
        CHECK_OBJECT(par_self);
        tmp_source_name_22 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain__input_state);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
        }

        if (tmp_mvar_value_10 == NULL) {
            Py_DECREF(tmp_compexpr_left_4);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_10;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_ESC_ASCII);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_4);

            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_24;
            CHECK_OBJECT(par_self);
            tmp_source_name_24 = par_self;
            tmp_operand_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain__esc_charset_prober);
            if (tmp_operand_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
            Py_DECREF(tmp_operand_name_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_assattr_name_11;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_11;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_25;
                PyObject *tmp_assattr_target_11;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_EscCharSetProber);

                if (unlikely(tmp_mvar_value_11 == NULL)) {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EscCharSetProber);
                }

                if (tmp_mvar_value_11 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15616 ], 45, 0);
                    exception_tb = NULL;

                    exception_lineno = 188;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_5 = tmp_mvar_value_11;
                CHECK_OBJECT(par_self);
                tmp_source_name_25 = par_self;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_lang_filter);
                if (tmp_args_element_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 188;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 188;
                tmp_assattr_name_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
                Py_DECREF(tmp_args_element_name_6);
                if (tmp_assattr_name_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 188;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_assattr_target_11 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, const_str_plain__esc_charset_prober, tmp_assattr_name_11);
                Py_DECREF(tmp_assattr_name_11);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 188;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_15:;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_26;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_27;
            PyObject *tmp_mvar_value_12;
            CHECK_OBJECT(par_self);
            tmp_source_name_26 = par_self;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain__esc_charset_prober);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_byte_str);
            tmp_args_element_name_7 = par_byte_str;
            frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = {tmp_args_element_name_7};
                tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_feed, call_args);
            }

            Py_DECREF(tmp_called_instance_4);
            if (tmp_compexpr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_ProbingState);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
            }

            if (tmp_mvar_value_12 == NULL) {
                Py_DECREF(tmp_compexpr_left_5);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 189;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_27 = tmp_mvar_value_12;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_FOUND_IT);
            if (tmp_compexpr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_5);

                exception_lineno = 189;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            Py_DECREF(tmp_compexpr_left_5);
            Py_DECREF(tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            branch_yes_16:;
            {
                PyObject *tmp_assattr_name_12;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_source_name_28;
                PyObject *tmp_source_name_29;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_source_name_30;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_source_name_31;
                PyObject *tmp_source_name_32;
                PyObject *tmp_assattr_target_12;
                CHECK_OBJECT(par_self);
                tmp_source_name_29 = par_self;
                tmp_source_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain__esc_charset_prober);
                if (tmp_source_name_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_charset_name);
                Py_DECREF(tmp_source_name_28);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_1 = const_str_plain_encoding;
                tmp_assattr_name_12 = _PyDict_NewPresized( 3 );
                tmp_res = PyDict_SetItem(tmp_assattr_name_12, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                CHECK_OBJECT(par_self);
                tmp_source_name_30 = par_self;
                tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain__esc_charset_prober);
                if (tmp_called_instance_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_assattr_name_12);

                    exception_lineno = 193;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 193;
                tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_get_confidence);
                Py_DECREF(tmp_called_instance_5);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_assattr_name_12);

                    exception_lineno = 193;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_2 = const_str_plain_confidence;
                tmp_res = PyDict_SetItem(tmp_assattr_name_12, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                CHECK_OBJECT(par_self);
                tmp_source_name_32 = par_self;
                tmp_source_name_31 = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain__esc_charset_prober);
                if (tmp_source_name_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_assattr_name_12);

                    exception_lineno = 195;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_language);
                Py_DECREF(tmp_source_name_31);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_assattr_name_12);

                    exception_lineno = 195;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_3 = const_str_plain_language;
                tmp_res = PyDict_SetItem(tmp_assattr_name_12, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                CHECK_OBJECT(par_self);
                tmp_assattr_target_12 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, const_str_plain_result, tmp_assattr_name_12);
                Py_DECREF(tmp_assattr_name_12);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_13;
                PyObject *tmp_assattr_target_13;
                tmp_assattr_name_13 = Py_True;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_13 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, const_str_plain_done, tmp_assattr_name_13);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_16:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_33;
            PyObject *tmp_source_name_34;
            PyObject *tmp_mvar_value_13;
            CHECK_OBJECT(par_self);
            tmp_source_name_33 = par_self;
            tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE(tmp_source_name_33, const_str_plain__input_state);
            if (tmp_compexpr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

            if (unlikely(tmp_mvar_value_13 == NULL)) {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
            }

            if (tmp_mvar_value_13 == NULL) {
                Py_DECREF(tmp_compexpr_left_6);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
                exception_tb = NULL;

                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_34 = tmp_mvar_value_13;
            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_source_name_34, const_str_plain_HIGH_BYTE);
            if (tmp_compexpr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_6);

                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            Py_DECREF(tmp_compexpr_left_6);
            Py_DECREF(tmp_compexpr_right_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
            branch_yes_17:;
            {
                nuitka_bool tmp_condition_result_18;
                PyObject *tmp_operand_name_5;
                PyObject *tmp_source_name_35;
                CHECK_OBJECT(par_self);
                tmp_source_name_35 = par_self;
                tmp_operand_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_35, const_str_plain__charset_probers);
                if (tmp_operand_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
                Py_DECREF(tmp_operand_name_5);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_18 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_18;
                } else {
                    goto branch_no_18;
                }
                branch_yes_18:;
                {
                    PyObject *tmp_assattr_name_14;
                    PyObject *tmp_list_element_1;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_mvar_value_14;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_source_name_36;
                    PyObject *tmp_assattr_target_14;
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_MBCSGroupProber);

                    if (unlikely(tmp_mvar_value_14 == NULL)) {
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MBCSGroupProber);
                    }

                    if (tmp_mvar_value_14 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 16950 ], 44, 0);
                        exception_tb = NULL;

                        exception_lineno = 205;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_6 = tmp_mvar_value_14;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_36 = par_self;
                    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_36, const_str_plain_lang_filter);
                    if (tmp_args_element_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 205;
                    tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_8);
                    Py_DECREF(tmp_args_element_name_8);
                    if (tmp_list_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assattr_name_14 = PyList_New(1);
                    PyList_SET_ITEM(tmp_assattr_name_14, 0, tmp_list_element_1);
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_14 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, const_str_plain__charset_probers, tmp_assattr_name_14);
                    Py_DECREF(tmp_assattr_name_14);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    nuitka_bool tmp_condition_result_19;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_source_name_37;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_source_name_38;
                    PyObject *tmp_mvar_value_15;
                    PyObject *tmp_op_bitand_res_1;
                    int tmp_truth_name_9;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_37 = par_self;
                    tmp_left_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_37, const_str_plain_lang_filter);
                    if (tmp_left_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_LanguageFilter);

                    if (unlikely(tmp_mvar_value_15 == NULL)) {
                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LanguageFilter);
                    }

                    if (tmp_mvar_value_15 == NULL) {
                        Py_DECREF(tmp_left_name_2);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 15661 ], 43, 0);
                        exception_tb = NULL;

                        exception_lineno = 207;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_38 = tmp_mvar_value_15;
                    tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_38, const_str_plain_NON_CJK);
                    if (tmp_right_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_left_name_2);

                        exception_lineno = 207;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_op_bitand_res_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
                    Py_DECREF(tmp_left_name_2);
                    Py_DECREF(tmp_right_name_2);
                    if (tmp_op_bitand_res_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_truth_name_9 = CHECK_IF_TRUE(tmp_op_bitand_res_1);
                    if (tmp_truth_name_9 == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_op_bitand_res_1);

                        exception_lineno = 207;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_19 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF(tmp_op_bitand_res_1);
                    if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_19;
                    } else {
                        goto branch_no_19;
                    }
                    branch_yes_19:;
                    {
                        PyObject *tmp_called_name_7;
                        PyObject *tmp_source_name_39;
                        PyObject *tmp_source_name_40;
                        PyObject *tmp_call_result_8;
                        PyObject *tmp_args_element_name_9;
                        PyObject *tmp_called_name_8;
                        PyObject *tmp_mvar_value_16;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_40 = par_self;
                        tmp_source_name_39 = LOOKUP_ATTRIBUTE(tmp_source_name_40, const_str_plain__charset_probers);
                        if (tmp_source_name_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_39, const_str_plain_append);
                        Py_DECREF(tmp_source_name_39);
                        if (tmp_called_name_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber);

                        if (unlikely(tmp_mvar_value_16 == NULL)) {
                            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber);
                        }

                        if (tmp_mvar_value_16 == NULL) {
                            Py_DECREF(tmp_called_name_7);
                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 17527 ], 44, 0);
                            exception_tb = NULL;

                            exception_lineno = 208;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_8 = tmp_mvar_value_16;
                        frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 208;
                        tmp_args_element_name_9 = CALL_FUNCTION_NO_ARGS(tmp_called_name_8);
                        if (tmp_args_element_name_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_7);

                            exception_lineno = 208;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 208;
                        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_9);
                        Py_DECREF(tmp_called_name_7);
                        Py_DECREF(tmp_args_element_name_9);
                        if (tmp_call_result_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF(tmp_call_result_8);
                    }
                    branch_no_19:;
                }
                {
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_41;
                    PyObject *tmp_source_name_42;
                    PyObject *tmp_call_result_9;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_mvar_value_17;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_42 = par_self;
                    tmp_source_name_41 = LOOKUP_ATTRIBUTE(tmp_source_name_42, const_str_plain__charset_probers);
                    if (tmp_source_name_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_41, const_str_plain_append);
                    Py_DECREF(tmp_source_name_41);
                    if (tmp_called_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_Latin1Prober);

                    if (unlikely(tmp_mvar_value_17 == NULL)) {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Latin1Prober);
                    }

                    if (tmp_mvar_value_17 == NULL) {
                        Py_DECREF(tmp_called_name_9);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 16613 ], 41, 0);
                        exception_tb = NULL;

                        exception_lineno = 209;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_10 = tmp_mvar_value_17;
                    frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 209;
                    tmp_args_element_name_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_10);
                    if (tmp_args_element_name_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_9);

                        exception_lineno = 209;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 209;
                    tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_10);
                    Py_DECREF(tmp_called_name_9);
                    Py_DECREF(tmp_args_element_name_10);
                    if (tmp_call_result_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 209;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_9);
                }
                branch_no_18:;
            }
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_source_name_43;
                CHECK_OBJECT(par_self);
                tmp_source_name_43 = par_self;
                tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_43, const_str_plain__charset_probers);
                if (tmp_iter_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert(tmp_for_loop_1__for_iterator == NULL);
                tmp_for_loop_1__for_iterator = tmp_assign_source_2;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_3;
                CHECK_OBJECT(tmp_for_loop_1__for_iterator);
                tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
                if (tmp_assign_source_3 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_1;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_1 = "ooo";
                        exception_lineno = 210;
                        goto try_except_handler_2;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_3;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_4;
                CHECK_OBJECT(tmp_for_loop_1__iter_value);
                tmp_assign_source_4 = tmp_for_loop_1__iter_value;
                {
                    PyObject *old = var_prober;
                    var_prober = tmp_assign_source_4;
                    Py_INCREF(var_prober);
                    Py_XDECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_20;
                PyObject *tmp_compexpr_left_7;
                PyObject *tmp_compexpr_right_7;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_source_name_44;
                PyObject *tmp_mvar_value_18;
                CHECK_OBJECT(var_prober);
                tmp_called_instance_6 = var_prober;
                CHECK_OBJECT(par_byte_str);
                tmp_args_element_name_11 = par_byte_str;
                frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 211;
                {
                    PyObject *call_args[] = {tmp_args_element_name_11};
                    tmp_compexpr_left_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_feed, call_args);
                }

                if (tmp_compexpr_left_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_ProbingState);

                if (unlikely(tmp_mvar_value_18 == NULL)) {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                }

                if (tmp_mvar_value_18 == NULL) {
                    Py_DECREF(tmp_compexpr_left_7);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15247 ], 41, 0);
                    exception_tb = NULL;

                    exception_lineno = 211;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_44 = tmp_mvar_value_18;
                tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE(tmp_source_name_44, const_str_plain_FOUND_IT);
                if (tmp_compexpr_right_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_compexpr_left_7);

                    exception_lineno = 211;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
                Py_DECREF(tmp_compexpr_left_7);
                Py_DECREF(tmp_compexpr_right_7);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_20;
                } else {
                    goto branch_no_20;
                }
                branch_yes_20:;
                {
                    PyObject *tmp_assattr_name_15;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    PyObject *tmp_source_name_45;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_called_instance_7;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_source_name_46;
                    PyObject *tmp_assattr_target_15;
                    CHECK_OBJECT(var_prober);
                    tmp_source_name_45 = var_prober;
                    tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_source_name_45, const_str_plain_charset_name);
                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 212;
                        type_description_1 = "ooo";
                        goto try_except_handler_2;
                    }
                    tmp_dict_key_4 = const_str_plain_encoding;
                    tmp_assattr_name_15 = _PyDict_NewPresized( 3 );
                    tmp_res = PyDict_SetItem(tmp_assattr_name_15, tmp_dict_key_4, tmp_dict_value_4);
                    Py_DECREF(tmp_dict_value_4);
                    assert(!(tmp_res != 0));
                    CHECK_OBJECT(var_prober);
                    tmp_called_instance_7 = var_prober;
                    frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 213;
                    tmp_dict_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_get_confidence);
                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_assattr_name_15);

                        exception_lineno = 213;
                        type_description_1 = "ooo";
                        goto try_except_handler_2;
                    }
                    tmp_dict_key_5 = const_str_plain_confidence;
                    tmp_res = PyDict_SetItem(tmp_assattr_name_15, tmp_dict_key_5, tmp_dict_value_5);
                    Py_DECREF(tmp_dict_value_5);
                    assert(!(tmp_res != 0));
                    CHECK_OBJECT(var_prober);
                    tmp_source_name_46 = var_prober;
                    tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_source_name_46, const_str_plain_language);
                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_assattr_name_15);

                        exception_lineno = 214;
                        type_description_1 = "ooo";
                        goto try_except_handler_2;
                    }
                    tmp_dict_key_6 = const_str_plain_language;
                    tmp_res = PyDict_SetItem(tmp_assattr_name_15, tmp_dict_key_6, tmp_dict_value_6);
                    Py_DECREF(tmp_dict_value_6);
                    assert(!(tmp_res != 0));
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_15 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, const_str_plain_result, tmp_assattr_name_15);
                    Py_DECREF(tmp_assattr_name_15);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 212;
                        type_description_1 = "ooo";
                        goto try_except_handler_2;
                    }
                }
                {
                    PyObject *tmp_assattr_name_16;
                    PyObject *tmp_assattr_target_16;
                    tmp_assattr_name_16 = Py_True;
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_16 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, const_str_plain_done, tmp_assattr_name_16);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 215;
                        type_description_1 = "ooo";
                        goto try_except_handler_2;
                    }
                }
                goto loop_end_1;
                branch_no_20:;
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooo";
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
                nuitka_bool tmp_condition_result_21;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_source_name_47;
                PyObject *tmp_call_result_10;
                PyObject *tmp_args_element_name_12;
                int tmp_truth_name_10;
                CHECK_OBJECT(par_self);
                tmp_source_name_47 = par_self;
                tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_source_name_47, const_str_plain_WIN_BYTE_DETECTOR);
                if (tmp_called_instance_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_byte_str);
                tmp_args_element_name_12 = par_byte_str;
                frame_45d7e35d4b09d914c521a60642e6bc45->m_frame.f_lineno = 217;
                {
                    PyObject *call_args[] = {tmp_args_element_name_12};
                    tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_search, call_args);
                }

                Py_DECREF(tmp_called_instance_8);
                if (tmp_call_result_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_10 = CHECK_IF_TRUE(tmp_call_result_10);
                if (tmp_truth_name_10 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_call_result_10);

                    exception_lineno = 217;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_21 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_call_result_10);
                if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_21;
                } else {
                    goto branch_no_21;
                }
                branch_yes_21:;
                {
                    PyObject *tmp_assattr_name_17;
                    PyObject *tmp_assattr_target_17;
                    tmp_assattr_name_17 = Py_True;
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_17 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, const_str_plain__has_win_bytes, tmp_assattr_name_17);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                }
                branch_no_21:;
            }
            branch_no_17:;
        }
        branch_end_14:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_45d7e35d4b09d914c521a60642e6bc45);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_45d7e35d4b09d914c521a60642e6bc45);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_45d7e35d4b09d914c521a60642e6bc45);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45d7e35d4b09d914c521a60642e6bc45, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_45d7e35d4b09d914c521a60642e6bc45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45d7e35d4b09d914c521a60642e6bc45, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45d7e35d4b09d914c521a60642e6bc45,
        type_description_1,
        par_self,
        par_byte_str,
        var_prober
    );


    // Release cached frame.
    if (frame_45d7e35d4b09d914c521a60642e6bc45 == cache_frame_45d7e35d4b09d914c521a60642e6bc45) {
        Py_DECREF(frame_45d7e35d4b09d914c521a60642e6bc45);
    }
    cache_frame_45d7e35d4b09d914c521a60642e6bc45 = NULL;

    assertFrameObject(frame_45d7e35d4b09d914c521a60642e6bc45);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$universaldetector$$$function_3_feed);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_byte_str);
    par_byte_str = NULL;

    Py_XDECREF(var_prober);
    var_prober = NULL;

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

    Py_XDECREF(par_byte_str);
    par_byte_str = NULL;

    Py_XDECREF(var_prober);
    var_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$universaldetector$$$function_3_feed);
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


static PyObject *impl_chardet$universaldetector$$$function_4_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_charset_name = NULL;
    PyObject *var_group_prober = NULL;
    PyObject *var_confidence = NULL;
    PyObject *var_max_prober_confidence = NULL;
    PyObject *var_max_prober = NULL;
    PyObject *var_lower_charset_name = NULL;
    PyObject *var_prober_confidence = NULL;
    PyObject *var_prober = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6cda77d8bb1b7cb24386038d6f02113a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_6cda77d8bb1b7cb24386038d6f02113a = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_6cda77d8bb1b7cb24386038d6f02113a, codeobj_6cda77d8bb1b7cb24386038d6f02113a, module_chardet$universaldetector, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_6cda77d8bb1b7cb24386038d6f02113a = cache_frame_6cda77d8bb1b7cb24386038d6f02113a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6cda77d8bb1b7cb24386038d6f02113a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6cda77d8bb1b7cb24386038d6f02113a) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_done);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 229;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_result);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_done, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__got_data);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
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
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_logger);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 234;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_debug, &PyTuple_GET_ITEM(const_tuple_str_digest_bc0b5381d1b0c55d0592ebd7222667f2_tuple, 0));

            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__input_state);
            if (tmp_compexpr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
            }

            if (tmp_mvar_value_1 == NULL) {
                Py_DECREF(tmp_compexpr_left_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
                exception_tb = NULL;

                exception_lineno = 237;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_1;
            tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_PURE_ASCII);
            if (tmp_compexpr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_1);

                exception_lineno = 237;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            Py_DECREF(tmp_compexpr_left_1);
            Py_DECREF(tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                tmp_assattr_name_2 = PyDict_Copy(const_dict_90f3771d827783d7c3f7c063b068451f);
                CHECK_OBJECT(par_self);
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_result, tmp_assattr_name_2);
                Py_DECREF(tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 238;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_source_name_7;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_2;
                CHECK_OBJECT(par_self);
                tmp_source_name_7 = par_self;
                tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__input_state);
                if (tmp_compexpr_left_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InputState);
                }

                if (tmp_mvar_value_2 == NULL) {
                    Py_DECREF(tmp_compexpr_left_2);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 18202 ], 39, 0);
                    exception_tb = NULL;

                    exception_lineno = 243;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_2;
                tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_HIGH_BYTE);
                if (tmp_compexpr_right_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_compexpr_left_2);

                    exception_lineno = 243;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
                Py_DECREF(tmp_compexpr_left_2);
                Py_DECREF(tmp_compexpr_right_2);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_1 = "ooooooooo";
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
                    PyObject *tmp_assign_source_1;
                    tmp_assign_source_1 = Py_None;
                    assert(var_prober_confidence == NULL);
                    Py_INCREF(tmp_assign_source_1);
                    var_prober_confidence = tmp_assign_source_1;
                }
                {
                    PyObject *tmp_assign_source_2;
                    tmp_assign_source_2 = const_float_0_0;
                    assert(var_max_prober_confidence == NULL);
                    Py_INCREF(tmp_assign_source_2);
                    var_max_prober_confidence = tmp_assign_source_2;
                }
                {
                    PyObject *tmp_assign_source_3;
                    tmp_assign_source_3 = Py_None;
                    assert(var_max_prober == NULL);
                    Py_INCREF(tmp_assign_source_3);
                    var_max_prober = tmp_assign_source_3;
                }
                {
                    PyObject *tmp_assign_source_4;
                    PyObject *tmp_iter_arg_1;
                    PyObject *tmp_source_name_9;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_9 = par_self;
                    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__charset_probers);
                    if (tmp_iter_arg_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 247;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
                    Py_DECREF(tmp_iter_arg_1);
                    if (tmp_assign_source_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 247;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert(tmp_for_loop_1__for_iterator == NULL);
                    tmp_for_loop_1__for_iterator = tmp_assign_source_4;
                }
                // Tried code:
                loop_start_1:;
                {
                    PyObject *tmp_next_source_1;
                    PyObject *tmp_assign_source_5;
                    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
                    tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                    tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
                    if (tmp_assign_source_5 == NULL) {
                        if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                            goto loop_end_1;
                        } else {

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            type_description_1 = "ooooooooo";
                            exception_lineno = 247;
                            goto try_except_handler_2;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_1__iter_value;
                        tmp_for_loop_1__iter_value = tmp_assign_source_5;
                        Py_XDECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_6;
                    CHECK_OBJECT(tmp_for_loop_1__iter_value);
                    tmp_assign_source_6 = tmp_for_loop_1__iter_value;
                    {
                        PyObject *old = var_prober;
                        var_prober = tmp_assign_source_6;
                        Py_INCREF(var_prober);
                        Py_XDECREF(old);
                    }

                }
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_operand_name_2;
                    CHECK_OBJECT(var_prober);
                    tmp_operand_name_2 = var_prober;
                    tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 248;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_5;
                    } else {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    goto loop_start_1;
                    branch_no_5:;
                }
                {
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_called_instance_2;
                    CHECK_OBJECT(var_prober);
                    tmp_called_instance_2 = var_prober;
                    frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 250;
                    tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_confidence);
                    if (tmp_assign_source_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 250;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_prober_confidence;
                        assert(old != NULL);
                        var_prober_confidence = tmp_assign_source_7;
                        Py_DECREF(old);
                    }

                }
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_compexpr_left_3;
                    PyObject *tmp_compexpr_right_3;
                    CHECK_OBJECT(var_prober_confidence);
                    tmp_compexpr_left_3 = var_prober_confidence;
                    if (var_max_prober_confidence == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "max_prober_confidence");
                        exception_tb = NULL;

                        exception_lineno = 251;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_compexpr_right_3 = var_max_prober_confidence;
                    tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 251;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_6;
                    } else {
                        goto branch_no_6;
                    }
                    branch_yes_6:;
                    {
                        PyObject *tmp_assign_source_8;
                        CHECK_OBJECT(var_prober_confidence);
                        tmp_assign_source_8 = var_prober_confidence;
                        {
                            PyObject *old = var_max_prober_confidence;
                            var_max_prober_confidence = tmp_assign_source_8;
                            Py_INCREF(var_max_prober_confidence);
                            Py_XDECREF(old);
                        }

                    }
                    {
                        PyObject *tmp_assign_source_9;
                        CHECK_OBJECT(var_prober);
                        tmp_assign_source_9 = var_prober;
                        {
                            PyObject *old = var_max_prober;
                            var_max_prober = tmp_assign_source_9;
                            Py_INCREF(var_max_prober);
                            Py_XDECREF(old);
                        }

                    }
                    branch_no_6:;
                }
                if (CONSIDER_THREADING() == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_1 = "ooooooooo";
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
                    nuitka_bool tmp_condition_result_7;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    int tmp_truth_name_2;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_10;
                    if (var_max_prober == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "max_prober");
                        exception_tb = NULL;

                        exception_lineno = 254;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_truth_name_2 = CHECK_IF_TRUE(var_max_prober);
                    if (tmp_truth_name_2 == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
                    if (tmp_and_left_truth_1 == 1) {
                        goto and_right_1;
                    } else {
                        goto and_left_1;
                    }
                    and_right_1:;
                    if (var_max_prober_confidence == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "max_prober_confidence");
                        exception_tb = NULL;

                        exception_lineno = 254;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_left_4 = var_max_prober_confidence;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_10 = par_self;
                    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_MINIMUM_THRESHOLD);
                    if (tmp_compexpr_right_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                    Py_DECREF(tmp_compexpr_right_4);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_7 = tmp_and_right_value_1;
                    goto and_end_1;
                    and_left_1:;
                    tmp_condition_result_7 = tmp_and_left_value_1;
                    and_end_1:;
                    if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_7;
                    } else {
                        goto branch_no_7;
                    }
                    branch_yes_7:;
                    {
                        PyObject *tmp_assign_source_10;
                        PyObject *tmp_source_name_11;
                        if (var_max_prober == NULL) {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF(exception_type);
                            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "max_prober");
                            exception_tb = NULL;

                            exception_lineno = 255;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_11 = var_max_prober;
                        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_charset_name);
                        if (tmp_assign_source_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert(var_charset_name == NULL);
                        var_charset_name = tmp_assign_source_10;
                    }
                    {
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_called_instance_3;
                        PyObject *tmp_source_name_12;
                        if (var_max_prober == NULL) {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF(exception_type);
                            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "max_prober");
                            exception_tb = NULL;

                            exception_lineno = 256;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_12 = var_max_prober;
                        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_charset_name);
                        if (tmp_called_instance_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 256;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 256;
                        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_lower);
                        Py_DECREF(tmp_called_instance_3);
                        if (tmp_assign_source_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 256;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert(var_lower_charset_name == NULL);
                        var_lower_charset_name = tmp_assign_source_11;
                    }
                    {
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_called_instance_4;
                        if (var_max_prober == NULL) {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF(exception_type);
                            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "max_prober");
                            exception_tb = NULL;

                            exception_lineno = 257;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_4 = var_max_prober;
                        frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 257;
                        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_get_confidence);
                        if (tmp_assign_source_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 257;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert(var_confidence == NULL);
                        var_confidence = tmp_assign_source_12;
                    }
                    {
                        nuitka_bool tmp_condition_result_8;
                        PyObject *tmp_called_instance_5;
                        PyObject *tmp_call_result_2;
                        int tmp_truth_name_3;
                        CHECK_OBJECT(var_lower_charset_name);
                        tmp_called_instance_5 = var_lower_charset_name;
                        frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 260;
                        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_digest_5e73c293e48712f21fb40fe58935766b_tuple, 0));

                        if (tmp_call_result_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 260;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
                        if (tmp_truth_name_3 == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_call_result_2);

                            exception_lineno = 260;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        Py_DECREF(tmp_call_result_2);
                        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_8;
                        } else {
                            goto branch_no_8;
                        }
                        branch_yes_8:;
                        {
                            nuitka_bool tmp_condition_result_9;
                            PyObject *tmp_source_name_13;
                            PyObject *tmp_attribute_value_2;
                            int tmp_truth_name_4;
                            CHECK_OBJECT(par_self);
                            tmp_source_name_13 = par_self;
                            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__has_win_bytes);
                            if (tmp_attribute_value_2 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 261;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
                            if (tmp_truth_name_4 == -1) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_attribute_value_2);

                                exception_lineno = 261;
                                type_description_1 = "ooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            Py_DECREF(tmp_attribute_value_2);
                            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                                goto branch_yes_9;
                            } else {
                                goto branch_no_9;
                            }
                            branch_yes_9:;
                            {
                                PyObject *tmp_assign_source_13;
                                PyObject *tmp_called_instance_6;
                                PyObject *tmp_source_name_14;
                                PyObject *tmp_args_element_name_1;
                                PyObject *tmp_args_element_name_2;
                                CHECK_OBJECT(par_self);
                                tmp_source_name_14 = par_self;
                                tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_ISO_WIN_MAP);
                                if (tmp_called_instance_6 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 262;
                                    type_description_1 = "ooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                CHECK_OBJECT(var_lower_charset_name);
                                tmp_args_element_name_1 = var_lower_charset_name;
                                CHECK_OBJECT(var_charset_name);
                                tmp_args_element_name_2 = var_charset_name;
                                frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 262;
                                {
                                    PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                                    tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_6, const_str_plain_get, call_args);
                                }

                                Py_DECREF(tmp_called_instance_6);
                                if (tmp_assign_source_13 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 262;
                                    type_description_1 = "ooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                {
                                    PyObject *old = var_charset_name;
                                    assert(old != NULL);
                                    var_charset_name = tmp_assign_source_13;
                                    Py_DECREF(old);
                                }

                            }
                            branch_no_9:;
                        }
                        branch_no_8:;
                    }
                    {
                        PyObject *tmp_assattr_name_3;
                        PyObject *tmp_dict_key_1;
                        PyObject *tmp_dict_value_1;
                        PyObject *tmp_dict_key_2;
                        PyObject *tmp_dict_value_2;
                        PyObject *tmp_dict_key_3;
                        PyObject *tmp_dict_value_3;
                        PyObject *tmp_source_name_15;
                        PyObject *tmp_assattr_target_3;
                        if (var_charset_name == NULL) {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF(exception_type);
                            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "charset_name");
                            exception_tb = NULL;

                            exception_lineno = 264;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_dict_value_1 = var_charset_name;
                        tmp_dict_key_1 = const_str_plain_encoding;
                        tmp_assattr_name_3 = _PyDict_NewPresized( 3 );
                        tmp_res = PyDict_SetItem(tmp_assattr_name_3, tmp_dict_key_1, tmp_dict_value_1);
                        assert(!(tmp_res != 0));
                        CHECK_OBJECT(var_confidence);
                        tmp_dict_value_2 = var_confidence;
                        tmp_dict_key_2 = const_str_plain_confidence;
                        tmp_res = PyDict_SetItem(tmp_assattr_name_3, tmp_dict_key_2, tmp_dict_value_2);
                        assert(!(tmp_res != 0));
                        if (var_max_prober == NULL) {
                            Py_DECREF(tmp_assattr_name_3);
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF(exception_type);
                            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "max_prober");
                            exception_tb = NULL;

                            exception_lineno = 266;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_15 = var_max_prober;
                        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_language);
                        if (tmp_dict_value_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_assattr_name_3);

                            exception_lineno = 266;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_dict_key_3 = const_str_plain_language;
                        tmp_res = PyDict_SetItem(tmp_assattr_name_3, tmp_dict_key_3, tmp_dict_value_3);
                        Py_DECREF(tmp_dict_value_3);
                        assert(!(tmp_res != 0));
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_3 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_result, tmp_assattr_name_3);
                        Py_DECREF(tmp_assattr_name_3);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 264;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    branch_no_7:;
                }
                branch_no_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_16 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_logger);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 269;
        tmp_compexpr_left_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_getEffectiveLevel);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_compexpr_left_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15288 ], 36, 0);
            exception_tb = NULL;

            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_3;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_DEBUG);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_5);

            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_18;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_18 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_result);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_str_plain_encoding;
            tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_compexpr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_6 = Py_None;
            tmp_condition_result_11 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_compexpr_left_6);
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_called_instance_8;
                PyObject *tmp_source_name_19;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT(par_self);
                tmp_source_name_19 = par_self;
                tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_logger);
                if (tmp_called_instance_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 271;
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_debug, &PyTuple_GET_ITEM(const_tuple_str_digest_5b44479d06839737e5032359828bd044_tuple, 0));

                Py_DECREF(tmp_called_instance_8);
                if (tmp_call_result_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 271;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_3);
            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_source_name_20;
                CHECK_OBJECT(par_self);
                tmp_source_name_20 = par_self;
                tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain__charset_probers);
                if (tmp_iter_arg_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_2);
                Py_DECREF(tmp_iter_arg_2);
                if (tmp_assign_source_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(tmp_for_loop_2__for_iterator == NULL);
                tmp_for_loop_2__for_iterator = tmp_assign_source_14;
            }
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT(tmp_for_loop_2__for_iterator);
                tmp_next_source_2 = tmp_for_loop_2__for_iterator;
                tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
                if (tmp_assign_source_15 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_2;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_1 = "ooooooooo";
                        exception_lineno = 272;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_2__iter_value;
                    tmp_for_loop_2__iter_value = tmp_assign_source_15;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_16;
                CHECK_OBJECT(tmp_for_loop_2__iter_value);
                tmp_assign_source_16 = tmp_for_loop_2__iter_value;
                {
                    PyObject *old = var_group_prober;
                    var_group_prober = tmp_assign_source_16;
                    Py_INCREF(var_group_prober);
                    Py_XDECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_operand_name_3;
                CHECK_OBJECT(var_group_prober);
                tmp_operand_name_3 = var_group_prober;
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 273;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_3;
                }
                tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_12;
                } else {
                    goto branch_no_12;
                }
                branch_yes_12:;
                goto loop_start_2;
                branch_no_12:;
            }
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_isinstance_inst_1;
                PyObject *tmp_isinstance_cls_1;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT(var_group_prober);
                tmp_isinstance_inst_1 = var_group_prober;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber);

                if (unlikely(tmp_mvar_value_4 == NULL)) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber);
                }

                if (tmp_mvar_value_4 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15200 ], 47, 0);
                    exception_tb = NULL;

                    exception_lineno = 275;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_3;
                }

                tmp_isinstance_cls_1 = tmp_mvar_value_4;
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 275;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_3;
                }
                tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_13;
                } else {
                    goto branch_no_13;
                }
                branch_yes_13:;
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_iter_arg_3;
                    PyObject *tmp_source_name_21;
                    CHECK_OBJECT(var_group_prober);
                    tmp_source_name_21 = var_group_prober;
                    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_probers);
                    if (tmp_iter_arg_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_3);
                    Py_DECREF(tmp_iter_arg_3);
                    if (tmp_assign_source_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    {
                        PyObject *old = tmp_for_loop_3__for_iterator;
                        tmp_for_loop_3__for_iterator = tmp_assign_source_17;
                        Py_XDECREF(old);
                    }

                }
                // Tried code:
                loop_start_3:;
                {
                    PyObject *tmp_next_source_3;
                    PyObject *tmp_assign_source_18;
                    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
                    tmp_next_source_3 = tmp_for_loop_3__for_iterator;
                    tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
                    if (tmp_assign_source_18 == NULL) {
                        if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                            goto loop_end_3;
                        } else {

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            type_description_1 = "ooooooooo";
                            exception_lineno = 276;
                            goto try_except_handler_4;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_3__iter_value;
                        tmp_for_loop_3__iter_value = tmp_assign_source_18;
                        Py_XDECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_19;
                    CHECK_OBJECT(tmp_for_loop_3__iter_value);
                    tmp_assign_source_19 = tmp_for_loop_3__iter_value;
                    {
                        PyObject *old = var_prober;
                        var_prober = tmp_assign_source_19;
                        Py_INCREF(var_prober);
                        Py_XDECREF(old);
                    }

                }
                {
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_22;
                    PyObject *tmp_source_name_23;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_source_name_24;
                    PyObject *tmp_args_element_name_5;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_called_instance_9;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_23 = par_self;
                    tmp_source_name_22 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_logger);
                    if (tmp_source_name_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_4;
                    }
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_debug);
                    Py_DECREF(tmp_source_name_22);
                    if (tmp_called_name_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_4;
                    }
                    tmp_args_element_name_3 = const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
                    CHECK_OBJECT(var_prober);
                    tmp_source_name_24 = var_prober;
                    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_charset_name);
                    if (tmp_args_element_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_1);

                        exception_lineno = 278;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_4;
                    }
                    CHECK_OBJECT(var_prober);
                    tmp_source_name_25 = var_prober;
                    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_language);
                    if (tmp_args_element_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_1);
                        Py_DECREF(tmp_args_element_name_4);

                        exception_lineno = 279;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_4;
                    }
                    CHECK_OBJECT(var_prober);
                    tmp_called_instance_9 = var_prober;
                    frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 280;
                    tmp_args_element_name_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_get_confidence);
                    if (tmp_args_element_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_1);
                        Py_DECREF(tmp_args_element_name_4);
                        Py_DECREF(tmp_args_element_name_5);

                        exception_lineno = 280;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_4;
                    }
                    frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 277;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
                        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_1, call_args);
                    }

                    Py_DECREF(tmp_called_name_1);
                    Py_DECREF(tmp_args_element_name_4);
                    Py_DECREF(tmp_args_element_name_5);
                    Py_DECREF(tmp_args_element_name_6);
                    if (tmp_call_result_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_4;
                    }
                    Py_DECREF(tmp_call_result_4);
                }
                if (CONSIDER_THREADING() == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 276;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_4;
                }
                goto loop_start_3;
                loop_end_3:;
                goto try_end_2;
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

                Py_XDECREF(tmp_for_loop_3__iter_value);
                tmp_for_loop_3__iter_value = NULL;

                CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
                Py_DECREF(tmp_for_loop_3__for_iterator);
                tmp_for_loop_3__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto try_except_handler_3;
                // End of try:
                try_end_2:;
                Py_XDECREF(tmp_for_loop_3__iter_value);
                tmp_for_loop_3__iter_value = NULL;

                CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
                Py_DECREF(tmp_for_loop_3__for_iterator);
                tmp_for_loop_3__for_iterator = NULL;

                goto branch_end_13;
                branch_no_13:;
                {
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_26;
                    PyObject *tmp_source_name_27;
                    PyObject *tmp_call_result_5;
                    PyObject *tmp_args_element_name_7;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_source_name_28;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_source_name_29;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_called_instance_10;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_27 = par_self;
                    tmp_source_name_26 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_logger);
                    if (tmp_source_name_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_debug);
                    Py_DECREF(tmp_source_name_26);
                    if (tmp_called_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    tmp_args_element_name_7 = const_str_digest_7968dd16dec2718c1a9fe1c9e01a09a5;
                    if (var_prober == NULL) {
                        Py_DECREF(tmp_called_name_2);
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "prober");
                        exception_tb = NULL;

                        exception_lineno = 283;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }

                    tmp_source_name_28 = var_prober;
                    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_charset_name);
                    if (tmp_args_element_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);

                        exception_lineno = 283;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    if (var_prober == NULL) {
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_args_element_name_8);
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "prober");
                        exception_tb = NULL;

                        exception_lineno = 284;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }

                    tmp_source_name_29 = var_prober;
                    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_language);
                    if (tmp_args_element_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_args_element_name_8);

                        exception_lineno = 284;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    if (var_prober == NULL) {
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_args_element_name_8);
                        Py_DECREF(tmp_args_element_name_9);
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "prober");
                        exception_tb = NULL;

                        exception_lineno = 285;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }

                    tmp_called_instance_10 = var_prober;
                    frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 285;
                    tmp_args_element_name_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_get_confidence);
                    if (tmp_args_element_name_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_args_element_name_8);
                        Py_DECREF(tmp_args_element_name_9);

                        exception_lineno = 285;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame.f_lineno = 282;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
                        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
                    }

                    Py_DECREF(tmp_called_name_2);
                    Py_DECREF(tmp_args_element_name_8);
                    Py_DECREF(tmp_args_element_name_9);
                    Py_DECREF(tmp_args_element_name_10);
                    if (tmp_call_result_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_3;
                    }
                    Py_DECREF(tmp_call_result_5);
                }
                branch_end_13:;
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            goto loop_start_2;
            loop_end_2:;
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

            Py_XDECREF(tmp_for_loop_2__iter_value);
            tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
            Py_DECREF(tmp_for_loop_2__for_iterator);
            tmp_for_loop_2__for_iterator = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_3:;
            Py_XDECREF(tmp_for_loop_2__iter_value);
            tmp_for_loop_2__iter_value = NULL;

            CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
            Py_DECREF(tmp_for_loop_2__for_iterator);
            tmp_for_loop_2__for_iterator = NULL;

            branch_no_11:;
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_source_name_30;
        CHECK_OBJECT(par_self);
        tmp_source_name_30 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_result);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6cda77d8bb1b7cb24386038d6f02113a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6cda77d8bb1b7cb24386038d6f02113a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6cda77d8bb1b7cb24386038d6f02113a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6cda77d8bb1b7cb24386038d6f02113a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6cda77d8bb1b7cb24386038d6f02113a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cda77d8bb1b7cb24386038d6f02113a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6cda77d8bb1b7cb24386038d6f02113a,
        type_description_1,
        par_self,
        var_charset_name,
        var_group_prober,
        var_confidence,
        var_max_prober_confidence,
        var_max_prober,
        var_lower_charset_name,
        var_prober_confidence,
        var_prober
    );


    // Release cached frame.
    if (frame_6cda77d8bb1b7cb24386038d6f02113a == cache_frame_6cda77d8bb1b7cb24386038d6f02113a) {
        Py_DECREF(frame_6cda77d8bb1b7cb24386038d6f02113a);
    }
    cache_frame_6cda77d8bb1b7cb24386038d6f02113a = NULL;

    assertFrameObject(frame_6cda77d8bb1b7cb24386038d6f02113a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$universaldetector$$$function_4_close);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_charset_name);
    var_charset_name = NULL;

    Py_XDECREF(var_group_prober);
    var_group_prober = NULL;

    Py_XDECREF(var_confidence);
    var_confidence = NULL;

    Py_XDECREF(var_max_prober_confidence);
    var_max_prober_confidence = NULL;

    Py_XDECREF(var_max_prober);
    var_max_prober = NULL;

    Py_XDECREF(var_lower_charset_name);
    var_lower_charset_name = NULL;

    Py_XDECREF(var_prober_confidence);
    var_prober_confidence = NULL;

    Py_XDECREF(var_prober);
    var_prober = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_charset_name);
    var_charset_name = NULL;

    Py_XDECREF(var_group_prober);
    var_group_prober = NULL;

    Py_XDECREF(var_confidence);
    var_confidence = NULL;

    Py_XDECREF(var_max_prober_confidence);
    var_max_prober_confidence = NULL;

    Py_XDECREF(var_max_prober);
    var_max_prober = NULL;

    Py_XDECREF(var_lower_charset_name);
    var_lower_charset_name = NULL;

    Py_XDECREF(var_prober_confidence);
    var_prober_confidence = NULL;

    Py_XDECREF(var_prober);
    var_prober = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$universaldetector$$$function_4_close);
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



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29f3796e315def737044ad6f960e1543,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$universaldetector,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_2_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_43022c6b9b314f6d26f22e764d70c6e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$universaldetector,
        const_str_digest_53766747036085ecfb5d3ad939a250bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_3_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_3_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45d7e35d4b09d914c521a60642e6bc45,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$universaldetector,
        const_str_digest_f3b9cbc02c93f59ab2e2fd1bba7bfc42,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$universaldetector$$$function_4_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$universaldetector$$$function_4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6cda77d8bb1b7cb24386038d6f02113a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$universaldetector,
        const_str_digest_8faecd24d45b0f8564cecb06b07f272b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$universaldetector =
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

function_impl_code functable_chardet$universaldetector[] = {
    impl_chardet$universaldetector$$$function_1___init__,
    impl_chardet$universaldetector$$$function_2_reset,
    impl_chardet$universaldetector$$$function_3_feed,
    impl_chardet$universaldetector$$$function_4_close,
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

    function_impl_code *current = functable_chardet$universaldetector;
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

    if (offset > sizeof(functable_chardet$universaldetector) || offset < 0) {
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
        functable_chardet$universaldetector[offset],
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
        module_chardet$universaldetector,
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
PyObject *modulecode_chardet$universaldetector(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$universaldetector;
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
    PRINT_STRING("chardet.universaldetector: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.universaldetector: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.universaldetector: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$universaldetector\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$universaldetector = Py_InitModule4(
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
    mdef_chardet$universaldetector.m_name = module_full_name;
    module_chardet$universaldetector = PyModule_Create(&mdef_chardet$universaldetector);
#endif

    moduledict_chardet$universaldetector = MODULE_DICT(module_chardet$universaldetector);

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
        moduledict_chardet$universaldetector,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$universaldetector,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$universaldetector,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$universaldetector,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$universaldetector,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$universaldetector);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$universaldetector);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_7a17d05661876eb1a568ec2324051756;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_chardet$universaldetector_51 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_0c8ab7f6762d913809559f424b1423ed_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0c8ab7f6762d913809559f424b1423ed_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_8cd41f9549dd4710d5b9a25284345bff;
        UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_7a17d05661876eb1a568ec2324051756 = MAKE_MODULE_FRAME(codeobj_7a17d05661876eb1a568ec2324051756, module_chardet$universaldetector);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7a17d05661876eb1a568ec2324051756);
    assert(Py_REFCNT(frame_7a17d05661876eb1a568ec2324051756) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_codecs;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 39;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_codecs, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 40;
        tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_re;
        tmp_globals_name_3 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 41;
        tmp_assign_source_5 = IMPORT_MODULE4(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_1;
        tmp_name_name_4 = const_str_plain_charsetgroupprober;
        tmp_globals_name_4 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_CharSetGroupProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 43;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_CharSetGroupProber);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_CharSetGroupProber, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_2;
        tmp_name_name_5 = const_str_plain_enums;
        tmp_globals_name_5 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_c3066f15ca08cc60576c2f0a59851114_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 44;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_InputState);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_InputState, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_LanguageFilter);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_LanguageFilter, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_ProbingState);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_3;
        tmp_name_name_6 = const_str_plain_escprober;
        tmp_globals_name_6 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_EscCharSetProber_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 45;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_EscCharSetProber);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_EscCharSetProber, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_4;
        tmp_name_name_7 = const_str_plain_latin1prober;
        tmp_globals_name_7 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_Latin1Prober_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 46;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_Latin1Prober);
        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_Latin1Prober, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_5;
        tmp_name_name_8 = const_str_plain_mbcsgroupprober;
        tmp_globals_name_8 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_MBCSGroupProber_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 47;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_MBCSGroupProber);
        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_MBCSGroupProber, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_6;
        tmp_name_name_9 = const_str_plain_sbcsgroupprober;
        tmp_globals_name_9 = (PyObject *)moduledict_chardet$universaldetector;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_SBCSGroupProber_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 48;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_SBCSGroupProber);
        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_SBCSGroupProber, tmp_assign_source_14);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_chardet$universaldetector_51 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_94822410052685fe3f09d986d30eb776;
        tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_str_digest_f412f555784f387d309a8e308f5adcf2;
        tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_float_0_2;
        tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_MINIMUM_THRESHOLD, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_0c8ab7f6762d913809559f424b1423ed_2, codeobj_0c8ab7f6762d913809559f424b1423ed, module_chardet$universaldetector, 0);
        frame_0c8ab7f6762d913809559f424b1423ed_2 = cache_frame_0c8ab7f6762d913809559f424b1423ed_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0c8ab7f6762d913809559f424b1423ed_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0c8ab7f6762d913809559f424b1423ed_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
                exception_tb = NULL;

                exception_lineno = 69;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_0c8ab7f6762d913809559f424b1423ed_2->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_str_digest_6e041e68342160b5c52f96a387a10185_tuple, 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_HIGH_BYTE_DETECTOR, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
                exception_tb = NULL;

                exception_lineno = 70;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            frame_0c8ab7f6762d913809559f424b1423ed_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_str_digest_2d986ab47ee68c55dab8ab4deac33e8d_tuple, 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_ESC_DETECTOR, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_re);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
                exception_tb = NULL;

                exception_lineno = 71;

                goto frame_exception_exit_2;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            frame_0c8ab7f6762d913809559f424b1423ed_2->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_str_digest_414f3eb53ddda005f535853eee9ea763_tuple, 0));

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_WIN_BYTE_DETECTOR, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = PyDict_Copy(const_dict_a6e4a40c040c4fb964d98e1bfa97ab44);
        tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_ISO_WIN_MAP, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_LanguageFilter);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LanguageFilter);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15668 ], 36, 0);
                exception_tb = NULL;

                exception_lineno = 81;

                goto frame_exception_exit_2;
            }

            tmp_source_name_1 = tmp_mvar_value_4;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_ALL);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
            tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c8ab7f6762d913809559f424b1423ed_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0c8ab7f6762d913809559f424b1423ed_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0c8ab7f6762d913809559f424b1423ed_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_0c8ab7f6762d913809559f424b1423ed_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0c8ab7f6762d913809559f424b1423ed_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0c8ab7f6762d913809559f424b1423ed_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_0c8ab7f6762d913809559f424b1423ed_2 == cache_frame_0c8ab7f6762d913809559f424b1423ed_2) {
            Py_DECREF(frame_0c8ab7f6762d913809559f424b1423ed_2);
        }
        cache_frame_0c8ab7f6762d913809559f424b1423ed_2 = NULL;

        assertFrameObject(frame_0c8ab7f6762d913809559f424b1423ed_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_2_reset();



        tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_reset, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_3_feed();



        tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_chardet$universaldetector$$$function_4_close();



        tmp_res = PyDict_SetItem(locals_chardet$universaldetector_51, const_str_plain_close, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_15 = locals_chardet$universaldetector_51;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$universaldetector);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_chardet$universaldetector_51);
        locals_chardet$universaldetector_51 = NULL;
        goto outline_result_1;
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

        Py_DECREF(locals_chardet$universaldetector_51);
        locals_chardet$universaldetector_51 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(chardet$universaldetector);
        return NULL;
        outline_exception_1:;
        exception_lineno = 51;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 51;

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
        tmp_assign_source_16 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_16);
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_UniversalDetector;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_7a17d05661876eb1a568ec2324051756->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_17;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a17d05661876eb1a568ec2324051756);
#endif
    popFrameStack();

    assertFrameObject(frame_7a17d05661876eb1a568ec2324051756);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a17d05661876eb1a568ec2324051756);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_7a17d05661876eb1a568ec2324051756, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_7a17d05661876eb1a568ec2324051756->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a17d05661876eb1a568ec2324051756, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_18 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_chardet$universaldetector, (Nuitka_StringObject *)const_str_plain_UniversalDetector, tmp_assign_source_18);
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


    return module_chardet$universaldetector;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
