/* Generated code for Python module 'future.backports.email.feedparser'
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

/* The "_module_future$backports$email$feedparser" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports$email$feedparser;
PyDictObject *moduledict_future$backports$email$feedparser;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_NLCRE;
static PyObject *const_str_plain_lastheader;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_pop_eof_matcher;
extern PyObject *const_str_digest_d19bf663764a0b15d5e8f7167c910e4e;
extern PyObject *const_str_plain_data;
static PyObject *const_unicode_digest_2a4166ae9c1aecb6ccd54cd44c9541c1;
extern PyObject *const_str_plain__3to2kwargs;
static PyObject *const_unicode_digest_94a6fb965dc63390e74933b678a919b9;
static PyObject *const_str_plain_unreadline;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_unicode_digest_2b01170a2a5878eae971ee3f21506a0d;
static PyObject *const_unicode_digest_76b800da635a7236c5d83506a46bb351;
extern PyObject *const_str_plain_defects;
static PyObject *const_str_plain__parsegen;
extern PyObject *const_str_plain_decode;
extern PyObject *const_unicode_plain_7bit;
extern PyObject *const_str_plain_set_raw;
static PyObject *const_tuple_2812520b3f65d5622946c17235282e56_tuple;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_handle_defect;
extern PyObject *const_str_digest_7e109766ab1e32461f927f5e9be0abb8;
extern PyObject *const_str_plain_mo;
static PyObject *const_unicode_digest_a734fd6e3f7b52d0236d26d5d873c2c8;
extern PyObject *const_list_unicode_empty_list;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_StartBoundaryNotFoundDefect;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_lines;
extern PyObject *const_str_plain_policy;
static PyObject *const_str_plain_NLCRE_eol;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain__closed;
extern PyObject *const_str_plain_next;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_endswith;
static PyObject *const_tuple_91d41a6ab7ab30629270f4a6443baff0_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain__input;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get_content_maintype;
extern PyObject *const_tuple_str_plain_message_tuple;
static PyObject *const_tuple_unicode_digest_f979006d0ca80950b2dd70334ea6d537_tuple;
static PyObject *const_tuple_unicode_chr_13_tuple;
extern PyObject *const_str_plain_NoBoundaryInMultipartDefect;
static PyObject *const_str_plain__cur;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_readline;
static PyObject *const_list_unicode_plain_FeedParser_unicode_plain_BytesFeedParser_list;
extern PyObject *const_str_plain_search;
static PyObject *const_tuple_int_neg_2_tuple;
extern PyObject *const_str_digest_6c161183deefbb0f435d9ec5f5f973fd;
static PyObject *const_str_digest_157c2977c5dd9e1044de092914745734;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_range;
static PyObject *const_str_plain_BufferedSubFile;
extern PyObject *const_str_plain___iter__;
extern PyObject *const_unicode_newline;
static PyObject *const_str_plain_lastvalue;
extern PyObject *const_str_plain_is_multipart;
static PyObject *const_tuple_unicode_digest_03c171283d3fac4e31314b6cf09334dc_tuple;
extern PyObject *const_str_plain_find;
extern PyObject *const_int_neg_2;
extern PyObject *const_int_neg_1;
static PyObject *const_unicode_plain_FeedParser;
extern PyObject *const_unicode_digest_27dec979a0c41f0b5c5b7327893dc23e;
extern PyObject *const_unicode_digest_ac02ab0238280e341b2aff0eed15b128;
extern PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
static PyObject *const_str_plain_pred;
extern PyObject *const_str_plain___next__;
extern PyObject *const_str_plain_preamble;
static PyObject *const_str_plain_NeedMoreData;
static PyObject *const_list_empty;
extern PyObject *const_unicode_plain_surrogateescape;
static PyObject *const_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_60484a97d7d25f34d7738ab28c8fbc4c_tuple;
static PyObject *const_str_plain__msgstack;
static PyObject *const_tuple_unicode_digest_e898a9aba32eafe76ad23a611c278acf_tuple;
extern PyObject *const_str_plain_message;
static PyObject *const_str_plain_NLCRE_bol;
extern PyObject *const_str_plain__parse;
static PyObject *const_tuple_unicode_digest_2b01170a2a5878eae971ee3f21506a0d_tuple;
static PyObject *const_str_plain_retval;
static PyObject *const_tuple_str_plain_self_str_plain_retval_tuple;
extern PyObject *const_str_plain_attach;
extern PyObject *const_str_plain_parts;
extern PyObject *const_str_plain_CloseBoundaryNotFoundDefect;
extern PyObject *const_str_plain___file__;
static PyObject *const_unicode_digest_03c171283d3fac4e31314b6cf09334dc;
extern PyObject *const_str_plain_errors;
static PyObject *const_str_plain__partial;
extern PyObject *const_unicode_plain_ascii;
extern PyObject *const_str_plain_feed;
static PyObject *const_unicode_plain_binary;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_MisplacedEnvelopeHeaderDefect;
static PyObject *const_str_plain__factory_kwds;
static PyObject *const_tuple_str_plain_implements_iterator_str_plain_PY3_tuple;
extern PyObject *const_tuple_unicode_plain_ascii_unicode_plain_surrogateescape_tuple;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
static PyObject *const_tuple_str_plain_self_str_plain_lines_tuple;
static PyObject *const_unicode_digest_100dbc3844eca9c938e15b8da45d07c2;
extern PyObject *const_str_plain_lower;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_group;
static PyObject *const_str_plain_pushlines;
static PyObject *const_tuple_unicode_plain_end_tuple;
static PyObject *const_str_plain__pop_message;
static PyObject *const_unicode_digest_26363b470642ab3fd01ca166046f97e7;
extern PyObject *const_str_plain_compat32;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_epilogue;
static PyObject *const_tuple_41d7e123c39e123fd36bf032e1155028_tuple;
static PyObject *const_unicode_plain_end;
extern PyObject *const_str_plain_set_unixfrom;
static PyObject *const_tuple_str_plain_object_str_plain_range_str_plain_super_tuple;
extern PyObject *const_str_plain_EMPTYSTRING;
static PyObject *const_tuple_unicode_plain_7bit_unicode_plain_8bit_unicode_plain_binary_tuple;
static PyObject *const_tuple_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_unicode_empty_list_empty_tuple;
static PyObject *const_unicode_digest_d63611ec5de105552513988ad2cba874;
static PyObject *const_str_plain__headersonly;
extern PyObject *const_tuple_str_plain_compat32_tuple;
extern PyObject *const_unicode_plain_8bit;
static PyObject *const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple;
extern PyObject *const_str_plain_enumerate;
static PyObject *const_str_plain__new_message;
extern PyObject *const_str_plain_join;
extern PyObject *const_unicode_plain_multipart;
extern PyObject *const_str_plain_str;
static PyObject *const_tuple_str_plain_self_str_plain_line_str_plain_ateof_tuple;
static PyObject *const_unicode_digest_e898a9aba32eafe76ad23a611c278acf;
static PyObject *const_str_plain__last;
extern PyObject *const_str_plain___module__;
extern PyObject *const_unicode_empty;
extern PyObject *const_str_plain_lineno;
static PyObject *const_str_digest_e0abb43ba4fe8c6c3e27283ec2bf0fe1;
static PyObject *const_str_plain__factory;
extern PyObject *const_str_plain_super;
extern PyObject *const_str_plain_FeedParser;
static PyObject *const_unicode_plain_BytesFeedParser;
extern PyObject *const_unicode_chr_13;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_unicode_digest_37d83ecc8b0c51756795757fc1fef3af;
extern PyObject *const_str_plain_MultipartInvariantViolationDefect;
extern PyObject *const_str_plain_append;
static PyObject *const_unicode_digest_424976f5685a960d92d1d2e0d5b026a4;
static PyObject *const_unicode_digest_404b4784c64041dba026fb837ba72ede;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_NL;
extern PyObject *const_str_plain__payload;
extern PyObject *const_tuple_unicode_chr_58_tuple;
extern PyObject *const_str_plain_line;
static PyObject *const_unicode_digest_9a1ab11b6c4fec034ed7b39074171b81;
extern PyObject *const_str_plain_Message;
extern PyObject *const_str_plain_implements_iterator;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_unicode_plain_message;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
static PyObject *const_str_plain__eofstack;
static PyObject *const_str_plain__parse_headers;
static PyObject *const_str_plain_ateof;
extern PyObject *const_str_plain_escape;
extern PyObject *const_str_plain_MissingHeaderBodySeparatorDefect;
extern PyObject *const_str_plain_set_payload;
extern PyObject *const_str_plain_get_content_type;
extern PyObject *const_unicode_plain_policy;
extern PyObject *const_str_plain_set_default_type;
extern PyObject *const_str_plain_False;
extern PyObject *const_unicode_digest_85fe97af08c9a213aa891dc673aeaa3e;
extern PyObject *const_unicode_chr_58;
extern PyObject *const_str_plain_FirstHeaderLineIsContinuationDefect;
static PyObject *const_tuple_unicode_digest_100dbc3844eca9c938e15b8da45d07c2_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_unicode_plain_linesep;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_self_str_plain_pred_tuple;
extern PyObject *const_str_plain_defect;
static PyObject *const_str_plain_headerRE;
extern PyObject *const_tuple_str_plain_errors_tuple;
extern PyObject *const_str_plain__lines;
extern PyObject *const_str_plain_BytesFeedParser;
static PyObject *const_tuple_unicode_digest_94a6fb965dc63390e74933b678a919b9_tuple;
extern PyObject *const_str_plain_get_boundary;
static PyObject *const_str_plain_push_eof_matcher;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_push;
extern PyObject *const_str_digest_2299443fb3beca30307fd2ff4eeefb8e;
static PyObject *const_tuple_unicode_plain_linesep_tuple;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain__call_parse;
static PyObject *const_unicode_digest_9b0f6f2e8e8ab076d8bccb1679ab9857;
extern PyObject *const_tuple_str_plain_self_str_plain_line_tuple;
extern PyObject *const_str_plain_root;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_header_source_parse;
static PyObject *const_unicode_digest_f979006d0ca80950b2dd70334ea6d537;
extern PyObject *const_str_plain__set_headersonly;
static PyObject *const_tuple_str_plain_self_str_plain_root_str_plain_defect_tuple;
static PyObject *const_unicode_digest_4d5337f503be7b86d9f2d784e260f4d4;
static PyObject *const_str_plain_NLCRE_crack;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_NLCRE = UNSTREAM_STRING(&constant_bin[ 44640 ], 5, 1);
    const_str_plain_lastheader = UNSTREAM_STRING(&constant_bin[ 679986 ], 10, 1);
    const_str_plain_pop_eof_matcher = UNSTREAM_STRING(&constant_bin[ 679996 ], 15, 1);
    const_unicode_digest_2a4166ae9c1aecb6ccd54cd44c9541c1 = UNSTREAM_UNICODE(&constant_bin[ 680011 ], 31);
    const_unicode_digest_94a6fb965dc63390e74933b678a919b9 = UNSTREAM_UNICODE(&constant_bin[ 680042 ], 10);
    const_str_plain_unreadline = UNSTREAM_STRING(&constant_bin[ 680052 ], 10, 1);
    const_unicode_digest_2b01170a2a5878eae971ee3f21506a0d = UNSTREAM_UNICODE(&constant_bin[ 680062 ], 14);
    const_unicode_digest_76b800da635a7236c5d83506a46bb351 = UNSTREAM_UNICODE(&constant_bin[ 680076 ], 52);
    const_str_plain__parsegen = UNSTREAM_STRING(&constant_bin[ 680128 ], 9, 1);
    const_tuple_2812520b3f65d5622946c17235282e56_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 680137 ], 276);
    const_unicode_digest_a734fd6e3f7b52d0236d26d5d873c2c8 = UNSTREAM_UNICODE(&constant_bin[ 680413 ], 775);
    const_str_plain_NLCRE_eol = UNSTREAM_STRING(&constant_bin[ 44832 ], 9, 1);
    const_tuple_91d41a6ab7ab30629270f4a6443baff0_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_91d41a6ab7ab30629270f4a6443baff0_tuple, 0, const_unicode_digest_27dec979a0c41f0b5c5b7327893dc23e); Py_INCREF(const_unicode_digest_27dec979a0c41f0b5c5b7327893dc23e);
    PyTuple_SET_ITEM(const_tuple_91d41a6ab7ab30629270f4a6443baff0_tuple, 1, const_unicode_plain_8bit); Py_INCREF(const_unicode_plain_8bit);
    const_str_plain__input = UNSTREAM_STRING(&constant_bin[ 566378 ], 6, 1);
    const_tuple_unicode_digest_f979006d0ca80950b2dd70334ea6d537_tuple = PyTuple_New(1);
    const_unicode_digest_f979006d0ca80950b2dd70334ea6d537 = UNSTREAM_UNICODE(&constant_bin[ 681188 ], 51);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_f979006d0ca80950b2dd70334ea6d537_tuple, 0, const_unicode_digest_f979006d0ca80950b2dd70334ea6d537); Py_INCREF(const_unicode_digest_f979006d0ca80950b2dd70334ea6d537);
    const_tuple_unicode_chr_13_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_chr_13_tuple, 0, const_unicode_chr_13); Py_INCREF(const_unicode_chr_13);
    const_str_plain__cur = UNSTREAM_STRING(&constant_bin[ 19 ], 4, 1);
    const_list_unicode_plain_FeedParser_unicode_plain_BytesFeedParser_list = PyList_New(2);
    const_unicode_plain_FeedParser = UNSTREAM_UNICODE(&constant_bin[ 44930 ], 10);
    PyList_SET_ITEM(const_list_unicode_plain_FeedParser_unicode_plain_BytesFeedParser_list, 0, const_unicode_plain_FeedParser); Py_INCREF(const_unicode_plain_FeedParser);
    const_unicode_plain_BytesFeedParser = UNSTREAM_UNICODE(&constant_bin[ 681239 ], 15);
    PyList_SET_ITEM(const_list_unicode_plain_FeedParser_unicode_plain_BytesFeedParser_list, 1, const_unicode_plain_BytesFeedParser); Py_INCREF(const_unicode_plain_BytesFeedParser);
    const_tuple_int_neg_2_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_neg_2_tuple, 0, const_int_neg_2); Py_INCREF(const_int_neg_2);
    const_str_digest_157c2977c5dd9e1044de092914745734 = UNSTREAM_STRING(&constant_bin[ 681254 ], 36, 0);
    const_str_plain_BufferedSubFile = UNSTREAM_STRING(&constant_bin[ 44717 ], 15, 1);
    const_str_plain_lastvalue = UNSTREAM_STRING(&constant_bin[ 681290 ], 9, 1);
    const_tuple_unicode_digest_03c171283d3fac4e31314b6cf09334dc_tuple = PyTuple_New(1);
    const_unicode_digest_03c171283d3fac4e31314b6cf09334dc = UNSTREAM_UNICODE(&constant_bin[ 680042 ], 8);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_03c171283d3fac4e31314b6cf09334dc_tuple, 0, const_unicode_digest_03c171283d3fac4e31314b6cf09334dc); Py_INCREF(const_unicode_digest_03c171283d3fac4e31314b6cf09334dc);
    const_str_plain_pred = UNSTREAM_STRING(&constant_bin[ 110692 ], 4, 1);
    const_str_plain_NeedMoreData = UNSTREAM_STRING(&constant_bin[ 44599 ], 12, 1);
    const_list_empty = PyList_New(0);
    const_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99 = UNSTREAM_UNICODE(&constant_bin[ 680043 ], 6);
    const_tuple_60484a97d7d25f34d7738ab28c8fbc4c_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_60484a97d7d25f34d7738ab28c8fbc4c_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain__factory = UNSTREAM_STRING(&constant_bin[ 681299 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_60484a97d7d25f34d7738ab28c8fbc4c_tuple, 1, const_str_plain__factory); Py_INCREF(const_str_plain__factory);
    PyTuple_SET_ITEM(const_tuple_60484a97d7d25f34d7738ab28c8fbc4c_tuple, 2, const_str_plain__3to2kwargs); Py_INCREF(const_str_plain__3to2kwargs);
    PyTuple_SET_ITEM(const_tuple_60484a97d7d25f34d7738ab28c8fbc4c_tuple, 3, const_str_plain_policy); Py_INCREF(const_str_plain_policy);
    const_str_plain__msgstack = UNSTREAM_STRING(&constant_bin[ 681307 ], 9, 1);
    const_tuple_unicode_digest_e898a9aba32eafe76ad23a611c278acf_tuple = PyTuple_New(1);
    const_unicode_digest_e898a9aba32eafe76ad23a611c278acf = UNSTREAM_UNICODE(&constant_bin[ 681316 ], 40);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_e898a9aba32eafe76ad23a611c278acf_tuple, 0, const_unicode_digest_e898a9aba32eafe76ad23a611c278acf); Py_INCREF(const_unicode_digest_e898a9aba32eafe76ad23a611c278acf);
    const_str_plain_NLCRE_bol = UNSTREAM_STRING(&constant_bin[ 44870 ], 9, 1);
    const_tuple_unicode_digest_2b01170a2a5878eae971ee3f21506a0d_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_2b01170a2a5878eae971ee3f21506a0d_tuple, 0, const_unicode_digest_2b01170a2a5878eae971ee3f21506a0d); Py_INCREF(const_unicode_digest_2b01170a2a5878eae971ee3f21506a0d);
    const_str_plain_retval = UNSTREAM_STRING(&constant_bin[ 680407 ], 6, 1);
    const_tuple_str_plain_self_str_plain_retval_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_retval_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_retval_tuple, 1, const_str_plain_retval); Py_INCREF(const_str_plain_retval);
    const_str_plain__partial = UNSTREAM_STRING(&constant_bin[ 595402 ], 8, 1);
    const_unicode_plain_binary = UNSTREAM_UNICODE(&constant_bin[ 432 ], 6);
    const_str_plain__factory_kwds = UNSTREAM_STRING(&constant_bin[ 681356 ], 13, 1);
    const_tuple_str_plain_implements_iterator_str_plain_PY3_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_implements_iterator_str_plain_PY3_tuple, 0, const_str_plain_implements_iterator); Py_INCREF(const_str_plain_implements_iterator);
    PyTuple_SET_ITEM(const_tuple_str_plain_implements_iterator_str_plain_PY3_tuple, 1, const_str_plain_PY3); Py_INCREF(const_str_plain_PY3);
    const_tuple_str_plain_self_str_plain_lines_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_lines_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_lines_tuple, 1, const_str_plain_lines); Py_INCREF(const_str_plain_lines);
    const_unicode_digest_100dbc3844eca9c938e15b8da45d07c2 = UNSTREAM_UNICODE(&constant_bin[ 681318 ], 5);
    const_str_plain_pushlines = UNSTREAM_STRING(&constant_bin[ 681369 ], 9, 1);
    const_tuple_unicode_plain_end_tuple = PyTuple_New(1);
    const_unicode_plain_end = UNSTREAM_UNICODE(&constant_bin[ 2668 ], 3);
    PyTuple_SET_ITEM(const_tuple_unicode_plain_end_tuple, 0, const_unicode_plain_end); Py_INCREF(const_unicode_plain_end);
    const_str_plain__pop_message = UNSTREAM_STRING(&constant_bin[ 681378 ], 12, 1);
    const_unicode_digest_26363b470642ab3fd01ca166046f97e7 = UNSTREAM_UNICODE(&constant_bin[ 681390 ], 23);
    const_tuple_41d7e123c39e123fd36bf032e1155028_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 1, const_str_plain_lines); Py_INCREF(const_str_plain_lines);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 2, const_str_plain_lastvalue); Py_INCREF(const_str_plain_lastvalue);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 3, const_str_plain_mo); Py_INCREF(const_str_plain_mo);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 4, const_str_plain_i); Py_INCREF(const_str_plain_i);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 5, const_str_plain_defect); Py_INCREF(const_str_plain_defect);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 6, const_str_plain_lineno); Py_INCREF(const_str_plain_lineno);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 7, const_str_plain_line); Py_INCREF(const_str_plain_line);
    PyTuple_SET_ITEM(const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 8, const_str_plain_lastheader); Py_INCREF(const_str_plain_lastheader);
    const_tuple_str_plain_object_str_plain_range_str_plain_super_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_object_str_plain_range_str_plain_super_tuple, 0, const_str_plain_object); Py_INCREF(const_str_plain_object);
    PyTuple_SET_ITEM(const_tuple_str_plain_object_str_plain_range_str_plain_super_tuple, 1, const_str_plain_range); Py_INCREF(const_str_plain_range);
    PyTuple_SET_ITEM(const_tuple_str_plain_object_str_plain_range_str_plain_super_tuple, 2, const_str_plain_super); Py_INCREF(const_str_plain_super);
    const_tuple_unicode_plain_7bit_unicode_plain_8bit_unicode_plain_binary_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_unicode_plain_7bit_unicode_plain_8bit_unicode_plain_binary_tuple, 0, const_unicode_plain_7bit); Py_INCREF(const_unicode_plain_7bit);
    PyTuple_SET_ITEM(const_tuple_unicode_plain_7bit_unicode_plain_8bit_unicode_plain_binary_tuple, 1, const_unicode_plain_8bit); Py_INCREF(const_unicode_plain_8bit);
    PyTuple_SET_ITEM(const_tuple_unicode_plain_7bit_unicode_plain_8bit_unicode_plain_binary_tuple, 2, const_unicode_plain_binary); Py_INCREF(const_unicode_plain_binary);
    const_tuple_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99_tuple, 0, const_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99); Py_INCREF(const_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99);
    const_tuple_unicode_empty_list_empty_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_unicode_empty_list_empty_tuple, 0, const_unicode_empty); Py_INCREF(const_unicode_empty);
    PyTuple_SET_ITEM(const_tuple_unicode_empty_list_empty_tuple, 1, const_list_empty); Py_INCREF(const_list_empty);
    const_unicode_digest_d63611ec5de105552513988ad2cba874 = UNSTREAM_UNICODE(&constant_bin[ 681413 ], 36);
    const_str_plain__headersonly = UNSTREAM_STRING(&constant_bin[ 681449 ], 12, 1);
    const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple, 1, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple, 2, const_str_plain_i); Py_INCREF(const_str_plain_i);
    PyTuple_SET_ITEM(const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple, 3, const_str_plain_lines); Py_INCREF(const_str_plain_lines);
    PyTuple_SET_ITEM(const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple, 4, const_str_plain_parts); Py_INCREF(const_str_plain_parts);
    const_str_plain__new_message = UNSTREAM_STRING(&constant_bin[ 681461 ], 12, 1);
    const_tuple_str_plain_self_str_plain_line_str_plain_ateof_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_line_str_plain_ateof_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_line_str_plain_ateof_tuple, 1, const_str_plain_line); Py_INCREF(const_str_plain_line);
    const_str_plain_ateof = UNSTREAM_STRING(&constant_bin[ 681473 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_line_str_plain_ateof_tuple, 2, const_str_plain_ateof); Py_INCREF(const_str_plain_ateof);
    const_str_plain__last = UNSTREAM_STRING(&constant_bin[ 125404 ], 5, 1);
    const_str_digest_e0abb43ba4fe8c6c3e27283ec2bf0fe1 = UNSTREAM_STRING(&constant_bin[ 681478 ], 42, 0);
    const_unicode_digest_37d83ecc8b0c51756795757fc1fef3af = UNSTREAM_UNICODE(&constant_bin[ 681520 ], 40);
    const_unicode_digest_424976f5685a960d92d1d2e0d5b026a4 = UNSTREAM_UNICODE(&constant_bin[ 681560 ], 60);
    const_unicode_digest_404b4784c64041dba026fb837ba72ede = UNSTREAM_UNICODE(&constant_bin[ 681620 ], 29);
    const_unicode_digest_9a1ab11b6c4fec034ed7b39074171b81 = UNSTREAM_UNICODE(&constant_bin[ 681649 ], 8);
    const_str_plain__eofstack = UNSTREAM_STRING(&constant_bin[ 681657 ], 9, 1);
    const_str_plain__parse_headers = UNSTREAM_STRING(&constant_bin[ 681188 ], 14, 1);
    const_tuple_unicode_digest_100dbc3844eca9c938e15b8da45d07c2_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_100dbc3844eca9c938e15b8da45d07c2_tuple, 0, const_unicode_digest_100dbc3844eca9c938e15b8da45d07c2); Py_INCREF(const_unicode_digest_100dbc3844eca9c938e15b8da45d07c2);
    const_unicode_plain_linesep = UNSTREAM_UNICODE(&constant_bin[ 661877 ], 7);
    const_tuple_str_plain_self_str_plain_pred_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_pred_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_pred_tuple, 1, const_str_plain_pred); Py_INCREF(const_str_plain_pred);
    const_str_plain_headerRE = UNSTREAM_STRING(&constant_bin[ 44761 ], 8, 1);
    const_tuple_unicode_digest_94a6fb965dc63390e74933b678a919b9_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_digest_94a6fb965dc63390e74933b678a919b9_tuple, 0, const_unicode_digest_94a6fb965dc63390e74933b678a919b9); Py_INCREF(const_unicode_digest_94a6fb965dc63390e74933b678a919b9);
    const_str_plain_push_eof_matcher = UNSTREAM_STRING(&constant_bin[ 681666 ], 16, 1);
    const_tuple_unicode_plain_linesep_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_plain_linesep_tuple, 0, const_unicode_plain_linesep); Py_INCREF(const_unicode_plain_linesep);
    const_str_plain__call_parse = UNSTREAM_STRING(&constant_bin[ 681682 ], 11, 1);
    const_unicode_digest_9b0f6f2e8e8ab076d8bccb1679ab9857 = UNSTREAM_UNICODE(&constant_bin[ 681693 ], 363);
    const_tuple_str_plain_self_str_plain_root_str_plain_defect_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_root_str_plain_defect_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_root_str_plain_defect_tuple, 1, const_str_plain_root); Py_INCREF(const_str_plain_root);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_root_str_plain_defect_tuple, 2, const_str_plain_defect); Py_INCREF(const_str_plain_defect);
    const_unicode_digest_4d5337f503be7b86d9f2d784e260f4d4 = UNSTREAM_UNICODE(&constant_bin[ 682056 ], 16);
    const_str_plain_NLCRE_crack = UNSTREAM_STRING(&constant_bin[ 44640 ], 11, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports$email$feedparser(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_530f50f607bec9ec4b171c06856e4581;
static PyCodeObject *codeobj_f590c57ad6462f71b42b589fe9e62119;
static PyCodeObject *codeobj_cd65d6eff8e359993deec8c1283c7b50;
static PyCodeObject *codeobj_b1f74da25737306201d13abd22d361c8;
static PyCodeObject *codeobj_8384072eb723e53909239810ef32093b;
static PyCodeObject *codeobj_d2e943555905f9b34d2fe2b4796ac51e;
static PyCodeObject *codeobj_2b06e3d7fef0ad4670ce2e4866d2c7f9;
static PyCodeObject *codeobj_e3b8e33f2af8350908361215332ddfa4;
static PyCodeObject *codeobj_62c357f6006d76f145a9c4366beee2aa;
static PyCodeObject *codeobj_a8a98874ae058aff28f4a519a0cb75ec;
static PyCodeObject *codeobj_0e3b98b12793b0a2015a46cc0ad0270f;
static PyCodeObject *codeobj_f0490cb656a87df6960a4fffa61d9427;
static PyCodeObject *codeobj_de6089235e04d5b829c24d1f03ef9700;
static PyCodeObject *codeobj_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7;
static PyCodeObject *codeobj_c5e49af5a32d63261fc53d31df1bdb7f;
static PyCodeObject *codeobj_10b349521af4c263dded425ca82e16f7;
static PyCodeObject *codeobj_dd13d0af50e44b64a3410f80f76b5930;
static PyCodeObject *codeobj_6603aa11bbf33ef57f2584a4cb3d2e70;
static PyCodeObject *codeobj_9b7e9a1c7fdc0a791556f09a3462ec00;
static PyCodeObject *codeobj_b549dff0ddff4aed8cd7f39e7f44986a;
static PyCodeObject *codeobj_c67ebaf9dda5909316f2c9827290297d;
static PyCodeObject *codeobj_de96d9daabb845ce976680ff4e30da4a;
static PyCodeObject *codeobj_1c71faf20d024aa4f9bafc039d1f4a75;
static PyCodeObject *codeobj_1de0255a6cd3b44ad26e01c66f8c5b29;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_157c2977c5dd9e1044de092914745734);
    codeobj_530f50f607bec9ec4b171c06856e4581 = MAKE_CODEOBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_angle_lambda, const_tuple_empty, 0, 0, 0);
    codeobj_f590c57ad6462f71b42b589fe9e62119 = MAKE_CODEOBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_angle_lambda, const_tuple_str_plain_self_tuple, 0, 0, 0);
    codeobj_cd65d6eff8e359993deec8c1283c7b50 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_digest_e0abb43ba4fe8c6c3e27283ec2bf0fe1, const_tuple_empty, 0, 0, 0);
    codeobj_b1f74da25737306201d13abd22d361c8 = MAKE_CODEOBJECT(module_filename_obj, 139, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_FeedParser, const_tuple_empty, 0, 0, 0);
    codeobj_8384072eb723e53909239810ef32093b = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___init__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_d2e943555905f9b34d2fe2b4796ac51e = MAKE_CODEOBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___init__, const_tuple_60484a97d7d25f34d7738ab28c8fbc4c_tuple, 2, 0, 0);
    codeobj_2b06e3d7fef0ad4670ce2e4866d2c7f9 = MAKE_CODEOBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___iter__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_e3b8e33f2af8350908361215332ddfa4 = MAKE_CODEOBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain___next__, const_tuple_str_plain_self_str_plain_line_tuple, 1, 0, 0);
    codeobj_62c357f6006d76f145a9c4366beee2aa = MAKE_CODEOBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__call_parse, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_a8a98874ae058aff28f4a519a0cb75ec = MAKE_CODEOBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__new_message, const_tuple_str_plain_self_str_plain_msg_tuple, 1, 0, 0);
    codeobj_0e3b98b12793b0a2015a46cc0ad0270f = MAKE_CODEOBJECT(module_filename_obj, 469, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__parse_headers, const_tuple_41d7e123c39e123fd36bf032e1155028_tuple, 2, 0, 0);
    codeobj_f0490cb656a87df6960a4fffa61d9427 = MAKE_CODEOBJECT(module_filename_obj, 216, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__parsegen, const_tuple_2812520b3f65d5622946c17235282e56_tuple, 1, 0, 0);
    codeobj_de6089235e04d5b829c24d1f03ef9700 = MAKE_CODEOBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__pop_message, const_tuple_str_plain_self_str_plain_retval_tuple, 1, 0, 0);
    codeobj_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain__set_headersonly, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_c5e49af5a32d63261fc53d31df1bdb7f = MAKE_CODEOBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_close, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_10b349521af4c263dded425ca82e16f7 = MAKE_CODEOBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_close, const_tuple_str_plain_self_str_plain_root_str_plain_defect_tuple, 1, 0, 0);
    codeobj_dd13d0af50e44b64a3410f80f76b5930 = MAKE_CODEOBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_feed, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_6603aa11bbf33ef57f2584a4cb3d2e70 = MAKE_CODEOBJECT(module_filename_obj, 524, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_feed, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, 0);
    codeobj_9b7e9a1c7fdc0a791556f09a3462ec00 = MAKE_CODEOBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_pop_eof_matcher, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_b549dff0ddff4aed8cd7f39e7f44986a = MAKE_CODEOBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_push, const_tuple_355f22d8e1ef765decc7bb7d916288ff_tuple, 2, 0, 0);
    codeobj_c67ebaf9dda5909316f2c9827290297d = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_push_eof_matcher, const_tuple_str_plain_self_str_plain_pred_tuple, 2, 0, 0);
    codeobj_de96d9daabb845ce976680ff4e30da4a = MAKE_CODEOBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_pushlines, const_tuple_str_plain_self_str_plain_lines_tuple, 2, 0, 0);
    codeobj_1c71faf20d024aa4f9bafc039d1f4a75 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_readline, const_tuple_str_plain_self_str_plain_line_str_plain_ateof_tuple, 1, 0, 0);
    codeobj_1de0255a6cd3b44ad26e01c66f8c5b29 = MAKE_CODEOBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT, const_str_plain_unreadline, const_tuple_str_plain_self_str_plain_line_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_maker(void);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_10___next__();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__$$$function_1_lambda();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__$$$function_2_lambda();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_12__set_headersonly();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_13_feed();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_14__call_parse();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_15_close();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_16__new_message();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_17__pop_message();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_18__parsegen();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_19__parse_headers();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_1___init__();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_20_feed();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_2_push_eof_matcher();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_3_pop_eof_matcher();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_4_close();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_5_readline();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_6_unreadline();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_7_push();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_8_pushlines();


static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_9___iter__();


// The module function definitions.
static PyObject *impl_future$backports$email$feedparser$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8384072eb723e53909239810ef32093b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8384072eb723e53909239810ef32093b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_8384072eb723e53909239810ef32093b, codeobj_8384072eb723e53909239810ef32093b, module_future$backports$email$feedparser, sizeof(void *));
    frame_8384072eb723e53909239810ef32093b = cache_frame_8384072eb723e53909239810ef32093b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8384072eb723e53909239810ef32093b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8384072eb723e53909239810ef32093b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_unicode_empty;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__partial, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__lines, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__eofstack, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__closed, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8384072eb723e53909239810ef32093b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8384072eb723e53909239810ef32093b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8384072eb723e53909239810ef32093b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8384072eb723e53909239810ef32093b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8384072eb723e53909239810ef32093b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8384072eb723e53909239810ef32093b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_8384072eb723e53909239810ef32093b == cache_frame_8384072eb723e53909239810ef32093b) {
        Py_DECREF(frame_8384072eb723e53909239810ef32093b);
    }
    cache_frame_8384072eb723e53909239810ef32093b = NULL;

    assertFrameObject(frame_8384072eb723e53909239810ef32093b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_1___init__);
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


static PyObject *impl_future$backports$email$feedparser$$$function_2_push_eof_matcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pred = python_pars[1];
    struct Nuitka_FrameObject *frame_c67ebaf9dda5909316f2c9827290297d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c67ebaf9dda5909316f2c9827290297d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c67ebaf9dda5909316f2c9827290297d, codeobj_c67ebaf9dda5909316f2c9827290297d, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_c67ebaf9dda5909316f2c9827290297d = cache_frame_c67ebaf9dda5909316f2c9827290297d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c67ebaf9dda5909316f2c9827290297d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c67ebaf9dda5909316f2c9827290297d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__eofstack);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pred);
        tmp_args_element_name_1 = par_pred;
        frame_c67ebaf9dda5909316f2c9827290297d->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c67ebaf9dda5909316f2c9827290297d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c67ebaf9dda5909316f2c9827290297d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c67ebaf9dda5909316f2c9827290297d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c67ebaf9dda5909316f2c9827290297d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c67ebaf9dda5909316f2c9827290297d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c67ebaf9dda5909316f2c9827290297d,
        type_description_1,
        par_self,
        par_pred
    );


    // Release cached frame.
    if (frame_c67ebaf9dda5909316f2c9827290297d == cache_frame_c67ebaf9dda5909316f2c9827290297d) {
        Py_DECREF(frame_c67ebaf9dda5909316f2c9827290297d);
    }
    cache_frame_c67ebaf9dda5909316f2c9827290297d = NULL;

    assertFrameObject(frame_c67ebaf9dda5909316f2c9827290297d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_2_push_eof_matcher);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_pred);
    Py_DECREF(par_pred);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pred);
    Py_DECREF(par_pred);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$feedparser$$$function_3_pop_eof_matcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9b7e9a1c7fdc0a791556f09a3462ec00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b7e9a1c7fdc0a791556f09a3462ec00 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_9b7e9a1c7fdc0a791556f09a3462ec00, codeobj_9b7e9a1c7fdc0a791556f09a3462ec00, module_future$backports$email$feedparser, sizeof(void *));
    frame_9b7e9a1c7fdc0a791556f09a3462ec00 = cache_frame_9b7e9a1c7fdc0a791556f09a3462ec00;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9b7e9a1c7fdc0a791556f09a3462ec00);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9b7e9a1c7fdc0a791556f09a3462ec00) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__eofstack);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9b7e9a1c7fdc0a791556f09a3462ec00->m_frame.f_lineno = 71;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_pop);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b7e9a1c7fdc0a791556f09a3462ec00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b7e9a1c7fdc0a791556f09a3462ec00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9b7e9a1c7fdc0a791556f09a3462ec00);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b7e9a1c7fdc0a791556f09a3462ec00, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9b7e9a1c7fdc0a791556f09a3462ec00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b7e9a1c7fdc0a791556f09a3462ec00, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9b7e9a1c7fdc0a791556f09a3462ec00,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_9b7e9a1c7fdc0a791556f09a3462ec00 == cache_frame_9b7e9a1c7fdc0a791556f09a3462ec00) {
        Py_DECREF(frame_9b7e9a1c7fdc0a791556f09a3462ec00);
    }
    cache_frame_9b7e9a1c7fdc0a791556f09a3462ec00 = NULL;

    assertFrameObject(frame_9b7e9a1c7fdc0a791556f09a3462ec00);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_3_pop_eof_matcher);
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


static PyObject *impl_future$backports$email$feedparser$$$function_4_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c5e49af5a32d63261fc53d31df1bdb7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c5e49af5a32d63261fc53d31df1bdb7f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c5e49af5a32d63261fc53d31df1bdb7f, codeobj_c5e49af5a32d63261fc53d31df1bdb7f, module_future$backports$email$feedparser, sizeof(void *));
    frame_c5e49af5a32d63261fc53d31df1bdb7f = cache_frame_c5e49af5a32d63261fc53d31df1bdb7f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c5e49af5a32d63261fc53d31df1bdb7f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c5e49af5a32d63261fc53d31df1bdb7f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__lines);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_append);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__partial);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c5e49af5a32d63261fc53d31df1bdb7f->m_frame.f_lineno = 75;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_unicode_empty;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__partial, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__closed, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c5e49af5a32d63261fc53d31df1bdb7f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c5e49af5a32d63261fc53d31df1bdb7f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c5e49af5a32d63261fc53d31df1bdb7f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c5e49af5a32d63261fc53d31df1bdb7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5e49af5a32d63261fc53d31df1bdb7f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5e49af5a32d63261fc53d31df1bdb7f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_c5e49af5a32d63261fc53d31df1bdb7f == cache_frame_c5e49af5a32d63261fc53d31df1bdb7f) {
        Py_DECREF(frame_c5e49af5a32d63261fc53d31df1bdb7f);
    }
    cache_frame_c5e49af5a32d63261fc53d31df1bdb7f = NULL;

    assertFrameObject(frame_c5e49af5a32d63261fc53d31df1bdb7f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_4_close);
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


static PyObject *impl_future$backports$email$feedparser$$$function_5_readline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_line = NULL;
    PyObject *var_ateof = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1c71faf20d024aa4f9bafc039d1f4a75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1c71faf20d024aa4f9bafc039d1f4a75 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_1c71faf20d024aa4f9bafc039d1f4a75, codeobj_1c71faf20d024aa4f9bafc039d1f4a75, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_1c71faf20d024aa4f9bafc039d1f4a75 = cache_frame_1c71faf20d024aa4f9bafc039d1f4a75;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c71faf20d024aa4f9bafc039d1f4a75);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c71faf20d024aa4f9bafc039d1f4a75) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__lines);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__closed);
            if (tmp_attribute_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_1);

                exception_lineno = 81;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_attribute_value_1);
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_return_value = const_unicode_empty;
            Py_INCREF(tmp_return_value);
            goto frame_return_exit_1;
            branch_no_2:;
        }
        {
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                exception_tb = NULL;

                exception_lineno = 83;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_return_value = tmp_mvar_value_1;
            Py_INCREF(tmp_return_value);
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__lines);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1c71faf20d024aa4f9bafc039d1f4a75->m_frame.f_lineno = 86;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_pop);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_line == NULL);
        var_line = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__eofstack);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_none_none_int_neg_1;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
                exception_lineno = 90;
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
            PyObject *old = var_ateof;
            var_ateof = tmp_assign_source_4;
            Py_INCREF(var_ateof);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_ateof);
        tmp_called_name_1 = var_ateof;
        CHECK_OBJECT(var_line);
        tmp_args_element_name_1 = var_line;
        frame_1c71faf20d024aa4f9bafc039d1f4a75->m_frame.f_lineno = 91;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__lines);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_line);
            tmp_args_element_name_2 = var_line;
            frame_1c71faf20d024aa4f9bafc039d1f4a75->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, call_args);
            }

            Py_DECREF(tmp_called_instance_2);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_2);
        }
        tmp_return_value = const_unicode_empty;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_2;
        branch_no_3:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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
    RESTORE_FRAME_EXCEPTION(frame_1c71faf20d024aa4f9bafc039d1f4a75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c71faf20d024aa4f9bafc039d1f4a75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c71faf20d024aa4f9bafc039d1f4a75);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c71faf20d024aa4f9bafc039d1f4a75, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1c71faf20d024aa4f9bafc039d1f4a75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c71faf20d024aa4f9bafc039d1f4a75, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c71faf20d024aa4f9bafc039d1f4a75,
        type_description_1,
        par_self,
        var_line,
        var_ateof
    );


    // Release cached frame.
    if (frame_1c71faf20d024aa4f9bafc039d1f4a75 == cache_frame_1c71faf20d024aa4f9bafc039d1f4a75) {
        Py_DECREF(frame_1c71faf20d024aa4f9bafc039d1f4a75);
    }
    cache_frame_1c71faf20d024aa4f9bafc039d1f4a75 = NULL;

    assertFrameObject(frame_1c71faf20d024aa4f9bafc039d1f4a75);

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

    CHECK_OBJECT(var_line);
    tmp_return_value = var_line;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_5_readline);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_ateof);
    var_ateof = NULL;

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

    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_ateof);
    var_ateof = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_5_readline);
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


static PyObject *impl_future$backports$email$feedparser$$$function_6_unreadline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_line = python_pars[1];
    struct Nuitka_FrameObject *frame_1de0255a6cd3b44ad26e01c66f8c5b29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1de0255a6cd3b44ad26e01c66f8c5b29 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1de0255a6cd3b44ad26e01c66f8c5b29, codeobj_1de0255a6cd3b44ad26e01c66f8c5b29, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_1de0255a6cd3b44ad26e01c66f8c5b29 = cache_frame_1de0255a6cd3b44ad26e01c66f8c5b29;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1de0255a6cd3b44ad26e01c66f8c5b29);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1de0255a6cd3b44ad26e01c66f8c5b29) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_line);
        tmp_compexpr_left_1 = par_line;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 99;
            type_description_1 = "oo";
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
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_lineno = 99;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__lines);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_line);
        tmp_args_element_name_1 = par_line;
        frame_1de0255a6cd3b44ad26e01c66f8c5b29->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1de0255a6cd3b44ad26e01c66f8c5b29);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1de0255a6cd3b44ad26e01c66f8c5b29);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1de0255a6cd3b44ad26e01c66f8c5b29, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1de0255a6cd3b44ad26e01c66f8c5b29->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1de0255a6cd3b44ad26e01c66f8c5b29, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1de0255a6cd3b44ad26e01c66f8c5b29,
        type_description_1,
        par_self,
        par_line
    );


    // Release cached frame.
    if (frame_1de0255a6cd3b44ad26e01c66f8c5b29 == cache_frame_1de0255a6cd3b44ad26e01c66f8c5b29) {
        Py_DECREF(frame_1de0255a6cd3b44ad26e01c66f8c5b29);
    }
    cache_frame_1de0255a6cd3b44ad26e01c66f8c5b29 = NULL;

    assertFrameObject(frame_1de0255a6cd3b44ad26e01c66f8c5b29);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_6_unreadline);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$feedparser$$$function_7_push(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *var_i = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_parts = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b549dff0ddff4aed8cd7f39e7f44986a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b549dff0ddff4aed8cd7f39e7f44986a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b549dff0ddff4aed8cd7f39e7f44986a, codeobj_b549dff0ddff4aed8cd7f39e7f44986a, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b549dff0ddff4aed8cd7f39e7f44986a = cache_frame_b549dff0ddff4aed8cd7f39e7f44986a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b549dff0ddff4aed8cd7f39e7f44986a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b549dff0ddff4aed8cd7f39e7f44986a) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__partial);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_data);
        tmp_right_name_1 = par_data;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = const_unicode_empty;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 105;
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


            type_description_1 = "ooooo";
            exception_lineno = 105;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_4;
            Py_INCREF(par_data);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_name_1 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__partial, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
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
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_crack);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE_crack);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 44627 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_split, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_parts);
        tmp_called_instance_2 = var_parts;
        frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 112;
        tmp_assattr_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_pop);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__partial, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__partial);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_parts);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_parts);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_parts);
        tmp_subscribed_name_1 = var_parts;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, -1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 115;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_endswith, &PyTuple_GET_ITEM(const_tuple_unicode_chr_13_tuple, 0));

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 115;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT(var_parts);
            tmp_called_instance_4 = var_parts;
            frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 116;
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM(const_tuple_int_neg_2_tuple, 0));

            if (tmp_left_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_parts);
            tmp_called_instance_5 = var_parts;
            frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 116;
            tmp_right_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_pop);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_2);

                exception_lineno = 116;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_assattr_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__partial, tmp_assattr_name_3);
            Py_DECREF(tmp_assattr_name_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyList_New(0);
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_range);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_range);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 10165 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT(var_parts);
        tmp_len_arg_1 = var_parts;
        tmp_left_name_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_2;
        tmp_args_element_name_2 = BINARY_OPERATION_FLOORDIV_OBJECT_INT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 121;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 121;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_9;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT(var_lines);
        tmp_source_name_3 = var_lines;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_append);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_parts);
        tmp_subscribed_name_2 = var_parts;
        CHECK_OBJECT(var_i);
        tmp_left_name_5 = var_i;
        tmp_right_name_4 = const_int_pos_2;
        tmp_subscript_name_2 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_5, tmp_right_name_4);
        if (tmp_subscript_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_parts);
        tmp_subscribed_name_3 = var_parts;
        CHECK_OBJECT(var_i);
        tmp_left_name_7 = var_i;
        tmp_right_name_6 = const_int_pos_2;
        tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_7, tmp_right_name_6);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_7 = const_int_pos_1;
        tmp_subscript_name_3 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_6, tmp_right_name_7);
        Py_DECREF(tmp_left_name_6);
        if (tmp_subscript_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_5 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
        Py_DECREF(tmp_subscript_name_3);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_5);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 122;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 121;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_lines);
        tmp_args_element_name_4 = var_lines;
        frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_pushlines, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b549dff0ddff4aed8cd7f39e7f44986a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b549dff0ddff4aed8cd7f39e7f44986a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b549dff0ddff4aed8cd7f39e7f44986a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b549dff0ddff4aed8cd7f39e7f44986a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b549dff0ddff4aed8cd7f39e7f44986a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b549dff0ddff4aed8cd7f39e7f44986a,
        type_description_1,
        par_self,
        par_data,
        var_i,
        var_lines,
        var_parts
    );


    // Release cached frame.
    if (frame_b549dff0ddff4aed8cd7f39e7f44986a == cache_frame_b549dff0ddff4aed8cd7f39e7f44986a) {
        Py_DECREF(frame_b549dff0ddff4aed8cd7f39e7f44986a);
    }
    cache_frame_b549dff0ddff4aed8cd7f39e7f44986a = NULL;

    assertFrameObject(frame_b549dff0ddff4aed8cd7f39e7f44986a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_7_push);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;

    CHECK_OBJECT((PyObject *)var_lines);
    Py_DECREF(var_lines);
    var_lines = NULL;

    CHECK_OBJECT((PyObject *)var_parts);
    Py_DECREF(var_parts);
    var_parts = NULL;

    CHECK_OBJECT((PyObject *)par_data);
    Py_DECREF(par_data);
    par_data = NULL;

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

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_lines);
    var_lines = NULL;

    Py_XDECREF(var_parts);
    var_parts = NULL;

    Py_XDECREF(par_data);
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_7_push);
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


static PyObject *impl_future$backports$email$feedparser$$$function_8_pushlines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lines = python_pars[1];
    struct Nuitka_FrameObject *frame_de96d9daabb845ce976680ff4e30da4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_de96d9daabb845ce976680ff4e30da4a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_de96d9daabb845ce976680ff4e30da4a, codeobj_de96d9daabb845ce976680ff4e30da4a, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_de96d9daabb845ce976680ff4e30da4a = cache_frame_de96d9daabb845ce976680ff4e30da4a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_de96d9daabb845ce976680ff4e30da4a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_de96d9daabb845ce976680ff4e30da4a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_sliceass_target_1;
        PyObject *tmp_source_name_1;
        Py_ssize_t tmp_sliceassslicedel_index_lower_1;
        Py_ssize_t tmp_sliceass_index_upper_1;
        CHECK_OBJECT(par_lines);
        tmp_subscribed_name_1 = par_lines;
        tmp_subscript_name_1 = const_slice_none_none_int_neg_1;
        tmp_sliceass_value_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        if (tmp_sliceass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_sliceass_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__lines);
        if (tmp_sliceass_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sliceass_value_1);

            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_sliceassslicedel_index_lower_1 = 0;
        tmp_sliceass_index_upper_1 = 0;
        tmp_result = SET_INDEX_SLICE(tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1);
        Py_DECREF(tmp_sliceass_value_1);
        Py_DECREF(tmp_sliceass_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de96d9daabb845ce976680ff4e30da4a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de96d9daabb845ce976680ff4e30da4a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de96d9daabb845ce976680ff4e30da4a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_de96d9daabb845ce976680ff4e30da4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de96d9daabb845ce976680ff4e30da4a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de96d9daabb845ce976680ff4e30da4a,
        type_description_1,
        par_self,
        par_lines
    );


    // Release cached frame.
    if (frame_de96d9daabb845ce976680ff4e30da4a == cache_frame_de96d9daabb845ce976680ff4e30da4a) {
        Py_DECREF(frame_de96d9daabb845ce976680ff4e30da4a);
    }
    cache_frame_de96d9daabb845ce976680ff4e30da4a = NULL;

    assertFrameObject(frame_de96d9daabb845ce976680ff4e30da4a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_8_pushlines);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$feedparser$$$function_9___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_9___iter__);
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


static PyObject *impl_future$backports$email$feedparser$$$function_10___next__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_line = NULL;
    struct Nuitka_FrameObject *frame_e3b8e33f2af8350908361215332ddfa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e3b8e33f2af8350908361215332ddfa4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e3b8e33f2af8350908361215332ddfa4, codeobj_e3b8e33f2af8350908361215332ddfa4, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_e3b8e33f2af8350908361215332ddfa4 = cache_frame_e3b8e33f2af8350908361215332ddfa4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e3b8e33f2af8350908361215332ddfa4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e3b8e33f2af8350908361215332ddfa4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e3b8e33f2af8350908361215332ddfa4->m_frame.f_lineno = 133;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_readline);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_line == NULL);
        var_line = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_line);
        tmp_compexpr_left_1 = var_line;
        tmp_compexpr_right_1 = const_unicode_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
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
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_StopIteration;
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_lineno = 135;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3b8e33f2af8350908361215332ddfa4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3b8e33f2af8350908361215332ddfa4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3b8e33f2af8350908361215332ddfa4, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e3b8e33f2af8350908361215332ddfa4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3b8e33f2af8350908361215332ddfa4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3b8e33f2af8350908361215332ddfa4,
        type_description_1,
        par_self,
        var_line
    );


    // Release cached frame.
    if (frame_e3b8e33f2af8350908361215332ddfa4 == cache_frame_e3b8e33f2af8350908361215332ddfa4) {
        Py_DECREF(frame_e3b8e33f2af8350908361215332ddfa4);
    }
    cache_frame_e3b8e33f2af8350908361215332ddfa4 = NULL;

    assertFrameObject(frame_e3b8e33f2af8350908361215332ddfa4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_line);
    tmp_return_value = var_line;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_10___next__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_line);
    Py_DECREF(var_line);
    var_line = NULL;

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

    Py_XDECREF(var_line);
    var_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_10___next__);
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


static PyObject *impl_future$backports$email$feedparser$$$function_11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    PyObject *par__factory = python_pars[1];
    PyObject *par__3to2kwargs = python_pars[2];
    PyObject *var_policy = NULL;
    struct Nuitka_FrameObject *frame_d2e943555905f9b34d2fe2b4796ac51e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d2e943555905f9b34d2fe2b4796ac51e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d2e943555905f9b34d2fe2b4796ac51e, codeobj_d2e943555905f9b34d2fe2b4796ac51e, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d2e943555905f9b34d2fe2b4796ac51e = cache_frame_d2e943555905f9b34d2fe2b4796ac51e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d2e943555905f9b34d2fe2b4796ac51e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d2e943555905f9b34d2fe2b4796ac51e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_unicode_plain_policy;
        CHECK_OBJECT(par__3to2kwargs);
        tmp_compexpr_right_1 = par__3to2kwargs;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(par__3to2kwargs);
            tmp_subscribed_name_1 = par__3to2kwargs;
            tmp_subscript_name_1 = const_unicode_plain_policy;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            assert(var_policy == NULL);
            var_policy = tmp_assign_source_1;
        }
        {
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_delsubscr_subscript_1;
            CHECK_OBJECT(par__3to2kwargs);
            tmp_delsubscr_target_1 = par__3to2kwargs;
            tmp_delsubscr_subscript_1 = const_unicode_plain_policy;
            tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_compat32);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_compat32);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 44667 ], 37, 0);
                exception_tb = NULL;

                exception_lineno = 144;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_2 = tmp_mvar_value_1;
            assert(var_policy == NULL);
            Py_INCREF(tmp_assign_source_2);
            var_policy = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par__factory);
        tmp_assattr_name_1 = par__factory;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_1 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__factory, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_policy);
        tmp_assattr_name_2 = var_policy;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_2 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_policy, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par__factory);
        tmp_called_name_1 = par__factory;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_source_name_1 = PyCell_GET(par_self);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_policy);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        tmp_dict_key_1 = const_str_plain_policy;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_d2e943555905f9b34d2fe2b4796ac51e->m_frame.f_lineno = 155;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__$$$function_1_lambda();

        ((struct Nuitka_FunctionObject *)tmp_assattr_name_3)->m_closure[0] = par_self;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assattr_name_3)->m_closure[0]);


        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_3 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__factory_kwds, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "cooo";
            goto try_except_handler_2;
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
    PRESERVE_FRAME_EXCEPTION(frame_d2e943555905f9b34d2fe2b4796ac51e);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d2e943555905f9b34d2fe2b4796ac51e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d2e943555905f9b34d2fe2b4796ac51e, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "cooo";
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
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__$$$function_2_lambda();



            CHECK_OBJECT(PyCell_GET(par_self));
            tmp_assattr_target_4 = PyCell_GET(par_self);
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__factory_kwds, tmp_assattr_name_4);
            Py_DECREF(tmp_assattr_name_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 154;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d2e943555905f9b34d2fe2b4796ac51e->m_frame) frame_d2e943555905f9b34d2fe2b4796ac51e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "cooo";
        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_11___init__);
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_BufferedSubFile);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BufferedSubFile);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 44704 ], 44, 0);
            exception_tb = NULL;

            exception_lineno = 160;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_d2e943555905f9b34d2fe2b4796ac51e->m_frame.f_lineno = 160;
        tmp_assattr_name_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_5 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__input, tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = PyList_New(0);
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_6 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__msgstack, tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_PY3);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2978 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 162;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_assattr_target_7;
            CHECK_OBJECT(PyCell_GET(par_self));
            tmp_called_instance_1 = PyCell_GET(par_self);
            frame_d2e943555905f9b34d2fe2b4796ac51e->m_frame.f_lineno = 163;
            tmp_source_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain__parsegen);
            if (tmp_source_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain___next__);
            Py_DECREF(tmp_source_name_2);
            if (tmp_assattr_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(PyCell_GET(par_self));
            tmp_assattr_target_7 = PyCell_GET(par_self);
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain__parse, tmp_assattr_name_7);
            Py_DECREF(tmp_assattr_name_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assattr_name_8;
            PyObject *tmp_source_name_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_assattr_target_8;
            CHECK_OBJECT(PyCell_GET(par_self));
            tmp_called_instance_2 = PyCell_GET(par_self);
            frame_d2e943555905f9b34d2fe2b4796ac51e->m_frame.f_lineno = 165;
            tmp_source_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain__parsegen);
            if (tmp_source_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_next);
            Py_DECREF(tmp_source_name_3);
            if (tmp_assattr_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(PyCell_GET(par_self));
            tmp_assattr_target_8 = PyCell_GET(par_self);
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain__parse, tmp_assattr_name_8);
            Py_DECREF(tmp_assattr_name_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "cooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = Py_None;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_9 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain__cur, tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = Py_None;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_10 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain__last, tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_name_11 = Py_False;
        CHECK_OBJECT(PyCell_GET(par_self));
        tmp_assattr_target_11 = PyCell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, const_str_plain__headersonly, tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_d2e943555905f9b34d2fe2b4796ac51e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_d2e943555905f9b34d2fe2b4796ac51e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2e943555905f9b34d2fe2b4796ac51e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d2e943555905f9b34d2fe2b4796ac51e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2e943555905f9b34d2fe2b4796ac51e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d2e943555905f9b34d2fe2b4796ac51e,
        type_description_1,
        par_self,
        par__factory,
        par__3to2kwargs,
        var_policy
    );


    // Release cached frame.
    if (frame_d2e943555905f9b34d2fe2b4796ac51e == cache_frame_d2e943555905f9b34d2fe2b4796ac51e) {
        Py_DECREF(frame_d2e943555905f9b34d2fe2b4796ac51e);
    }
    cache_frame_d2e943555905f9b34d2fe2b4796ac51e = NULL;

    assertFrameObject(frame_d2e943555905f9b34d2fe2b4796ac51e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_11___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_policy);
    Py_DECREF(var_policy);
    var_policy = NULL;

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

    Py_XDECREF(var_policy);
    var_policy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_11___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par__3to2kwargs);
    Py_DECREF(par__3to2kwargs);
    CHECK_OBJECT(par__factory);
    Py_DECREF(par__factory);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par__3to2kwargs);
    Py_DECREF(par__3to2kwargs);
    CHECK_OBJECT(par__factory);
    Py_DECREF(par__factory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$feedparser$$$function_11___init__$$$function_1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f590c57ad6462f71b42b589fe9e62119;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f590c57ad6462f71b42b589fe9e62119 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_f590c57ad6462f71b42b589fe9e62119, codeobj_f590c57ad6462f71b42b589fe9e62119, module_future$backports$email$feedparser, sizeof(void *));
    frame_f590c57ad6462f71b42b589fe9e62119 = cache_frame_f590c57ad6462f71b42b589fe9e62119;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f590c57ad6462f71b42b589fe9e62119);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f590c57ad6462f71b42b589fe9e62119) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            exception_tb = NULL;

            exception_lineno = 156;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET(self->m_closure[0]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_policy);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_unicode_plain_policy;
        tmp_return_value = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f590c57ad6462f71b42b589fe9e62119);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f590c57ad6462f71b42b589fe9e62119);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f590c57ad6462f71b42b589fe9e62119);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f590c57ad6462f71b42b589fe9e62119, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f590c57ad6462f71b42b589fe9e62119->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f590c57ad6462f71b42b589fe9e62119, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f590c57ad6462f71b42b589fe9e62119,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_f590c57ad6462f71b42b589fe9e62119 == cache_frame_f590c57ad6462f71b42b589fe9e62119) {
        Py_DECREF(frame_f590c57ad6462f71b42b589fe9e62119);
    }
    cache_frame_f590c57ad6462f71b42b589fe9e62119 = NULL;

    assertFrameObject(frame_f590c57ad6462f71b42b589fe9e62119);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_11___init__$$$function_1_lambda);
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


static PyObject *impl_future$backports$email$feedparser$$$function_11___init__$$$function_2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = PyDict_New();
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_11___init__$$$function_2_lambda);
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$feedparser$$$function_12__set_headersonly(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7, codeobj_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7, module_future$backports$email$feedparser, sizeof(void *));
    frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7 = cache_frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__headersonly, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7 == cache_frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7) {
        Py_DECREF(frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7);
    }
    cache_frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7 = NULL;

    assertFrameObject(frame_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_12__set_headersonly);
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


static PyObject *impl_future$backports$email$feedparser$$$function_13_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_dd13d0af50e44b64a3410f80f76b5930;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd13d0af50e44b64a3410f80f76b5930 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_dd13d0af50e44b64a3410f80f76b5930, codeobj_dd13d0af50e44b64a3410f80f76b5930, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_dd13d0af50e44b64a3410f80f76b5930 = cache_frame_dd13d0af50e44b64a3410f80f76b5930;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dd13d0af50e44b64a3410f80f76b5930);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dd13d0af50e44b64a3410f80f76b5930) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__input);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_dd13d0af50e44b64a3410f80f76b5930->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_push, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_dd13d0af50e44b64a3410f80f76b5930->m_frame.f_lineno = 177;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain__call_parse);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd13d0af50e44b64a3410f80f76b5930);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd13d0af50e44b64a3410f80f76b5930);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd13d0af50e44b64a3410f80f76b5930, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_dd13d0af50e44b64a3410f80f76b5930->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd13d0af50e44b64a3410f80f76b5930, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd13d0af50e44b64a3410f80f76b5930,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if (frame_dd13d0af50e44b64a3410f80f76b5930 == cache_frame_dd13d0af50e44b64a3410f80f76b5930) {
        Py_DECREF(frame_dd13d0af50e44b64a3410f80f76b5930);
    }
    cache_frame_dd13d0af50e44b64a3410f80f76b5930 = NULL;

    assertFrameObject(frame_dd13d0af50e44b64a3410f80f76b5930);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_13_feed);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$feedparser$$$function_14__call_parse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_62c357f6006d76f145a9c4366beee2aa;
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
    static struct Nuitka_FrameObject *cache_frame_62c357f6006d76f145a9c4366beee2aa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_62c357f6006d76f145a9c4366beee2aa, codeobj_62c357f6006d76f145a9c4366beee2aa, module_future$backports$email$feedparser, sizeof(void *));
    frame_62c357f6006d76f145a9c4366beee2aa = cache_frame_62c357f6006d76f145a9c4366beee2aa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_62c357f6006d76f145a9c4366beee2aa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_62c357f6006d76f145a9c4366beee2aa) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_62c357f6006d76f145a9c4366beee2aa->m_frame.f_lineno = 181;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain__parse);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_62c357f6006d76f145a9c4366beee2aa);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_62c357f6006d76f145a9c4366beee2aa, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_62c357f6006d76f145a9c4366beee2aa, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
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
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 180;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_62c357f6006d76f145a9c4366beee2aa->m_frame) frame_62c357f6006d76f145a9c4366beee2aa->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto frame_exception_exit_1;
        branch_no_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_14__call_parse);
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_62c357f6006d76f145a9c4366beee2aa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_62c357f6006d76f145a9c4366beee2aa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62c357f6006d76f145a9c4366beee2aa, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_62c357f6006d76f145a9c4366beee2aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62c357f6006d76f145a9c4366beee2aa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62c357f6006d76f145a9c4366beee2aa,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_62c357f6006d76f145a9c4366beee2aa == cache_frame_62c357f6006d76f145a9c4366beee2aa) {
        Py_DECREF(frame_62c357f6006d76f145a9c4366beee2aa);
    }
    cache_frame_62c357f6006d76f145a9c4366beee2aa = NULL;

    assertFrameObject(frame_62c357f6006d76f145a9c4366beee2aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_14__call_parse);
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


static PyObject *impl_future$backports$email$feedparser$$$function_15_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_root = NULL;
    PyObject *var_defect = NULL;
    struct Nuitka_FrameObject *frame_10b349521af4c263dded425ca82e16f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_10b349521af4c263dded425ca82e16f7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_10b349521af4c263dded425ca82e16f7, codeobj_10b349521af4c263dded425ca82e16f7, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_10b349521af4c263dded425ca82e16f7 = cache_frame_10b349521af4c263dded425ca82e16f7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10b349521af4c263dded425ca82e16f7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10b349521af4c263dded425ca82e16f7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__input);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_10b349521af4c263dded425ca82e16f7->m_frame.f_lineno = 187;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_close);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_10b349521af4c263dded425ca82e16f7->m_frame.f_lineno = 188;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain__call_parse);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_10b349521af4c263dded425ca82e16f7->m_frame.f_lineno = 189;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain__pop_message);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_root == NULL);
        var_root = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__msgstack);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
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
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_lineno = 190;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_root);
        tmp_called_instance_4 = var_root;
        frame_10b349521af4c263dded425ca82e16f7->m_frame.f_lineno = 192;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_get_content_maintype);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_unicode_plain_multipart;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
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
        CHECK_OBJECT(var_root);
        tmp_called_instance_5 = var_root;
        frame_10b349521af4c263dded425ca82e16f7->m_frame.f_lineno = 193;
        tmp_operand_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_is_multipart);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                exception_tb = NULL;

                exception_lineno = 194;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_1;
            frame_10b349521af4c263dded425ca82e16f7->m_frame.f_lineno = 194;
            tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_MultipartInvariantViolationDefect);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert(var_defect == NULL);
            var_defect = tmp_assign_source_2;
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_policy);
            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_root);
            tmp_args_element_name_1 = var_root;
            CHECK_OBJECT(var_defect);
            tmp_args_element_name_2 = var_defect;
            frame_10b349521af4c263dded425ca82e16f7->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_7, const_str_plain_handle_defect, call_args);
            }

            Py_DECREF(tmp_called_instance_7);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10b349521af4c263dded425ca82e16f7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10b349521af4c263dded425ca82e16f7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10b349521af4c263dded425ca82e16f7, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_10b349521af4c263dded425ca82e16f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10b349521af4c263dded425ca82e16f7, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10b349521af4c263dded425ca82e16f7,
        type_description_1,
        par_self,
        var_root,
        var_defect
    );


    // Release cached frame.
    if (frame_10b349521af4c263dded425ca82e16f7 == cache_frame_10b349521af4c263dded425ca82e16f7) {
        Py_DECREF(frame_10b349521af4c263dded425ca82e16f7);
    }
    cache_frame_10b349521af4c263dded425ca82e16f7 = NULL;

    assertFrameObject(frame_10b349521af4c263dded425ca82e16f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_root);
    tmp_return_value = var_root;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_15_close);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_root);
    Py_DECREF(var_root);
    var_root = NULL;

    Py_XDECREF(var_defect);
    var_defect = NULL;

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

    Py_XDECREF(var_root);
    var_root = NULL;

    Py_XDECREF(var_defect);
    var_defect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_15_close);
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


static PyObject *impl_future$backports$email$feedparser$$$function_16__new_message(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_a8a98874ae058aff28f4a519a0cb75ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a8a98874ae058aff28f4a519a0cb75ec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a8a98874ae058aff28f4a519a0cb75ec, codeobj_a8a98874ae058aff28f4a519a0cb75ec, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_a8a98874ae058aff28f4a519a0cb75ec = cache_frame_a8a98874ae058aff28f4a519a0cb75ec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a8a98874ae058aff28f4a519a0cb75ec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a8a98874ae058aff28f4a519a0cb75ec) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__factory);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a8a98874ae058aff28f4a519a0cb75ec->m_frame.f_lineno = 199;
        tmp_dircall_arg2_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain__factory_kwds);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___internal__$$$function_3_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__cur);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__cur);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a8a98874ae058aff28f4a519a0cb75ec->m_frame.f_lineno = 200;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_content_type);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_unicode_digest_4d5337f503be7b86d9f2d784e260f4d4;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT(var_msg);
            tmp_called_instance_3 = var_msg;
            frame_a8a98874ae058aff28f4a519a0cb75ec->m_frame.f_lineno = 201;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_set_default_type, &PyTuple_GET_ITEM(const_tuple_unicode_digest_2b01170a2a5878eae971ee3f21506a0d_tuple, 0));

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__msgstack);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__msgstack);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_called_instance_4 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, -1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_msg);
            tmp_args_element_name_1 = var_msg;
            frame_a8a98874ae058aff28f4a519a0cb75ec->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_attach, call_args);
            }

            Py_DECREF(tmp_called_instance_4);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__msgstack);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_name_2 = var_msg;
        frame_a8a98874ae058aff28f4a519a0cb75ec->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_msg);
        tmp_assattr_name_1 = var_msg;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__cur, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_msg);
        tmp_assattr_name_2 = var_msg;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__last, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8a98874ae058aff28f4a519a0cb75ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8a98874ae058aff28f4a519a0cb75ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a8a98874ae058aff28f4a519a0cb75ec, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a8a98874ae058aff28f4a519a0cb75ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8a98874ae058aff28f4a519a0cb75ec, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8a98874ae058aff28f4a519a0cb75ec,
        type_description_1,
        par_self,
        var_msg
    );


    // Release cached frame.
    if (frame_a8a98874ae058aff28f4a519a0cb75ec == cache_frame_a8a98874ae058aff28f4a519a0cb75ec) {
        Py_DECREF(frame_a8a98874ae058aff28f4a519a0cb75ec);
    }
    cache_frame_a8a98874ae058aff28f4a519a0cb75ec = NULL;

    assertFrameObject(frame_a8a98874ae058aff28f4a519a0cb75ec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_16__new_message);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_msg);
    Py_DECREF(var_msg);
    var_msg = NULL;

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

    Py_XDECREF(var_msg);
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_16__new_message);
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


static PyObject *impl_future$backports$email$feedparser$$$function_17__pop_message(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_retval = NULL;
    struct Nuitka_FrameObject *frame_de6089235e04d5b829c24d1f03ef9700;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_de6089235e04d5b829c24d1f03ef9700 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_de6089235e04d5b829c24d1f03ef9700, codeobj_de6089235e04d5b829c24d1f03ef9700, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_de6089235e04d5b829c24d1f03ef9700 = cache_frame_de6089235e04d5b829c24d1f03ef9700;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_de6089235e04d5b829c24d1f03ef9700);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_de6089235e04d5b829c24d1f03ef9700) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__msgstack);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_de6089235e04d5b829c24d1f03ef9700->m_frame.f_lineno = 209;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_pop);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_retval == NULL);
        var_retval = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__msgstack);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 210;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__msgstack);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_assattr_name_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, -1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__cur, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__cur, tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de6089235e04d5b829c24d1f03ef9700);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de6089235e04d5b829c24d1f03ef9700);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de6089235e04d5b829c24d1f03ef9700, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_de6089235e04d5b829c24d1f03ef9700->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de6089235e04d5b829c24d1f03ef9700, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de6089235e04d5b829c24d1f03ef9700,
        type_description_1,
        par_self,
        var_retval
    );


    // Release cached frame.
    if (frame_de6089235e04d5b829c24d1f03ef9700 == cache_frame_de6089235e04d5b829c24d1f03ef9700) {
        Py_DECREF(frame_de6089235e04d5b829c24d1f03ef9700);
    }
    cache_frame_de6089235e04d5b829c24d1f03ef9700 = NULL;

    assertFrameObject(frame_de6089235e04d5b829c24d1f03ef9700);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_retval);
    tmp_return_value = var_retval;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_17__pop_message);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_retval);
    Py_DECREF(var_retval);
    var_retval = NULL;

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

    Py_XDECREF(var_retval);
    var_retval = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_17__pop_message);
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


static PyObject *impl_future$backports$email$feedparser$$$function_18__parsegen(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0]);


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_18__parsegen);
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



struct future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_locals {
    nuitka_bool var_close_boundary_seen;
    PyObject *var_firstline;
    PyObject *var_defect;
    PyObject *var_payload;
    PyObject *var_end;
    PyObject *var_epilogue;
    PyObject *var_linesep;
    PyObject *var_bolmo;
    PyObject *var_lastline;
    PyObject *var_msg;
    PyObject *var_boundary;
    PyObject *var_boundaryre;
    PyObject *var_eolmo;
    PyObject *var_capturing_preamble;
    PyObject *var_line;
    PyObject *var_preamble;
    PyObject *var_mo;
    PyObject *var_lines;
    PyObject *var_headers;
    PyObject *var_separator;
    PyObject *var_retval;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_for_loop_3__for_iterator;
    PyObject *tmp_for_loop_3__iter_value;
    PyObject *tmp_for_loop_4__for_iterator;
    PyObject *tmp_for_loop_4__iter_value;
    PyObject *tmp_for_loop_5__for_iterator;
    PyObject *tmp_for_loop_5__iter_value;
    PyObject *tmp_for_loop_6__for_iterator;
    PyObject *tmp_for_loop_6__iter_value;
    PyObject *tmp_for_loop_7__for_iterator;
    PyObject *tmp_for_loop_7__iter_value;
    PyObject *tmp_for_loop_8__for_iterator;
    PyObject *tmp_for_loop_8__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
};

static PyObject *future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_locals *generator_heap = (struct future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 13: goto yield_return_13;
    case 12: goto yield_return_12;
    case 11: goto yield_return_11;
    case 10: goto yield_return_10;
    case 9: goto yield_return_9;
    case 8: goto yield_return_8;
    case 7: goto yield_return_7;
    case 6: goto yield_return_6;
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_close_boundary_seen = NUITKA_BOOL_UNASSIGNED;
    generator_heap->var_firstline = NULL;
    generator_heap->var_defect = NULL;
    generator_heap->var_payload = NULL;
    generator_heap->var_end = NULL;
    generator_heap->var_epilogue = NULL;
    generator_heap->var_linesep = NULL;
    generator_heap->var_bolmo = NULL;
    generator_heap->var_lastline = NULL;
    generator_heap->var_msg = NULL;
    generator_heap->var_boundary = NULL;
    generator_heap->var_boundaryre = NULL;
    generator_heap->var_eolmo = NULL;
    generator_heap->var_capturing_preamble = NULL;
    generator_heap->var_line = NULL;
    generator_heap->var_preamble = NULL;
    generator_heap->var_mo = NULL;
    generator_heap->var_lines = NULL;
    generator_heap->var_headers = NULL;
    generator_heap->var_separator = NULL;
    generator_heap->var_retval = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    generator_heap->tmp_for_loop_8__for_iterator = NULL;
    generator_heap->tmp_for_loop_8__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_f0490cb656a87df6960a4fffa61d9427, module_future$backports$email$feedparser, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 218;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain__new_message);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(generator_heap->var_headers == NULL);
        generator_heap->var_headers = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 222;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET(generator->m_closure[0]);
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__input);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 222;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 222;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                generator_heap->exception_lineno = 222;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_line;
            generator_heap->var_line = tmp_assign_source_4;
            Py_INCREF(generator_heap->var_line);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_compexpr_left_1 = generator_heap->var_line;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
        }

        if (tmp_mvar_value_1 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 223;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_expression_name_1;
            PyObject *tmp_mvar_value_2;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_2 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 224;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_expression_name_1 = tmp_mvar_value_2;
            Py_INCREF(tmp_expression_name_1);
            Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), NULL);
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), &tmp_mvar_value_1, sizeof(PyObject *), &tmp_mvar_value_2, sizeof(PyObject *), NULL);
            if (yield_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 224;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        goto loop_start_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_headerRE);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_headerRE);
        }

        if (tmp_mvar_value_3 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44748 ], 37, 0);
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_args_element_name_1 = generator_heap->var_line;
        generator->m_frame->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_match, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE);
            }

            if (tmp_mvar_value_4 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44785 ], 34, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 230;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_args_element_name_2 = generator_heap->var_line;
            generator->m_frame->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_match, call_args);
            }

            if (tmp_operand_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 230;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_2;
            }
            generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            Py_DECREF(tmp_operand_name_2);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 230;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
                }

                if (tmp_mvar_value_5 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 231;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_4 = tmp_mvar_value_5;
                generator->m_frame->m_frame.f_lineno = 231;
                tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_MissingHeaderBodySeparatorDefect);
                if (tmp_assign_source_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 231;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                assert(generator_heap->var_defect == NULL);
                generator_heap->var_defect = tmp_assign_source_5;
            }
            {
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_args_element_name_4;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 232;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_3 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_policy);
                if (tmp_source_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 232;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_handle_defect);
                Py_DECREF(tmp_source_name_2);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 232;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                    Py_DECREF(tmp_called_name_1);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 232;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_4 = PyCell_GET(generator->m_closure[0]);
                tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__cur);
                if (tmp_args_element_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    generator_heap->exception_lineno = 232;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(generator_heap->var_defect);
                tmp_args_element_name_4 = generator_heap->var_defect;
                generator->m_frame->m_frame.f_lineno = 232;
                {
                    PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
                }

                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_3);
                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 232;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF(tmp_call_result_2);
            }
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_source_name_5;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_5;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 233;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_source_name_5 = PyCell_GET(generator->m_closure[0]);
                tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__input);
                if (tmp_called_instance_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 233;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(generator_heap->var_line);
                tmp_args_element_name_5 = generator_heap->var_line;
                generator->m_frame->m_frame.f_lineno = 233;
                {
                    PyObject *call_args[] = {tmp_args_element_name_5};
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_unreadline, call_args);
                }

                Py_DECREF(tmp_called_instance_5);
                if (tmp_call_result_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 233;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF(tmp_call_result_3);
            }
            branch_no_3:;
        }
        goto loop_end_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(generator_heap->var_headers);
        tmp_called_instance_6 = generator_heap->var_headers;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_args_element_name_6 = generator_heap->var_line;
        generator->m_frame->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_name_6};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_append, call_args);
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 235;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 222;
        generator_heap->type_description_1 = "cboooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_7;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = PyCell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_headers);
        tmp_args_element_name_7 = generator_heap->var_headers;
        generator->m_frame->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain__parse_headers, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 238;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = PyCell_GET(generator->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__headersonly);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PyList_New(0);
            assert(generator_heap->var_lines == NULL);
            generator_heap->var_lines = tmp_assign_source_6;
        }
        loop_start_2:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_source_name_7;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 245;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__input);
            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 245;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 245;
            tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_readline);
            Py_DECREF(tmp_called_instance_8);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 245;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_line;
                generator_heap->var_line = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_2 = generator_heap->var_line;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_6 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 246;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_6;
            tmp_condition_result_5 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_expression_name_2;
                PyObject *tmp_mvar_value_7;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_7 == NULL)) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_7 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 247;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_expression_name_2 = tmp_mvar_value_7;
                Py_INCREF(tmp_expression_name_2);
                Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_4, sizeof(nuitka_bool), &tmp_source_name_6, sizeof(PyObject *), &tmp_attribute_value_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_condition_result_5, sizeof(nuitka_bool), &tmp_compexpr_left_2, sizeof(PyObject *), &tmp_compexpr_right_2, sizeof(PyObject *), &tmp_mvar_value_6, sizeof(PyObject *), &tmp_mvar_value_7, sizeof(PyObject *), NULL);
                generator->m_yield_return_index = 2;
                return tmp_expression_name_2;
                yield_return_2:
                Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_4, sizeof(nuitka_bool), &tmp_source_name_6, sizeof(PyObject *), &tmp_attribute_value_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_condition_result_5, sizeof(nuitka_bool), &tmp_compexpr_left_2, sizeof(PyObject *), &tmp_compexpr_right_2, sizeof(PyObject *), &tmp_mvar_value_6, sizeof(PyObject *), &tmp_mvar_value_7, sizeof(PyObject *), NULL);
                if (yield_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 247;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_yield_result_2 = yield_return_value;
            }
            goto loop_start_2;
            branch_no_5:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_3 = generator_heap->var_line;
            tmp_compexpr_right_3 = const_unicode_empty;
            generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 249;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            goto loop_end_2;
            branch_no_6:;
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT(generator_heap->var_lines);
            tmp_called_instance_9 = generator_heap->var_lines;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_args_element_name_8 = generator_heap->var_line;
            generator->m_frame->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = {tmp_args_element_name_8};
                tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_append, call_args);
            }

            if (tmp_call_result_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 251;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_6);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 244;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_2;
        loop_end_2:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_10;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = PyCell_GET(generator->m_closure[0]);
            tmp_source_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__cur);
            if (tmp_source_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_set_payload);
            Py_DECREF(tmp_source_name_8);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
            }

            if (tmp_mvar_value_8 == NULL) {
                Py_DECREF(tmp_called_name_2);
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_10 = tmp_mvar_value_8;
            CHECK_OBJECT(generator_heap->var_lines);
            tmp_args_element_name_10 = generator_heap->var_lines;
            generator->m_frame->m_frame.f_lineno = 252;
            {
                PyObject *call_args[] = {tmp_args_element_name_10};
                tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_join, call_args);
            }

            if (tmp_args_element_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_name_2);

                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 252;
            tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_9);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_call_result_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 252;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_7);
        }
        goto frame_return_exit_1;
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_source_name_10;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = PyCell_GET(generator->m_closure[0]);
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__cur);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 254;
        tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, const_str_plain_get_content_type);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_unicode_digest_26363b470642ab3fd01ca166046f97e7;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        loop_start_3:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_9;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 261;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = PyCell_GET(generator->m_closure[0]);
            tmp_source_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__input);
            if (tmp_source_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 261;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_push_eof_matcher);
            Py_DECREF(tmp_source_name_11);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 261;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE);
            }

            if (tmp_mvar_value_9 == NULL) {
                Py_DECREF(tmp_called_name_3);
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44785 ], 34, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 261;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_13 = tmp_mvar_value_9;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_match);
            if (tmp_args_element_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_name_3);

                generator_heap->exception_lineno = 261;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 261;
            tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_11);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_call_result_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 261;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_8);
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_12;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 262;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_12 = PyCell_GET(generator->m_closure[0]);
            generator->m_frame->m_frame.f_lineno = 262;
            tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, const_str_plain__parsegen);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 262;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 262;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
                generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
            tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    generator_heap->exception_lineno = 262;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
                generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
            tmp_assign_source_10 = generator_heap->tmp_for_loop_2__iter_value;
            {
                PyObject *old = generator_heap->var_retval;
                generator_heap->var_retval = tmp_assign_source_10;
                Py_INCREF(generator_heap->var_retval);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_mvar_value_10;
            CHECK_OBJECT(generator_heap->var_retval);
            tmp_compexpr_left_5 = generator_heap->var_retval;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_10 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 263;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_compexpr_right_5 = tmp_mvar_value_10;
            tmp_condition_result_8 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_expression_name_3;
                PyObject *tmp_mvar_value_11;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_11 == NULL)) {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_11 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 264;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_3;
                }

                tmp_expression_name_3 = tmp_mvar_value_11;
                Py_INCREF(tmp_expression_name_3);
                Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_7, sizeof(nuitka_bool), &tmp_compexpr_left_4, sizeof(PyObject *), &tmp_compexpr_right_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_source_name_10, sizeof(PyObject *), &tmp_condition_result_8, sizeof(nuitka_bool), &tmp_compexpr_left_5, sizeof(PyObject *), &tmp_compexpr_right_5, sizeof(PyObject *), &tmp_mvar_value_10, sizeof(PyObject *), &tmp_mvar_value_11, sizeof(PyObject *), NULL);
                generator->m_yield_return_index = 3;
                return tmp_expression_name_3;
                yield_return_3:
                Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_7, sizeof(nuitka_bool), &tmp_compexpr_left_4, sizeof(PyObject *), &tmp_compexpr_right_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_source_name_10, sizeof(PyObject *), &tmp_condition_result_8, sizeof(nuitka_bool), &tmp_compexpr_left_5, sizeof(PyObject *), &tmp_compexpr_right_5, sizeof(PyObject *), &tmp_mvar_value_10, sizeof(PyObject *), &tmp_mvar_value_11, sizeof(PyObject *), NULL);
                if (yield_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 264;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_3;
                }
                tmp_yield_result_3 = yield_return_value;
            }
            goto loop_start_4;
            branch_no_8:;
        }
        goto loop_end_4;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 262;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_4;
        loop_end_4:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
        generator_heap->tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_2__for_iterator);
        Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
        generator_heap->tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
        generator_heap->tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_2__for_iterator);
        Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
        generator_heap->tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_13;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 267;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_13 = PyCell_GET(generator->m_closure[0]);
            generator->m_frame->m_frame.f_lineno = 267;
            tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, const_str_plain__pop_message);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 267;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_msg;
                generator_heap->var_msg = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_source_name_14;
            PyObject *tmp_call_result_9;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 271;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain__input);
            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 271;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 271;
            tmp_call_result_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, const_str_plain_pop_eof_matcher);
            Py_DECREF(tmp_called_instance_14);
            if (tmp_call_result_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 271;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_9);
        }
        loop_start_5:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_source_name_15;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 277;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_15 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain__input);
            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 277;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 277;
            tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, const_str_plain_readline);
            Py_DECREF(tmp_called_instance_15);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 277;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_line;
                generator_heap->var_line = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_mvar_value_12;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_6 = generator_heap->var_line;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_12 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 278;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_6 = tmp_mvar_value_12;
            tmp_condition_result_9 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_expression_name_4;
                PyObject *tmp_mvar_value_13;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_13 == NULL)) {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_13 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 279;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_expression_name_4 = tmp_mvar_value_13;
                Py_INCREF(tmp_expression_name_4);
                Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_7, sizeof(nuitka_bool), &tmp_compexpr_left_4, sizeof(PyObject *), &tmp_compexpr_right_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_source_name_10, sizeof(PyObject *), &tmp_condition_result_9, sizeof(nuitka_bool), &tmp_compexpr_left_6, sizeof(PyObject *), &tmp_compexpr_right_6, sizeof(PyObject *), &tmp_mvar_value_12, sizeof(PyObject *), &tmp_mvar_value_13, sizeof(PyObject *), NULL);
                generator->m_yield_return_index = 4;
                return tmp_expression_name_4;
                yield_return_4:
                Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_7, sizeof(nuitka_bool), &tmp_compexpr_left_4, sizeof(PyObject *), &tmp_compexpr_right_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_source_name_10, sizeof(PyObject *), &tmp_condition_result_9, sizeof(nuitka_bool), &tmp_compexpr_left_6, sizeof(PyObject *), &tmp_compexpr_right_6, sizeof(PyObject *), &tmp_mvar_value_12, sizeof(PyObject *), &tmp_mvar_value_13, sizeof(PyObject *), NULL);
                if (yield_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 279;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_yield_result_4 = yield_return_value;
            }
            goto loop_start_5;
            branch_no_9:;
        }
        goto loop_end_5;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_5;
        loop_end_5:;
        loop_start_6:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_source_name_16;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 283;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__input);
            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 283;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 283;
            tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, const_str_plain_readline);
            Py_DECREF(tmp_called_instance_16);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 283;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_line;
                assert(old != NULL);
                generator_heap->var_line = tmp_assign_source_13;
                Py_DECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_mvar_value_14;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_7 = generator_heap->var_line;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_14 == NULL)) {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_14 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 284;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_7 = tmp_mvar_value_14;
            tmp_condition_result_10 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_expression_name_5;
                PyObject *tmp_mvar_value_15;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_5;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_15 == NULL)) {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_15 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 285;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_expression_name_5 = tmp_mvar_value_15;
                Py_INCREF(tmp_expression_name_5);
                Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_7, sizeof(nuitka_bool), &tmp_compexpr_left_4, sizeof(PyObject *), &tmp_compexpr_right_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_source_name_10, sizeof(PyObject *), &tmp_condition_result_10, sizeof(nuitka_bool), &tmp_compexpr_left_7, sizeof(PyObject *), &tmp_compexpr_right_7, sizeof(PyObject *), &tmp_mvar_value_14, sizeof(PyObject *), &tmp_mvar_value_15, sizeof(PyObject *), NULL);
                generator->m_yield_return_index = 5;
                return tmp_expression_name_5;
                yield_return_5:
                Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_7, sizeof(nuitka_bool), &tmp_compexpr_left_4, sizeof(PyObject *), &tmp_compexpr_right_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_source_name_10, sizeof(PyObject *), &tmp_condition_result_10, sizeof(nuitka_bool), &tmp_compexpr_left_7, sizeof(PyObject *), &tmp_compexpr_right_7, sizeof(PyObject *), &tmp_mvar_value_14, sizeof(PyObject *), &tmp_mvar_value_15, sizeof(PyObject *), NULL);
                if (yield_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 285;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_yield_result_5 = yield_return_value;
            }
            goto loop_start_6;
            branch_no_10:;
        }
        goto loop_end_6;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 282;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_6;
        loop_end_6:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_8 = generator_heap->var_line;
            tmp_compexpr_right_8 = const_unicode_empty;
            generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 288;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_11 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            goto loop_end_3;
            branch_no_11:;
        }
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_source_name_17;
            PyObject *tmp_call_result_10;
            PyObject *tmp_args_element_name_12;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 291;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__input);
            if (tmp_called_instance_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 291;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(generator_heap->var_line);
            tmp_args_element_name_12 = generator_heap->var_line;
            generator->m_frame->m_frame.f_lineno = 291;
            {
                PyObject *call_args[] = {tmp_args_element_name_12};
                tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_17, const_str_plain_unreadline, call_args);
            }

            Py_DECREF(tmp_called_instance_17);
            if (tmp_call_result_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 291;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_10);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_3;
        loop_end_3:;
        goto frame_return_exit_1;
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_source_name_18;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = PyCell_GET(generator->m_closure[0]);
        tmp_called_instance_18 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain__cur);
        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 293;
        tmp_compexpr_left_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, const_str_plain_get_content_maintype);
        Py_DECREF(tmp_called_instance_18);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = const_unicode_plain_message;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 293;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_instance_19;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 296;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_19 = PyCell_GET(generator->m_closure[0]);
            generator->m_frame->m_frame.f_lineno = 296;
            tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, const_str_plain__parsegen);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 296;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 296;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(generator_heap->tmp_for_loop_3__for_iterator == NULL);
            generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_14;
        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
            tmp_next_source_3 = generator_heap->tmp_for_loop_3__for_iterator;
            tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_15 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    generator_heap->exception_lineno = 296;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
                generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
            tmp_assign_source_16 = generator_heap->tmp_for_loop_3__iter_value;
            {
                PyObject *old = generator_heap->var_retval;
                generator_heap->var_retval = tmp_assign_source_16;
                Py_INCREF(generator_heap->var_retval);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_mvar_value_16;
            CHECK_OBJECT(generator_heap->var_retval);
            tmp_compexpr_left_10 = generator_heap->var_retval;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_16 == NULL)) {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_16 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 297;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_compexpr_right_10 = tmp_mvar_value_16;
            tmp_condition_result_13 = (tmp_compexpr_left_10 == tmp_compexpr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
            branch_yes_13:;
            {
                PyObject *tmp_expression_name_6;
                PyObject *tmp_mvar_value_17;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_6;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_17 == NULL)) {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_17 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 298;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_expression_name_6 = tmp_mvar_value_17;
                Py_INCREF(tmp_expression_name_6);
                Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_12, sizeof(nuitka_bool), &tmp_compexpr_left_9, sizeof(PyObject *), &tmp_compexpr_right_9, sizeof(PyObject *), &tmp_called_instance_18, sizeof(PyObject *), &tmp_source_name_18, sizeof(PyObject *), &tmp_condition_result_13, sizeof(nuitka_bool), &tmp_compexpr_left_10, sizeof(PyObject *), &tmp_compexpr_right_10, sizeof(PyObject *), &tmp_mvar_value_16, sizeof(PyObject *), &tmp_mvar_value_17, sizeof(PyObject *), NULL);
                generator->m_yield_return_index = 6;
                return tmp_expression_name_6;
                yield_return_6:
                Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_12, sizeof(nuitka_bool), &tmp_compexpr_left_9, sizeof(PyObject *), &tmp_compexpr_right_9, sizeof(PyObject *), &tmp_called_instance_18, sizeof(PyObject *), &tmp_source_name_18, sizeof(PyObject *), &tmp_condition_result_13, sizeof(nuitka_bool), &tmp_compexpr_left_10, sizeof(PyObject *), &tmp_compexpr_right_10, sizeof(PyObject *), &tmp_mvar_value_16, sizeof(PyObject *), &tmp_mvar_value_17, sizeof(PyObject *), NULL);
                if (yield_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 298;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_yield_result_6 = yield_return_value;
            }
            goto loop_start_7;
            branch_no_13:;
        }
        goto loop_end_7;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 296;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_7;
        loop_end_7:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
        generator_heap->tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_3__for_iterator);
        Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
        generator_heap->tmp_for_loop_3__for_iterator = NULL;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_3;
        generator_heap->exception_value = generator_heap->exception_keeper_value_3;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
        generator_heap->tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_3__for_iterator);
        Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
        generator_heap->tmp_for_loop_3__for_iterator = NULL;

        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_call_result_11;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 301;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_20 = PyCell_GET(generator->m_closure[0]);
            generator->m_frame->m_frame.f_lineno = 301;
            tmp_call_result_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, const_str_plain__pop_message);
            if (tmp_call_result_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 301;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_11);
        }
        goto frame_return_exit_1;
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_source_name_19;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = PyCell_GET(generator->m_closure[0]);
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__cur);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 303;
        tmp_compexpr_left_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, const_str_plain_get_content_maintype);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_compexpr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_11 = const_unicode_plain_multipart;
        generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        Py_DECREF(tmp_compexpr_left_11);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 303;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_instance_22;
            PyObject *tmp_source_name_20;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 304;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_20 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_22 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain__cur);
            if (tmp_called_instance_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 304;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 304;
            tmp_assign_source_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, const_str_plain_get_boundary);
            Py_DECREF(tmp_called_instance_22);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 304;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(generator_heap->var_boundary == NULL);
            generator_heap->var_boundary = tmp_assign_source_17;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT(generator_heap->var_boundary);
            tmp_compexpr_left_12 = generator_heap->var_boundary;
            tmp_compexpr_right_12 = Py_None;
            tmp_condition_result_15 = (tmp_compexpr_left_12 == tmp_compexpr_right_12) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_called_instance_23;
                PyObject *tmp_mvar_value_18;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

                if (unlikely(tmp_mvar_value_18 == NULL)) {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
                }

                if (tmp_mvar_value_18 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 310;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_23 = tmp_mvar_value_18;
                generator->m_frame->m_frame.f_lineno = 310;
                tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, const_str_plain_NoBoundaryInMultipartDefect);
                if (tmp_assign_source_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 310;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->var_defect;
                    generator_heap->var_defect = tmp_assign_source_18;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_21;
                PyObject *tmp_source_name_22;
                PyObject *tmp_call_result_12;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_source_name_23;
                PyObject *tmp_args_element_name_14;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 311;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_22 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_21 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_policy);
                if (tmp_source_name_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 311;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_handle_defect);
                Py_DECREF(tmp_source_name_21);
                if (tmp_called_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 311;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                    Py_DECREF(tmp_called_name_4);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 311;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_23 = PyCell_GET(generator->m_closure[0]);
                tmp_args_element_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain__cur);
                if (tmp_args_element_name_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_4);

                    generator_heap->exception_lineno = 311;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(generator_heap->var_defect);
                tmp_args_element_name_14 = generator_heap->var_defect;
                generator->m_frame->m_frame.f_lineno = 311;
                {
                    PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14};
                    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
                }

                Py_DECREF(tmp_called_name_4);
                Py_DECREF(tmp_args_element_name_13);
                if (tmp_call_result_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 311;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_12);
            }
            {
                PyObject *tmp_assign_source_19;
                tmp_assign_source_19 = PyList_New(0);
                assert(generator_heap->var_lines == NULL);
                generator_heap->var_lines = tmp_assign_source_19;
            }
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_source_name_24;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 313;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_24 = PyCell_GET(generator->m_closure[0]);
                tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain__input);
                if (tmp_iter_arg_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 313;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_4);
                Py_DECREF(tmp_iter_arg_4);
                if (tmp_assign_source_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 313;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(generator_heap->tmp_for_loop_4__for_iterator == NULL);
                generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_20;
            }
            // Tried code:
            loop_start_8:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_21;
                CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
                tmp_next_source_4 = generator_heap->tmp_for_loop_4__for_iterator;
                tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_4);
                if (tmp_assign_source_21 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_8;
                    } else {

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        generator_heap->exception_lineno = 313;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
                    generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_21;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
                tmp_assign_source_22 = generator_heap->tmp_for_loop_4__iter_value;
                {
                    PyObject *old = generator_heap->var_line;
                    generator_heap->var_line = tmp_assign_source_22;
                    Py_INCREF(generator_heap->var_line);
                    Py_XDECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_16;
                PyObject *tmp_compexpr_left_13;
                PyObject *tmp_compexpr_right_13;
                PyObject *tmp_mvar_value_19;
                CHECK_OBJECT(generator_heap->var_line);
                tmp_compexpr_left_13 = generator_heap->var_line;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_19 == NULL)) {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_19 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 314;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_5;
                }

                tmp_compexpr_right_13 = tmp_mvar_value_19;
                tmp_condition_result_16 = (tmp_compexpr_left_13 == tmp_compexpr_right_13) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_16;
                } else {
                    goto branch_no_16;
                }
                branch_yes_16:;
                {
                    PyObject *tmp_expression_name_7;
                    PyObject *tmp_mvar_value_20;
                    NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_7;
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                    if (unlikely(tmp_mvar_value_20 == NULL)) {
                        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                    }

                    if (tmp_mvar_value_20 == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 315;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto try_except_handler_5;
                    }

                    tmp_expression_name_7 = tmp_mvar_value_20;
                    Py_INCREF(tmp_expression_name_7);
                    Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_15, sizeof(nuitka_bool), &tmp_compexpr_left_12, sizeof(PyObject *), &tmp_compexpr_right_12, sizeof(PyObject *), &tmp_condition_result_16, sizeof(nuitka_bool), &tmp_compexpr_left_13, sizeof(PyObject *), &tmp_compexpr_right_13, sizeof(PyObject *), &tmp_mvar_value_19, sizeof(PyObject *), &tmp_mvar_value_20, sizeof(PyObject *), NULL);
                    generator->m_yield_return_index = 7;
                    return tmp_expression_name_7;
                    yield_return_7:
                    Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_15, sizeof(nuitka_bool), &tmp_compexpr_left_12, sizeof(PyObject *), &tmp_compexpr_right_12, sizeof(PyObject *), &tmp_condition_result_16, sizeof(nuitka_bool), &tmp_compexpr_left_13, sizeof(PyObject *), &tmp_compexpr_right_13, sizeof(PyObject *), &tmp_mvar_value_19, sizeof(PyObject *), &tmp_mvar_value_20, sizeof(PyObject *), NULL);
                    if (yield_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 315;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto try_except_handler_5;
                    }
                    tmp_yield_result_7 = yield_return_value;
                }
                goto loop_start_8;
                branch_no_16:;
            }
            {
                PyObject *tmp_called_instance_24;
                PyObject *tmp_call_result_13;
                PyObject *tmp_args_element_name_15;
                CHECK_OBJECT(generator_heap->var_lines);
                tmp_called_instance_24 = generator_heap->var_lines;
                CHECK_OBJECT(generator_heap->var_line);
                tmp_args_element_name_15 = generator_heap->var_line;
                generator->m_frame->m_frame.f_lineno = 317;
                {
                    PyObject *call_args[] = {tmp_args_element_name_15};
                    tmp_call_result_13 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, const_str_plain_append, call_args);
                }

                if (tmp_call_result_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 317;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                Py_DECREF(tmp_call_result_13);
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 313;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_5;
            }
            goto loop_start_8;
            loop_end_8:;
            goto try_end_4;
            // Exception handler code:
            try_except_handler_5:;
            generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
            generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
            generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
            generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
            generator_heap->exception_type = NULL;
            generator_heap->exception_value = NULL;
            generator_heap->exception_tb = NULL;
            generator_heap->exception_lineno = 0;

            Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
            generator_heap->tmp_for_loop_4__iter_value = NULL;

            CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_4__for_iterator);
            Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
            generator_heap->tmp_for_loop_4__for_iterator = NULL;

            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_4;
            generator_heap->exception_value = generator_heap->exception_keeper_value_4;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
            generator_heap->tmp_for_loop_4__iter_value = NULL;

            CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_4__for_iterator);
            Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
            generator_heap->tmp_for_loop_4__for_iterator = NULL;

            {
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_25;
                PyObject *tmp_source_name_26;
                PyObject *tmp_call_result_14;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_called_instance_25;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_args_element_name_17;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 318;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_26 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_25 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain__cur);
                if (tmp_source_name_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 318;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_set_payload);
                Py_DECREF(tmp_source_name_25);
                if (tmp_called_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 318;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

                if (unlikely(tmp_mvar_value_21 == NULL)) {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
                }

                if (tmp_mvar_value_21 == NULL) {
                    Py_DECREF(tmp_called_name_5);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 318;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_25 = tmp_mvar_value_21;
                CHECK_OBJECT(generator_heap->var_lines);
                tmp_args_element_name_17 = generator_heap->var_lines;
                generator->m_frame->m_frame.f_lineno = 318;
                {
                    PyObject *call_args[] = {tmp_args_element_name_17};
                    tmp_args_element_name_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, const_str_plain_join, call_args);
                }

                if (tmp_args_element_name_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_5);

                    generator_heap->exception_lineno = 318;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                generator->m_frame->m_frame.f_lineno = 318;
                tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_16);
                Py_DECREF(tmp_called_name_5);
                Py_DECREF(tmp_args_element_name_16);
                if (tmp_call_result_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 318;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_14);
            }
            goto frame_return_exit_1;
            branch_no_15:;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            PyObject *tmp_called_instance_26;
            PyObject *tmp_called_instance_27;
            PyObject *tmp_source_name_27;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 321;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_27 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_27 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain__cur);
            if (tmp_called_instance_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 321;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 321;
            tmp_called_instance_26 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_27, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_91d41a6ab7ab30629270f4a6443baff0_tuple, 0));

            Py_DECREF(tmp_called_instance_27);
            if (tmp_called_instance_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 321;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 321;
            tmp_compexpr_left_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, const_str_plain_lower);
            Py_DECREF(tmp_called_instance_26);
            if (tmp_compexpr_left_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 321;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_14 = const_tuple_unicode_plain_7bit_unicode_plain_8bit_unicode_plain_binary_tuple;
            generator_heap->tmp_res = PySequence_Contains(tmp_compexpr_right_14, tmp_compexpr_left_14);
            Py_DECREF(tmp_compexpr_left_14);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 321;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_17 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
            branch_yes_17:;
            {
                PyObject *tmp_assign_source_23;
                PyObject *tmp_called_instance_28;
                PyObject *tmp_mvar_value_22;
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

                if (unlikely(tmp_mvar_value_22 == NULL)) {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
                }

                if (tmp_mvar_value_22 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 323;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_28 = tmp_mvar_value_22;
                generator->m_frame->m_frame.f_lineno = 323;
                tmp_assign_source_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_28, const_str_digest_6c161183deefbb0f435d9ec5f5f973fd);
                if (tmp_assign_source_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 323;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->var_defect;
                    generator_heap->var_defect = tmp_assign_source_23;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_28;
                PyObject *tmp_source_name_29;
                PyObject *tmp_call_result_15;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_source_name_30;
                PyObject *tmp_args_element_name_19;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 324;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_29 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_policy);
                if (tmp_source_name_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 324;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_handle_defect);
                Py_DECREF(tmp_source_name_28);
                if (tmp_called_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 324;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                    Py_DECREF(tmp_called_name_6);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 324;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_30 = PyCell_GET(generator->m_closure[0]);
                tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain__cur);
                if (tmp_args_element_name_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_6);

                    generator_heap->exception_lineno = 324;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(generator_heap->var_defect);
                tmp_args_element_name_19 = generator_heap->var_defect;
                generator->m_frame->m_frame.f_lineno = 324;
                {
                    PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19};
                    tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
                }

                Py_DECREF(tmp_called_name_6);
                Py_DECREF(tmp_args_element_name_18);
                if (tmp_call_result_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 324;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_15);
            }
            branch_no_17:;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_unicode_digest_85fe97af08c9a213aa891dc673aeaa3e;
            CHECK_OBJECT(generator_heap->var_boundary);
            tmp_right_name_1 = generator_heap->var_boundary;
            tmp_assign_source_24 = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 329;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(generator_heap->var_separator == NULL);
            generator_heap->var_separator = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_31;
            PyObject *tmp_mvar_value_23;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_mvar_value_24;
            PyObject *tmp_args_element_name_21;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re);

            if (unlikely(tmp_mvar_value_23 == NULL)) {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
            }

            if (tmp_mvar_value_23 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 6149 ], 31, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 330;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_31 = tmp_mvar_value_23;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_compile);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 330;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_3 = const_unicode_digest_9a1ab11b6c4fec034ed7b39074171b81;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re);

            if (unlikely(tmp_mvar_value_24 == NULL)) {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
            }

            if (tmp_mvar_value_24 == NULL) {
                Py_DECREF(tmp_called_name_7);
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 6149 ], 31, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 331;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_29 = tmp_mvar_value_24;
            CHECK_OBJECT(generator_heap->var_separator);
            tmp_args_element_name_21 = generator_heap->var_separator;
            generator->m_frame->m_frame.f_lineno = 331;
            {
                PyObject *call_args[] = {tmp_args_element_name_21};
                tmp_right_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_29, const_str_plain_escape, call_args);
            }

            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_name_7);

                generator_heap->exception_lineno = 331;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_left_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_name_7);

                generator_heap->exception_lineno = 331;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_unicode_digest_76b800da635a7236c5d83506a46bb351;
            tmp_args_element_name_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_3);
            Py_DECREF(tmp_left_name_2);
            if (tmp_args_element_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_called_name_7);

                generator_heap->exception_lineno = 331;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 330;
            tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_20);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_20);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 330;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(generator_heap->var_boundaryre == NULL);
            generator_heap->var_boundaryre = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = Py_True;
            assert(generator_heap->var_capturing_preamble == NULL);
            Py_INCREF(tmp_assign_source_26);
            generator_heap->var_capturing_preamble = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = PyList_New(0);
            assert(generator_heap->var_preamble == NULL);
            generator_heap->var_preamble = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = Py_False;
            assert(generator_heap->var_linesep == NULL);
            Py_INCREF(tmp_assign_source_28);
            generator_heap->var_linesep = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_assign_source_29;
            tmp_assign_source_29 = NUITKA_BOOL_FALSE;
            generator_heap->var_close_boundary_seen = tmp_assign_source_29;
        }
        loop_start_9:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_source_name_32;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 338;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_32 = PyCell_GET(generator->m_closure[0]);
            tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain__input);
            if (tmp_called_instance_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 338;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator->m_frame->m_frame.f_lineno = 338;
            tmp_assign_source_30 = CALL_METHOD_NO_ARGS(tmp_called_instance_30, const_str_plain_readline);
            Py_DECREF(tmp_called_instance_30);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 338;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_line;
                generator_heap->var_line = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_15;
            PyObject *tmp_compexpr_right_15;
            PyObject *tmp_mvar_value_25;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_15 = generator_heap->var_line;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_25 == NULL)) {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_25 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 339;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_15 = tmp_mvar_value_25;
            tmp_condition_result_18 = (tmp_compexpr_left_15 == tmp_compexpr_right_15) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
            branch_yes_18:;
            {
                PyObject *tmp_expression_name_8;
                PyObject *tmp_mvar_value_26;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_8;
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_26 == NULL)) {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_26 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 340;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_expression_name_8 = tmp_mvar_value_26;
                Py_INCREF(tmp_expression_name_8);
                Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_18, sizeof(nuitka_bool), &tmp_compexpr_left_15, sizeof(PyObject *), &tmp_compexpr_right_15, sizeof(PyObject *), &tmp_mvar_value_25, sizeof(PyObject *), &tmp_mvar_value_26, sizeof(PyObject *), NULL);
                generator->m_yield_return_index = 8;
                return tmp_expression_name_8;
                yield_return_8:
                Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_18, sizeof(nuitka_bool), &tmp_compexpr_left_15, sizeof(PyObject *), &tmp_compexpr_right_15, sizeof(PyObject *), &tmp_mvar_value_25, sizeof(PyObject *), &tmp_mvar_value_26, sizeof(PyObject *), NULL);
                if (yield_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 340;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_yield_result_8 = yield_return_value;
            }
            goto loop_start_9;
            branch_no_18:;
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_16;
            PyObject *tmp_compexpr_right_16;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_16 = generator_heap->var_line;
            tmp_compexpr_right_16 = const_unicode_empty;
            generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_16, tmp_compexpr_right_16);
            if (generator_heap->tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 342;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_19 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
            branch_yes_19:;
            goto loop_end_9;
            branch_no_19:;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_name_22;
            CHECK_OBJECT(generator_heap->var_boundaryre);
            tmp_called_instance_31 = generator_heap->var_boundaryre;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_args_element_name_22 = generator_heap->var_line;
            generator->m_frame->m_frame.f_lineno = 344;
            {
                PyObject *call_args[] = {tmp_args_element_name_22};
                tmp_assign_source_31 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_31, const_str_plain_match, call_args);
            }

            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 344;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = generator_heap->var_mo;
                generator_heap->var_mo = tmp_assign_source_31;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_20;
            int tmp_truth_name_2;
            CHECK_OBJECT(generator_heap->var_mo);
            tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->var_mo);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 345;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_20 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
            branch_yes_20:;
            {
                nuitka_bool tmp_condition_result_21;
                PyObject *tmp_called_instance_32;
                PyObject *tmp_call_result_16;
                int tmp_truth_name_3;
                CHECK_OBJECT(generator_heap->var_mo);
                tmp_called_instance_32 = generator_heap->var_mo;
                generator->m_frame->m_frame.f_lineno = 350;
                tmp_call_result_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_32, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_unicode_plain_end_tuple, 0));

                if (tmp_call_result_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 350;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_16);
                if (tmp_truth_name_3 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_call_result_16);

                    generator_heap->exception_lineno = 350;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_21 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_call_result_16);
                if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_21;
                } else {
                    goto branch_no_21;
                }
                branch_yes_21:;
                {
                    nuitka_bool tmp_assign_source_32;
                    tmp_assign_source_32 = NUITKA_BOOL_TRUE;
                    generator_heap->var_close_boundary_seen = tmp_assign_source_32;
                }
                {
                    PyObject *tmp_assign_source_33;
                    PyObject *tmp_called_instance_33;
                    CHECK_OBJECT(generator_heap->var_mo);
                    tmp_called_instance_33 = generator_heap->var_mo;
                    generator->m_frame->m_frame.f_lineno = 352;
                    tmp_assign_source_33 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_33, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_unicode_plain_linesep_tuple, 0));

                    if (tmp_assign_source_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 352;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = generator_heap->var_linesep;
                        assert(old != NULL);
                        generator_heap->var_linesep = tmp_assign_source_33;
                        Py_DECREF(old);
                    }

                }
                goto loop_end_9;
                branch_no_21:;
            }
            {
                nuitka_bool tmp_condition_result_22;
                int tmp_truth_name_4;
                CHECK_OBJECT(generator_heap->var_capturing_preamble);
                tmp_truth_name_4 = CHECK_IF_TRUE(generator_heap->var_capturing_preamble);
                if (tmp_truth_name_4 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 355;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_22 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_22;
                } else {
                    goto branch_no_22;
                }
                branch_yes_22:;
                {
                    nuitka_bool tmp_condition_result_23;
                    int tmp_truth_name_5;
                    CHECK_OBJECT(generator_heap->var_preamble);
                    tmp_truth_name_5 = CHECK_IF_TRUE(generator_heap->var_preamble);
                    assert(!(tmp_truth_name_5 == -1));
                    tmp_condition_result_23 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_23;
                    } else {
                        goto branch_no_23;
                    }
                    branch_yes_23:;
                    {
                        PyObject *tmp_assign_source_34;
                        PyObject *tmp_subscribed_name_1;
                        PyObject *tmp_subscript_name_1;
                        CHECK_OBJECT(generator_heap->var_preamble);
                        tmp_subscribed_name_1 = generator_heap->var_preamble;
                        tmp_subscript_name_1 = const_int_neg_1;
                        tmp_assign_source_34 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, -1);
                        if (tmp_assign_source_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 359;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = generator_heap->var_lastline;
                            generator_heap->var_lastline = tmp_assign_source_34;
                            Py_XDECREF(old);
                        }

                    }
                    {
                        PyObject *tmp_assign_source_35;
                        PyObject *tmp_called_instance_34;
                        PyObject *tmp_mvar_value_27;
                        PyObject *tmp_args_element_name_23;
                        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);

                        if (unlikely(tmp_mvar_value_27 == NULL)) {
                            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);
                        }

                        if (tmp_mvar_value_27 == NULL) {

                            generator_heap->exception_type = PyExc_NameError;
                            Py_INCREF(generator_heap->exception_type);
                            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44819 ], 38, 0);
                            generator_heap->exception_tb = NULL;

                            generator_heap->exception_lineno = 360;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_34 = tmp_mvar_value_27;
                        CHECK_OBJECT(generator_heap->var_lastline);
                        tmp_args_element_name_23 = generator_heap->var_lastline;
                        generator->m_frame->m_frame.f_lineno = 360;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_23};
                            tmp_assign_source_35 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_34, const_str_plain_search, call_args);
                        }

                        if (tmp_assign_source_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 360;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = generator_heap->var_eolmo;
                            generator_heap->var_eolmo = tmp_assign_source_35;
                            Py_XDECREF(old);
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_24;
                        int tmp_truth_name_6;
                        CHECK_OBJECT(generator_heap->var_eolmo);
                        tmp_truth_name_6 = CHECK_IF_TRUE(generator_heap->var_eolmo);
                        if (tmp_truth_name_6 == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 361;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_24 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_24;
                        } else {
                            goto branch_no_24;
                        }
                        branch_yes_24:;
                        {
                            PyObject *tmp_ass_subvalue_1;
                            PyObject *tmp_slice_source_1;
                            PyObject *tmp_slice_upper_1;
                            PyObject *tmp_operand_name_3;
                            PyObject *tmp_len_arg_1;
                            PyObject *tmp_called_instance_35;
                            PyObject *tmp_ass_subscribed_1;
                            PyObject *tmp_ass_subscript_1;
                            int tmp_ass_subscript_res_1;
                            CHECK_OBJECT(generator_heap->var_lastline);
                            tmp_slice_source_1 = generator_heap->var_lastline;
                            CHECK_OBJECT(generator_heap->var_eolmo);
                            tmp_called_instance_35 = generator_heap->var_eolmo;
                            generator->m_frame->m_frame.f_lineno = 362;
                            tmp_len_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_35, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_0_tuple, 0));

                            if (tmp_len_arg_1 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 362;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_operand_name_3 = BUILTIN_LEN(tmp_len_arg_1);
                            Py_DECREF(tmp_len_arg_1);
                            if (tmp_operand_name_3 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 362;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_slice_upper_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_3);
                            Py_DECREF(tmp_operand_name_3);
                            if (tmp_slice_upper_1 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 362;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_ass_subvalue_1 = LOOKUP_SLICE(tmp_slice_source_1, Py_None, tmp_slice_upper_1);
                            Py_DECREF(tmp_slice_upper_1);
                            if (tmp_ass_subvalue_1 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 362;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT(generator_heap->var_preamble);
                            tmp_ass_subscribed_1 = generator_heap->var_preamble;
                            tmp_ass_subscript_1 = const_int_neg_1;
                            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1);
                            Py_DECREF(tmp_ass_subvalue_1);
                            if (tmp_ass_subscript_res_1 == false) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 362;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                        }
                        branch_no_24:;
                    }
                    {
                        PyObject *tmp_assattr_name_1;
                        PyObject *tmp_called_instance_36;
                        PyObject *tmp_mvar_value_28;
                        PyObject *tmp_args_element_name_24;
                        PyObject *tmp_assattr_target_1;
                        PyObject *tmp_source_name_33;
                        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

                        if (unlikely(tmp_mvar_value_28 == NULL)) {
                            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
                        }

                        if (tmp_mvar_value_28 == NULL) {

                            generator_heap->exception_type = PyExc_NameError;
                            Py_INCREF(generator_heap->exception_type);
                            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
                            generator_heap->exception_tb = NULL;

                            generator_heap->exception_lineno = 363;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_36 = tmp_mvar_value_28;
                        CHECK_OBJECT(generator_heap->var_preamble);
                        tmp_args_element_name_24 = generator_heap->var_preamble;
                        generator->m_frame->m_frame.f_lineno = 363;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_24};
                            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_36, const_str_plain_join, call_args);
                        }

                        if (tmp_assattr_name_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 363;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        if (PyCell_GET(generator->m_closure[0]) == NULL) {
                            Py_DECREF(tmp_assattr_name_1);
                            generator_heap->exception_type = PyExc_NameError;
                            Py_INCREF(generator_heap->exception_type);
                            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                            generator_heap->exception_tb = NULL;

                            generator_heap->exception_lineno = 363;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_33 = PyCell_GET(generator->m_closure[0]);
                        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_33, const_str_plain__cur);
                        if (tmp_assattr_target_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                            Py_DECREF(tmp_assattr_name_1);

                            generator_heap->exception_lineno = 363;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_preamble, tmp_assattr_name_1);
                        Py_DECREF(tmp_assattr_name_1);
                        Py_DECREF(tmp_assattr_target_1);
                        if (generator_heap->tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 363;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    branch_no_23:;
                }
                {
                    PyObject *tmp_assign_source_36;
                    tmp_assign_source_36 = Py_False;
                    {
                        PyObject *old = generator_heap->var_capturing_preamble;
                        assert(old != NULL);
                        generator_heap->var_capturing_preamble = tmp_assign_source_36;
                        Py_INCREF(generator_heap->var_capturing_preamble);
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_called_instance_37;
                    PyObject *tmp_source_name_34;
                    PyObject *tmp_call_result_17;
                    PyObject *tmp_args_element_name_25;
                    if (PyCell_GET(generator->m_closure[0]) == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 365;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_34 = PyCell_GET(generator->m_closure[0]);
                    tmp_called_instance_37 = LOOKUP_ATTRIBUTE(tmp_source_name_34, const_str_plain__input);
                    if (tmp_called_instance_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 365;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(generator_heap->var_line);
                    tmp_args_element_name_25 = generator_heap->var_line;
                    generator->m_frame->m_frame.f_lineno = 365;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_25};
                        tmp_call_result_17 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_37, const_str_plain_unreadline, call_args);
                    }

                    Py_DECREF(tmp_called_instance_37);
                    if (tmp_call_result_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 365;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_17);
                }
                goto loop_start_9;
                branch_no_22:;
            }
            loop_start_10:;
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_called_instance_38;
                PyObject *tmp_source_name_35;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 372;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_35 = PyCell_GET(generator->m_closure[0]);
                tmp_called_instance_38 = LOOKUP_ATTRIBUTE(tmp_source_name_35, const_str_plain__input);
                if (tmp_called_instance_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 372;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                generator->m_frame->m_frame.f_lineno = 372;
                tmp_assign_source_37 = CALL_METHOD_NO_ARGS(tmp_called_instance_38, const_str_plain_readline);
                Py_DECREF(tmp_called_instance_38);
                if (tmp_assign_source_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 372;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->var_line;
                    assert(old != NULL);
                    generator_heap->var_line = tmp_assign_source_37;
                    Py_DECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_25;
                PyObject *tmp_compexpr_left_17;
                PyObject *tmp_compexpr_right_17;
                PyObject *tmp_mvar_value_29;
                CHECK_OBJECT(generator_heap->var_line);
                tmp_compexpr_left_17 = generator_heap->var_line;
                tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_29 == NULL)) {
                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_29 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 373;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_17 = tmp_mvar_value_29;
                tmp_condition_result_25 = (tmp_compexpr_left_17 == tmp_compexpr_right_17) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_25;
                } else {
                    goto branch_no_25;
                }
                branch_yes_25:;
                {
                    PyObject *tmp_expression_name_9;
                    PyObject *tmp_mvar_value_30;
                    NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_9;
                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                    if (unlikely(tmp_mvar_value_30 == NULL)) {
                        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                    }

                    if (tmp_mvar_value_30 == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 374;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_expression_name_9 = tmp_mvar_value_30;
                    Py_INCREF(tmp_expression_name_9);
                    Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_20, sizeof(nuitka_bool), &tmp_truth_name_2, sizeof(int), &tmp_condition_result_25, sizeof(nuitka_bool), &tmp_compexpr_left_17, sizeof(PyObject *), &tmp_compexpr_right_17, sizeof(PyObject *), &tmp_mvar_value_29, sizeof(PyObject *), &tmp_mvar_value_30, sizeof(PyObject *), NULL);
                    generator->m_yield_return_index = 9;
                    return tmp_expression_name_9;
                    yield_return_9:
                    Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_20, sizeof(nuitka_bool), &tmp_truth_name_2, sizeof(int), &tmp_condition_result_25, sizeof(nuitka_bool), &tmp_compexpr_left_17, sizeof(PyObject *), &tmp_compexpr_right_17, sizeof(PyObject *), &tmp_mvar_value_29, sizeof(PyObject *), &tmp_mvar_value_30, sizeof(PyObject *), NULL);
                    if (yield_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 374;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_yield_result_9 = yield_return_value;
                }
                goto loop_start_10;
                branch_no_25:;
            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_called_instance_39;
                PyObject *tmp_args_element_name_26;
                CHECK_OBJECT(generator_heap->var_boundaryre);
                tmp_called_instance_39 = generator_heap->var_boundaryre;
                CHECK_OBJECT(generator_heap->var_line);
                tmp_args_element_name_26 = generator_heap->var_line;
                generator->m_frame->m_frame.f_lineno = 376;
                {
                    PyObject *call_args[] = {tmp_args_element_name_26};
                    tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_39, const_str_plain_match, call_args);
                }

                if (tmp_assign_source_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 376;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->var_mo;
                    assert(old != NULL);
                    generator_heap->var_mo = tmp_assign_source_38;
                    Py_DECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_26;
                PyObject *tmp_operand_name_4;
                CHECK_OBJECT(generator_heap->var_mo);
                tmp_operand_name_4 = generator_heap->var_mo;
                generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
                if (generator_heap->tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 377;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_26 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_26;
                } else {
                    goto branch_no_26;
                }
                branch_yes_26:;
                {
                    PyObject *tmp_called_instance_40;
                    PyObject *tmp_source_name_36;
                    PyObject *tmp_call_result_18;
                    PyObject *tmp_args_element_name_27;
                    if (PyCell_GET(generator->m_closure[0]) == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 378;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_36 = PyCell_GET(generator->m_closure[0]);
                    tmp_called_instance_40 = LOOKUP_ATTRIBUTE(tmp_source_name_36, const_str_plain__input);
                    if (tmp_called_instance_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 378;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(generator_heap->var_line);
                    tmp_args_element_name_27 = generator_heap->var_line;
                    generator->m_frame->m_frame.f_lineno = 378;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_27};
                        tmp_call_result_18 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_40, const_str_plain_unreadline, call_args);
                    }

                    Py_DECREF(tmp_called_instance_40);
                    if (tmp_call_result_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 378;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_18);
                }
                goto loop_end_10;
                branch_no_26:;
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 371;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto loop_start_10;
            loop_end_10:;
            {
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_37;
                PyObject *tmp_source_name_38;
                PyObject *tmp_call_result_19;
                PyObject *tmp_args_element_name_28;
                PyObject *tmp_source_name_39;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 382;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_38 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_37 = LOOKUP_ATTRIBUTE(tmp_source_name_38, const_str_plain__input);
                if (tmp_source_name_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 382;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_37, const_str_plain_push_eof_matcher);
                Py_DECREF(tmp_source_name_37);
                if (tmp_called_name_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 382;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(generator_heap->var_boundaryre);
                tmp_source_name_39 = generator_heap->var_boundaryre;
                tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_39, const_str_plain_match);
                if (tmp_args_element_name_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_8);

                    generator_heap->exception_lineno = 382;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                generator->m_frame->m_frame.f_lineno = 382;
                tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_28);
                Py_DECREF(tmp_called_name_8);
                Py_DECREF(tmp_args_element_name_28);
                if (tmp_call_result_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 382;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_19);
            }
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_iter_arg_5;
                PyObject *tmp_called_instance_41;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 383;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_41 = PyCell_GET(generator->m_closure[0]);
                generator->m_frame->m_frame.f_lineno = 383;
                tmp_iter_arg_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_41, const_str_plain__parsegen);
                if (tmp_iter_arg_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 383;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_39 = MAKE_ITERATOR(tmp_iter_arg_5);
                Py_DECREF(tmp_iter_arg_5);
                if (tmp_assign_source_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 383;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->tmp_for_loop_5__for_iterator;
                    generator_heap->tmp_for_loop_5__for_iterator = tmp_assign_source_39;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            loop_start_11:;
            {
                PyObject *tmp_next_source_5;
                PyObject *tmp_assign_source_40;
                CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
                tmp_next_source_5 = generator_heap->tmp_for_loop_5__for_iterator;
                tmp_assign_source_40 = ITERATOR_NEXT(tmp_next_source_5);
                if (tmp_assign_source_40 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_11;
                    } else {

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        generator_heap->exception_lineno = 383;
                        goto try_except_handler_6;
                    }
                }

                {
                    PyObject *old = generator_heap->tmp_for_loop_5__iter_value;
                    generator_heap->tmp_for_loop_5__iter_value = tmp_assign_source_40;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_41;
                CHECK_OBJECT(generator_heap->tmp_for_loop_5__iter_value);
                tmp_assign_source_41 = generator_heap->tmp_for_loop_5__iter_value;
                {
                    PyObject *old = generator_heap->var_retval;
                    generator_heap->var_retval = tmp_assign_source_41;
                    Py_INCREF(generator_heap->var_retval);
                    Py_XDECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_27;
                PyObject *tmp_compexpr_left_18;
                PyObject *tmp_compexpr_right_18;
                PyObject *tmp_mvar_value_31;
                CHECK_OBJECT(generator_heap->var_retval);
                tmp_compexpr_left_18 = generator_heap->var_retval;
                tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_31 == NULL)) {
                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_31 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 384;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_6;
                }

                tmp_compexpr_right_18 = tmp_mvar_value_31;
                tmp_condition_result_27 = (tmp_compexpr_left_18 == tmp_compexpr_right_18) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_27;
                } else {
                    goto branch_no_27;
                }
                branch_yes_27:;
                {
                    PyObject *tmp_expression_name_10;
                    PyObject *tmp_mvar_value_32;
                    NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_10;
                    tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                    if (unlikely(tmp_mvar_value_32 == NULL)) {
                        tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                    }

                    if (tmp_mvar_value_32 == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 385;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto try_except_handler_6;
                    }

                    tmp_expression_name_10 = tmp_mvar_value_32;
                    Py_INCREF(tmp_expression_name_10);
                    Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_20, sizeof(nuitka_bool), &tmp_truth_name_2, sizeof(int), &tmp_condition_result_27, sizeof(nuitka_bool), &tmp_compexpr_left_18, sizeof(PyObject *), &tmp_compexpr_right_18, sizeof(PyObject *), &tmp_mvar_value_31, sizeof(PyObject *), &tmp_mvar_value_32, sizeof(PyObject *), NULL);
                    generator->m_yield_return_index = 10;
                    return tmp_expression_name_10;
                    yield_return_10:
                    Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_20, sizeof(nuitka_bool), &tmp_truth_name_2, sizeof(int), &tmp_condition_result_27, sizeof(nuitka_bool), &tmp_compexpr_left_18, sizeof(PyObject *), &tmp_compexpr_right_18, sizeof(PyObject *), &tmp_mvar_value_31, sizeof(PyObject *), &tmp_mvar_value_32, sizeof(PyObject *), NULL);
                    if (yield_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 385;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto try_except_handler_6;
                    }
                    tmp_yield_result_10 = yield_return_value;
                }
                goto loop_start_11;
                branch_no_27:;
            }
            goto loop_end_11;
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 383;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_6;
            }
            goto loop_start_11;
            loop_end_11:;
            goto try_end_5;
            // Exception handler code:
            try_except_handler_6:;
            generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
            generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
            generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
            generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
            generator_heap->exception_type = NULL;
            generator_heap->exception_value = NULL;
            generator_heap->exception_tb = NULL;
            generator_heap->exception_lineno = 0;

            Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
            generator_heap->tmp_for_loop_5__iter_value = NULL;

            CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_5__for_iterator);
            Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
            generator_heap->tmp_for_loop_5__for_iterator = NULL;

            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_5;
            generator_heap->exception_value = generator_heap->exception_keeper_value_5;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

            goto frame_exception_exit_1;
            // End of try:
            try_end_5:;
            Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
            generator_heap->tmp_for_loop_5__iter_value = NULL;

            CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_5__for_iterator);
            Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
            generator_heap->tmp_for_loop_5__for_iterator = NULL;

            {
                nuitka_bool tmp_condition_result_28;
                PyObject *tmp_compexpr_left_19;
                PyObject *tmp_compexpr_right_19;
                PyObject *tmp_called_instance_42;
                PyObject *tmp_source_name_40;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 392;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_40 = PyCell_GET(generator->m_closure[0]);
                tmp_called_instance_42 = LOOKUP_ATTRIBUTE(tmp_source_name_40, const_str_plain__last);
                if (tmp_called_instance_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 392;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                generator->m_frame->m_frame.f_lineno = 392;
                tmp_compexpr_left_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_42, const_str_plain_get_content_maintype);
                Py_DECREF(tmp_called_instance_42);
                if (tmp_compexpr_left_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 392;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_19 = const_unicode_plain_multipart;
                generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_19, tmp_compexpr_right_19);
                Py_DECREF(tmp_compexpr_left_19);
                if (generator_heap->tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 392;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_28 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_28;
                } else {
                    goto branch_no_28;
                }
                branch_yes_28:;
                {
                    PyObject *tmp_assign_source_42;
                    PyObject *tmp_source_name_41;
                    PyObject *tmp_source_name_42;
                    if (PyCell_GET(generator->m_closure[0]) == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 393;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_42 = PyCell_GET(generator->m_closure[0]);
                    tmp_source_name_41 = LOOKUP_ATTRIBUTE(tmp_source_name_42, const_str_plain__last);
                    if (tmp_source_name_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 393;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_42 = LOOKUP_ATTRIBUTE(tmp_source_name_41, const_str_plain_epilogue);
                    Py_DECREF(tmp_source_name_41);
                    if (tmp_assign_source_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 393;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = generator_heap->var_epilogue;
                        generator_heap->var_epilogue = tmp_assign_source_42;
                        Py_XDECREF(old);
                    }

                }
                {
                    nuitka_bool tmp_condition_result_29;
                    PyObject *tmp_compexpr_left_20;
                    PyObject *tmp_compexpr_right_20;
                    CHECK_OBJECT(generator_heap->var_epilogue);
                    tmp_compexpr_left_20 = generator_heap->var_epilogue;
                    tmp_compexpr_right_20 = const_unicode_empty;
                    generator_heap->tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_20, tmp_compexpr_right_20);
                    if (generator_heap->tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 394;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_29 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_29;
                    } else {
                        goto branch_no_29;
                    }
                    branch_yes_29:;
                    {
                        PyObject *tmp_assattr_name_2;
                        PyObject *tmp_assattr_target_2;
                        PyObject *tmp_source_name_43;
                        tmp_assattr_name_2 = Py_None;
                        if (PyCell_GET(generator->m_closure[0]) == NULL) {

                            generator_heap->exception_type = PyExc_NameError;
                            Py_INCREF(generator_heap->exception_type);
                            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                            generator_heap->exception_tb = NULL;

                            generator_heap->exception_lineno = 395;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_43 = PyCell_GET(generator->m_closure[0]);
                        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_source_name_43, const_str_plain__last);
                        if (tmp_assattr_target_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 395;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_epilogue, tmp_assattr_name_2);
                        Py_DECREF(tmp_assattr_target_2);
                        if (generator_heap->tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 395;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_29;
                    branch_no_29:;
                    {
                        nuitka_bool tmp_condition_result_30;
                        PyObject *tmp_compexpr_left_21;
                        PyObject *tmp_compexpr_right_21;
                        CHECK_OBJECT(generator_heap->var_epilogue);
                        tmp_compexpr_left_21 = generator_heap->var_epilogue;
                        tmp_compexpr_right_21 = Py_None;
                        tmp_condition_result_30 = (tmp_compexpr_left_21 != tmp_compexpr_right_21) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_30;
                        } else {
                            goto branch_no_30;
                        }
                        branch_yes_30:;
                        {
                            PyObject *tmp_assign_source_43;
                            PyObject *tmp_called_instance_43;
                            PyObject *tmp_mvar_value_33;
                            PyObject *tmp_args_element_name_29;
                            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);

                            if (unlikely(tmp_mvar_value_33 == NULL)) {
                                tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);
                            }

                            if (tmp_mvar_value_33 == NULL) {

                                generator_heap->exception_type = PyExc_NameError;
                                Py_INCREF(generator_heap->exception_type);
                                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44819 ], 38, 0);
                                generator_heap->exception_tb = NULL;

                                generator_heap->exception_lineno = 397;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_instance_43 = tmp_mvar_value_33;
                            CHECK_OBJECT(generator_heap->var_epilogue);
                            tmp_args_element_name_29 = generator_heap->var_epilogue;
                            generator->m_frame->m_frame.f_lineno = 397;
                            {
                                PyObject *call_args[] = {tmp_args_element_name_29};
                                tmp_assign_source_43 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_43, const_str_plain_search, call_args);
                            }

                            if (tmp_assign_source_43 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 397;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = generator_heap->var_mo;
                                assert(old != NULL);
                                generator_heap->var_mo = tmp_assign_source_43;
                                Py_DECREF(old);
                            }

                        }
                        {
                            nuitka_bool tmp_condition_result_31;
                            int tmp_truth_name_7;
                            CHECK_OBJECT(generator_heap->var_mo);
                            tmp_truth_name_7 = CHECK_IF_TRUE(generator_heap->var_mo);
                            if (tmp_truth_name_7 == -1) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 398;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_31 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                                goto branch_yes_31;
                            } else {
                                goto branch_no_31;
                            }
                            branch_yes_31:;
                            {
                                PyObject *tmp_assign_source_44;
                                PyObject *tmp_len_arg_2;
                                PyObject *tmp_called_instance_44;
                                CHECK_OBJECT(generator_heap->var_mo);
                                tmp_called_instance_44 = generator_heap->var_mo;
                                generator->m_frame->m_frame.f_lineno = 399;
                                tmp_len_arg_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_44, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_0_tuple, 0));

                                if (tmp_len_arg_2 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                    generator_heap->exception_lineno = 399;
                                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_assign_source_44 = BUILTIN_LEN(tmp_len_arg_2);
                                Py_DECREF(tmp_len_arg_2);
                                if (tmp_assign_source_44 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                    generator_heap->exception_lineno = 399;
                                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                {
                                    PyObject *old = generator_heap->var_end;
                                    generator_heap->var_end = tmp_assign_source_44;
                                    Py_XDECREF(old);
                                }

                            }
                            {
                                PyObject *tmp_assattr_name_3;
                                PyObject *tmp_slice_source_2;
                                PyObject *tmp_slice_upper_2;
                                PyObject *tmp_operand_name_5;
                                PyObject *tmp_assattr_target_3;
                                PyObject *tmp_source_name_44;
                                CHECK_OBJECT(generator_heap->var_epilogue);
                                tmp_slice_source_2 = generator_heap->var_epilogue;
                                CHECK_OBJECT(generator_heap->var_end);
                                tmp_operand_name_5 = generator_heap->var_end;
                                tmp_slice_upper_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_5);
                                if (tmp_slice_upper_2 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                    generator_heap->exception_lineno = 400;
                                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_assattr_name_3 = LOOKUP_SLICE(tmp_slice_source_2, Py_None, tmp_slice_upper_2);
                                Py_DECREF(tmp_slice_upper_2);
                                if (tmp_assattr_name_3 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                    generator_heap->exception_lineno = 400;
                                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                                    Py_DECREF(tmp_assattr_name_3);
                                    generator_heap->exception_type = PyExc_NameError;
                                    Py_INCREF(generator_heap->exception_type);
                                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                                    generator_heap->exception_tb = NULL;

                                    generator_heap->exception_lineno = 400;
                                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_source_name_44 = PyCell_GET(generator->m_closure[0]);
                                tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_source_name_44, const_str_plain__last);
                                if (tmp_assattr_target_3 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                                    Py_DECREF(tmp_assattr_name_3);

                                    generator_heap->exception_lineno = 400;
                                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_epilogue, tmp_assattr_name_3);
                                Py_DECREF(tmp_assattr_name_3);
                                Py_DECREF(tmp_assattr_target_3);
                                if (generator_heap->tmp_result == false) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                    generator_heap->exception_lineno = 400;
                                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                            }
                            branch_no_31:;
                        }
                        branch_no_30:;
                    }
                    branch_end_29:;
                }
                goto branch_end_28;
                branch_no_28:;
                {
                    PyObject *tmp_assign_source_45;
                    PyObject *tmp_source_name_45;
                    PyObject *tmp_source_name_46;
                    if (PyCell_GET(generator->m_closure[0]) == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 402;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_46 = PyCell_GET(generator->m_closure[0]);
                    tmp_source_name_45 = LOOKUP_ATTRIBUTE(tmp_source_name_46, const_str_plain__last);
                    if (tmp_source_name_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 402;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_45 = LOOKUP_ATTRIBUTE(tmp_source_name_45, const_str_plain__payload);
                    Py_DECREF(tmp_source_name_45);
                    if (tmp_assign_source_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 402;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = generator_heap->var_payload;
                        generator_heap->var_payload = tmp_assign_source_45;
                        Py_XDECREF(old);
                    }

                }
                {
                    nuitka_bool tmp_condition_result_32;
                    PyObject *tmp_isinstance_inst_1;
                    PyObject *tmp_isinstance_cls_1;
                    CHECK_OBJECT(generator_heap->var_payload);
                    tmp_isinstance_inst_1 = generator_heap->var_payload;
                    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
                    generator_heap->tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
                    if (generator_heap->tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 403;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_32 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_32;
                    } else {
                        goto branch_no_32;
                    }
                    branch_yes_32:;
                    {
                        PyObject *tmp_assign_source_46;
                        PyObject *tmp_called_instance_45;
                        PyObject *tmp_mvar_value_34;
                        PyObject *tmp_args_element_name_30;
                        tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);

                        if (unlikely(tmp_mvar_value_34 == NULL)) {
                            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);
                        }

                        if (tmp_mvar_value_34 == NULL) {

                            generator_heap->exception_type = PyExc_NameError;
                            Py_INCREF(generator_heap->exception_type);
                            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44819 ], 38, 0);
                            generator_heap->exception_tb = NULL;

                            generator_heap->exception_lineno = 404;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_instance_45 = tmp_mvar_value_34;
                        CHECK_OBJECT(generator_heap->var_payload);
                        tmp_args_element_name_30 = generator_heap->var_payload;
                        generator->m_frame->m_frame.f_lineno = 404;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_30};
                            tmp_assign_source_46 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_45, const_str_plain_search, call_args);
                        }

                        if (tmp_assign_source_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 404;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = generator_heap->var_mo;
                            assert(old != NULL);
                            generator_heap->var_mo = tmp_assign_source_46;
                            Py_DECREF(old);
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_33;
                        int tmp_truth_name_8;
                        CHECK_OBJECT(generator_heap->var_mo);
                        tmp_truth_name_8 = CHECK_IF_TRUE(generator_heap->var_mo);
                        if (tmp_truth_name_8 == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                            generator_heap->exception_lineno = 405;
                            generator_heap->type_description_1 = "cboooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_33 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_33;
                        } else {
                            goto branch_no_33;
                        }
                        branch_yes_33:;
                        {
                            PyObject *tmp_assign_source_47;
                            PyObject *tmp_slice_source_3;
                            PyObject *tmp_slice_upper_3;
                            PyObject *tmp_operand_name_6;
                            PyObject *tmp_len_arg_3;
                            PyObject *tmp_called_instance_46;
                            CHECK_OBJECT(generator_heap->var_payload);
                            tmp_slice_source_3 = generator_heap->var_payload;
                            CHECK_OBJECT(generator_heap->var_mo);
                            tmp_called_instance_46 = generator_heap->var_mo;
                            generator->m_frame->m_frame.f_lineno = 406;
                            tmp_len_arg_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_46, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_0_tuple, 0));

                            if (tmp_len_arg_3 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 406;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_operand_name_6 = BUILTIN_LEN(tmp_len_arg_3);
                            Py_DECREF(tmp_len_arg_3);
                            if (tmp_operand_name_6 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 406;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_slice_upper_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_6);
                            Py_DECREF(tmp_operand_name_6);
                            if (tmp_slice_upper_3 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 406;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_47 = LOOKUP_SLICE(tmp_slice_source_3, Py_None, tmp_slice_upper_3);
                            Py_DECREF(tmp_slice_upper_3);
                            if (tmp_assign_source_47 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 406;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = generator_heap->var_payload;
                                assert(old != NULL);
                                generator_heap->var_payload = tmp_assign_source_47;
                                Py_DECREF(old);
                            }

                        }
                        {
                            PyObject *tmp_assattr_name_4;
                            PyObject *tmp_assattr_target_4;
                            PyObject *tmp_source_name_47;
                            CHECK_OBJECT(generator_heap->var_payload);
                            tmp_assattr_name_4 = generator_heap->var_payload;
                            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                                generator_heap->exception_type = PyExc_NameError;
                                Py_INCREF(generator_heap->exception_type);
                                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                                generator_heap->exception_tb = NULL;

                                generator_heap->exception_lineno = 407;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_47 = PyCell_GET(generator->m_closure[0]);
                            tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_source_name_47, const_str_plain__last);
                            if (tmp_assattr_target_4 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 407;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__payload, tmp_assattr_name_4);
                            Py_DECREF(tmp_assattr_target_4);
                            if (generator_heap->tmp_result == false) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                                generator_heap->exception_lineno = 407;
                                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                        }
                        branch_no_33:;
                    }
                    branch_no_32:;
                }
                branch_end_28:;
            }
            {
                PyObject *tmp_called_instance_47;
                PyObject *tmp_source_name_48;
                PyObject *tmp_call_result_20;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 408;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_48 = PyCell_GET(generator->m_closure[0]);
                tmp_called_instance_47 = LOOKUP_ATTRIBUTE(tmp_source_name_48, const_str_plain__input);
                if (tmp_called_instance_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 408;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                generator->m_frame->m_frame.f_lineno = 408;
                tmp_call_result_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_47, const_str_plain_pop_eof_matcher);
                Py_DECREF(tmp_called_instance_47);
                if (tmp_call_result_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 408;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_20);
            }
            {
                PyObject *tmp_called_instance_48;
                PyObject *tmp_call_result_21;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 409;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_48 = PyCell_GET(generator->m_closure[0]);
                generator->m_frame->m_frame.f_lineno = 409;
                tmp_call_result_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_48, const_str_plain__pop_message);
                if (tmp_call_result_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 409;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_21);
            }
            {
                PyObject *tmp_assattr_name_5;
                PyObject *tmp_source_name_49;
                PyObject *tmp_assattr_target_5;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 412;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_49 = PyCell_GET(generator->m_closure[0]);
                tmp_assattr_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_49, const_str_plain__cur);
                if (tmp_assattr_name_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 412;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                    Py_DECREF(tmp_assattr_name_5);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 412;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_target_5 = PyCell_GET(generator->m_closure[0]);
                generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__last, tmp_assattr_name_5);
                Py_DECREF(tmp_assattr_name_5);
                if (generator_heap->tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 412;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_20;
            branch_no_20:;
            {
                nuitka_bool tmp_condition_result_34;
                PyObject *tmp_operand_name_7;
                CHECK_OBJECT(generator_heap->var_capturing_preamble);
                tmp_operand_name_7 = generator_heap->var_capturing_preamble;
                generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
                if (generator_heap->tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 415;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_34 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_34;
                } else {
                    goto branch_no_34;
                }
                branch_yes_34:;
                {
                    PyObject *tmp_raise_type_1;
                    tmp_raise_type_1 = PyExc_AssertionError;
                    generator_heap->exception_type = tmp_raise_type_1;
                    Py_INCREF(tmp_raise_type_1);
                    generator_heap->exception_lineno = 415;
                    RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_34:;
            }
            {
                PyObject *tmp_called_instance_49;
                PyObject *tmp_call_result_22;
                PyObject *tmp_args_element_name_31;
                CHECK_OBJECT(generator_heap->var_preamble);
                tmp_called_instance_49 = generator_heap->var_preamble;
                CHECK_OBJECT(generator_heap->var_line);
                tmp_args_element_name_31 = generator_heap->var_line;
                generator->m_frame->m_frame.f_lineno = 416;
                {
                    PyObject *call_args[] = {tmp_args_element_name_31};
                    tmp_call_result_22 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_49, const_str_plain_append, call_args);
                }

                if (tmp_call_result_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 416;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_22);
            }
            branch_end_20:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 337;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_9;
        loop_end_9:;
        {
            nuitka_bool tmp_condition_result_35;
            int tmp_truth_name_9;
            CHECK_OBJECT(generator_heap->var_capturing_preamble);
            tmp_truth_name_9 = CHECK_IF_TRUE(generator_heap->var_capturing_preamble);
            if (tmp_truth_name_9 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 420;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_35 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto branch_yes_35;
            } else {
                goto branch_no_35;
            }
            branch_yes_35:;
            {
                PyObject *tmp_assign_source_48;
                PyObject *tmp_called_instance_50;
                PyObject *tmp_mvar_value_35;
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

                if (unlikely(tmp_mvar_value_35 == NULL)) {
                    tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
                }

                if (tmp_mvar_value_35 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 421;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_50 = tmp_mvar_value_35;
                generator->m_frame->m_frame.f_lineno = 421;
                tmp_assign_source_48 = CALL_METHOD_NO_ARGS(tmp_called_instance_50, const_str_plain_StartBoundaryNotFoundDefect);
                if (tmp_assign_source_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 421;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->var_defect;
                    generator_heap->var_defect = tmp_assign_source_48;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_called_name_9;
                PyObject *tmp_source_name_50;
                PyObject *tmp_source_name_51;
                PyObject *tmp_call_result_23;
                PyObject *tmp_args_element_name_32;
                PyObject *tmp_source_name_52;
                PyObject *tmp_args_element_name_33;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 422;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_51 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_50 = LOOKUP_ATTRIBUTE(tmp_source_name_51, const_str_plain_policy);
                if (tmp_source_name_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 422;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_50, const_str_plain_handle_defect);
                Py_DECREF(tmp_source_name_50);
                if (tmp_called_name_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 422;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                    Py_DECREF(tmp_called_name_9);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 422;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_52 = PyCell_GET(generator->m_closure[0]);
                tmp_args_element_name_32 = LOOKUP_ATTRIBUTE(tmp_source_name_52, const_str_plain__cur);
                if (tmp_args_element_name_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_9);

                    generator_heap->exception_lineno = 422;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(generator_heap->var_defect);
                tmp_args_element_name_33 = generator_heap->var_defect;
                generator->m_frame->m_frame.f_lineno = 422;
                {
                    PyObject *call_args[] = {tmp_args_element_name_32, tmp_args_element_name_33};
                    tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_9, call_args);
                }

                Py_DECREF(tmp_called_name_9);
                Py_DECREF(tmp_args_element_name_32);
                if (tmp_call_result_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 422;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_23);
            }
            {
                PyObject *tmp_called_name_10;
                PyObject *tmp_source_name_53;
                PyObject *tmp_source_name_54;
                PyObject *tmp_call_result_24;
                PyObject *tmp_args_element_name_34;
                PyObject *tmp_called_instance_51;
                PyObject *tmp_mvar_value_36;
                PyObject *tmp_args_element_name_35;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 423;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_54 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_53 = LOOKUP_ATTRIBUTE(tmp_source_name_54, const_str_plain__cur);
                if (tmp_source_name_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 423;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_53, const_str_plain_set_payload);
                Py_DECREF(tmp_source_name_53);
                if (tmp_called_name_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 423;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

                if (unlikely(tmp_mvar_value_36 == NULL)) {
                    tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
                }

                if (tmp_mvar_value_36 == NULL) {
                    Py_DECREF(tmp_called_name_10);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 423;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_51 = tmp_mvar_value_36;
                CHECK_OBJECT(generator_heap->var_preamble);
                tmp_args_element_name_35 = generator_heap->var_preamble;
                generator->m_frame->m_frame.f_lineno = 423;
                {
                    PyObject *call_args[] = {tmp_args_element_name_35};
                    tmp_args_element_name_34 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_51, const_str_plain_join, call_args);
                }

                if (tmp_args_element_name_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_10);

                    generator_heap->exception_lineno = 423;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                generator->m_frame->m_frame.f_lineno = 423;
                tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_34);
                Py_DECREF(tmp_called_name_10);
                Py_DECREF(tmp_args_element_name_34);
                if (tmp_call_result_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 423;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_24);
            }
            {
                PyObject *tmp_assign_source_49;
                tmp_assign_source_49 = PyList_New(0);
                {
                    PyObject *old = generator_heap->var_epilogue;
                    generator_heap->var_epilogue = tmp_assign_source_49;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_50;
                PyObject *tmp_iter_arg_6;
                PyObject *tmp_source_name_55;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 425;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_55 = PyCell_GET(generator->m_closure[0]);
                tmp_iter_arg_6 = LOOKUP_ATTRIBUTE(tmp_source_name_55, const_str_plain__input);
                if (tmp_iter_arg_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 425;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_50 = MAKE_ITERATOR(tmp_iter_arg_6);
                Py_DECREF(tmp_iter_arg_6);
                if (tmp_assign_source_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 425;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(generator_heap->tmp_for_loop_6__for_iterator == NULL);
                generator_heap->tmp_for_loop_6__for_iterator = tmp_assign_source_50;
            }
            // Tried code:
            loop_start_12:;
            {
                PyObject *tmp_next_source_6;
                PyObject *tmp_assign_source_51;
                CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
                tmp_next_source_6 = generator_heap->tmp_for_loop_6__for_iterator;
                tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_6);
                if (tmp_assign_source_51 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_12;
                    } else {

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        generator_heap->exception_lineno = 425;
                        goto try_except_handler_7;
                    }
                }

                {
                    PyObject *old = generator_heap->tmp_for_loop_6__iter_value;
                    generator_heap->tmp_for_loop_6__iter_value = tmp_assign_source_51;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_52;
                CHECK_OBJECT(generator_heap->tmp_for_loop_6__iter_value);
                tmp_assign_source_52 = generator_heap->tmp_for_loop_6__iter_value;
                {
                    PyObject *old = generator_heap->var_line;
                    assert(old != NULL);
                    generator_heap->var_line = tmp_assign_source_52;
                    Py_INCREF(generator_heap->var_line);
                    Py_DECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_36;
                PyObject *tmp_compexpr_left_22;
                PyObject *tmp_compexpr_right_22;
                PyObject *tmp_mvar_value_37;
                CHECK_OBJECT(generator_heap->var_line);
                tmp_compexpr_left_22 = generator_heap->var_line;
                tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_37 == NULL)) {
                    tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_37 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 426;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_7;
                }

                tmp_compexpr_right_22 = tmp_mvar_value_37;
                tmp_condition_result_36 = (tmp_compexpr_left_22 == tmp_compexpr_right_22) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_36;
                } else {
                    goto branch_no_36;
                }
                branch_yes_36:;
                {
                    PyObject *tmp_expression_name_11;
                    PyObject *tmp_mvar_value_38;
                    NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_11;
                    tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                    if (unlikely(tmp_mvar_value_38 == NULL)) {
                        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                    }

                    if (tmp_mvar_value_38 == NULL) {

                        generator_heap->exception_type = PyExc_NameError;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                        generator_heap->exception_tb = NULL;

                        generator_heap->exception_lineno = 427;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto try_except_handler_7;
                    }

                    tmp_expression_name_11 = tmp_mvar_value_38;
                    Py_INCREF(tmp_expression_name_11);
                    Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_35, sizeof(nuitka_bool), &tmp_truth_name_9, sizeof(int), &tmp_condition_result_36, sizeof(nuitka_bool), &tmp_compexpr_left_22, sizeof(PyObject *), &tmp_compexpr_right_22, sizeof(PyObject *), &tmp_mvar_value_37, sizeof(PyObject *), &tmp_mvar_value_38, sizeof(PyObject *), NULL);
                    generator->m_yield_return_index = 11;
                    return tmp_expression_name_11;
                    yield_return_11:
                    Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_35, sizeof(nuitka_bool), &tmp_truth_name_9, sizeof(int), &tmp_condition_result_36, sizeof(nuitka_bool), &tmp_compexpr_left_22, sizeof(PyObject *), &tmp_compexpr_right_22, sizeof(PyObject *), &tmp_mvar_value_37, sizeof(PyObject *), &tmp_mvar_value_38, sizeof(PyObject *), NULL);
                    if (yield_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 427;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_yield_result_11 = yield_return_value;
                }
                goto loop_start_12;
                branch_no_36:;
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 425;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_7;
            }
            goto loop_start_12;
            loop_end_12:;
            goto try_end_6;
            // Exception handler code:
            try_except_handler_7:;
            generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
            generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
            generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
            generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
            generator_heap->exception_type = NULL;
            generator_heap->exception_value = NULL;
            generator_heap->exception_tb = NULL;
            generator_heap->exception_lineno = 0;

            Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
            generator_heap->tmp_for_loop_6__iter_value = NULL;

            CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_6__for_iterator);
            Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
            generator_heap->tmp_for_loop_6__for_iterator = NULL;

            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_6;
            generator_heap->exception_value = generator_heap->exception_keeper_value_6;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            try_end_6:;
            Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
            generator_heap->tmp_for_loop_6__iter_value = NULL;

            CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_6__for_iterator);
            Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
            generator_heap->tmp_for_loop_6__for_iterator = NULL;

            {
                PyObject *tmp_assattr_name_6;
                PyObject *tmp_called_instance_52;
                PyObject *tmp_mvar_value_39;
                PyObject *tmp_args_element_name_36;
                PyObject *tmp_assattr_target_6;
                PyObject *tmp_source_name_56;
                tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

                if (unlikely(tmp_mvar_value_39 == NULL)) {
                    tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
                }

                if (tmp_mvar_value_39 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 429;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_52 = tmp_mvar_value_39;
                CHECK_OBJECT(generator_heap->var_epilogue);
                tmp_args_element_name_36 = generator_heap->var_epilogue;
                generator->m_frame->m_frame.f_lineno = 429;
                {
                    PyObject *call_args[] = {tmp_args_element_name_36};
                    tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_52, const_str_plain_join, call_args);
                }

                if (tmp_assattr_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 429;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                    Py_DECREF(tmp_assattr_name_6);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 429;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_56 = PyCell_GET(generator->m_closure[0]);
                tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tmp_source_name_56, const_str_plain__cur);
                if (tmp_assattr_target_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_assattr_name_6);

                    generator_heap->exception_lineno = 429;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_epilogue, tmp_assattr_name_6);
                Py_DECREF(tmp_assattr_name_6);
                Py_DECREF(tmp_assattr_target_6);
                if (generator_heap->tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 429;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto frame_return_exit_1;
            branch_no_35:;
        }
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_operand_name_8;
            assert(generator_heap->var_close_boundary_seen != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_name_8 = (generator_heap->var_close_boundary_seen == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
            generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
            assert(!(generator_heap->tmp_res == -1));
            tmp_condition_result_37 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto branch_yes_37;
            } else {
                goto branch_no_37;
            }
            branch_yes_37:;
            {
                PyObject *tmp_assign_source_53;
                PyObject *tmp_called_instance_53;
                PyObject *tmp_mvar_value_40;
                tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

                if (unlikely(tmp_mvar_value_40 == NULL)) {
                    tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
                }

                if (tmp_mvar_value_40 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 434;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_53 = tmp_mvar_value_40;
                generator->m_frame->m_frame.f_lineno = 434;
                tmp_assign_source_53 = CALL_METHOD_NO_ARGS(tmp_called_instance_53, const_str_plain_CloseBoundaryNotFoundDefect);
                if (tmp_assign_source_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 434;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = generator_heap->var_defect;
                    generator_heap->var_defect = tmp_assign_source_53;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_57;
                PyObject *tmp_source_name_58;
                PyObject *tmp_call_result_25;
                PyObject *tmp_args_element_name_37;
                PyObject *tmp_source_name_59;
                PyObject *tmp_args_element_name_38;
                if (PyCell_GET(generator->m_closure[0]) == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 435;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_58 = PyCell_GET(generator->m_closure[0]);
                tmp_source_name_57 = LOOKUP_ATTRIBUTE(tmp_source_name_58, const_str_plain_policy);
                if (tmp_source_name_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 435;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_57, const_str_plain_handle_defect);
                Py_DECREF(tmp_source_name_57);
                if (tmp_called_name_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 435;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                if (PyCell_GET(generator->m_closure[0]) == NULL) {
                    Py_DECREF(tmp_called_name_11);
                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 435;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_59 = PyCell_GET(generator->m_closure[0]);
                tmp_args_element_name_37 = LOOKUP_ATTRIBUTE(tmp_source_name_59, const_str_plain__cur);
                if (tmp_args_element_name_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_called_name_11);

                    generator_heap->exception_lineno = 435;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(generator_heap->var_defect);
                tmp_args_element_name_38 = generator_heap->var_defect;
                generator->m_frame->m_frame.f_lineno = 435;
                {
                    PyObject *call_args[] = {tmp_args_element_name_37, tmp_args_element_name_38};
                    tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
                }

                Py_DECREF(tmp_called_name_11);
                Py_DECREF(tmp_args_element_name_37);
                if (tmp_call_result_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 435;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_25);
            }
            goto frame_return_exit_1;
            branch_no_37:;
        }
        {
            nuitka_bool tmp_condition_result_38;
            int tmp_truth_name_10;
            CHECK_OBJECT(generator_heap->var_linesep);
            tmp_truth_name_10 = CHECK_IF_TRUE(generator_heap->var_linesep);
            if (tmp_truth_name_10 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 440;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_38 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_38;
            } else {
                goto branch_no_38;
            }
            branch_yes_38:;
            {
                PyObject *tmp_assign_source_54;
                tmp_assign_source_54 = LIST_COPY(const_list_unicode_empty_list);
                {
                    PyObject *old = generator_heap->var_epilogue;
                    generator_heap->var_epilogue = tmp_assign_source_54;
                    Py_XDECREF(old);
                }

            }
            goto branch_end_38;
            branch_no_38:;
            {
                PyObject *tmp_assign_source_55;
                tmp_assign_source_55 = PyList_New(0);
                {
                    PyObject *old = generator_heap->var_epilogue;
                    generator_heap->var_epilogue = tmp_assign_source_55;
                    Py_XDECREF(old);
                }

            }
            branch_end_38:;
        }
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_source_name_60;
            if (PyCell_GET(generator->m_closure[0]) == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 444;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_60 = PyCell_GET(generator->m_closure[0]);
            tmp_iter_arg_7 = LOOKUP_ATTRIBUTE(tmp_source_name_60, const_str_plain__input);
            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 444;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_56 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 444;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(generator_heap->tmp_for_loop_7__for_iterator == NULL);
            generator_heap->tmp_for_loop_7__for_iterator = tmp_assign_source_56;
        }
        // Tried code:
        loop_start_13:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
            tmp_next_source_7 = generator_heap->tmp_for_loop_7__for_iterator;
            tmp_assign_source_57 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_57 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_13;
                } else {

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    generator_heap->exception_lineno = 444;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = generator_heap->tmp_for_loop_7__iter_value;
                generator_heap->tmp_for_loop_7__iter_value = tmp_assign_source_57;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_58;
            CHECK_OBJECT(generator_heap->tmp_for_loop_7__iter_value);
            tmp_assign_source_58 = generator_heap->tmp_for_loop_7__iter_value;
            {
                PyObject *old = generator_heap->var_line;
                assert(old != NULL);
                generator_heap->var_line = tmp_assign_source_58;
                Py_INCREF(generator_heap->var_line);
                Py_DECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_39;
            PyObject *tmp_compexpr_left_23;
            PyObject *tmp_compexpr_right_23;
            PyObject *tmp_mvar_value_41;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_compexpr_left_23 = generator_heap->var_line;
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_41 == NULL)) {
                tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_41 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 445;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_compexpr_right_23 = tmp_mvar_value_41;
            tmp_condition_result_39 = (tmp_compexpr_left_23 == tmp_compexpr_right_23) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
            branch_yes_39:;
            {
                PyObject *tmp_expression_name_12;
                PyObject *tmp_mvar_value_42;
                NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_12;
                tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

                if (unlikely(tmp_mvar_value_42 == NULL)) {
                    tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
                }

                if (tmp_mvar_value_42 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 446;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_expression_name_12 = tmp_mvar_value_42;
                Py_INCREF(tmp_expression_name_12);
                Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_39, sizeof(nuitka_bool), &tmp_compexpr_left_23, sizeof(PyObject *), &tmp_compexpr_right_23, sizeof(PyObject *), &tmp_mvar_value_41, sizeof(PyObject *), &tmp_mvar_value_42, sizeof(PyObject *), NULL);
                generator->m_yield_return_index = 12;
                return tmp_expression_name_12;
                yield_return_12:
                Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_14, sizeof(nuitka_bool), &tmp_compexpr_left_11, sizeof(PyObject *), &tmp_compexpr_right_11, sizeof(PyObject *), &tmp_called_instance_21, sizeof(PyObject *), &tmp_source_name_19, sizeof(PyObject *), &tmp_condition_result_39, sizeof(nuitka_bool), &tmp_compexpr_left_23, sizeof(PyObject *), &tmp_compexpr_right_23, sizeof(PyObject *), &tmp_mvar_value_41, sizeof(PyObject *), &tmp_mvar_value_42, sizeof(PyObject *), NULL);
                if (yield_return_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 446;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_yield_result_12 = yield_return_value;
            }
            goto loop_start_13;
            branch_no_39:;
        }
        {
            PyObject *tmp_called_instance_54;
            PyObject *tmp_call_result_26;
            PyObject *tmp_args_element_name_39;
            CHECK_OBJECT(generator_heap->var_epilogue);
            tmp_called_instance_54 = generator_heap->var_epilogue;
            CHECK_OBJECT(generator_heap->var_line);
            tmp_args_element_name_39 = generator_heap->var_line;
            generator->m_frame->m_frame.f_lineno = 448;
            {
                PyObject *call_args[] = {tmp_args_element_name_39};
                tmp_call_result_26 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_54, const_str_plain_append, call_args);
            }

            if (tmp_call_result_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 448;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF(tmp_call_result_26);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 444;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_13;
        loop_end_13:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_8:;
        generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
        generator_heap->tmp_for_loop_7__iter_value = NULL;

        CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_7__for_iterator);
        Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
        generator_heap->tmp_for_loop_7__for_iterator = NULL;

        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_7;
        generator_heap->exception_value = generator_heap->exception_keeper_value_7;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        try_end_7:;
        Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
        generator_heap->tmp_for_loop_7__iter_value = NULL;

        CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_7__for_iterator);
        Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
        generator_heap->tmp_for_loop_7__for_iterator = NULL;

        {
            nuitka_bool tmp_condition_result_40;
            int tmp_truth_name_11;
            CHECK_OBJECT(generator_heap->var_epilogue);
            tmp_truth_name_11 = CHECK_IF_TRUE(generator_heap->var_epilogue);
            assert(!(tmp_truth_name_11 == -1));
            tmp_condition_result_40 = tmp_truth_name_11 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_40;
            } else {
                goto branch_no_40;
            }
            branch_yes_40:;
            {
                PyObject *tmp_assign_source_59;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                CHECK_OBJECT(generator_heap->var_epilogue);
                tmp_subscribed_name_2 = generator_heap->var_epilogue;
                tmp_subscript_name_2 = const_int_0;
                tmp_assign_source_59 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
                if (tmp_assign_source_59 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 453;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(generator_heap->var_firstline == NULL);
                generator_heap->var_firstline = tmp_assign_source_59;
            }
            {
                PyObject *tmp_assign_source_60;
                PyObject *tmp_called_instance_55;
                PyObject *tmp_mvar_value_43;
                PyObject *tmp_args_element_name_40;
                tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_bol);

                if (unlikely(tmp_mvar_value_43 == NULL)) {
                    tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE_bol);
                }

                if (tmp_mvar_value_43 == NULL) {

                    generator_heap->exception_type = PyExc_NameError;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44857 ], 38, 0);
                    generator_heap->exception_tb = NULL;

                    generator_heap->exception_lineno = 454;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_55 = tmp_mvar_value_43;
                CHECK_OBJECT(generator_heap->var_firstline);
                tmp_args_element_name_40 = generator_heap->var_firstline;
                generator->m_frame->m_frame.f_lineno = 454;
                {
                    PyObject *call_args[] = {tmp_args_element_name_40};
                    tmp_assign_source_60 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_55, const_str_plain_match, call_args);
                }

                if (tmp_assign_source_60 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 454;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(generator_heap->var_bolmo == NULL);
                generator_heap->var_bolmo = tmp_assign_source_60;
            }
            {
                nuitka_bool tmp_condition_result_41;
                int tmp_truth_name_12;
                CHECK_OBJECT(generator_heap->var_bolmo);
                tmp_truth_name_12 = CHECK_IF_TRUE(generator_heap->var_bolmo);
                if (tmp_truth_name_12 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 455;
                    generator_heap->type_description_1 = "cboooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_41 = tmp_truth_name_12 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_41;
                } else {
                    goto branch_no_41;
                }
                branch_yes_41:;
                {
                    PyObject *tmp_ass_subvalue_2;
                    PyObject *tmp_slice_source_4;
                    PyObject *tmp_slice_lower_1;
                    PyObject *tmp_len_arg_4;
                    PyObject *tmp_called_instance_56;
                    PyObject *tmp_ass_subscribed_2;
                    PyObject *tmp_ass_subscript_2;
                    int tmp_ass_subscript_res_2;
                    CHECK_OBJECT(generator_heap->var_firstline);
                    tmp_slice_source_4 = generator_heap->var_firstline;
                    CHECK_OBJECT(generator_heap->var_bolmo);
                    tmp_called_instance_56 = generator_heap->var_bolmo;
                    generator->m_frame->m_frame.f_lineno = 456;
                    tmp_len_arg_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_56, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_0_tuple, 0));

                    if (tmp_len_arg_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 456;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_slice_lower_1 = BUILTIN_LEN(tmp_len_arg_4);
                    Py_DECREF(tmp_len_arg_4);
                    if (tmp_slice_lower_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 456;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_ass_subvalue_2 = LOOKUP_SLICE(tmp_slice_source_4, tmp_slice_lower_1, Py_None);
                    Py_DECREF(tmp_slice_lower_1);
                    if (tmp_ass_subvalue_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 456;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(generator_heap->var_epilogue);
                    tmp_ass_subscribed_2 = generator_heap->var_epilogue;
                    tmp_ass_subscript_2 = const_int_0;
                    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2);
                    Py_DECREF(tmp_ass_subvalue_2);
                    if (tmp_ass_subscript_res_2 == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                        generator_heap->exception_lineno = 456;
                        generator_heap->type_description_1 = "cboooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                branch_no_41:;
            }
            branch_no_40:;
        }
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_called_instance_57;
            PyObject *tmp_mvar_value_44;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_assattr_target_7;
            PyObject *tmp_source_name_61;
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

            if (unlikely(tmp_mvar_value_44 == NULL)) {
                tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
            }

            if (tmp_mvar_value_44 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 457;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_57 = tmp_mvar_value_44;
            CHECK_OBJECT(generator_heap->var_epilogue);
            tmp_args_element_name_41 = generator_heap->var_epilogue;
            generator->m_frame->m_frame.f_lineno = 457;
            {
                PyObject *call_args[] = {tmp_args_element_name_41};
                tmp_assattr_name_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_57, const_str_plain_join, call_args);
            }

            if (tmp_assattr_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 457;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if (PyCell_GET(generator->m_closure[0]) == NULL) {
                Py_DECREF(tmp_assattr_name_7);
                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 457;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_61 = PyCell_GET(generator->m_closure[0]);
            tmp_assattr_target_7 = LOOKUP_ATTRIBUTE(tmp_source_name_61, const_str_plain__cur);
            if (tmp_assattr_target_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_assattr_name_7);

                generator_heap->exception_lineno = 457;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_epilogue, tmp_assattr_name_7);
            Py_DECREF(tmp_assattr_name_7);
            Py_DECREF(tmp_assattr_target_7);
            if (generator_heap->tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 457;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto frame_return_exit_1;
        branch_no_14:;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = PyList_New(0);
        assert(generator_heap->var_lines == NULL);
        generator_heap->var_lines = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_source_name_62;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 462;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_62 = PyCell_GET(generator->m_closure[0]);
        tmp_iter_arg_8 = LOOKUP_ATTRIBUTE(tmp_source_name_62, const_str_plain__input);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 462;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 462;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_8__for_iterator == NULL);
        generator_heap->tmp_for_loop_8__for_iterator = tmp_assign_source_62;
    }
    // Tried code:
    loop_start_14:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(generator_heap->tmp_for_loop_8__for_iterator);
        tmp_next_source_8 = generator_heap->tmp_for_loop_8__for_iterator;
        tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_63 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_14;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                generator_heap->exception_lineno = 462;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_8__iter_value;
            generator_heap->tmp_for_loop_8__iter_value = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(generator_heap->tmp_for_loop_8__iter_value);
        tmp_assign_source_64 = generator_heap->tmp_for_loop_8__iter_value;
        {
            PyObject *old = generator_heap->var_line;
            generator_heap->var_line = tmp_assign_source_64;
            Py_INCREF(generator_heap->var_line);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        PyObject *tmp_mvar_value_45;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_compexpr_left_24 = generator_heap->var_line;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

        if (unlikely(tmp_mvar_value_45 == NULL)) {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
        }

        if (tmp_mvar_value_45 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 463;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_compexpr_right_24 = tmp_mvar_value_45;
        tmp_condition_result_42 = (tmp_compexpr_left_24 == tmp_compexpr_right_24) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
        branch_yes_42:;
        {
            PyObject *tmp_expression_name_13;
            PyObject *tmp_mvar_value_46;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_13;
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData);

            if (unlikely(tmp_mvar_value_46 == NULL)) {
                tmp_mvar_value_46 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NeedMoreData);
            }

            if (tmp_mvar_value_46 == NULL) {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 44586 ], 41, 0);
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 464;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_expression_name_13 = tmp_mvar_value_46;
            Py_INCREF(tmp_expression_name_13);
            Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_42, sizeof(nuitka_bool), &tmp_compexpr_left_24, sizeof(PyObject *), &tmp_compexpr_right_24, sizeof(PyObject *), &tmp_mvar_value_45, sizeof(PyObject *), &tmp_mvar_value_46, sizeof(PyObject *), NULL);
            generator->m_yield_return_index = 13;
            return tmp_expression_name_13;
            yield_return_13:
            Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_42, sizeof(nuitka_bool), &tmp_compexpr_left_24, sizeof(PyObject *), &tmp_compexpr_right_24, sizeof(PyObject *), &tmp_mvar_value_45, sizeof(PyObject *), &tmp_mvar_value_46, sizeof(PyObject *), NULL);
            if (yield_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 464;
                generator_heap->type_description_1 = "cboooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_yield_result_13 = yield_return_value;
        }
        goto loop_start_14;
        branch_no_42:;
    }
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_name_42;
        CHECK_OBJECT(generator_heap->var_lines);
        tmp_called_instance_58 = generator_heap->var_lines;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_args_element_name_42 = generator_heap->var_line;
        generator->m_frame->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_name_42};
            tmp_call_result_27 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_58, const_str_plain_append, call_args);
        }

        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 466;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_27);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 462;
        generator_heap->type_description_1 = "cboooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_14;
    loop_end_14:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_8__iter_value);
    generator_heap->tmp_for_loop_8__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_8__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_8__for_iterator);
    generator_heap->tmp_for_loop_8__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(generator_heap->tmp_for_loop_8__iter_value);
    generator_heap->tmp_for_loop_8__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_8__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_8__for_iterator);
    generator_heap->tmp_for_loop_8__for_iterator = NULL;

    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_63;
        PyObject *tmp_source_name_64;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_called_instance_59;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_args_element_name_44;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyString_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_64 = PyCell_GET(generator->m_closure[0]);
        tmp_source_name_63 = LOOKUP_ATTRIBUTE(tmp_source_name_64, const_str_plain__cur);
        if (tmp_source_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_63, const_str_plain_set_payload);
        Py_DECREF(tmp_source_name_63);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

        if (unlikely(tmp_mvar_value_47 == NULL)) {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
        }

        if (tmp_mvar_value_47 == NULL) {
            Py_DECREF(tmp_called_name_12);
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_59 = tmp_mvar_value_47;
        CHECK_OBJECT(generator_heap->var_lines);
        tmp_args_element_name_44 = generator_heap->var_lines;
        generator->m_frame->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = {tmp_args_element_name_44};
            tmp_args_element_name_43 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_59, const_str_plain_join, call_args);
        }

        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_name_12);

            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 467;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_43);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_43);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 467;
            generator_heap->type_description_1 = "cboooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);
    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            (int)generator_heap->var_close_boundary_seen,
            generator_heap->var_firstline,
            generator_heap->var_defect,
            generator_heap->var_payload,
            generator_heap->var_end,
            generator_heap->var_epilogue,
            generator_heap->var_linesep,
            generator_heap->var_bolmo,
            generator_heap->var_lastline,
            generator_heap->var_msg,
            generator_heap->var_boundary,
            generator_heap->var_boundaryre,
            generator_heap->var_eolmo,
            generator_heap->var_capturing_preamble,
            generator_heap->var_line,
            generator_heap->var_preamble,
            generator_heap->var_mo,
            generator_heap->var_lines,
            generator_heap->var_headers,
            generator_heap->var_separator,
            generator_heap->var_retval
        );


        // Release cached frame.
        if (generator->m_frame == cache_m_frame) {
            Py_DECREF(generator->m_frame);
        }
        cache_m_frame = NULL;

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_9;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(generator_heap->var_firstline);
    generator_heap->var_firstline = NULL;

    Py_XDECREF(generator_heap->var_defect);
    generator_heap->var_defect = NULL;

    Py_XDECREF(generator_heap->var_payload);
    generator_heap->var_payload = NULL;

    Py_XDECREF(generator_heap->var_end);
    generator_heap->var_end = NULL;

    Py_XDECREF(generator_heap->var_epilogue);
    generator_heap->var_epilogue = NULL;

    Py_XDECREF(generator_heap->var_linesep);
    generator_heap->var_linesep = NULL;

    Py_XDECREF(generator_heap->var_bolmo);
    generator_heap->var_bolmo = NULL;

    Py_XDECREF(generator_heap->var_lastline);
    generator_heap->var_lastline = NULL;

    Py_XDECREF(generator_heap->var_msg);
    generator_heap->var_msg = NULL;

    Py_XDECREF(generator_heap->var_boundary);
    generator_heap->var_boundary = NULL;

    Py_XDECREF(generator_heap->var_boundaryre);
    generator_heap->var_boundaryre = NULL;

    Py_XDECREF(generator_heap->var_eolmo);
    generator_heap->var_eolmo = NULL;

    Py_XDECREF(generator_heap->var_capturing_preamble);
    generator_heap->var_capturing_preamble = NULL;

    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;

    Py_XDECREF(generator_heap->var_preamble);
    generator_heap->var_preamble = NULL;

    Py_XDECREF(generator_heap->var_mo);
    generator_heap->var_mo = NULL;

    Py_XDECREF(generator_heap->var_lines);
    generator_heap->var_lines = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->var_headers);
    Py_DECREF(generator_heap->var_headers);
    generator_heap->var_headers = NULL;

    Py_XDECREF(generator_heap->var_separator);
    generator_heap->var_separator = NULL;

    Py_XDECREF(generator_heap->var_retval);
    generator_heap->var_retval = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_firstline);
    generator_heap->var_firstline = NULL;

    Py_XDECREF(generator_heap->var_defect);
    generator_heap->var_defect = NULL;

    Py_XDECREF(generator_heap->var_payload);
    generator_heap->var_payload = NULL;

    Py_XDECREF(generator_heap->var_end);
    generator_heap->var_end = NULL;

    Py_XDECREF(generator_heap->var_epilogue);
    generator_heap->var_epilogue = NULL;

    Py_XDECREF(generator_heap->var_linesep);
    generator_heap->var_linesep = NULL;

    Py_XDECREF(generator_heap->var_bolmo);
    generator_heap->var_bolmo = NULL;

    Py_XDECREF(generator_heap->var_lastline);
    generator_heap->var_lastline = NULL;

    Py_XDECREF(generator_heap->var_msg);
    generator_heap->var_msg = NULL;

    Py_XDECREF(generator_heap->var_boundary);
    generator_heap->var_boundary = NULL;

    Py_XDECREF(generator_heap->var_boundaryre);
    generator_heap->var_boundaryre = NULL;

    Py_XDECREF(generator_heap->var_eolmo);
    generator_heap->var_eolmo = NULL;

    Py_XDECREF(generator_heap->var_capturing_preamble);
    generator_heap->var_capturing_preamble = NULL;

    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;

    Py_XDECREF(generator_heap->var_preamble);
    generator_heap->var_preamble = NULL;

    Py_XDECREF(generator_heap->var_mo);
    generator_heap->var_mo = NULL;

    Py_XDECREF(generator_heap->var_lines);
    generator_heap->var_lines = NULL;

    Py_XDECREF(generator_heap->var_headers);
    generator_heap->var_headers = NULL;

    Py_XDECREF(generator_heap->var_separator);
    generator_heap->var_separator = NULL;

    Py_XDECREF(generator_heap->var_retval);
    generator_heap->var_retval = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:
    try_end_9:;
    Py_XDECREF(generator_heap->var_defect);
    generator_heap->var_defect = NULL;

    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->var_lines);
    Py_DECREF(generator_heap->var_lines);
    generator_heap->var_lines = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->var_headers);
    Py_DECREF(generator_heap->var_headers);
    generator_heap->var_headers = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 300
    generator->m_returned = None;
#endif

    return NULL;

}

static PyObject *future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_maker(void) {
    return Nuitka_Generator_New(
        future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_context,
        module_future$backports$email$feedparser,
        const_str_plain__parsegen,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_f0490cb656a87df6960a4fffa61d9427,
        1,
        sizeof(struct future$backports$email$feedparser$$$function_18__parsegen$$$genobj_1__parsegen_locals)
    );
}


static PyObject *impl_future$backports$email$feedparser$$$function_19__parse_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lines = python_pars[1];
    PyObject *var_lastvalue = NULL;
    PyObject *var_mo = NULL;
    PyObject *var_i = NULL;
    PyObject *var_defect = NULL;
    PyObject *var_lineno = NULL;
    PyObject *var_line = NULL;
    PyObject *var_lastheader = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0e3b98b12793b0a2015a46cc0ad0270f;
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
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_0e3b98b12793b0a2015a46cc0ad0270f = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_empty;
        assert(var_lastheader == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_lastheader = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New(0);
        assert(var_lastvalue == NULL);
        var_lastvalue = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0e3b98b12793b0a2015a46cc0ad0270f, codeobj_0e3b98b12793b0a2015a46cc0ad0270f, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0e3b98b12793b0a2015a46cc0ad0270f = cache_frame_0e3b98b12793b0a2015a46cc0ad0270f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0e3b98b12793b0a2015a46cc0ad0270f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0e3b98b12793b0a2015a46cc0ad0270f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_lines);
        tmp_args_element_name_1 = par_lines;
        frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 473;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooo";
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
                type_description_1 = "ooooooooo";
                exception_lineno = 473;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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
            exception_lineno = 473;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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
            exception_lineno = 473;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 473;
                    goto try_except_handler_4;
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
            exception_lineno = 473;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_lineno;
            var_lineno = tmp_assign_source_8;
            Py_INCREF(var_lineno);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_9;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_line);
        tmp_subscribed_name_1 = var_line;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_unicode_digest_ac02ab0238280e341b2aff0eed15b128;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            if (var_lastheader == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "lastheader");
                exception_tb = NULL;

                exception_lineno = 476;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_operand_name_1 = var_lastheader;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

                if (unlikely(tmp_mvar_value_1 == NULL)) {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
                }

                if (tmp_mvar_value_1 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                    exception_tb = NULL;

                    exception_lineno = 480;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_1;
                CHECK_OBJECT(var_line);
                tmp_args_element_name_2 = var_line;
                frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 480;
                {
                    PyObject *call_args[] = {tmp_args_element_name_2};
                    tmp_assign_source_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_FirstHeaderLineIsContinuationDefect, call_args);
                }

                if (tmp_assign_source_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 480;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_defect;
                    var_defect = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT(par_self);
                tmp_source_name_2 = par_self;
                tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_policy);
                if (tmp_source_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 481;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_handle_defect);
                Py_DECREF(tmp_source_name_1);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 481;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_3 = par_self;
                tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__cur);
                if (tmp_args_element_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 481;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(var_defect);
                tmp_args_element_name_4 = var_defect;
                frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 481;
                {
                    PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
                }

                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_3);
                if (tmp_call_result_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 481;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF(tmp_call_result_1);
            }
            goto loop_start_1;
            branch_no_2:;
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            if (var_lastvalue == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "lastvalue");
                exception_tb = NULL;

                exception_lineno = 483;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_2 = var_lastvalue;
            CHECK_OBJECT(var_line);
            tmp_args_element_name_5 = var_line;
            frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 483;
            {
                PyObject *call_args[] = {tmp_args_element_name_5};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, call_args);
            }

            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_2);
        }
        goto loop_start_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if (var_lastheader == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "lastheader");
            exception_tb = NULL;

            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_lastheader);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__cur);
            if (tmp_source_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_set_raw);
            Py_DECREF(tmp_source_name_4);
            if (tmp_dircall_arg1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_policy);
            if (tmp_source_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dircall_arg1_1);

                exception_lineno = 486;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_header_source_parse);
            Py_DECREF(tmp_source_name_6);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dircall_arg1_1);

                exception_lineno = 486;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            if (var_lastvalue == NULL) {
                Py_DECREF(tmp_dircall_arg1_1);
                Py_DECREF(tmp_called_name_3);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "lastvalue");
                exception_tb = NULL;

                exception_lineno = 486;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_6 = var_lastvalue;
            frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 486;
            tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
            Py_DECREF(tmp_called_name_3);
            if (tmp_dircall_arg2_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dircall_arg1_1);

                exception_lineno = 486;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_call_result_3 = impl___internal__$$$function_4_complex_call_helper_star_list(dir_call_args);
            }
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_3);
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            tmp_iter_arg_3 = DEEP_COPY(const_tuple_unicode_empty_list_empty_tuple);
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            assert(!(tmp_assign_source_11 == NULL));
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 0);
            if (tmp_assign_source_12 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooo";
                exception_lineno = 487;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 1);
            if (tmp_assign_source_13 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooo";
                exception_lineno = 487;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        goto try_end_3;
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

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_lastheader;
                var_lastheader = tmp_assign_source_14;
                Py_INCREF(var_lastheader);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
            tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_lastvalue;
                var_lastvalue = tmp_assign_source_15;
                Py_INCREF(var_lastvalue);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_line);
        tmp_called_instance_3 = var_line;
        frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 489;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_unicode_digest_100dbc3844eca9c938e15b8da45d07c2_tuple, 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 489;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(var_lineno);
            tmp_compexpr_left_2 = var_lineno;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NLCRE_eol);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 44819 ], 38, 0);
                    exception_tb = NULL;

                    exception_lineno = 492;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_4 = tmp_mvar_value_2;
                CHECK_OBJECT(var_line);
                tmp_args_element_name_7 = var_line;
                frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 492;
                {
                    PyObject *call_args[] = {tmp_args_element_name_7};
                    tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_search, call_args);
                }

                if (tmp_assign_source_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 492;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_mo;
                    var_mo = tmp_assign_source_16;
                    Py_XDECREF(old);
                }

            }
            {
                nuitka_bool tmp_condition_result_6;
                int tmp_truth_name_3;
                CHECK_OBJECT(var_mo);
                tmp_truth_name_3 = CHECK_IF_TRUE(var_mo);
                if (tmp_truth_name_3 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 493;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_6;
                } else {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_slice_source_1;
                    PyObject *tmp_slice_upper_1;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_len_arg_1;
                    PyObject *tmp_called_instance_5;
                    CHECK_OBJECT(var_line);
                    tmp_slice_source_1 = var_line;
                    CHECK_OBJECT(var_mo);
                    tmp_called_instance_5 = var_mo;
                    frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 494;
                    tmp_len_arg_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_group, &PyTuple_GET_ITEM(const_tuple_int_0_tuple, 0));

                    if (tmp_len_arg_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_operand_name_2 = BUILTIN_LEN(tmp_len_arg_1);
                    Py_DECREF(tmp_len_arg_1);
                    if (tmp_operand_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_slice_upper_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_2);
                    Py_DECREF(tmp_operand_name_2);
                    if (tmp_slice_upper_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_17 = LOOKUP_SLICE(tmp_slice_source_1, Py_None, tmp_slice_upper_1);
                    Py_DECREF(tmp_slice_upper_1);
                    if (tmp_assign_source_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_line;
                        assert(old != NULL);
                        var_line = tmp_assign_source_17;
                        Py_DECREF(old);
                    }

                }
                branch_no_6:;
            }
            {
                PyObject *tmp_called_instance_6;
                PyObject *tmp_source_name_8;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_8;
                CHECK_OBJECT(par_self);
                tmp_source_name_8 = par_self;
                tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__cur);
                if (tmp_called_instance_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 495;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(var_line);
                tmp_args_element_name_8 = var_line;
                frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 495;
                {
                    PyObject *call_args[] = {tmp_args_element_name_8};
                    tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_set_unixfrom, call_args);
                }

                Py_DECREF(tmp_called_instance_6);
                if (tmp_call_result_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 495;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                Py_DECREF(tmp_call_result_5);
            }
            goto loop_start_1;
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_left_name_1;
                PyObject *tmp_len_arg_2;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT(var_lineno);
                tmp_compexpr_left_3 = var_lineno;
                CHECK_OBJECT(par_lines);
                tmp_len_arg_2 = par_lines;
                tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_2);
                if (tmp_left_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 497;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_1 = const_int_pos_1;
                tmp_compexpr_right_3 = BINARY_OPERATION_SUB_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_left_name_1);
                assert(!(tmp_compexpr_right_3 == NULL));
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                Py_DECREF(tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 497;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_7;
                } else {
                    goto branch_no_7;
                }
                branch_yes_7:;
                {
                    PyObject *tmp_called_instance_7;
                    PyObject *tmp_source_name_9;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_9;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_9 = par_self;
                    tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__input);
                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 501;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_line);
                    tmp_args_element_name_9 = var_line;
                    frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 501;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_9};
                        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_unreadline, call_args);
                    }

                    Py_DECREF(tmp_called_instance_7);
                    if (tmp_call_result_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 501;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF(tmp_call_result_6);
                }
                tmp_return_value = Py_None;
                Py_INCREF(tmp_return_value);
                goto try_return_handler_2;
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_assign_source_18;
                    PyObject *tmp_called_instance_8;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_10;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors);

                    if (unlikely(tmp_mvar_value_3 == NULL)) {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_errors);
                    }

                    if (tmp_mvar_value_3 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 42600 ], 35, 0);
                        exception_tb = NULL;

                        exception_lineno = 506;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_called_instance_8 = tmp_mvar_value_3;
                    CHECK_OBJECT(var_line);
                    tmp_args_element_name_10 = var_line;
                    frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 506;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_10};
                        tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_MisplacedEnvelopeHeaderDefect, call_args);
                    }

                    if (tmp_assign_source_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 506;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_defect;
                        var_defect = tmp_assign_source_18;
                        Py_XDECREF(old);
                    }

                }
                {
                    PyObject *tmp_called_instance_9;
                    PyObject *tmp_source_name_10;
                    PyObject *tmp_source_name_11;
                    PyObject *tmp_call_result_7;
                    PyObject *tmp_args_element_name_11;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_11 = par_self;
                    tmp_source_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain__cur);
                    if (tmp_source_name_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 507;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_defects);
                    Py_DECREF(tmp_source_name_10);
                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 507;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_defect);
                    tmp_args_element_name_11 = var_defect;
                    frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 507;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_11};
                        tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_append, call_args);
                    }

                    Py_DECREF(tmp_called_instance_9);
                    if (tmp_call_result_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 507;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF(tmp_call_result_7);
                }
                goto loop_start_1;
                branch_end_7:;
            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(var_line);
        tmp_called_instance_10 = var_line;
        frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 512;
        tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_find, &PyTuple_GET_ITEM(const_tuple_unicode_chr_58_tuple, 0));

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_i);
        tmp_compexpr_left_4 = var_i;
        tmp_compexpr_right_4 = const_int_0;
        tmp_operand_name_3 = RICH_COMPARE_GT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_raise_value_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            tmp_raise_value_1 = const_tuple_unicode_digest_f979006d0ca80950b2dd70334ea6d537_tuple;
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_value = tmp_raise_value_1;
            Py_INCREF(tmp_raise_value_1);
            exception_lineno = 513;
            RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_upper_2;
        CHECK_OBJECT(var_line);
        tmp_slice_source_2 = var_line;
        CHECK_OBJECT(var_i);
        tmp_slice_upper_2 = var_i;
        tmp_assign_source_20 = LOOKUP_SLICE(tmp_slice_source_2, Py_None, tmp_slice_upper_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_lastheader;
            var_lastheader = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_line);
        tmp_list_element_1 = var_line;
        tmp_assign_source_21 = PyList_New(1);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_assign_source_21, 0, tmp_list_element_1);
        {
            PyObject *old = var_lastvalue;
            var_lastvalue = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 473;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_4;
        if (var_lastheader == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "lastheader");
            exception_tb = NULL;

            exception_lineno = 517;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_lastheader);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_call_result_8;
            CHECK_OBJECT(par_self);
            tmp_source_name_13 = par_self;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain__cur);
            if (tmp_source_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 518;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_set_raw);
            Py_DECREF(tmp_source_name_12);
            if (tmp_dircall_arg1_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 518;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_15 = par_self;
            tmp_source_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_policy);
            if (tmp_source_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dircall_arg1_2);

                exception_lineno = 518;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_header_source_parse);
            Py_DECREF(tmp_source_name_14);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dircall_arg1_2);

                exception_lineno = 518;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            if (var_lastvalue == NULL) {
                Py_DECREF(tmp_dircall_arg1_2);
                Py_DECREF(tmp_called_name_4);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "lastvalue");
                exception_tb = NULL;

                exception_lineno = 518;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_12 = var_lastvalue;
            frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame.f_lineno = 518;
            tmp_dircall_arg2_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_12);
            Py_DECREF(tmp_called_name_4);
            if (tmp_dircall_arg2_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dircall_arg1_2);

                exception_lineno = 518;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
                tmp_call_result_8 = impl___internal__$$$function_4_complex_call_helper_star_list(dir_call_args);
            }
            if (tmp_call_result_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 518;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_8);
        }
        branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e3b98b12793b0a2015a46cc0ad0270f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e3b98b12793b0a2015a46cc0ad0270f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e3b98b12793b0a2015a46cc0ad0270f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e3b98b12793b0a2015a46cc0ad0270f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0e3b98b12793b0a2015a46cc0ad0270f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e3b98b12793b0a2015a46cc0ad0270f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e3b98b12793b0a2015a46cc0ad0270f,
        type_description_1,
        par_self,
        par_lines,
        var_lastvalue,
        var_mo,
        var_i,
        var_defect,
        var_lineno,
        var_line,
        var_lastheader
    );


    // Release cached frame.
    if (frame_0e3b98b12793b0a2015a46cc0ad0270f == cache_frame_0e3b98b12793b0a2015a46cc0ad0270f) {
        Py_DECREF(frame_0e3b98b12793b0a2015a46cc0ad0270f);
    }
    cache_frame_0e3b98b12793b0a2015a46cc0ad0270f = NULL;

    assertFrameObject(frame_0e3b98b12793b0a2015a46cc0ad0270f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_19__parse_headers);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_lastvalue);
    var_lastvalue = NULL;

    Py_XDECREF(var_mo);
    var_mo = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_defect);
    var_defect = NULL;

    Py_XDECREF(var_lineno);
    var_lineno = NULL;

    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_lastheader);
    var_lastheader = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_lastvalue);
    var_lastvalue = NULL;

    Py_XDECREF(var_mo);
    var_mo = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_defect);
    var_defect = NULL;

    Py_XDECREF(var_lineno);
    var_lineno = NULL;

    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_lastheader);
    var_lastheader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_19__parse_headers);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$feedparser$$$function_20_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_6603aa11bbf33ef57f2584a4cb3d2e70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6603aa11bbf33ef57f2584a4cb3d2e70 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_6603aa11bbf33ef57f2584a4cb3d2e70, codeobj_6603aa11bbf33ef57f2584a4cb3d2e70, module_future$backports$email$feedparser, sizeof(void *)+sizeof(void *));
    frame_6603aa11bbf33ef57f2584a4cb3d2e70 = cache_frame_6603aa11bbf33ef57f2584a4cb3d2e70;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6603aa11bbf33ef57f2584a4cb3d2e70);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6603aa11bbf33ef57f2584a4cb3d2e70) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_super);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_super);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43280 ], 34, 0);
            exception_tb = NULL;

            exception_lineno = 525;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        frame_6603aa11bbf33ef57f2584a4cb3d2e70->m_frame.f_lineno = 525;
        tmp_source_name_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_feed);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_called_instance_1 = par_data;
        frame_6603aa11bbf33ef57f2584a4cb3d2e70->m_frame.f_lineno = 525;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_unicode_plain_ascii_unicode_plain_surrogateescape_tuple, 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 525;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6603aa11bbf33ef57f2584a4cb3d2e70->m_frame.f_lineno = 525;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6603aa11bbf33ef57f2584a4cb3d2e70);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6603aa11bbf33ef57f2584a4cb3d2e70);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6603aa11bbf33ef57f2584a4cb3d2e70, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6603aa11bbf33ef57f2584a4cb3d2e70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6603aa11bbf33ef57f2584a4cb3d2e70, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6603aa11bbf33ef57f2584a4cb3d2e70,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if (frame_6603aa11bbf33ef57f2584a4cb3d2e70 == cache_frame_6603aa11bbf33ef57f2584a4cb3d2e70) {
        Py_DECREF(frame_6603aa11bbf33ef57f2584a4cb3d2e70);
    }
    cache_frame_6603aa11bbf33ef57f2584a4cb3d2e70 = NULL;

    assertFrameObject(frame_6603aa11bbf33ef57f2584a4cb3d2e70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser$$$function_20_feed);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_10___next__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_10___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e3b8e33f2af8350908361215332ddfa4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d2e943555905f9b34d2fe2b4796ac51e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__$$$function_1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_11___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f590c57ad6462f71b42b589fe9e62119,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__$$$function_2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_11___init__$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_530f50f607bec9ec4b171c06856e4581,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_12__set_headersonly() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_12__set_headersonly,
        const_str_plain__set_headersonly,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bd09f1dfaa1e2ff7c1b74e0edc7e1cc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_13_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_13_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dd13d0af50e44b64a3410f80f76b5930,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        const_unicode_digest_2a4166ae9c1aecb6ccd54cd44c9541c1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_14__call_parse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_14__call_parse,
        const_str_plain__call_parse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_62c357f6006d76f145a9c4366beee2aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_15_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_15_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10b349521af4c263dded425ca82e16f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        const_unicode_digest_424976f5685a960d92d1d2e0d5b026a4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_16__new_message() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_16__new_message,
        const_str_plain__new_message,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8a98874ae058aff28f4a519a0cb75ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_17__pop_message() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_17__pop_message,
        const_str_plain__pop_message,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de6089235e04d5b829c24d1f03ef9700,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_18__parsegen() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_18__parsegen,
        const_str_plain__parsegen,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f0490cb656a87df6960a4fffa61d9427,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_19__parse_headers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_19__parse_headers,
        const_str_plain__parse_headers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0e3b98b12793b0a2015a46cc0ad0270f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8384072eb723e53909239810ef32093b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_20_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_20_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6603aa11bbf33ef57f2584a4cb3d2e70,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_2_push_eof_matcher() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_2_push_eof_matcher,
        const_str_plain_push_eof_matcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c67ebaf9dda5909316f2c9827290297d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_3_pop_eof_matcher() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_3_pop_eof_matcher,
        const_str_plain_pop_eof_matcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b7e9a1c7fdc0a791556f09a3462ec00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_4_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c5e49af5a32d63261fc53d31df1bdb7f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_5_readline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_5_readline,
        const_str_plain_readline,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c71faf20d024aa4f9bafc039d1f4a75,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_6_unreadline() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_6_unreadline,
        const_str_plain_unreadline,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1de0255a6cd3b44ad26e01c66f8c5b29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_7_push() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_7_push,
        const_str_plain_push,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b549dff0ddff4aed8cd7f39e7f44986a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        const_unicode_digest_d63611ec5de105552513988ad2cba874,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_8_pushlines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_8_pushlines,
        const_str_plain_pushlines,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de96d9daabb845ce976680ff4e30da4a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$feedparser$$$function_9___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$feedparser$$$function_9___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2b06e3d7fef0ad4670ce2e4866d2c7f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$feedparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports$email$feedparser =
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

function_impl_code functable_future$backports$email$feedparser[] = {
    impl_future$backports$email$feedparser$$$function_11___init__$$$function_1_lambda,
    impl_future$backports$email$feedparser$$$function_11___init__$$$function_2_lambda,
    impl_future$backports$email$feedparser$$$function_1___init__,
    impl_future$backports$email$feedparser$$$function_2_push_eof_matcher,
    impl_future$backports$email$feedparser$$$function_3_pop_eof_matcher,
    impl_future$backports$email$feedparser$$$function_4_close,
    impl_future$backports$email$feedparser$$$function_5_readline,
    impl_future$backports$email$feedparser$$$function_6_unreadline,
    impl_future$backports$email$feedparser$$$function_7_push,
    impl_future$backports$email$feedparser$$$function_8_pushlines,
    impl_future$backports$email$feedparser$$$function_9___iter__,
    impl_future$backports$email$feedparser$$$function_10___next__,
    impl_future$backports$email$feedparser$$$function_11___init__,
    impl_future$backports$email$feedparser$$$function_12__set_headersonly,
    impl_future$backports$email$feedparser$$$function_13_feed,
    impl_future$backports$email$feedparser$$$function_14__call_parse,
    impl_future$backports$email$feedparser$$$function_15_close,
    impl_future$backports$email$feedparser$$$function_16__new_message,
    impl_future$backports$email$feedparser$$$function_17__pop_message,
    impl_future$backports$email$feedparser$$$function_18__parsegen,
    impl_future$backports$email$feedparser$$$function_19__parse_headers,
    impl_future$backports$email$feedparser$$$function_20_feed,
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

    function_impl_code *current = functable_future$backports$email$feedparser;
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

    if (offset > sizeof(functable_future$backports$email$feedparser) || offset < 0) {
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
        functable_future$backports$email$feedparser[offset],
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
        module_future$backports$email$feedparser,
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
PyObject *modulecode_future$backports$email$feedparser(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$backports$email$feedparser;
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
    PRINT_STRING("future.backports.email.feedparser: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email.feedparser: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email.feedparser: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$backports$email$feedparser\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports$email$feedparser = Py_InitModule4(
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
    mdef_future$backports$email$feedparser.m_name = module_full_name;
    module_future$backports$email$feedparser = PyModule_Create(&mdef_future$backports$email$feedparser);
#endif

    moduledict_future$backports$email$feedparser = MODULE_DICT(module_future$backports$email$feedparser);

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
        moduledict_future$backports$email$feedparser,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$backports$email$feedparser,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$backports$email$feedparser,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email$feedparser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email$feedparser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$backports$email$feedparser);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$backports$email$feedparser);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    struct Nuitka_FrameObject *frame_cd65d6eff8e359993deec8c1283c7b50;
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
    PyObject *locals_future$backports$email$feedparser_49 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_future$backports$email$feedparser_139 = NULL;
    struct Nuitka_FrameObject *frame_b1f74da25737306201d13abd22d361c8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b1f74da25737306201d13abd22d361c8_2 = NULL;
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
    PyObject *locals_future$backports$email$feedparser_521 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_unicode_digest_a734fd6e3f7b52d0236d26d5d873c2c8;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_cd65d6eff8e359993deec8c1283c7b50 = MAKE_MODULE_FRAME(codeobj_cd65d6eff8e359993deec8c1283c7b50, module_future$backports$email$feedparser);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_cd65d6eff8e359993deec8c1283c7b50);
    assert(Py_REFCNT(frame_cd65d6eff8e359993deec8c1283c7b50) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 21;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 22;
        tmp_import_name_from_2 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_2 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_division);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_3;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 23;
        tmp_import_name_from_3 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_3 == NULL));
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_absolute_import);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email$feedparser;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_object_str_plain_range_str_plain_super_tuple;
        tmp_level_name_1 = const_int_0;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 24;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_object);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_range);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_super);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_super, tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_118c8611317729818c37c760127e23b2;
        tmp_globals_name_2 = (PyObject *)moduledict_future$backports$email$feedparser;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_implements_iterator_str_plain_PY3_tuple;
        tmp_level_name_2 = const_int_0;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 25;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_implements_iterator);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_implements_iterator, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_PY3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_12);
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
        tmp_assign_source_13 = LIST_COPY(const_list_unicode_plain_FeedParser_unicode_plain_BytesFeedParser_list);
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_re;
        tmp_globals_name_3 = (PyObject *)moduledict_future$backports$email$feedparser;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 29;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_d19bf663764a0b15d5e8f7167c910e4e;
        tmp_globals_name_4 = (PyObject *)moduledict_future$backports$email$feedparser;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_errors_tuple;
        tmp_level_name_4 = const_int_0;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 31;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_errors);
        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_errors, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_d19bf663764a0b15d5e8f7167c910e4e;
        tmp_globals_name_5 = (PyObject *)moduledict_future$backports$email$feedparser;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_message_tuple;
        tmp_level_name_5 = const_int_0;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 32;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_message);
        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_message, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_2299443fb3beca30307fd2ff4eeefb8e;
        tmp_globals_name_6 = (PyObject *)moduledict_future$backports$email$feedparser;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_compat32_tuple;
        tmp_level_name_6 = const_int_0;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 33;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_compat32);
        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_compat32, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
            exception_tb = NULL;

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 35;
        tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_unicode_digest_b2fed9bde20edbb9c6dd5a99ed477a99_tuple, 0));

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
            exception_tb = NULL;

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 36;
        tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_unicode_digest_03c171283d3fac4e31314b6cf09334dc_tuple, 0));

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_bol, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
            exception_tb = NULL;

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 37;
        tmp_assign_source_20 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_unicode_digest_94a6fb965dc63390e74933b678a919b9_tuple, 0));

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_eol, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
            exception_tb = NULL;

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_4;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 38;
        tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_unicode_digest_03c171283d3fac4e31314b6cf09334dc_tuple, 0));

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NLCRE_crack, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 6156 ], 24, 0);
            exception_tb = NULL;

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_5;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 41;
        tmp_assign_source_22 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_compile, &PyTuple_GET_ITEM(const_tuple_unicode_digest_e898a9aba32eafe76ad23a611c278acf_tuple, 0));

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_headerRE, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = const_unicode_empty;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = const_unicode_newline;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NL, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_object);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_object);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40880 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_6;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 45;
        tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_NeedMoreData, tmp_assign_source_25);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_object);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_object);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40880 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 49;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_7;
        tmp_assign_source_26 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_future$backports$email$feedparser_49 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_7e109766ab1e32461f927f5e9be0abb8;
        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_unicode_digest_9b0f6f2e8e8ab076d8bccb1679ab9857;
        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_1___init__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_2_push_eof_matcher();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain_push_eof_matcher, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_3_pop_eof_matcher();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain_pop_eof_matcher, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_4_close();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain_close, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_5_readline();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain_readline, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_6_unreadline();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain_unreadline, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_7_push();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain_push, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_8_pushlines();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain_pushlines, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_9___iter__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain___iter__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_10___next__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_49, const_str_plain___next__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_27 = locals_future$backports$email$feedparser_49;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_future$backports$email$feedparser_49);
        locals_future$backports$email$feedparser_49 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
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


            exception_lineno = 49;

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
        tmp_assign_source_28 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_29 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto try_except_handler_3;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_29;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_28 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
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
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_28 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_28 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_2 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_BufferedSubFile;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_30;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

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
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_31 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_BufferedSubFile, tmp_assign_source_31);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_object);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_object);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40880 ], 28, 0);
            exception_tb = NULL;

            exception_lineno = 139;

            goto try_except_handler_7;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        tmp_assign_source_32 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_future$backports$email$feedparser_139 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_7e109766ab1e32461f927f5e9be0abb8;
        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_unicode_digest_404b4784c64041dba026fb837ba72ede;
        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        MAKE_OR_REUSE_FRAME(cache_frame_b1f74da25737306201d13abd22d361c8_2, codeobj_b1f74da25737306201d13abd22d361c8, module_future$backports$email$feedparser, 0);
        frame_b1f74da25737306201d13abd22d361c8_2 = cache_frame_b1f74da25737306201d13abd22d361c8_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b1f74da25737306201d13abd22d361c8_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b1f74da25737306201d13abd22d361c8_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_message);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_message);
            }

            if (tmp_mvar_value_9 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 44895 ], 29, 0);
                exception_tb = NULL;

                exception_lineno = 142;

                goto frame_exception_exit_2;
            }

            tmp_source_name_2 = tmp_mvar_value_9;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_Message);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_3);
            tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_11___init__(tmp_defaults_1);



            tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b1f74da25737306201d13abd22d361c8_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b1f74da25737306201d13abd22d361c8_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b1f74da25737306201d13abd22d361c8_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_b1f74da25737306201d13abd22d361c8_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b1f74da25737306201d13abd22d361c8_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_b1f74da25737306201d13abd22d361c8_2,
            type_description_2
        );


        // Release cached frame.
        if (frame_b1f74da25737306201d13abd22d361c8_2 == cache_frame_b1f74da25737306201d13abd22d361c8_2) {
            Py_DECREF(frame_b1f74da25737306201d13abd22d361c8_2);
        }
        cache_frame_b1f74da25737306201d13abd22d361c8_2 = NULL;

        assertFrameObject(frame_b1f74da25737306201d13abd22d361c8_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_12__set_headersonly();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain__set_headersonly, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_13_feed();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_14__call_parse();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain__call_parse, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_15_close();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain_close, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_16__new_message();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain__new_message, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_17__pop_message();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain__pop_message, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_18__parsegen();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain__parsegen, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_19__parse_headers();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_139, const_str_plain__parse_headers, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_assign_source_33 = locals_future$backports$email$feedparser_139;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_future$backports$email$feedparser_139);
        locals_future$backports$email$feedparser_139 = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_future$backports$email$feedparser_139);
        locals_future$backports$email$feedparser_139 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        outline_exception_1:;
        exception_lineno = 139;
        goto try_except_handler_7;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
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


            exception_lineno = 139;

            goto try_except_handler_7;
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
        tmp_assign_source_34 = DICT_GET_ITEM(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_subscribed_name_2 = tmp_class_creation_2__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_35 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_7;
            }
            assert(tmp_select_metaclass_2__base == NULL);
            tmp_select_metaclass_2__base = tmp_assign_source_35;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_source_name_3 = tmp_select_metaclass_2__base;
            tmp_assign_source_34 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_3);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF(exception_keeper_type_6);
            Py_XDECREF(exception_keeper_value_6);
            Py_XDECREF(exception_keeper_tb_6);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_34 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_34 == NULL));
            goto try_return_handler_9;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_2__base);
        Py_DECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_2__base);
        Py_DECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        outline_result_4:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_3 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_FeedParser;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_36;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_37 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_FeedParser, tmp_assign_source_37);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_FeedParser);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_FeedParser);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 44924 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 521;

            goto try_except_handler_11;
        }

        tmp_tuple_element_4 = tmp_mvar_value_10;
        tmp_assign_source_38 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_38, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_future$backports$email$feedparser_521 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_7e109766ab1e32461f927f5e9be0abb8;
        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_521, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_unicode_digest_37d83ecc8b0c51756795757fc1fef3af;
        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_521, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$feedparser$$$function_20_feed();



        tmp_res = PyDict_SetItem(locals_future$backports$email$feedparser_521, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_39 = locals_future$backports$email$feedparser_521;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_future$backports$email$feedparser_521);
        locals_future$backports$email$feedparser_521 = NULL;
        goto outline_result_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        outline_result_5:;
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_5;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_dict_name_6;
        PyObject *tmp_key_name_6;
        tmp_key_name_5 = const_str_plain___metaclass__;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_dict_name_5 = tmp_class_creation_3__class_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_11;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_dict_name_6 = tmp_class_creation_3__class_dict;
        tmp_key_name_6 = const_str_plain___metaclass__;
        tmp_assign_source_40 = DICT_GET_ITEM(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_11;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_subscribed_name_3 = tmp_class_creation_3__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_41 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;

                goto try_except_handler_11;
            }
            assert(tmp_select_metaclass_3__base == NULL);
            tmp_select_metaclass_3__base = tmp_assign_source_41;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_source_name_4 = tmp_select_metaclass_3__base;
            tmp_assign_source_40 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_4);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;

                goto try_except_handler_14;
            }
            goto try_return_handler_13;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF(exception_keeper_type_8);
            Py_XDECREF(exception_keeper_value_8);
            Py_XDECREF(exception_keeper_tb_8);
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_type_arg_3 = tmp_select_metaclass_3__base;
            tmp_assign_source_40 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_40 == NULL));
            goto try_return_handler_13;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_3__base);
        Py_DECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_6;
        // End of try:
        CHECK_OBJECT((PyObject *)tmp_select_metaclass_3__base);
        Py_DECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$feedparser);
        return NULL;
        outline_result_6:;
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_name_4 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_BytesFeedParser;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_cd65d6eff8e359993deec8c1283c7b50->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_42;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd65d6eff8e359993deec8c1283c7b50);
#endif
    popFrameStack();

    assertFrameObject(frame_cd65d6eff8e359993deec8c1283c7b50);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cd65d6eff8e359993deec8c1283c7b50);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_cd65d6eff8e359993deec8c1283c7b50, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_cd65d6eff8e359993deec8c1283c7b50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd65d6eff8e359993deec8c1283c7b50, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_43 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$feedparser, (Nuitka_StringObject *)const_str_plain_BytesFeedParser, tmp_assign_source_43);
    }
    CHECK_OBJECT((PyObject *)tmp_class_creation_3__class);
    Py_DECREF(tmp_class_creation_3__class);
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__class_dict);
    Py_DECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;


    return module_future$backports$email$feedparser;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
