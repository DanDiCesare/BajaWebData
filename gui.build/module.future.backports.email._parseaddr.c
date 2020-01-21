/* Generated code for Python module 'future.backports.email._parseaddr'
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

/* The "_module_future$backports$email$_parseaddr" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports$email$_parseaddr;
PyDictObject *moduledict_future$backports$email$_parseaddr;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_tm;
static PyObject *const_unicode_digest_0f31a3180a2ee48342f1e758017e19b0;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_unicode_chr_44;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_addresslist;
extern PyObject *const_str_plain_data;
extern PyObject *const_unicode_chr_40;
extern PyObject *const_unicode_chr_41;
extern PyObject *const_unicode_chr_43;
extern PyObject *const_tuple_unicode_dot_tuple;
static PyObject *const_str_plain_tzoffset;
extern PyObject *const_str_plain_tz;
static PyObject *const_str_plain_sdlist;
extern PyObject *const_str_plain_stuff;
extern PyObject *const_str_plain_quote;
static PyObject *const_dict_770c83bc059a93ff00bafe034133c2a2;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_unicode_space;
extern PyObject *const_str_plain_parsedate;
extern PyObject *const_str_plain___add__;
extern PyObject *const_str_plain_isdigit;
static PyObject *const_str_plain_adlist;
extern PyObject *const_str_plain_mm;
extern PyObject *const_list_unicode_empty_list;
extern PyObject *const_unicode_plain_quote;
static PyObject *const_str_plain_dd;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_9382e44e2cb7d88be8decbbf10259855_tuple;
extern PyObject *const_unicode_chr_45;
static PyObject *const_tuple_str_plain_self_str_plain_field_tuple;
extern PyObject *const_unicode_chr_91;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_1c2abfe237e6082391af6afde80a6a02;
extern PyObject *const_unicode_chr_59;
extern PyObject *const_unicode_chr_58;
extern PyObject *const_str_plain_AddressList;
extern PyObject *const_tuple_str_plain_int_tuple;
extern PyObject *const_tuple_unicode_empty_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_oldcl;
static PyObject *const_tuple_7d29400a6519c59de6b32737d817369b_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple;
static PyObject *const_tuple_unicode_dot_unicode_empty_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_unicode_digest_964af0501dad3c155597daef02b65515;
static PyObject *const_unicode_digest_fad78ae70f0f47bab7cf6c6815dd549a;
static PyObject *const_unicode_plain_tue;
extern PyObject *const_str_plain_COMMASPACE;
static PyObject *const_tuple_str_plain_data_str_plain_res_tuple;
static PyObject *const_unicode_digest_48930c92c40a4c43e2b386b7aeae0e7d;
static PyObject *const_str_plain_LWS;
static PyObject *const_str_plain_commentlist;
static PyObject *const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_type;
static PyObject *const_unicode_plain_fri;
extern PyObject *const_int_pos_68;
static PyObject *const_str_plain_getrouteaddr;
static PyObject *const_str_plain_tss;
static PyObject *const_unicode_digest_ca236d04fcee6bc49f19e4f6c825e3c1;
extern PyObject *const_unicode_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_str_plain_self_str_plain_wslist_tuple;
static PyObject *const_str_plain_thh;
extern PyObject *const_str_plain_calendar;
static PyObject *const_unicode_digest_3e99414955bbcd4e76ce3f221ce9cb78;
extern PyObject *const_unicode_chr_62;
extern PyObject *const_unicode_chr_60;
static PyObject *const_unicode_digest_dc57a83f629836bb58a2f9270bf61cfd;
extern PyObject *const_unicode_chr_64;
static PyObject *const_str_plain_returnlist;
extern PyObject *const_str_plain_mktime_tz;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_beginchar;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_09633106d8b4bfa6a52ef1a0f6b40e63;
static PyObject *const_str_plain_getatom;
extern PyObject *const_unicode_digest_ac02ab0238280e341b2aff0eed15b128;
static PyObject *const_unicode_plain_sun;
static PyObject *const_tuple_460ee4091b0b887679ae9816a4154e10_tuple;
static PyObject *const_tuple_14f7ba92eb87e056a52348510440bca0_tuple;
static PyObject *const_str_plain_tzsign;
static PyObject *const_list_a531e3ebea8f910a39ebf539f01f1e29_list;
static PyObject *const_str_plain_getcomment;
static PyObject *const_tuple_str_plain_self_str_plain_sdlist_tuple;
static PyObject *const_str_plain_expectroute;
extern PyObject *const_tuple_unicode_chr_43_tuple;
extern PyObject *const_str_plain___iadd__;
extern PyObject *const_tuple_unicode_chr_44_tuple;
static PyObject *const_unicode_digest_0674107b2d3e86aecfffb00b3395ae4a;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_routeaddr;
static PyObject *const_unicode_digest_75b168fba240912f90890636ee280c57;
static PyObject *const_unicode_digest_defb5316411f5eda4d458633449911f9;
extern PyObject *const_str_plain_strip;
static PyObject *const_tuple_tuple_unicode_empty_unicode_empty_tuple_tuple;
static PyObject *const_str_plain_AddrlistClass;
static PyObject *const_unicode_digest_11f2fb395eb3d1bcb84b088cbd977291;
static PyObject *const_unicode_plain_thu;
extern PyObject *const_str_plain_find;
static PyObject *const_str_plain_getaddrlist;
static PyObject *const_str_plain__timezones;
extern PyObject *const_str_plain___isub__;
static PyObject *const_str_plain_getphraselist;
extern PyObject *const_tuple_unicode_chr_64_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_8995188d258aa8ae6d218e0d5fc99a2f_list;
static PyObject *const_unicode_digest_9b805b6192aac3720032f6d97fd0bf27;
static PyObject *const_str_plain_atomlist;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple;
static PyObject *const_unicode_digest_4911663181756066342617a7d23098eb;
static PyObject *const_str_plain_getquote;
static PyObject *const_unicode_digest_c187ccaa27f2071bab4a2e5face88f40;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_int_pos_3600;
extern PyObject *const_str_plain_mktime;
extern PyObject *const_tuple_str_plain_self_str_plain_index_tuple;
extern PyObject *const_str_plain_result;
static PyObject *const_unicode_digest_4c10ea677c5985268e1c1e519afaa07c;
static PyObject *const_str_plain_specials;
static PyObject *const_unicode_plain_sat;
extern PyObject *const_str_plain___init__;
extern PyObject *const_unicode_plain_0;
extern PyObject *const_unicode_plain_mktime_tz;
extern PyObject *const_str_plain_ad;
extern PyObject *const_tuple_str_plain_str_tuple;
static PyObject *const_unicode_digest_bdcebde3432f639563b92f72b787114c;
static PyObject *const_str_plain_getaddress;
extern PyObject *const_str_plain_EMPTYSTRING;
extern PyObject *const_str_plain___sub__;
extern PyObject *const_str_plain__parsedate_tz;
static PyObject *const_tuple_unicode_chr_45_tuple;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_parsedate_tz;
static PyObject *const_str_plain_newaddr;
static PyObject *const_str_plain_slist;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_time;
static PyObject *const_unicode_digest_ddf6c7cc780d451ffc34a9a4364ed04a;
extern PyObject *const_unicode_digest_c245c8a772b3a33119deac8565a08f57;
extern PyObject *const_str_plain_str;
static PyObject *const_unicode_digest_64b4968e38cf7e39d2c870c13dd738dd;
extern PyObject *const_str_plain___module__;
extern PyObject *const_unicode_empty;
static PyObject *const_tuple_str_plain_data_str_plain_t_tuple;
extern PyObject *const_str_plain_SPACE;
extern PyObject *const_int_pos_9;
static PyObject *const_str_plain_oldpos;
extern PyObject *const_str_plain_plist;
static PyObject *const_unicode_digest_5e6858139daf36d44e718ecee097ee97;
static PyObject *const_str_plain_yy;
static PyObject *const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple;
extern PyObject *const_str_plain_other;
static PyObject *const_tuple_str_plain_self_str_plain_plist_tuple;
extern PyObject *const_unicode_plain_parsedate_tz;
extern PyObject *const_str_plain_FWS;
static PyObject *const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_ws;
static PyObject *const_unicode_digest_01ddeff52903ebf9203a5861272393bd;
static PyObject *const_unicode_plain_mon;
extern PyObject *const_str_plain_endswith;
static PyObject *const_unicode_digest_f1cb0013611bc32f424141176b188e49;
extern PyObject *const_unicode_digest_7ca129d2d421fe965ad48cbb290b579b;
extern PyObject *const_tuple_unicode_chr_58_tuple;
static PyObject *const_unicode_digest_b0a73c883a655937e1ff2aa8bb687e6a;
static PyObject *const_str_plain_aslist;
extern PyObject *const_unicode_digest_1e4616cb2877c002aa48d41e8b575b32;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_t;
extern PyObject *const_unicode_chr_92;
static PyObject *const_str_plain_getaddrspec;
extern PyObject *const_str_plain_s;
extern PyObject *const_unicode_digest_7cb7e1a5659547478f12d8fe755efd75;
static PyObject *const_str_plain_preserve_ws;
extern PyObject *const_str_digest_5f0db3cd30cc80d2ac8e677631ff8610;
extern PyObject *const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
static PyObject *const_str_plain_getdelimited;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple;
static PyObject *const_unicode_digest_5c89709a48945a5ebff790f6bfd4f4e7;
static PyObject *const_str_plain_getdomainliteral;
static PyObject *const_tuple_50378005024db3b928cd7b73d1611200_tuple;
static PyObject *const_unicode_digest_d79cfdb9557c580313dead15cbd34257;
extern PyObject *const_int_pos_2000;
static PyObject *const_list_d21280f2608061c33220bf3d68c96cea_list;
static PyObject *const_unicode_digest_f3002bab0927ff1980bb821637eb966d;
extern PyObject *const_unicode_dot;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_addrspec;
static PyObject *const_str_plain_phraseends;
extern PyObject *const_unicode_plain_parsedate;
static PyObject *const_str_plain_endchars;
static PyObject *const_tuple_75779931e28ce0243005b03fbfc3aec4_tuple;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_tmm;
extern PyObject *const_int_0;
static PyObject *const_str_plain_atomends;
extern PyObject *const_str_plain_print_function;
static PyObject *const_unicode_digest_f717fc6c600a521690d4c5fccca7e0c2;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_plain_timegm;
extern PyObject *const_int_pos_1900;
static PyObject *const_unicode_digest_24fbba627d2552038ed5e6fb5a86b549;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_wslist;
static PyObject *const_tuple_da09e2b852461f6e4f548916ee995d00_tuple;
extern PyObject *const_str_plain_tuple;
static PyObject *const_unicode_digest_4785c769eb1af187e19d18bf425a5fd8;
extern PyObject *const_str_plain_pos;
static PyObject *const_str_plain_gotonext;
static PyObject *const_str_plain_CR;
extern PyObject *const_str_plain_pop;
extern PyObject *const_unicode_chr_34;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_a22ab610c0c812382e79ed0af5de41f9_tuple;
static PyObject *const_str_plain__monthnames;
extern PyObject *const_str_plain_remove;
extern PyObject *const_tuple_unicode_empty_unicode_empty_tuple;
extern PyObject *const_str_plain_field;
static PyObject *const_str_plain_fieldlen;
extern PyObject *const_str_plain_rfind;
static PyObject *const_str_plain__daynames;
static PyObject *const_unicode_digest_a6a8906f01df54038862927dd6004ba9;
static PyObject *const_str_plain_getdomain;
static PyObject *const_str_plain_allowcomments;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_int_pos_12;
static PyObject *const_unicode_plain_wed;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_unicode_digest_0f31a3180a2ee48342f1e758017e19b0 = UNSTREAM_UNICODE(&constant_bin[ 656657 ], 129);
    const_str_plain_tzoffset = UNSTREAM_STRING(&constant_bin[ 656786 ], 8, 1);
    const_str_plain_sdlist = UNSTREAM_STRING(&constant_bin[ 656794 ], 6, 1);
    const_dict_770c83bc059a93ff00bafe034133c2a2 = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 656800 ], 181);
    const_str_plain_adlist = UNSTREAM_STRING(&constant_bin[ 656981 ], 6, 1);
    const_str_plain_dd = UNSTREAM_STRING(&constant_bin[ 11163 ], 2, 1);
    const_tuple_9382e44e2cb7d88be8decbbf10259855_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_9382e44e2cb7d88be8decbbf10259855_tuple, 0, const_unicode_chr_34); Py_INCREF(const_unicode_chr_34);
    const_unicode_digest_4911663181756066342617a7d23098eb = UNSTREAM_UNICODE(&constant_bin[ 268606 ], 2);
    PyTuple_SET_ITEM(const_tuple_9382e44e2cb7d88be8decbbf10259855_tuple, 1, const_unicode_digest_4911663181756066342617a7d23098eb); Py_INCREF(const_unicode_digest_4911663181756066342617a7d23098eb);
    PyTuple_SET_ITEM(const_tuple_9382e44e2cb7d88be8decbbf10259855_tuple, 2, Py_False); Py_INCREF(Py_False);
    const_tuple_str_plain_self_str_plain_field_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_field_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_field_tuple, 1, const_str_plain_field); Py_INCREF(const_str_plain_field);
    const_str_digest_1c2abfe237e6082391af6afde80a6a02 = UNSTREAM_STRING(&constant_bin[ 656987 ], 42, 0);
    const_str_plain_oldcl = UNSTREAM_STRING(&constant_bin[ 657029 ], 5, 1);
    const_tuple_7d29400a6519c59de6b32737d817369b_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_beginchar = UNSTREAM_STRING(&constant_bin[ 657034 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 1, const_str_plain_beginchar); Py_INCREF(const_str_plain_beginchar);
    const_str_plain_endchars = UNSTREAM_STRING(&constant_bin[ 657043 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 2, const_str_plain_endchars); Py_INCREF(const_str_plain_endchars);
    const_str_plain_allowcomments = UNSTREAM_STRING(&constant_bin[ 657051 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 3, const_str_plain_allowcomments); Py_INCREF(const_str_plain_allowcomments);
    const_str_plain_slist = UNSTREAM_STRING(&constant_bin[ 657064 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 4, const_str_plain_slist); Py_INCREF(const_str_plain_slist);
    PyTuple_SET_ITEM(const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 5, const_str_plain_quote); Py_INCREF(const_str_plain_quote);
    const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_expectroute = UNSTREAM_STRING(&constant_bin[ 657069 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 1, const_str_plain_expectroute); Py_INCREF(const_str_plain_expectroute);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 2, const_str_plain_adlist); Py_INCREF(const_str_plain_adlist);
    const_tuple_unicode_dot_unicode_empty_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_unicode_dot_unicode_empty_tuple, 0, const_unicode_dot); Py_INCREF(const_unicode_dot);
    PyTuple_SET_ITEM(const_tuple_unicode_dot_unicode_empty_tuple, 1, const_unicode_empty); Py_INCREF(const_unicode_empty);
    const_unicode_digest_964af0501dad3c155597daef02b65515 = UNSTREAM_UNICODE(&constant_bin[ 657080 ], 28);
    const_unicode_digest_fad78ae70f0f47bab7cf6c6815dd549a = UNSTREAM_UNICODE(&constant_bin[ 657108 ], 38);
    const_unicode_plain_tue = UNSTREAM_UNICODE(&constant_bin[ 657146 ], 3);
    const_tuple_str_plain_data_str_plain_res_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_data_str_plain_res_tuple, 0, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_str_plain_data_str_plain_res_tuple, 1, const_str_plain_res); Py_INCREF(const_str_plain_res);
    const_unicode_digest_48930c92c40a4c43e2b386b7aeae0e7d = UNSTREAM_UNICODE(&constant_bin[ 657149 ], 486);
    const_str_plain_LWS = UNSTREAM_STRING(&constant_bin[ 657635 ], 3, 1);
    const_str_plain_commentlist = UNSTREAM_STRING(&constant_bin[ 657638 ], 11, 1);
    const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple = PyTuple_New(14);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 0, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 1, const_str_plain_tm); Py_INCREF(const_str_plain_tm);
    const_str_plain_tzsign = UNSTREAM_STRING(&constant_bin[ 657649 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 2, const_str_plain_tzsign); Py_INCREF(const_str_plain_tzsign);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 3, const_str_plain_tz); Py_INCREF(const_str_plain_tz);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 4, const_str_plain_i); Py_INCREF(const_str_plain_i);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 5, const_str_plain_dd); Py_INCREF(const_str_plain_dd);
    const_str_plain_tss = UNSTREAM_STRING(&constant_bin[ 134835 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 6, const_str_plain_tss); Py_INCREF(const_str_plain_tss);
    const_str_plain_yy = UNSTREAM_STRING(&constant_bin[ 657655 ], 2, 1);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 7, const_str_plain_yy); Py_INCREF(const_str_plain_yy);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 8, const_str_plain_mm); Py_INCREF(const_str_plain_mm);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 9, const_str_plain_s); Py_INCREF(const_str_plain_s);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 10, const_str_plain_stuff); Py_INCREF(const_str_plain_stuff);
    const_str_plain_thh = UNSTREAM_STRING(&constant_bin[ 650985 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 11, const_str_plain_thh); Py_INCREF(const_str_plain_thh);
    const_str_plain_tmm = UNSTREAM_STRING(&constant_bin[ 657657 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 12, const_str_plain_tmm); Py_INCREF(const_str_plain_tmm);
    PyTuple_SET_ITEM(const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 13, const_str_plain_tzoffset); Py_INCREF(const_str_plain_tzoffset);
    const_unicode_plain_fri = UNSTREAM_UNICODE(&constant_bin[ 127561 ], 3);
    const_str_plain_getrouteaddr = UNSTREAM_STRING(&constant_bin[ 657660 ], 12, 1);
    const_unicode_digest_ca236d04fcee6bc49f19e4f6c825e3c1 = UNSTREAM_UNICODE(&constant_bin[ 657672 ], 38);
    const_tuple_str_plain_self_str_plain_wslist_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_wslist_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_wslist = UNSTREAM_STRING(&constant_bin[ 657710 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_wslist_tuple, 1, const_str_plain_wslist); Py_INCREF(const_str_plain_wslist);
    const_unicode_digest_3e99414955bbcd4e76ce3f221ce9cb78 = UNSTREAM_UNICODE(&constant_bin[ 657716 ], 12);
    const_unicode_digest_dc57a83f629836bb58a2f9270bf61cfd = UNSTREAM_UNICODE(&constant_bin[ 657728 ], 390);
    const_str_plain_returnlist = UNSTREAM_STRING(&constant_bin[ 658118 ], 10, 1);
    const_str_digest_09633106d8b4bfa6a52ef1a0f6b40e63 = UNSTREAM_STRING(&constant_bin[ 658128 ], 36, 0);
    const_str_plain_getatom = UNSTREAM_STRING(&constant_bin[ 658164 ], 7, 1);
    const_unicode_plain_sun = UNSTREAM_UNICODE(&constant_bin[ 38908 ], 3);
    const_tuple_460ee4091b0b887679ae9816a4154e10_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_460ee4091b0b887679ae9816a4154e10_tuple, 0, const_unicode_chr_91); Py_INCREF(const_unicode_chr_91);
    const_unicode_digest_4785c769eb1af187e19d18bf425a5fd8 = UNSTREAM_UNICODE(&constant_bin[ 283866 ], 2);
    PyTuple_SET_ITEM(const_tuple_460ee4091b0b887679ae9816a4154e10_tuple, 1, const_unicode_digest_4785c769eb1af187e19d18bf425a5fd8); Py_INCREF(const_unicode_digest_4785c769eb1af187e19d18bf425a5fd8);
    PyTuple_SET_ITEM(const_tuple_460ee4091b0b887679ae9816a4154e10_tuple, 2, Py_False); Py_INCREF(Py_False);
    const_tuple_14f7ba92eb87e056a52348510440bca0_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_addrspec = UNSTREAM_STRING(&constant_bin[ 656768 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 1, const_str_plain_addrspec); Py_INCREF(const_str_plain_addrspec);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 2, const_str_plain_oldcl); Py_INCREF(const_str_plain_oldcl);
    const_str_plain_oldpos = UNSTREAM_STRING(&constant_bin[ 658171 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 3, const_str_plain_oldpos); Py_INCREF(const_str_plain_oldpos);
    const_str_plain_routeaddr = UNSTREAM_STRING(&constant_bin[ 657663 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 4, const_str_plain_routeaddr); Py_INCREF(const_str_plain_routeaddr);
    const_str_plain_fieldlen = UNSTREAM_STRING(&constant_bin[ 658177 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 5, const_str_plain_fieldlen); Py_INCREF(const_str_plain_fieldlen);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 6, const_str_plain_returnlist); Py_INCREF(const_str_plain_returnlist);
    PyTuple_SET_ITEM(const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 7, const_str_plain_plist); Py_INCREF(const_str_plain_plist);
    const_list_a531e3ebea8f910a39ebf539f01f1e29_list = PyList_New(7);
    const_unicode_plain_mon = UNSTREAM_UNICODE(&constant_bin[ 39956 ], 3);
    PyList_SET_ITEM(const_list_a531e3ebea8f910a39ebf539f01f1e29_list, 0, const_unicode_plain_mon); Py_INCREF(const_unicode_plain_mon);
    PyList_SET_ITEM(const_list_a531e3ebea8f910a39ebf539f01f1e29_list, 1, const_unicode_plain_tue); Py_INCREF(const_unicode_plain_tue);
    const_unicode_plain_wed = UNSTREAM_UNICODE(&constant_bin[ 81009 ], 3);
    PyList_SET_ITEM(const_list_a531e3ebea8f910a39ebf539f01f1e29_list, 2, const_unicode_plain_wed); Py_INCREF(const_unicode_plain_wed);
    const_unicode_plain_thu = UNSTREAM_UNICODE(&constant_bin[ 144873 ], 3);
    PyList_SET_ITEM(const_list_a531e3ebea8f910a39ebf539f01f1e29_list, 3, const_unicode_plain_thu); Py_INCREF(const_unicode_plain_thu);
    PyList_SET_ITEM(const_list_a531e3ebea8f910a39ebf539f01f1e29_list, 4, const_unicode_plain_fri); Py_INCREF(const_unicode_plain_fri);
    const_unicode_plain_sat = UNSTREAM_UNICODE(&constant_bin[ 40398 ], 3);
    PyList_SET_ITEM(const_list_a531e3ebea8f910a39ebf539f01f1e29_list, 5, const_unicode_plain_sat); Py_INCREF(const_unicode_plain_sat);
    PyList_SET_ITEM(const_list_a531e3ebea8f910a39ebf539f01f1e29_list, 6, const_unicode_plain_sun); Py_INCREF(const_unicode_plain_sun);
    const_str_plain_getcomment = UNSTREAM_STRING(&constant_bin[ 658185 ], 10, 1);
    const_tuple_str_plain_self_str_plain_sdlist_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_sdlist_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_sdlist_tuple, 1, const_str_plain_sdlist); Py_INCREF(const_str_plain_sdlist);
    const_unicode_digest_0674107b2d3e86aecfffb00b3395ae4a = UNSTREAM_UNICODE(&constant_bin[ 658195 ], 4);
    const_unicode_digest_75b168fba240912f90890636ee280c57 = UNSTREAM_UNICODE(&constant_bin[ 658199 ], 131);
    const_unicode_digest_defb5316411f5eda4d458633449911f9 = UNSTREAM_UNICODE(&constant_bin[ 658330 ], 64);
    const_tuple_tuple_unicode_empty_unicode_empty_tuple_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_tuple_unicode_empty_unicode_empty_tuple_tuple, 0, const_tuple_unicode_empty_unicode_empty_tuple); Py_INCREF(const_tuple_unicode_empty_unicode_empty_tuple);
    const_str_plain_AddrlistClass = UNSTREAM_STRING(&constant_bin[ 43211 ], 13, 1);
    const_unicode_digest_11f2fb395eb3d1bcb84b088cbd977291 = UNSTREAM_UNICODE(&constant_bin[ 658394 ], 49);
    const_str_plain_getaddrlist = UNSTREAM_STRING(&constant_bin[ 658443 ], 11, 1);
    const_str_plain__timezones = UNSTREAM_STRING(&constant_bin[ 43023 ], 10, 1);
    const_str_plain_getphraselist = UNSTREAM_STRING(&constant_bin[ 658454 ], 13, 1);
    const_list_8995188d258aa8ae6d218e0d5fc99a2f_list = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 658467 ], 235);
    const_unicode_digest_9b805b6192aac3720032f6d97fd0bf27 = UNSTREAM_UNICODE(&constant_bin[ 270026 ], 2);
    const_str_plain_atomlist = UNSTREAM_STRING(&constant_bin[ 658702 ], 8, 1);
    const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 1, const_str_plain_other); Py_INCREF(const_str_plain_other);
    const_str_plain_newaddr = UNSTREAM_STRING(&constant_bin[ 658710 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 2, const_str_plain_newaddr); Py_INCREF(const_str_plain_newaddr);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 3, const_str_plain_x); Py_INCREF(const_str_plain_x);
    const_str_plain_getquote = UNSTREAM_STRING(&constant_bin[ 658717 ], 8, 1);
    const_unicode_digest_c187ccaa27f2071bab4a2e5face88f40 = UNSTREAM_UNICODE(&constant_bin[ 658725 ], 69);
    const_unicode_digest_4c10ea677c5985268e1c1e519afaa07c = UNSTREAM_UNICODE(&constant_bin[ 658794 ], 33);
    const_str_plain_specials = UNSTREAM_STRING(&constant_bin[ 45900 ], 8, 1);
    const_unicode_digest_bdcebde3432f639563b92f72b787114c = UNSTREAM_UNICODE(&constant_bin[ 658827 ], 253);
    const_str_plain_getaddress = UNSTREAM_STRING(&constant_bin[ 659080 ], 10, 1);
    const_tuple_unicode_chr_45_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_unicode_chr_45_tuple, 0, const_unicode_chr_45); Py_INCREF(const_unicode_chr_45);
    const_unicode_digest_ddf6c7cc780d451ffc34a9a4364ed04a = UNSTREAM_UNICODE(&constant_bin[ 659090 ], 276);
    const_unicode_digest_64b4968e38cf7e39d2c870c13dd738dd = UNSTREAM_UNICODE(&constant_bin[ 659366 ], 248);
    const_tuple_str_plain_data_str_plain_t_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_data_str_plain_t_tuple, 0, const_str_plain_data); Py_INCREF(const_str_plain_data);
    PyTuple_SET_ITEM(const_tuple_str_plain_data_str_plain_t_tuple, 1, const_str_plain_t); Py_INCREF(const_str_plain_t);
    const_unicode_digest_5e6858139daf36d44e718ecee097ee97 = UNSTREAM_UNICODE(&constant_bin[ 659614 ], 81);
    const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_atomends = UNSTREAM_STRING(&constant_bin[ 659132 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 1, const_str_plain_atomends); Py_INCREF(const_str_plain_atomends);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 2, const_str_plain_atomlist); Py_INCREF(const_str_plain_atomlist);
    const_tuple_str_plain_self_str_plain_plist_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_plist_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_plist_tuple, 1, const_str_plain_plist); Py_INCREF(const_str_plain_plist);
    const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 1, const_str_plain_result); Py_INCREF(const_str_plain_result);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 2, const_str_plain_ad); Py_INCREF(const_str_plain_ad);
    const_str_plain_ws = UNSTREAM_STRING(&constant_bin[ 57227 ], 2, 1);
    const_unicode_digest_01ddeff52903ebf9203a5861272393bd = UNSTREAM_UNICODE(&constant_bin[ 659695 ], 99);
    const_unicode_digest_f1cb0013611bc32f424141176b188e49 = UNSTREAM_UNICODE(&constant_bin[ 659794 ], 23);
    const_unicode_digest_b0a73c883a655937e1ff2aa8bb687e6a = UNSTREAM_UNICODE(&constant_bin[ 86058 ], 2);
    const_str_plain_aslist = UNSTREAM_STRING(&constant_bin[ 659817 ], 6, 1);
    const_str_plain_getaddrspec = UNSTREAM_STRING(&constant_bin[ 659823 ], 11, 1);
    const_str_plain_preserve_ws = UNSTREAM_STRING(&constant_bin[ 659834 ], 11, 1);
    const_str_plain_getdelimited = UNSTREAM_STRING(&constant_bin[ 657342 ], 12, 1);
    const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 1, const_str_plain_other); Py_INCREF(const_str_plain_other);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 2, const_str_plain_x); Py_INCREF(const_str_plain_x);
    const_unicode_digest_5c89709a48945a5ebff790f6bfd4f4e7 = UNSTREAM_UNICODE(&constant_bin[ 659845 ], 86);
    const_str_plain_getdomainliteral = UNSTREAM_STRING(&constant_bin[ 659931 ], 16, 1);
    const_tuple_50378005024db3b928cd7b73d1611200_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_50378005024db3b928cd7b73d1611200_tuple, 0, const_unicode_chr_92); Py_INCREF(const_unicode_chr_92);
    PyTuple_SET_ITEM(const_tuple_50378005024db3b928cd7b73d1611200_tuple, 1, const_unicode_digest_7cb7e1a5659547478f12d8fe755efd75); Py_INCREF(const_unicode_digest_7cb7e1a5659547478f12d8fe755efd75);
    const_unicode_digest_d79cfdb9557c580313dead15cbd34257 = UNSTREAM_UNICODE(&constant_bin[ 659947 ], 259);
    const_list_d21280f2608061c33220bf3d68c96cea_list = PyList_New(4);
    PyList_SET_ITEM(const_list_d21280f2608061c33220bf3d68c96cea_list, 0, const_unicode_plain_mktime_tz); Py_INCREF(const_unicode_plain_mktime_tz);
    PyList_SET_ITEM(const_list_d21280f2608061c33220bf3d68c96cea_list, 1, const_unicode_plain_parsedate); Py_INCREF(const_unicode_plain_parsedate);
    PyList_SET_ITEM(const_list_d21280f2608061c33220bf3d68c96cea_list, 2, const_unicode_plain_parsedate_tz); Py_INCREF(const_unicode_plain_parsedate_tz);
    PyList_SET_ITEM(const_list_d21280f2608061c33220bf3d68c96cea_list, 3, const_unicode_plain_quote); Py_INCREF(const_unicode_plain_quote);
    const_unicode_digest_f3002bab0927ff1980bb821637eb966d = UNSTREAM_UNICODE(&constant_bin[ 660206 ], 45);
    const_str_plain_phraseends = UNSTREAM_STRING(&constant_bin[ 660251 ], 10, 1);
    const_tuple_75779931e28ce0243005b03fbfc3aec4_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_75779931e28ce0243005b03fbfc3aec4_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_75779931e28ce0243005b03fbfc3aec4_tuple, 1, const_str_plain_ws); Py_INCREF(const_str_plain_ws);
    PyTuple_SET_ITEM(const_tuple_75779931e28ce0243005b03fbfc3aec4_tuple, 2, const_str_plain_preserve_ws); Py_INCREF(const_str_plain_preserve_ws);
    PyTuple_SET_ITEM(const_tuple_75779931e28ce0243005b03fbfc3aec4_tuple, 3, const_str_plain_aslist); Py_INCREF(const_str_plain_aslist);
    const_unicode_digest_f717fc6c600a521690d4c5fccca7e0c2 = UNSTREAM_UNICODE(&constant_bin[ 660261 ], 2);
    const_unicode_digest_24fbba627d2552038ed5e6fb5a86b549 = UNSTREAM_UNICODE(&constant_bin[ 660263 ], 55);
    const_tuple_da09e2b852461f6e4f548916ee995d00_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_da09e2b852461f6e4f548916ee995d00_tuple, 0, const_unicode_chr_40); Py_INCREF(const_unicode_chr_40);
    PyTuple_SET_ITEM(const_tuple_da09e2b852461f6e4f548916ee995d00_tuple, 1, const_unicode_digest_9b805b6192aac3720032f6d97fd0bf27); Py_INCREF(const_unicode_digest_9b805b6192aac3720032f6d97fd0bf27);
    PyTuple_SET_ITEM(const_tuple_da09e2b852461f6e4f548916ee995d00_tuple, 2, Py_True); Py_INCREF(Py_True);
    const_str_plain_gotonext = UNSTREAM_STRING(&constant_bin[ 660318 ], 8, 1);
    const_str_plain_CR = UNSTREAM_STRING(&constant_bin[ 687 ], 2, 1);
    const_tuple_a22ab610c0c812382e79ed0af5de41f9_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_a22ab610c0c812382e79ed0af5de41f9_tuple, 0, const_unicode_chr_34); Py_INCREF(const_unicode_chr_34);
    PyTuple_SET_ITEM(const_tuple_a22ab610c0c812382e79ed0af5de41f9_tuple, 1, const_unicode_digest_c245c8a772b3a33119deac8565a08f57); Py_INCREF(const_unicode_digest_c245c8a772b3a33119deac8565a08f57);
    const_str_plain__monthnames = UNSTREAM_STRING(&constant_bin[ 42983 ], 11, 1);
    const_str_plain__daynames = UNSTREAM_STRING(&constant_bin[ 42945 ], 9, 1);
    const_unicode_digest_a6a8906f01df54038862927dd6004ba9 = UNSTREAM_UNICODE(&constant_bin[ 284196 ], 2);
    const_str_plain_getdomain = UNSTREAM_STRING(&constant_bin[ 659931 ], 9, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports$email$_parseaddr(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d9ee516ff89da7aa641a630b57fc5971;
static PyCodeObject *codeobj_46ede2f952d69acf5fc2d9657a3726d9;
static PyCodeObject *codeobj_08e2794d78056de64a988acf4955addb;
static PyCodeObject *codeobj_e9f79db525bcdb7b685531bc23596c46;
static PyCodeObject *codeobj_35f990bb49c7160cc4a52e093e774722;
static PyCodeObject *codeobj_10d5fd7ef29b2b2d30b488c654914f43;
static PyCodeObject *codeobj_46da49e29847bfce71c426b2d13eda15;
static PyCodeObject *codeobj_c10a10ebdf06e31a46964de56c906022;
static PyCodeObject *codeobj_d1d04fa1b87bc02749ca097f9428ec75;
static PyCodeObject *codeobj_099dc03d32b8be438c77aa2798e1c797;
static PyCodeObject *codeobj_ffe00bc424c8167fba5b43b394e18fb5;
static PyCodeObject *codeobj_51751f397e7852160c26e5be3b8f6aad;
static PyCodeObject *codeobj_e17954a69404dc268c89622d8f20e797;
static PyCodeObject *codeobj_f922da6b776dadadf31a9afde0c8da10;
static PyCodeObject *codeobj_3c5fcfb813267bcdc71dbd0bdcd1e4f6;
static PyCodeObject *codeobj_a328ee5811804c7959bc845bc57a7ed2;
static PyCodeObject *codeobj_82cbed305210342d2c44ef58ad9b7ece;
static PyCodeObject *codeobj_e1584315357ee28b5b8a721c2a97db17;
static PyCodeObject *codeobj_98ff8b3f8b9f4bd9daa616cd485c3590;
static PyCodeObject *codeobj_b65a0af7466f8cec096f1713c5ae8e98;
static PyCodeObject *codeobj_e16a84083218128bf27e189b506ad3ae;
static PyCodeObject *codeobj_a45f365c3bc63e44289b1ba2d1095cd9;
static PyCodeObject *codeobj_e4182f6f2781e31907c3b54fb76df626;
static PyCodeObject *codeobj_89dad0487329899daff00d17bc04837e;
static PyCodeObject *codeobj_1c48f872e562c16fa8cb45f285328bfb;
static PyCodeObject *codeobj_e6627ad4e62acd10820b49235f949d6d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(const_str_digest_09633106d8b4bfa6a52ef1a0f6b40e63);
    codeobj_d9ee516ff89da7aa641a630b57fc5971 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_digest_1c2abfe237e6082391af6afde80a6a02, const_tuple_empty, 0, 0, 0);
    codeobj_46ede2f952d69acf5fc2d9657a3726d9 = MAKE_CODEOBJECT(module_filename_obj, 513, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___add__, const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 2, 0, 0);
    codeobj_08e2794d78056de64a988acf4955addb = MAKE_CODEOBJECT(module_filename_obj, 544, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___getitem__, const_tuple_str_plain_self_str_plain_index_tuple, 2, 0, 0);
    codeobj_e9f79db525bcdb7b685531bc23596c46 = MAKE_CODEOBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___iadd__, const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 2, 0, 0);
    codeobj_35f990bb49c7160cc4a52e093e774722 = MAKE_CODEOBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___init__, const_tuple_str_plain_self_str_plain_field_tuple, 2, 0, 0);
    codeobj_10d5fd7ef29b2b2d30b488c654914f43 = MAKE_CODEOBJECT(module_filename_obj, 503, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___init__, const_tuple_str_plain_self_str_plain_field_tuple, 2, 0, 0);
    codeobj_46da49e29847bfce71c426b2d13eda15 = MAKE_CODEOBJECT(module_filename_obj, 537, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___isub__, const_tuple_str_plain_self_str_plain_other_str_plain_x_tuple, 2, 0, 0);
    codeobj_c10a10ebdf06e31a46964de56c906022 = MAKE_CODEOBJECT(module_filename_obj, 510, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___len__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_d1d04fa1b87bc02749ca097f9428ec75 = MAKE_CODEOBJECT(module_filename_obj, 529, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain___sub__, const_tuple_str_plain_self_str_plain_other_str_plain_newaddr_str_plain_x_tuple, 2, 0, 0);
    codeobj_099dc03d32b8be438c77aa2798e1c797 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain__parsedate_tz, const_tuple_89593d4a24ccbbfaa21c44051d4b5ca7_tuple, 1, 0, 0);
    codeobj_ffe00bc424c8167fba5b43b394e18fb5 = MAKE_CODEOBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getaddress, const_tuple_14f7ba92eb87e056a52348510440bca0_tuple, 1, 0, 0);
    codeobj_51751f397e7852160c26e5be3b8f6aad = MAKE_CODEOBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getaddrlist, const_tuple_str_plain_self_str_plain_result_str_plain_ad_tuple, 1, 0, 0);
    codeobj_e17954a69404dc268c89622d8f20e797 = MAKE_CODEOBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getaddrspec, const_tuple_75779931e28ce0243005b03fbfc3aec4_tuple, 1, 0, 0);
    codeobj_f922da6b776dadadf31a9afde0c8da10 = MAKE_CODEOBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getatom, const_tuple_str_plain_self_str_plain_atomends_str_plain_atomlist_tuple, 2, 0, 0);
    codeobj_3c5fcfb813267bcdc71dbd0bdcd1e4f6 = MAKE_CODEOBJECT(module_filename_obj, 450, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getcomment, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_a328ee5811804c7959bc845bc57a7ed2 = MAKE_CODEOBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getdelimited, const_tuple_7d29400a6519c59de6b32737d817369b_tuple, 4, 0, 0);
    codeobj_82cbed305210342d2c44ef58ad9b7ece = MAKE_CODEOBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getdomain, const_tuple_str_plain_self_str_plain_sdlist_tuple, 1, 0, 0);
    codeobj_e1584315357ee28b5b8a721c2a97db17 = MAKE_CODEOBJECT(module_filename_obj, 454, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getdomainliteral, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_98ff8b3f8b9f4bd9daa616cd485c3590 = MAKE_CODEOBJECT(module_filename_obj, 478, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getphraselist, const_tuple_str_plain_self_str_plain_plist_tuple, 1, 0, 0);
    codeobj_b65a0af7466f8cec096f1713c5ae8e98 = MAKE_CODEOBJECT(module_filename_obj, 446, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getquote, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_e16a84083218128bf27e189b506ad3ae = MAKE_CODEOBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_getrouteaddr, const_tuple_str_plain_self_str_plain_expectroute_str_plain_adlist_tuple, 1, 0, 0);
    codeobj_a45f365c3bc63e44289b1ba2d1095cd9 = MAKE_CODEOBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_gotonext, const_tuple_str_plain_self_str_plain_wslist_tuple, 1, 0, 0);
    codeobj_e4182f6f2781e31907c3b54fb76df626 = MAKE_CODEOBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_mktime_tz, const_tuple_str_plain_data_str_plain_t_tuple, 1, 0, 0);
    codeobj_89dad0487329899daff00d17bc04837e = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_parsedate, const_tuple_str_plain_data_str_plain_t_tuple, 1, 0, 0);
    codeobj_1c48f872e562c16fa8cb45f285328bfb = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_parsedate_tz, const_tuple_str_plain_data_str_plain_res_tuple, 1, 0, 0);
    codeobj_e6627ad4e62acd10820b49235f949d6d = MAKE_CODEOBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION, const_str_plain_quote, const_tuple_str_plain_str_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_10_getrouteaddr();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_11_getaddrspec();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_12_getdomain();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_13_getdelimited(PyObject *defaults);


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_14_getquote();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_15_getcomment();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_16_getdomainliteral();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_17_getatom(PyObject *defaults);


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_18_getphraselist();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_19___init__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_1_parsedate_tz();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_20___len__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_21___add__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_22___iadd__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_23___sub__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_24___isub__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_25___getitem__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_2__parsedate_tz();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_3_parsedate();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_4_mktime_tz();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_5_quote();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_6___init__();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_7_gotonext();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_8_getaddrlist();


static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_9_getaddress();


// The module function definitions.
static PyObject *impl_future$backports$email$_parseaddr$$$function_1_parsedate_tz(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_1c48f872e562c16fa8cb45f285328bfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1c48f872e562c16fa8cb45f285328bfb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_1c48f872e562c16fa8cb45f285328bfb, codeobj_1c48f872e562c16fa8cb45f285328bfb, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_1c48f872e562c16fa8cb45f285328bfb = cache_frame_1c48f872e562c16fa8cb45f285328bfb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c48f872e562c16fa8cb45f285328bfb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c48f872e562c16fa8cb45f285328bfb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__parsedate_tz);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__parsedate_tz);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 42890 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_1c48f872e562c16fa8cb45f285328bfb->m_frame.f_lineno = 56;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_res);
        tmp_operand_name_1 = var_res;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
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
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_res);
        tmp_subscribed_name_1 = var_res;
        tmp_subscript_name_1 = const_int_pos_9;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 9);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            tmp_ass_subvalue_1 = const_int_0;
            CHECK_OBJECT(var_res);
            tmp_ass_subscribed_1 = var_res;
            tmp_ass_subscript_1 = const_int_pos_9;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 9, tmp_ass_subvalue_1);
            if (tmp_ass_subscript_res_1 == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(var_res);
        tmp_tuple_arg_1 = var_res;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c48f872e562c16fa8cb45f285328bfb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c48f872e562c16fa8cb45f285328bfb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c48f872e562c16fa8cb45f285328bfb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c48f872e562c16fa8cb45f285328bfb, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1c48f872e562c16fa8cb45f285328bfb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c48f872e562c16fa8cb45f285328bfb, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c48f872e562c16fa8cb45f285328bfb,
        type_description_1,
        par_data,
        var_res
    );


    // Release cached frame.
    if (frame_1c48f872e562c16fa8cb45f285328bfb == cache_frame_1c48f872e562c16fa8cb45f285328bfb) {
        Py_DECREF(frame_1c48f872e562c16fa8cb45f285328bfb);
    }
    cache_frame_1c48f872e562c16fa8cb45f285328bfb = NULL;

    assertFrameObject(frame_1c48f872e562c16fa8cb45f285328bfb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_1_parsedate_tz);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

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

    Py_XDECREF(var_res);
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_1_parsedate_tz);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_2__parsedate_tz(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_tm = NULL;
    PyObject *var_tzsign = NULL;
    PyObject *var_tz = NULL;
    PyObject *var_i = NULL;
    PyObject *var_dd = NULL;
    PyObject *var_tss = NULL;
    PyObject *var_yy = NULL;
    PyObject *var_mm = NULL;
    PyObject *var_s = NULL;
    PyObject *var_stuff = NULL;
    PyObject *var_thh = NULL;
    PyObject *var_tmm = NULL;
    PyObject *var_tzoffset = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    struct Nuitka_FrameObject *frame_099dc03d32b8be438c77aa2798e1c797;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    static struct Nuitka_FrameObject *cache_frame_099dc03d32b8be438c77aa2798e1c797 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_099dc03d32b8be438c77aa2798e1c797, codeobj_099dc03d32b8be438c77aa2798e1c797, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_099dc03d32b8be438c77aa2798e1c797 = cache_frame_099dc03d32b8be438c77aa2798e1c797;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_099dc03d32b8be438c77aa2798e1c797);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_099dc03d32b8be438c77aa2798e1c797) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_data);
        tmp_operand_name_1 = par_data;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_data);
        tmp_called_instance_1 = par_data;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 75;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_split);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_data);
        tmp_subscribed_name_1 = par_data;
        tmp_subscript_name_1 = const_int_0;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_endswith, &PyTuple_GET_ITEM(const_tuple_unicode_chr_44_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
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
        CHECK_OBJECT(par_data);
        tmp_subscribed_name_2 = par_data;
        tmp_subscript_name_2 = const_int_0;
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 78;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_lower);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__daynames);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__daynames);
        }

        if (tmp_mvar_value_1 == NULL) {
            Py_DECREF(tmp_compexpr_left_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 42932 ], 38, 0);
            exception_tb = NULL;

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_delsubscr_subscript_1;
            CHECK_OBJECT(par_data);
            tmp_delsubscr_target_1 = par_data;
            tmp_delsubscr_subscript_1 = const_int_0;
            tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT(par_data);
            tmp_subscribed_name_3 = par_data;
            tmp_subscript_name_3 = const_int_0;
            tmp_called_instance_4 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 82;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_rfind, &PyTuple_GET_ITEM(const_tuple_unicode_chr_44_tuple, 0));

            Py_DECREF(tmp_called_instance_4);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_i == NULL);
            var_i = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(var_i);
            tmp_compexpr_left_2 = var_i;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_slice_source_1;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_slice_lower_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                int tmp_ass_subscript_res_1;
                CHECK_OBJECT(par_data);
                tmp_subscribed_name_4 = par_data;
                tmp_subscript_name_4 = const_int_0;
                tmp_slice_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_4, tmp_subscript_name_4, 0);
                if (tmp_slice_source_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(var_i);
                tmp_left_name_1 = var_i;
                tmp_right_name_1 = const_int_pos_1;
                tmp_slice_lower_1 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_1, tmp_right_name_1);
                if (tmp_slice_lower_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_slice_source_1);

                    exception_lineno = 84;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_ass_subvalue_1 = LOOKUP_SLICE(tmp_slice_source_1, tmp_slice_lower_1, Py_None);
                Py_DECREF(tmp_slice_source_1);
                Py_DECREF(tmp_slice_lower_1);
                if (tmp_ass_subvalue_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_data);
                tmp_ass_subscribed_1 = par_data;
                tmp_ass_subscript_1 = const_int_0;
                tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1);
                Py_DECREF(tmp_ass_subvalue_1);
                if (tmp_ass_subscript_res_1 == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_3:;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_compexpr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT(par_data);
            tmp_subscribed_name_5 = par_data;
            tmp_subscript_name_5 = const_int_0;
            tmp_called_instance_5 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_5, tmp_subscript_name_5, 0);
            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 86;
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_unicode_chr_45_tuple, 0));

            Py_DECREF(tmp_called_instance_5);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_stuff == NULL);
            var_stuff = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT(var_stuff);
            tmp_len_arg_2 = var_stuff;
            tmp_compexpr_left_4 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_compexpr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_int_pos_3;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            Py_DECREF(tmp_compexpr_left_4);
            assert(!(tmp_res == -1));
            tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                Py_ssize_t tmp_sliceslicedel_index_lower_1;
                Py_ssize_t tmp_slice_index_upper_1;
                PyObject *tmp_slice_source_2;
                CHECK_OBJECT(var_stuff);
                tmp_left_name_2 = var_stuff;
                tmp_sliceslicedel_index_lower_1 = 1;
                tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
                CHECK_OBJECT(par_data);
                tmp_slice_source_2 = par_data;
                tmp_right_name_2 = LOOKUP_INDEX_SLICE(tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
                if (tmp_right_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_assign_source_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_data;
                    assert(old != NULL);
                    par_data = tmp_assign_source_4;
                    Py_DECREF(old);
                }

            }
            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_3;
        if (par_data == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "data");
            exception_tb = NULL;

            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_3 = par_data;
        tmp_compexpr_left_5 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_4;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            if (par_data == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "data");
                exception_tb = NULL;

                exception_lineno = 90;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_6 = par_data;
            tmp_subscript_name_6 = const_int_pos_3;
            tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_6, tmp_subscript_name_6, 3);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_s == NULL);
            var_s = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT(var_s);
            tmp_called_instance_6 = var_s;
            frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 91;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_find, &PyTuple_GET_ITEM(const_tuple_unicode_chr_43_tuple, 0));

            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(var_i);
            tmp_compexpr_left_6 = var_i;
            tmp_compexpr_right_6 = const_int_neg_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_called_instance_7;
                CHECK_OBJECT(var_s);
                tmp_called_instance_7 = var_s;
                frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 93;
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_find, &PyTuple_GET_ITEM(const_tuple_unicode_chr_45_tuple, 0));

                if (tmp_assign_source_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_i;
                    assert(old != NULL);
                    var_i = tmp_assign_source_7;
                    Py_DECREF(old);
                }

            }
            branch_no_7:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(var_i);
            tmp_compexpr_left_7 = var_i;
            tmp_compexpr_right_7 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_sliceass_value_1;
                PyObject *tmp_list_element_1;
                PyObject *tmp_slice_source_3;
                PyObject *tmp_slice_upper_1;
                PyObject *tmp_slice_source_4;
                PyObject *tmp_slice_lower_2;
                PyObject *tmp_sliceass_target_1;
                Py_ssize_t tmp_sliceassslicedel_index_lower_1;
                Py_ssize_t tmp_sliceass_index_upper_1;
                CHECK_OBJECT(var_s);
                tmp_slice_source_3 = var_s;
                CHECK_OBJECT(var_i);
                tmp_slice_upper_1 = var_i;
                tmp_list_element_1 = LOOKUP_SLICE(tmp_slice_source_3, Py_None, tmp_slice_upper_1);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_sliceass_value_1 = PyList_New(2);
                PyList_SET_ITEM(tmp_sliceass_value_1, 0, tmp_list_element_1);
                CHECK_OBJECT(var_s);
                tmp_slice_source_4 = var_s;
                CHECK_OBJECT(var_i);
                tmp_slice_lower_2 = var_i;
                tmp_list_element_1 = LOOKUP_SLICE(tmp_slice_source_4, tmp_slice_lower_2, Py_None);
                if (tmp_list_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_sliceass_value_1);

                    exception_lineno = 95;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyList_SET_ITEM(tmp_sliceass_value_1, 1, tmp_list_element_1);
                if (par_data == NULL) {
                    Py_DECREF(tmp_sliceass_value_1);
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "data");
                    exception_tb = NULL;

                    exception_lineno = 95;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_sliceass_target_1 = par_data;
                tmp_sliceassslicedel_index_lower_1 = 3;
                tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
                tmp_result = SET_INDEX_SLICE(tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1);
                Py_DECREF(tmp_sliceass_value_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 95;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_8;
            branch_no_8:;
            {
                PyObject *tmp_called_instance_8;
                PyObject *tmp_call_result_2;
                if (par_data == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "data");
                    exception_tb = NULL;

                    exception_lineno = 97;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_8 = par_data;
                frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 97;
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_unicode_empty_tuple, 0));

                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_2);
            }
            branch_end_8:;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_len_arg_4;
        if (par_data == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "data");
            exception_tb = NULL;

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_4 = par_data;
        tmp_compexpr_left_8 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_int_pos_5;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        branch_yes_9:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_8;
        Py_ssize_t tmp_sliceslicedel_index_lower_2;
        Py_ssize_t tmp_slice_index_upper_2;
        PyObject *tmp_slice_source_5;
        tmp_sliceslicedel_index_lower_2 = 0;
        tmp_slice_index_upper_2 = 5;
        if (par_data == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "data");
            exception_tb = NULL;

            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_slice_source_5 = par_data;
        tmp_assign_source_8 = LOOKUP_INDEX_SLICE(tmp_slice_source_5, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            par_data = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_data);
        tmp_iter_arg_1 = par_data;
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 101;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 101;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 101;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 3);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 101;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_5, 4);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 101;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_14;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 101;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
            PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 5)");
#endif
            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            type_description_1 = "oooooooooooooo";
            exception_lineno = 101;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

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
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
        assert(var_dd == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_dd = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
        assert(var_mm == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_mm = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_3;
        assert(var_yy == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_yy = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_4;
        assert(var_tm == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_tm = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_5;
        assert(var_tz == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_tz = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(var_mm);
        tmp_called_instance_9 = var_mm;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 102;
        tmp_assign_source_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_lower);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mm;
            assert(old != NULL);
            var_mm = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(var_mm);
        tmp_compexpr_left_9 = var_mm;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__monthnames);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 42970 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_9 = tmp_mvar_value_2;
        tmp_res = PySequence_Contains(tmp_compexpr_right_9, tmp_compexpr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        branch_yes_10:;
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_10;
            CHECK_OBJECT(var_mm);
            tmp_tuple_element_1 = var_mm;
            tmp_iter_arg_2 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_dd);
            tmp_called_instance_10 = var_dd;
            frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 104;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_lower);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_iter_arg_2);

                exception_lineno = 104;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
            tmp_assign_source_21 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            assert(tmp_tuple_unpack_2__source_iter == NULL);
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_6, 0);
            if (tmp_assign_source_22 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 104;
                goto try_except_handler_5;
            }
            assert(tmp_tuple_unpack_2__element_1 == NULL);
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_7, 1);
            if (tmp_assign_source_23 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 104;
                goto try_except_handler_5;
            }
            assert(tmp_tuple_unpack_2__element_2 == NULL);
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_23;
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
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

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_4:;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
            tmp_assign_source_24 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_dd;
                assert(old != NULL);
                var_dd = tmp_assign_source_24;
                Py_INCREF(var_dd);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
            tmp_assign_source_25 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_mm;
                assert(old != NULL);
                var_mm = tmp_assign_source_25;
                Py_INCREF(var_mm);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT(var_mm);
            tmp_compexpr_left_10 = var_mm;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__monthnames);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 42970 ], 40, 0);
                exception_tb = NULL;

                exception_lineno = 105;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_10 = tmp_mvar_value_3;
            tmp_res = PySequence_Contains(tmp_compexpr_right_10, tmp_compexpr_left_10);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            tmp_return_value = Py_None;
            Py_INCREF(tmp_return_value);
            goto frame_return_exit_1;
            branch_no_11:;
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__monthnames);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 42970 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_4;
        CHECK_OBJECT(var_mm);
        tmp_args_element_name_1 = var_mm;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_index, call_args);
        }

        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_INT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mm;
            assert(old != NULL);
            var_mm = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT(var_mm);
        tmp_compexpr_left_11 = var_mm;
        tmp_compexpr_right_11 = const_int_pos_12;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT(var_mm);
            tmp_left_name_4 = var_mm;
            tmp_right_name_4 = const_int_pos_12;
            tmp_result = BINARY_OPERATION_INPLACE(PyNumber_InPlaceSubtract, &tmp_left_name_4, tmp_right_name_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_27 = tmp_left_name_4;
            var_mm = tmp_assign_source_27;

        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT(var_dd);
        tmp_subscribed_name_7 = var_dd;
        tmp_subscript_name_7 = const_int_neg_1;
        tmp_compexpr_left_12 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_7, tmp_subscript_name_7, -1);
        if (tmp_compexpr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_12 = const_unicode_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_12, tmp_compexpr_right_12);
        Py_DECREF(tmp_compexpr_left_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_assign_source_28;
            Py_ssize_t tmp_sliceslicedel_index_lower_3;
            Py_ssize_t tmp_slice_index_upper_3;
            PyObject *tmp_slice_source_6;
            tmp_sliceslicedel_index_lower_3 = 0;
            tmp_slice_index_upper_3 = -1;
            CHECK_OBJECT(var_dd);
            tmp_slice_source_6 = var_dd;
            tmp_assign_source_28 = LOOKUP_INDEX_SLICE(tmp_slice_source_6, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_dd;
                assert(old != NULL);
                var_dd = tmp_assign_source_28;
                Py_DECREF(old);
            }

        }
        branch_no_13:;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_12;
        CHECK_OBJECT(var_yy);
        tmp_called_instance_12 = var_yy;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 112;
        tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_find, &PyTuple_GET_ITEM(const_tuple_unicode_chr_58_tuple, 0));

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT(var_i);
        tmp_compexpr_left_13 = var_i;
        tmp_compexpr_right_13 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_13, tmp_compexpr_right_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT(var_tm);
            tmp_tuple_element_2 = var_tm;
            tmp_iter_arg_3 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_iter_arg_3, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_yy);
            tmp_tuple_element_2 = var_yy;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_iter_arg_3, 1, tmp_tuple_element_2);
            tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            assert(!(tmp_assign_source_30 == NULL));
            assert(tmp_tuple_unpack_3__source_iter == NULL);
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_30;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
            tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_8, 0);
            if (tmp_assign_source_31 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 114;
                goto try_except_handler_7;
            }
            assert(tmp_tuple_unpack_3__element_1 == NULL);
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
            tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT(tmp_unpack_9, 1);
            if (tmp_assign_source_32 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 114;
                goto try_except_handler_7;
            }
            assert(tmp_tuple_unpack_3__element_2 == NULL);
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_32;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_3__source_iter);
        Py_DECREF(tmp_tuple_unpack_3__source_iter);
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_3__element_1);
        tmp_tuple_unpack_3__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_3__source_iter);
        Py_DECREF(tmp_tuple_unpack_3__source_iter);
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
            tmp_assign_source_33 = tmp_tuple_unpack_3__element_1;
            {
                PyObject *old = var_yy;
                assert(old != NULL);
                var_yy = tmp_assign_source_33;
                Py_INCREF(var_yy);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_3__element_1);
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
            tmp_assign_source_34 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var_tm;
                assert(old != NULL);
                var_tm = tmp_assign_source_34;
                Py_INCREF(var_tm);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_3__element_2);
        tmp_tuple_unpack_3__element_2 = NULL;

        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_yy);
        tmp_subscribed_name_8 = var_yy;
        tmp_subscript_name_8 = const_int_neg_1;
        tmp_compexpr_left_14 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_8, tmp_subscript_name_8, -1);
        if (tmp_compexpr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_14 = const_unicode_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_14, tmp_compexpr_right_14);
        Py_DECREF(tmp_compexpr_left_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_35;
            Py_ssize_t tmp_sliceslicedel_index_lower_4;
            Py_ssize_t tmp_slice_index_upper_4;
            PyObject *tmp_slice_source_7;
            tmp_sliceslicedel_index_lower_4 = 0;
            tmp_slice_index_upper_4 = -1;
            CHECK_OBJECT(var_yy);
            tmp_slice_source_7 = var_yy;
            tmp_assign_source_35 = LOOKUP_INDEX_SLICE(tmp_slice_source_7, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_yy;
                assert(old != NULL);
                var_yy = tmp_assign_source_35;
                Py_DECREF(old);
            }

        }
        branch_no_15:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        if (var_yy == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "yy");
            exception_tb = NULL;

            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_9 = var_yy;
        tmp_subscript_name_9 = const_int_0;
        tmp_called_instance_13 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_9, tmp_subscript_name_9, 0);
        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 117;
        tmp_operand_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, const_str_plain_isdigit);
        Py_DECREF(tmp_called_instance_13);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
        branch_yes_16:;
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT(var_tz);
            tmp_tuple_element_3 = var_tz;
            tmp_iter_arg_4 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_3);
            if (var_yy == NULL) {
                Py_DECREF(tmp_iter_arg_4);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "yy");
                exception_tb = NULL;

                exception_lineno = 118;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_tuple_element_3 = var_yy;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_3);
            tmp_assign_source_36 = MAKE_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_tuple_unpack_4__source_iter == NULL);
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_36;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
            tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT(tmp_unpack_10, 0);
            if (tmp_assign_source_37 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 118;
                goto try_except_handler_9;
            }
            assert(tmp_tuple_unpack_4__element_1 == NULL);
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
            tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT(tmp_unpack_11, 1);
            if (tmp_assign_source_38 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 118;
                goto try_except_handler_9;
            }
            assert(tmp_tuple_unpack_4__element_2 == NULL);
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_38;
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_4__source_iter);
        Py_DECREF(tmp_tuple_unpack_4__source_iter);
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_4__element_1);
        tmp_tuple_unpack_4__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_4__source_iter);
        Py_DECREF(tmp_tuple_unpack_4__source_iter);
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
            tmp_assign_source_39 = tmp_tuple_unpack_4__element_1;
            {
                PyObject *old = var_yy;
                var_yy = tmp_assign_source_39;
                Py_INCREF(var_yy);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_4__element_1);
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
            tmp_assign_source_40 = tmp_tuple_unpack_4__element_2;
            {
                PyObject *old = var_tz;
                assert(old != NULL);
                var_tz = tmp_assign_source_40;
                Py_INCREF(var_tz);
                Py_DECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_4__element_2);
        tmp_tuple_unpack_4__element_2 = NULL;

        branch_no_16:;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        CHECK_OBJECT(var_tm);
        tmp_subscribed_name_10 = var_tm;
        tmp_subscript_name_10 = const_int_neg_1;
        tmp_compexpr_left_15 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_10, tmp_subscript_name_10, -1);
        if (tmp_compexpr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_15 = const_unicode_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_15, tmp_compexpr_right_15);
        Py_DECREF(tmp_compexpr_left_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_assign_source_41;
            Py_ssize_t tmp_sliceslicedel_index_lower_5;
            Py_ssize_t tmp_slice_index_upper_5;
            PyObject *tmp_slice_source_8;
            tmp_sliceslicedel_index_lower_5 = 0;
            tmp_slice_index_upper_5 = -1;
            CHECK_OBJECT(var_tm);
            tmp_slice_source_8 = var_tm;
            tmp_assign_source_41 = LOOKUP_INDEX_SLICE(tmp_slice_source_8, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tm;
                assert(old != NULL);
                var_tm = tmp_assign_source_41;
                Py_DECREF(old);
            }

        }
        branch_no_17:;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_14;
        if (var_tm == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tm");
            exception_tb = NULL;

            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = var_tm;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 121;
        tmp_assign_source_42 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_unicode_chr_58_tuple, 0));

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tm;
            var_tm = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(var_tm);
        tmp_len_arg_5 = var_tm;
        tmp_compexpr_left_16 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_compexpr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_16 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_16, tmp_compexpr_right_16);
        Py_DECREF(tmp_compexpr_left_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
        branch_yes_18:;
        // Tried code:
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(var_tm);
            tmp_iter_arg_5 = var_tm;
            tmp_assign_source_43 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_10;
            }
            assert(tmp_tuple_unpack_5__source_iter == NULL);
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_43;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
            tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_44 = UNPACK_NEXT(tmp_unpack_12, 0);
            if (tmp_assign_source_44 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 123;
                goto try_except_handler_11;
            }
            assert(tmp_tuple_unpack_5__element_1 == NULL);
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
            tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_45 = UNPACK_NEXT(tmp_unpack_13, 1);
            if (tmp_assign_source_45 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooooooo";
                exception_lineno = 123;
                goto try_except_handler_11;
            }
            assert(tmp_tuple_unpack_5__element_2 == NULL);
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_45;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
            tmp_iterator_name_2 = tmp_tuple_unpack_5__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

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

                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 123;
                        goto try_except_handler_11;
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

                type_description_1 = "oooooooooooooo";
                exception_lineno = 123;
                goto try_except_handler_11;
            }
        }
        goto try_end_9;
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

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_5__source_iter);
        Py_DECREF(tmp_tuple_unpack_5__source_iter);
        tmp_tuple_unpack_5__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        try_end_9:;
        goto try_end_10;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_5__element_1);
        tmp_tuple_unpack_5__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_5__element_2);
        tmp_tuple_unpack_5__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_1;
        // End of try:
        try_end_10:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_5__source_iter);
        Py_DECREF(tmp_tuple_unpack_5__source_iter);
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
            tmp_assign_source_46 = tmp_tuple_unpack_5__element_1;
            assert(var_thh == NULL);
            Py_INCREF(tmp_assign_source_46);
            var_thh = tmp_assign_source_46;
        }
        Py_XDECREF(tmp_tuple_unpack_5__element_1);
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_47;
            CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
            tmp_assign_source_47 = tmp_tuple_unpack_5__element_2;
            assert(var_tmm == NULL);
            Py_INCREF(tmp_assign_source_47);
            var_tmm = tmp_assign_source_47;
        }
        Py_XDECREF(tmp_tuple_unpack_5__element_2);
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = const_unicode_plain_0;
            assert(var_tss == NULL);
            Py_INCREF(tmp_assign_source_48);
            var_tss = tmp_assign_source_48;
        }
        goto branch_end_18;
        branch_no_18:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            PyObject *tmp_len_arg_6;
            CHECK_OBJECT(var_tm);
            tmp_len_arg_6 = var_tm;
            tmp_compexpr_left_17 = BUILTIN_LEN(tmp_len_arg_6);
            if (tmp_compexpr_left_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_17 = const_int_pos_3;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_17, tmp_compexpr_right_17);
            Py_DECREF(tmp_compexpr_left_17);
            assert(!(tmp_res == -1));
            tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
            branch_yes_19:;
            // Tried code:
            {
                PyObject *tmp_assign_source_49;
                PyObject *tmp_iter_arg_6;
                CHECK_OBJECT(var_tm);
                tmp_iter_arg_6 = var_tm;
                tmp_assign_source_49 = MAKE_ITERATOR(tmp_iter_arg_6);
                if (tmp_assign_source_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 126;
                    type_description_1 = "oooooooooooooo";
                    goto try_except_handler_12;
                }
                assert(tmp_tuple_unpack_6__source_iter == NULL);
                tmp_tuple_unpack_6__source_iter = tmp_assign_source_49;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_50;
                PyObject *tmp_unpack_14;
                CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
                tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_50 = UNPACK_NEXT(tmp_unpack_14, 0);
                if (tmp_assign_source_50 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 126;
                    goto try_except_handler_13;
                }
                assert(tmp_tuple_unpack_6__element_1 == NULL);
                tmp_tuple_unpack_6__element_1 = tmp_assign_source_50;
            }
            {
                PyObject *tmp_assign_source_51;
                PyObject *tmp_unpack_15;
                CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
                tmp_unpack_15 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_15, 1);
                if (tmp_assign_source_51 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 126;
                    goto try_except_handler_13;
                }
                assert(tmp_tuple_unpack_6__element_2 == NULL);
                tmp_tuple_unpack_6__element_2 = tmp_assign_source_51;
            }
            {
                PyObject *tmp_assign_source_52;
                PyObject *tmp_unpack_16;
                CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
                tmp_unpack_16 = tmp_tuple_unpack_6__source_iter;
                tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_16, 2);
                if (tmp_assign_source_52 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 126;
                    goto try_except_handler_13;
                }
                assert(tmp_tuple_unpack_6__element_3 == NULL);
                tmp_tuple_unpack_6__element_3 = tmp_assign_source_52;
            }
            {
                PyObject *tmp_iterator_name_3;
                CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
                tmp_iterator_name_3 = tmp_tuple_unpack_6__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

                tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

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

                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 126;
                            goto try_except_handler_13;
                        }
                    }
                } else {
                    Py_DECREF(tmp_iterator_attempt);

                    // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                    PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
                    PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 3)");
#endif
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 126;
                    goto try_except_handler_13;
                }
            }
            goto try_end_11;
            // Exception handler code:
            try_except_handler_13:;
            exception_keeper_type_11 = exception_type;
            exception_keeper_value_11 = exception_value;
            exception_keeper_tb_11 = exception_tb;
            exception_keeper_lineno_11 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_tuple_unpack_6__source_iter);
            Py_DECREF(tmp_tuple_unpack_6__source_iter);
            tmp_tuple_unpack_6__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_11;
            exception_value = exception_keeper_value_11;
            exception_tb = exception_keeper_tb_11;
            exception_lineno = exception_keeper_lineno_11;

            goto try_except_handler_12;
            // End of try:
            try_end_11:;
            goto try_end_12;
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(tmp_tuple_unpack_6__element_1);
            tmp_tuple_unpack_6__element_1 = NULL;

            Py_XDECREF(tmp_tuple_unpack_6__element_2);
            tmp_tuple_unpack_6__element_2 = NULL;

            Py_XDECREF(tmp_tuple_unpack_6__element_3);
            tmp_tuple_unpack_6__element_3 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto frame_exception_exit_1;
            // End of try:
            try_end_12:;
            CHECK_OBJECT((PyObject *)tmp_tuple_unpack_6__source_iter);
            Py_DECREF(tmp_tuple_unpack_6__source_iter);
            tmp_tuple_unpack_6__source_iter = NULL;

            {
                PyObject *tmp_assign_source_53;
                CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
                tmp_assign_source_53 = tmp_tuple_unpack_6__element_1;
                assert(var_thh == NULL);
                Py_INCREF(tmp_assign_source_53);
                var_thh = tmp_assign_source_53;
            }
            Py_XDECREF(tmp_tuple_unpack_6__element_1);
            tmp_tuple_unpack_6__element_1 = NULL;

            {
                PyObject *tmp_assign_source_54;
                CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
                tmp_assign_source_54 = tmp_tuple_unpack_6__element_2;
                assert(var_tmm == NULL);
                Py_INCREF(tmp_assign_source_54);
                var_tmm = tmp_assign_source_54;
            }
            Py_XDECREF(tmp_tuple_unpack_6__element_2);
            tmp_tuple_unpack_6__element_2 = NULL;

            {
                PyObject *tmp_assign_source_55;
                CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
                tmp_assign_source_55 = tmp_tuple_unpack_6__element_3;
                assert(var_tss == NULL);
                Py_INCREF(tmp_assign_source_55);
                var_tss = tmp_assign_source_55;
            }
            Py_XDECREF(tmp_tuple_unpack_6__element_3);
            tmp_tuple_unpack_6__element_3 = NULL;

            goto branch_end_19;
            branch_no_19:;
            {
                nuitka_bool tmp_condition_result_20;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_18;
                PyObject *tmp_compexpr_right_18;
                PyObject *tmp_len_arg_7;
                PyObject *tmp_compexpr_left_19;
                PyObject *tmp_compexpr_right_19;
                PyObject *tmp_subscribed_name_11;
                PyObject *tmp_subscript_name_11;
                CHECK_OBJECT(var_tm);
                tmp_len_arg_7 = var_tm;
                tmp_compexpr_left_18 = BUILTIN_LEN(tmp_len_arg_7);
                if (tmp_compexpr_left_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_18 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_18, tmp_compexpr_right_18);
                Py_DECREF(tmp_compexpr_left_18);
                assert(!(tmp_res == -1));
                tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
                if (tmp_and_left_truth_1 == 1) {
                    goto and_right_1;
                } else {
                    goto and_left_1;
                }
                and_right_1:;
                tmp_compexpr_left_19 = const_unicode_dot;
                CHECK_OBJECT(var_tm);
                tmp_subscribed_name_11 = var_tm;
                tmp_subscript_name_11 = const_int_0;
                tmp_compexpr_right_19 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_11, tmp_subscript_name_11, 0);
                if (tmp_compexpr_right_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PySequence_Contains(tmp_compexpr_right_19, tmp_compexpr_left_19);
                Py_DECREF(tmp_compexpr_right_19);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_20 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_20 = tmp_and_left_value_1;
                and_end_1:;
                if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_20;
                } else {
                    goto branch_no_20;
                }
                branch_yes_20:;
                {
                    PyObject *tmp_assign_source_56;
                    PyObject *tmp_called_instance_15;
                    PyObject *tmp_subscribed_name_12;
                    PyObject *tmp_subscript_name_12;
                    CHECK_OBJECT(var_tm);
                    tmp_subscribed_name_12 = var_tm;
                    tmp_subscript_name_12 = const_int_0;
                    tmp_called_instance_15 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_12, tmp_subscript_name_12, 0);
                    if (tmp_called_instance_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 129;
                        type_description_1 = "oooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 129;
                    tmp_assign_source_56 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_15, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_unicode_dot_tuple, 0));

                    Py_DECREF(tmp_called_instance_15);
                    if (tmp_assign_source_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 129;
                        type_description_1 = "oooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_tm;
                        assert(old != NULL);
                        var_tm = tmp_assign_source_56;
                        Py_DECREF(old);
                    }

                }
                {
                    nuitka_bool tmp_condition_result_21;
                    PyObject *tmp_compexpr_left_20;
                    PyObject *tmp_compexpr_right_20;
                    PyObject *tmp_len_arg_8;
                    CHECK_OBJECT(var_tm);
                    tmp_len_arg_8 = var_tm;
                    tmp_compexpr_left_20 = BUILTIN_LEN(tmp_len_arg_8);
                    if (tmp_compexpr_left_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_1 = "oooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_20 = const_int_pos_2;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_20, tmp_compexpr_right_20);
                    Py_DECREF(tmp_compexpr_left_20);
                    assert(!(tmp_res == -1));
                    tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_21;
                    } else {
                        goto branch_no_21;
                    }
                    branch_yes_21:;
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_57;
                        PyObject *tmp_iter_arg_7;
                        CHECK_OBJECT(var_tm);
                        tmp_iter_arg_7 = var_tm;
                        tmp_assign_source_57 = MAKE_ITERATOR(tmp_iter_arg_7);
                        if (tmp_assign_source_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_1 = "oooooooooooooo";
                            goto try_except_handler_14;
                        }
                        assert(tmp_tuple_unpack_7__source_iter == NULL);
                        tmp_tuple_unpack_7__source_iter = tmp_assign_source_57;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_58;
                        PyObject *tmp_unpack_17;
                        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
                        tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
                        tmp_assign_source_58 = UNPACK_NEXT(tmp_unpack_17, 0);
                        if (tmp_assign_source_58 == NULL) {
                            if (!ERROR_OCCURRED()) {
                                exception_type = PyExc_StopIteration;
                                Py_INCREF(exception_type);
                                exception_value = NULL;
                                exception_tb = NULL;
                            } else {
                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            }


                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 131;
                            goto try_except_handler_15;
                        }
                        assert(tmp_tuple_unpack_7__element_1 == NULL);
                        tmp_tuple_unpack_7__element_1 = tmp_assign_source_58;
                    }
                    {
                        PyObject *tmp_assign_source_59;
                        PyObject *tmp_unpack_18;
                        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
                        tmp_unpack_18 = tmp_tuple_unpack_7__source_iter;
                        tmp_assign_source_59 = UNPACK_NEXT(tmp_unpack_18, 1);
                        if (tmp_assign_source_59 == NULL) {
                            if (!ERROR_OCCURRED()) {
                                exception_type = PyExc_StopIteration;
                                Py_INCREF(exception_type);
                                exception_value = NULL;
                                exception_tb = NULL;
                            } else {
                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            }


                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 131;
                            goto try_except_handler_15;
                        }
                        assert(tmp_tuple_unpack_7__element_2 == NULL);
                        tmp_tuple_unpack_7__element_2 = tmp_assign_source_59;
                    }
                    {
                        PyObject *tmp_iterator_name_4;
                        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
                        tmp_iterator_name_4 = tmp_tuple_unpack_7__source_iter;
                        // Check if iterator has left-over elements.
                        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

                        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

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

                                    type_description_1 = "oooooooooooooo";
                                    exception_lineno = 131;
                                    goto try_except_handler_15;
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

                            type_description_1 = "oooooooooooooo";
                            exception_lineno = 131;
                            goto try_except_handler_15;
                        }
                    }
                    goto try_end_13;
                    // Exception handler code:
                    try_except_handler_15:;
                    exception_keeper_type_13 = exception_type;
                    exception_keeper_value_13 = exception_value;
                    exception_keeper_tb_13 = exception_tb;
                    exception_keeper_lineno_13 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_7__source_iter);
                    Py_DECREF(tmp_tuple_unpack_7__source_iter);
                    tmp_tuple_unpack_7__source_iter = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_13;
                    exception_value = exception_keeper_value_13;
                    exception_tb = exception_keeper_tb_13;
                    exception_lineno = exception_keeper_lineno_13;

                    goto try_except_handler_14;
                    // End of try:
                    try_end_13:;
                    goto try_end_14;
                    // Exception handler code:
                    try_except_handler_14:;
                    exception_keeper_type_14 = exception_type;
                    exception_keeper_value_14 = exception_value;
                    exception_keeper_tb_14 = exception_tb;
                    exception_keeper_lineno_14 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    Py_XDECREF(tmp_tuple_unpack_7__element_1);
                    tmp_tuple_unpack_7__element_1 = NULL;

                    Py_XDECREF(tmp_tuple_unpack_7__element_2);
                    tmp_tuple_unpack_7__element_2 = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_14;
                    exception_value = exception_keeper_value_14;
                    exception_tb = exception_keeper_tb_14;
                    exception_lineno = exception_keeper_lineno_14;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_14:;
                    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_7__source_iter);
                    Py_DECREF(tmp_tuple_unpack_7__source_iter);
                    tmp_tuple_unpack_7__source_iter = NULL;

                    {
                        PyObject *tmp_assign_source_60;
                        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
                        tmp_assign_source_60 = tmp_tuple_unpack_7__element_1;
                        assert(var_thh == NULL);
                        Py_INCREF(tmp_assign_source_60);
                        var_thh = tmp_assign_source_60;
                    }
                    Py_XDECREF(tmp_tuple_unpack_7__element_1);
                    tmp_tuple_unpack_7__element_1 = NULL;

                    {
                        PyObject *tmp_assign_source_61;
                        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
                        tmp_assign_source_61 = tmp_tuple_unpack_7__element_2;
                        assert(var_tmm == NULL);
                        Py_INCREF(tmp_assign_source_61);
                        var_tmm = tmp_assign_source_61;
                    }
                    Py_XDECREF(tmp_tuple_unpack_7__element_2);
                    tmp_tuple_unpack_7__element_2 = NULL;

                    {
                        PyObject *tmp_assign_source_62;
                        tmp_assign_source_62 = const_int_0;
                        assert(var_tss == NULL);
                        Py_INCREF(tmp_assign_source_62);
                        var_tss = tmp_assign_source_62;
                    }
                    goto branch_end_21;
                    branch_no_21:;
                    {
                        nuitka_bool tmp_condition_result_22;
                        PyObject *tmp_compexpr_left_21;
                        PyObject *tmp_compexpr_right_21;
                        PyObject *tmp_len_arg_9;
                        CHECK_OBJECT(var_tm);
                        tmp_len_arg_9 = var_tm;
                        tmp_compexpr_left_21 = BUILTIN_LEN(tmp_len_arg_9);
                        if (tmp_compexpr_left_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 133;
                            type_description_1 = "oooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_right_21 = const_int_pos_3;
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_21, tmp_compexpr_right_21);
                        Py_DECREF(tmp_compexpr_left_21);
                        assert(!(tmp_res == -1));
                        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_22;
                        } else {
                            goto branch_no_22;
                        }
                        branch_yes_22:;
                        // Tried code:
                        {
                            PyObject *tmp_assign_source_63;
                            PyObject *tmp_iter_arg_8;
                            CHECK_OBJECT(var_tm);
                            tmp_iter_arg_8 = var_tm;
                            tmp_assign_source_63 = MAKE_ITERATOR(tmp_iter_arg_8);
                            if (tmp_assign_source_63 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 134;
                                type_description_1 = "oooooooooooooo";
                                goto try_except_handler_16;
                            }
                            assert(tmp_tuple_unpack_8__source_iter == NULL);
                            tmp_tuple_unpack_8__source_iter = tmp_assign_source_63;
                        }
                        // Tried code:
                        {
                            PyObject *tmp_assign_source_64;
                            PyObject *tmp_unpack_19;
                            CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
                            tmp_unpack_19 = tmp_tuple_unpack_8__source_iter;
                            tmp_assign_source_64 = UNPACK_NEXT(tmp_unpack_19, 0);
                            if (tmp_assign_source_64 == NULL) {
                                if (!ERROR_OCCURRED()) {
                                    exception_type = PyExc_StopIteration;
                                    Py_INCREF(exception_type);
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                } else {
                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                }


                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 134;
                                goto try_except_handler_17;
                            }
                            assert(tmp_tuple_unpack_8__element_1 == NULL);
                            tmp_tuple_unpack_8__element_1 = tmp_assign_source_64;
                        }
                        {
                            PyObject *tmp_assign_source_65;
                            PyObject *tmp_unpack_20;
                            CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
                            tmp_unpack_20 = tmp_tuple_unpack_8__source_iter;
                            tmp_assign_source_65 = UNPACK_NEXT(tmp_unpack_20, 1);
                            if (tmp_assign_source_65 == NULL) {
                                if (!ERROR_OCCURRED()) {
                                    exception_type = PyExc_StopIteration;
                                    Py_INCREF(exception_type);
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                } else {
                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                }


                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 134;
                                goto try_except_handler_17;
                            }
                            assert(tmp_tuple_unpack_8__element_2 == NULL);
                            tmp_tuple_unpack_8__element_2 = tmp_assign_source_65;
                        }
                        {
                            PyObject *tmp_assign_source_66;
                            PyObject *tmp_unpack_21;
                            CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
                            tmp_unpack_21 = tmp_tuple_unpack_8__source_iter;
                            tmp_assign_source_66 = UNPACK_NEXT(tmp_unpack_21, 2);
                            if (tmp_assign_source_66 == NULL) {
                                if (!ERROR_OCCURRED()) {
                                    exception_type = PyExc_StopIteration;
                                    Py_INCREF(exception_type);
                                    exception_value = NULL;
                                    exception_tb = NULL;
                                } else {
                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                }


                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 134;
                                goto try_except_handler_17;
                            }
                            assert(tmp_tuple_unpack_8__element_3 == NULL);
                            tmp_tuple_unpack_8__element_3 = tmp_assign_source_66;
                        }
                        {
                            PyObject *tmp_iterator_name_5;
                            CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
                            tmp_iterator_name_5 = tmp_tuple_unpack_8__source_iter;
                            // Check if iterator has left-over elements.
                            CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

                            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

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

                                        type_description_1 = "oooooooooooooo";
                                        exception_lineno = 134;
                                        goto try_except_handler_17;
                                    }
                                }
                            } else {
                                Py_DECREF(tmp_iterator_attempt);

                                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                                PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
                                PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 3)");
#endif
                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                                type_description_1 = "oooooooooooooo";
                                exception_lineno = 134;
                                goto try_except_handler_17;
                            }
                        }
                        goto try_end_15;
                        // Exception handler code:
                        try_except_handler_17:;
                        exception_keeper_type_15 = exception_type;
                        exception_keeper_value_15 = exception_value;
                        exception_keeper_tb_15 = exception_tb;
                        exception_keeper_lineno_15 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_8__source_iter);
                        Py_DECREF(tmp_tuple_unpack_8__source_iter);
                        tmp_tuple_unpack_8__source_iter = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_15;
                        exception_value = exception_keeper_value_15;
                        exception_tb = exception_keeper_tb_15;
                        exception_lineno = exception_keeper_lineno_15;

                        goto try_except_handler_16;
                        // End of try:
                        try_end_15:;
                        goto try_end_16;
                        // Exception handler code:
                        try_except_handler_16:;
                        exception_keeper_type_16 = exception_type;
                        exception_keeper_value_16 = exception_value;
                        exception_keeper_tb_16 = exception_tb;
                        exception_keeper_lineno_16 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        Py_XDECREF(tmp_tuple_unpack_8__element_1);
                        tmp_tuple_unpack_8__element_1 = NULL;

                        Py_XDECREF(tmp_tuple_unpack_8__element_2);
                        tmp_tuple_unpack_8__element_2 = NULL;

                        Py_XDECREF(tmp_tuple_unpack_8__element_3);
                        tmp_tuple_unpack_8__element_3 = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_16;
                        exception_value = exception_keeper_value_16;
                        exception_tb = exception_keeper_tb_16;
                        exception_lineno = exception_keeper_lineno_16;

                        goto frame_exception_exit_1;
                        // End of try:
                        try_end_16:;
                        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_8__source_iter);
                        Py_DECREF(tmp_tuple_unpack_8__source_iter);
                        tmp_tuple_unpack_8__source_iter = NULL;

                        {
                            PyObject *tmp_assign_source_67;
                            CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
                            tmp_assign_source_67 = tmp_tuple_unpack_8__element_1;
                            assert(var_thh == NULL);
                            Py_INCREF(tmp_assign_source_67);
                            var_thh = tmp_assign_source_67;
                        }
                        Py_XDECREF(tmp_tuple_unpack_8__element_1);
                        tmp_tuple_unpack_8__element_1 = NULL;

                        {
                            PyObject *tmp_assign_source_68;
                            CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
                            tmp_assign_source_68 = tmp_tuple_unpack_8__element_2;
                            assert(var_tmm == NULL);
                            Py_INCREF(tmp_assign_source_68);
                            var_tmm = tmp_assign_source_68;
                        }
                        Py_XDECREF(tmp_tuple_unpack_8__element_2);
                        tmp_tuple_unpack_8__element_2 = NULL;

                        {
                            PyObject *tmp_assign_source_69;
                            CHECK_OBJECT(tmp_tuple_unpack_8__element_3);
                            tmp_assign_source_69 = tmp_tuple_unpack_8__element_3;
                            assert(var_tss == NULL);
                            Py_INCREF(tmp_assign_source_69);
                            var_tss = tmp_assign_source_69;
                        }
                        Py_XDECREF(tmp_tuple_unpack_8__element_3);
                        tmp_tuple_unpack_8__element_3 = NULL;

                        branch_no_22:;
                    }
                    branch_end_21:;
                }
                goto branch_end_20;
                branch_no_20:;
                tmp_return_value = Py_None;
                Py_INCREF(tmp_return_value);
                goto frame_return_exit_1;
                branch_end_20:;
            }
            branch_end_19:;
        }
        branch_end_18:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_int);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40600 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_name_1 = tmp_mvar_value_5;
        if (var_yy == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "yy");
            exception_tb = NULL;

            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_args_element_name_2 = var_yy;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 138;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_yy;
            var_yy = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_int);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40600 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        if (var_dd == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "dd");
            exception_tb = NULL;

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_args_element_name_3 = var_dd;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 139;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_dd;
            var_dd = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_int);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40600 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_name_3 = tmp_mvar_value_7;
        if (var_thh == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "thh");
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_args_element_name_4 = var_thh;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 140;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_thh;
            var_thh = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_int);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40600 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_name_4 = tmp_mvar_value_8;
        if (var_tmm == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tmm");
            exception_tb = NULL;

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_args_element_name_5 = var_tmm;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 141;
        tmp_assign_source_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_tmm;
            var_tmm = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_int);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 40600 ], 32, 0);
            exception_tb = NULL;

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_name_5 = tmp_mvar_value_9;
        if (var_tss == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tss");
            exception_tb = NULL;

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_args_element_name_6 = var_tss;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 142;
        tmp_assign_source_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_tss;
            var_tss = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_099dc03d32b8be438c77aa2798e1c797);
    if (exception_keeper_tb_17 == NULL) {
        exception_keeper_tb_17 = MAKE_TRACEBACK(frame_099dc03d32b8be438c77aa2798e1c797, exception_keeper_lineno_17);
    } else if (exception_keeper_lineno_17 != 0) {
        exception_keeper_tb_17 = ADD_TRACEBACK(exception_keeper_tb_17, frame_099dc03d32b8be438c77aa2798e1c797, exception_keeper_lineno_17);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17);
    PUBLISH_EXCEPTION(&exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17);
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        tmp_compexpr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_22 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_22, tmp_compexpr_right_22);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
        branch_yes_23:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        goto branch_end_23;
        branch_no_23:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 137;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_099dc03d32b8be438c77aa2798e1c797->m_frame) frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
        branch_end_23:;
    }
    // End of try:
    try_end_17:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        CHECK_OBJECT(var_yy);
        tmp_compexpr_left_23 = var_yy;
        tmp_compexpr_right_23 = const_int_pos_100;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_23, tmp_compexpr_right_23);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_24 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
        branch_yes_24:;
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_compexpr_left_24;
            PyObject *tmp_compexpr_right_24;
            CHECK_OBJECT(var_yy);
            tmp_compexpr_left_24 = var_yy;
            tmp_compexpr_right_24 = const_int_pos_68;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT(tmp_compexpr_left_24, tmp_compexpr_right_24);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
            branch_yes_25:;
            {
                PyObject *tmp_assign_source_75;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT(var_yy);
                tmp_left_name_5 = var_yy;
                tmp_right_name_5 = const_int_pos_1900;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_5, tmp_right_name_5);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_75 = tmp_left_name_5;
                var_yy = tmp_assign_source_75;

            }
            goto branch_end_25;
            branch_no_25:;
            {
                PyObject *tmp_assign_source_76;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                CHECK_OBJECT(var_yy);
                tmp_left_name_6 = var_yy;
                tmp_right_name_6 = const_int_pos_2000;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE(&tmp_left_name_6, tmp_right_name_6);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_76 = tmp_left_name_6;
                var_yy = tmp_assign_source_76;

            }
            branch_end_25:;
        }
        branch_no_24:;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = Py_None;
        assert(var_tzoffset == NULL);
        Py_INCREF(tmp_assign_source_77);
        var_tzoffset = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_instance_16;
        CHECK_OBJECT(var_tz);
        tmp_called_instance_16 = var_tz;
        frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 158;
        tmp_assign_source_78 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, const_str_plain_upper);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tz;
            assert(old != NULL);
            var_tz = tmp_assign_source_78;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        PyObject *tmp_mvar_value_10;
        CHECK_OBJECT(var_tz);
        tmp_compexpr_left_25 = var_tz;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__timezones);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__timezones);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43010 ], 39, 0);
            exception_tb = NULL;

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_25 = tmp_mvar_value_10;
        tmp_res = PySequence_Contains(tmp_compexpr_right_25, tmp_compexpr_left_25);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_subscript_name_13;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__timezones);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__timezones);
            }

            if (tmp_mvar_value_11 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 43010 ], 39, 0);
                exception_tb = NULL;

                exception_lineno = 160;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_13 = tmp_mvar_value_11;
            CHECK_OBJECT(var_tz);
            tmp_subscript_name_13 = var_tz;
            tmp_assign_source_79 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_13, tmp_subscript_name_13);
            if (tmp_assign_source_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tzoffset;
                assert(old != NULL);
                var_tzoffset = tmp_assign_source_79;
                Py_DECREF(old);
            }

        }
        goto branch_end_26;
        branch_no_26:;
        // Tried code:
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_int);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_int);
            }

            if (tmp_mvar_value_12 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 40600 ], 32, 0);
                exception_tb = NULL;

                exception_lineno = 163;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_19;
            }

            tmp_called_name_6 = tmp_mvar_value_12;
            CHECK_OBJECT(var_tz);
            tmp_args_element_name_7 = var_tz;
            frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 163;
            tmp_assign_source_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_7);
            if (tmp_assign_source_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_19;
            }
            {
                PyObject *old = var_tzoffset;
                assert(old != NULL);
                var_tzoffset = tmp_assign_source_80;
                Py_DECREF(old);
            }

        }
        goto try_end_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION(frame_099dc03d32b8be438c77aa2798e1c797);
        if (exception_keeper_tb_18 == NULL) {
            exception_keeper_tb_18 = MAKE_TRACEBACK(frame_099dc03d32b8be438c77aa2798e1c797, exception_keeper_lineno_18);
        } else if (exception_keeper_lineno_18 != 0) {
            exception_keeper_tb_18 = ADD_TRACEBACK(exception_keeper_tb_18, frame_099dc03d32b8be438c77aa2798e1c797, exception_keeper_lineno_18);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
        PUBLISH_EXCEPTION(&exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_compexpr_left_26;
            PyObject *tmp_compexpr_right_26;
            tmp_compexpr_left_26 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_26 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_26, tmp_compexpr_right_26);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_27 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
            branch_yes_27:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 162;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_099dc03d32b8be438c77aa2798e1c797->m_frame) frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
            branch_no_27:;
        }
        goto try_end_18;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_2__parsedate_tz);
        return NULL;
        // End of try:
        try_end_18:;
        {
            nuitka_bool tmp_condition_result_28;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_27;
            PyObject *tmp_compexpr_right_27;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_call_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT(var_tzoffset);
            tmp_compexpr_left_27 = var_tzoffset;
            tmp_compexpr_right_27 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT(tmp_compexpr_left_27, tmp_compexpr_right_27);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_2 == 1) {
                goto and_right_2;
            } else {
                goto and_left_2;
            }
            and_right_2:;
            CHECK_OBJECT(var_tz);
            tmp_called_instance_17 = var_tz;
            frame_099dc03d32b8be438c77aa2798e1c797->m_frame.f_lineno = 166;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_17, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_unicode_chr_45_tuple, 0));

            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_3);

                exception_lineno = 166;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_3);
            tmp_condition_result_28 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_28 = tmp_and_left_value_2;
            and_end_2:;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
            branch_yes_28:;
            {
                PyObject *tmp_assign_source_81;
                tmp_assign_source_81 = Py_None;
                {
                    PyObject *old = var_tzoffset;
                    assert(old != NULL);
                    var_tzoffset = tmp_assign_source_81;
                    Py_INCREF(var_tzoffset);
                    Py_DECREF(old);
                }

            }
            branch_no_28:;
        }
        branch_end_26:;
    }
    {
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_3;
        if (var_tzoffset == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tzoffset");
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(var_tzoffset);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
        branch_yes_29:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_28;
            PyObject *tmp_compexpr_right_28;
            if (var_tzoffset == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tzoffset");
                exception_tb = NULL;

                exception_lineno = 170;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_28 = var_tzoffset;
            tmp_compexpr_right_28 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT(tmp_compexpr_left_28, tmp_compexpr_right_28);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_30 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
            branch_yes_30:;
            {
                PyObject *tmp_assign_source_82;
                tmp_assign_source_82 = const_int_neg_1;
                assert(var_tzsign == NULL);
                Py_INCREF(tmp_assign_source_82);
                var_tzsign = tmp_assign_source_82;
            }
            {
                PyObject *tmp_assign_source_83;
                PyObject *tmp_operand_name_4;
                if (var_tzoffset == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tzoffset");
                    exception_tb = NULL;

                    exception_lineno = 172;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_operand_name_4 = var_tzoffset;
                tmp_assign_source_83 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_name_4);
                if (tmp_assign_source_83 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_tzoffset;
                    var_tzoffset = tmp_assign_source_83;
                    Py_XDECREF(old);
                }

            }
            goto branch_end_30;
            branch_no_30:;
            {
                PyObject *tmp_assign_source_84;
                tmp_assign_source_84 = const_int_pos_1;
                assert(var_tzsign == NULL);
                Py_INCREF(tmp_assign_source_84);
                var_tzsign = tmp_assign_source_84;
            }
            branch_end_30:;
        }
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_11;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT(var_tzsign);
            tmp_left_name_7 = var_tzsign;
            if (var_tzoffset == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tzoffset");
                exception_tb = NULL;

                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_10 = var_tzoffset;
            tmp_right_name_8 = const_int_pos_100;
            tmp_left_name_9 = BINARY_OPERATION_FLOORDIV_OBJECT_INT(tmp_left_name_10, tmp_right_name_8);
            if (tmp_left_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_9 = const_int_pos_3600;
            tmp_left_name_8 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_9, tmp_right_name_9);
            Py_DECREF(tmp_left_name_9);
            if (tmp_left_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            if (var_tzoffset == NULL) {
                Py_DECREF(tmp_left_name_8);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tzoffset");
                exception_tb = NULL;

                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_12 = var_tzoffset;
            tmp_right_name_11 = const_int_pos_100;
            tmp_left_name_11 = BINARY_OPERATION_MOD_OBJECT_INT(tmp_left_name_12, tmp_right_name_11);
            if (tmp_left_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_8);

                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_12 = const_int_pos_60;
            tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_INT(tmp_left_name_11, tmp_right_name_12);
            Py_DECREF(tmp_left_name_11);
            if (tmp_right_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_8);

                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_10);
            Py_DECREF(tmp_left_name_8);
            Py_DECREF(tmp_right_name_10);
            if (tmp_right_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_85 = BINARY_OPERATION_MUL_INT_OBJECT(tmp_left_name_7, tmp_right_name_7);
            Py_DECREF(tmp_right_name_7);
            if (tmp_assign_source_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tzoffset;
                var_tzoffset = tmp_assign_source_85;
                Py_XDECREF(old);
            }

        }
        branch_no_29:;
    }
    {
        PyObject *tmp_list_element_2;
        if (var_yy == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "yy");
            exception_tb = NULL;

            exception_lineno = 177;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = var_yy;
        tmp_return_value = PyList_New(10);
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_2);
        CHECK_OBJECT(var_mm);
        tmp_list_element_2 = var_mm;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 1, tmp_list_element_2);
        CHECK_OBJECT(var_dd);
        tmp_list_element_2 = var_dd;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 2, tmp_list_element_2);
        CHECK_OBJECT(var_thh);
        tmp_list_element_2 = var_thh;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 3, tmp_list_element_2);
        CHECK_OBJECT(var_tmm);
        tmp_list_element_2 = var_tmm;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 4, tmp_list_element_2);
        CHECK_OBJECT(var_tss);
        tmp_list_element_2 = var_tss;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 5, tmp_list_element_2);
        tmp_list_element_2 = const_int_0;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 6, tmp_list_element_2);
        tmp_list_element_2 = const_int_pos_1;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 7, tmp_list_element_2);
        tmp_list_element_2 = const_int_neg_1;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 8, tmp_list_element_2);
        if (var_tzoffset == NULL) {
            Py_DECREF(tmp_return_value);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "tzoffset");
            exception_tb = NULL;

            exception_lineno = 177;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = var_tzoffset;
        Py_INCREF(tmp_list_element_2);
        PyList_SET_ITEM(tmp_return_value, 9, tmp_list_element_2);
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION(frame_099dc03d32b8be438c77aa2798e1c797);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_099dc03d32b8be438c77aa2798e1c797);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_099dc03d32b8be438c77aa2798e1c797);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_099dc03d32b8be438c77aa2798e1c797, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_099dc03d32b8be438c77aa2798e1c797->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_099dc03d32b8be438c77aa2798e1c797, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_099dc03d32b8be438c77aa2798e1c797,
        type_description_1,
        par_data,
        var_tm,
        var_tzsign,
        var_tz,
        var_i,
        var_dd,
        var_tss,
        var_yy,
        var_mm,
        var_s,
        var_stuff,
        var_thh,
        var_tmm,
        var_tzoffset
    );


    // Release cached frame.
    if (frame_099dc03d32b8be438c77aa2798e1c797 == cache_frame_099dc03d32b8be438c77aa2798e1c797) {
        Py_DECREF(frame_099dc03d32b8be438c77aa2798e1c797);
    }
    cache_frame_099dc03d32b8be438c77aa2798e1c797 = NULL;

    assertFrameObject(frame_099dc03d32b8be438c77aa2798e1c797);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_2__parsedate_tz);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tm);
    var_tm = NULL;

    Py_XDECREF(var_tzsign);
    var_tzsign = NULL;

    Py_XDECREF(var_tz);
    var_tz = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_dd);
    var_dd = NULL;

    Py_XDECREF(var_tss);
    var_tss = NULL;

    Py_XDECREF(var_yy);
    var_yy = NULL;

    Py_XDECREF(var_mm);
    var_mm = NULL;

    Py_XDECREF(var_s);
    var_s = NULL;

    Py_XDECREF(var_stuff);
    var_stuff = NULL;

    Py_XDECREF(var_thh);
    var_thh = NULL;

    Py_XDECREF(par_data);
    par_data = NULL;

    Py_XDECREF(var_tmm);
    var_tmm = NULL;

    Py_XDECREF(var_tzoffset);
    var_tzoffset = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_tm);
    var_tm = NULL;

    Py_XDECREF(var_tzsign);
    var_tzsign = NULL;

    Py_XDECREF(var_tz);
    var_tz = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_dd);
    var_dd = NULL;

    Py_XDECREF(var_tss);
    var_tss = NULL;

    Py_XDECREF(var_yy);
    var_yy = NULL;

    Py_XDECREF(var_mm);
    var_mm = NULL;

    Py_XDECREF(var_s);
    var_s = NULL;

    Py_XDECREF(var_stuff);
    var_stuff = NULL;

    Py_XDECREF(var_thh);
    var_thh = NULL;

    Py_XDECREF(par_data);
    par_data = NULL;

    Py_XDECREF(var_tmm);
    var_tmm = NULL;

    Py_XDECREF(var_tzoffset);
    var_tzoffset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_2__parsedate_tz);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_3_parsedate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_89dad0487329899daff00d17bc04837e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_89dad0487329899daff00d17bc04837e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_89dad0487329899daff00d17bc04837e, codeobj_89dad0487329899daff00d17bc04837e, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_89dad0487329899daff00d17bc04837e = cache_frame_89dad0487329899daff00d17bc04837e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_89dad0487329899daff00d17bc04837e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_89dad0487329899daff00d17bc04837e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_parsedate_tz);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parsedate_tz);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43049 ], 41, 0);
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_data);
        tmp_args_element_name_1 = par_data;
        frame_89dad0487329899daff00d17bc04837e->m_frame.f_lineno = 182;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_t);
        tmp_isinstance_inst_1 = var_t;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
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
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = 9;
            CHECK_OBJECT(var_t);
            tmp_slice_source_1 = var_t;
            tmp_return_value = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT(var_t);
        tmp_return_value = var_t;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_89dad0487329899daff00d17bc04837e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_89dad0487329899daff00d17bc04837e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_89dad0487329899daff00d17bc04837e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_89dad0487329899daff00d17bc04837e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_89dad0487329899daff00d17bc04837e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89dad0487329899daff00d17bc04837e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89dad0487329899daff00d17bc04837e,
        type_description_1,
        par_data,
        var_t
    );


    // Release cached frame.
    if (frame_89dad0487329899daff00d17bc04837e == cache_frame_89dad0487329899daff00d17bc04837e) {
        Py_DECREF(frame_89dad0487329899daff00d17bc04837e);
    }
    cache_frame_89dad0487329899daff00d17bc04837e = NULL;

    assertFrameObject(frame_89dad0487329899daff00d17bc04837e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_3_parsedate);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_t);
    Py_DECREF(var_t);
    var_t = NULL;

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

    Py_XDECREF(var_t);
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_3_parsedate);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_4_mktime_tz(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_t = NULL;
    struct Nuitka_FrameObject *frame_e4182f6f2781e31907c3b54fb76df626;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e4182f6f2781e31907c3b54fb76df626 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e4182f6f2781e31907c3b54fb76df626, codeobj_e4182f6f2781e31907c3b54fb76df626, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_e4182f6f2781e31907c3b54fb76df626 = cache_frame_e4182f6f2781e31907c3b54fb76df626;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e4182f6f2781e31907c3b54fb76df626);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e4182f6f2781e31907c3b54fb76df626) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_data);
        tmp_subscribed_name_1 = par_data;
        tmp_subscript_name_1 = const_int_pos_9;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 9);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_time);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 13652 ], 33, 0);
                exception_tb = NULL;

                exception_lineno = 193;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_mktime);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = 8;
            CHECK_OBJECT(par_data);
            tmp_slice_source_1 = par_data;
            tmp_left_name_1 = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 193;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_tuple_int_neg_1_tuple;
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_left_name_1);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 193;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_e4182f6f2781e31907c3b54fb76df626->m_frame.f_lineno = 193;
            tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_calendar);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 27438 ], 37, 0);
                exception_tb = NULL;

                exception_lineno = 195;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT(par_data);
            tmp_args_element_name_2 = par_data;
            frame_e4182f6f2781e31907c3b54fb76df626->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_timegm, call_args);
            }

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(var_t == NULL);
            var_t = tmp_assign_source_1;
        }
        {
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(var_t);
            tmp_left_name_2 = var_t;
            CHECK_OBJECT(par_data);
            tmp_subscribed_name_2 = par_data;
            tmp_subscript_name_2 = const_int_pos_9;
            tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 9);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4182f6f2781e31907c3b54fb76df626);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4182f6f2781e31907c3b54fb76df626);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4182f6f2781e31907c3b54fb76df626);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4182f6f2781e31907c3b54fb76df626, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e4182f6f2781e31907c3b54fb76df626->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4182f6f2781e31907c3b54fb76df626, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e4182f6f2781e31907c3b54fb76df626,
        type_description_1,
        par_data,
        var_t
    );


    // Release cached frame.
    if (frame_e4182f6f2781e31907c3b54fb76df626 == cache_frame_e4182f6f2781e31907c3b54fb76df626) {
        Py_DECREF(frame_e4182f6f2781e31907c3b54fb76df626);
    }
    cache_frame_e4182f6f2781e31907c3b54fb76df626 = NULL;

    assertFrameObject(frame_e4182f6f2781e31907c3b54fb76df626);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_4_mktime_tz);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_t);
    var_t = NULL;

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

    Py_XDECREF(var_t);
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_4_mktime_tz);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_5_quote(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_str = python_pars[0];
    struct Nuitka_FrameObject *frame_e6627ad4e62acd10820b49235f949d6d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6627ad4e62acd10820b49235f949d6d = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_e6627ad4e62acd10820b49235f949d6d, codeobj_e6627ad4e62acd10820b49235f949d6d, module_future$backports$email$_parseaddr, sizeof(void *));
    frame_e6627ad4e62acd10820b49235f949d6d = cache_frame_e6627ad4e62acd10820b49235f949d6d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e6627ad4e62acd10820b49235f949d6d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e6627ad4e62acd10820b49235f949d6d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_str);
        tmp_called_instance_2 = par_str;
        frame_e6627ad4e62acd10820b49235f949d6d->m_frame.f_lineno = 206;
        tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM(const_tuple_50378005024db3b928cd7b73d1611200_tuple, 0));

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e6627ad4e62acd10820b49235f949d6d->m_frame.f_lineno = 206;
        tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM(const_tuple_a22ab610c0c812382e79ed0af5de41f9_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6627ad4e62acd10820b49235f949d6d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6627ad4e62acd10820b49235f949d6d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6627ad4e62acd10820b49235f949d6d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6627ad4e62acd10820b49235f949d6d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e6627ad4e62acd10820b49235f949d6d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6627ad4e62acd10820b49235f949d6d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6627ad4e62acd10820b49235f949d6d,
        type_description_1,
        par_str
    );


    // Release cached frame.
    if (frame_e6627ad4e62acd10820b49235f949d6d == cache_frame_e6627ad4e62acd10820b49235f949d6d) {
        Py_DECREF(frame_e6627ad4e62acd10820b49235f949d6d);
    }
    cache_frame_e6627ad4e62acd10820b49235f949d6d = NULL;

    assertFrameObject(frame_e6627ad4e62acd10820b49235f949d6d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_5_quote);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_str);
    Py_DECREF(par_str);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_str);
    Py_DECREF(par_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_field = python_pars[1];
    struct Nuitka_FrameObject *frame_35f990bb49c7160cc4a52e093e774722;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_35f990bb49c7160cc4a52e093e774722 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_35f990bb49c7160cc4a52e093e774722, codeobj_35f990bb49c7160cc4a52e093e774722, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_35f990bb49c7160cc4a52e093e774722 = cache_frame_35f990bb49c7160cc4a52e093e774722;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35f990bb49c7160cc4a52e093e774722);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35f990bb49c7160cc4a52e093e774722) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_unicode_digest_3e99414955bbcd4e76ce3f221ce9cb78;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_specials, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_unicode_digest_ac02ab0238280e341b2aff0eed15b128;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_LWS, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_unicode_digest_7ca129d2d421fe965ad48cbb290b579b;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_CR, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_LWS);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_CR);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_FWS, tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_specials);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_LWS);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_CR);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_atomends, tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_atomends);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_35f990bb49c7160cc4a52e093e774722->m_frame.f_lineno = 234;
        tmp_assattr_name_7 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM(const_tuple_unicode_dot_unicode_empty_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_phraseends, tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_field);
        tmp_assattr_name_8 = par_field;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_field, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_commentlist, tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35f990bb49c7160cc4a52e093e774722);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35f990bb49c7160cc4a52e093e774722);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35f990bb49c7160cc4a52e093e774722, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_35f990bb49c7160cc4a52e093e774722->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35f990bb49c7160cc4a52e093e774722, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35f990bb49c7160cc4a52e093e774722,
        type_description_1,
        par_self,
        par_field
    );


    // Release cached frame.
    if (frame_35f990bb49c7160cc4a52e093e774722 == cache_frame_35f990bb49c7160cc4a52e093e774722) {
        Py_DECREF(frame_35f990bb49c7160cc4a52e093e774722);
    }
    cache_frame_35f990bb49c7160cc4a52e093e774722 = NULL;

    assertFrameObject(frame_35f990bb49c7160cc4a52e093e774722);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_6___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_7_gotonext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_wslist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_a45f365c3bc63e44289b1ba2d1095cd9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a45f365c3bc63e44289b1ba2d1095cd9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_wslist == NULL);
        var_wslist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a45f365c3bc63e44289b1ba2d1095cd9, codeobj_a45f365c3bc63e44289b1ba2d1095cd9, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_a45f365c3bc63e44289b1ba2d1095cd9 = cache_frame_a45f365c3bc63e44289b1ba2d1095cd9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a45f365c3bc63e44289b1ba2d1095cd9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a45f365c3bc63e44289b1ba2d1095cd9) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pos);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_field);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_pos);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_1);

            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_LWS);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_unicode_digest_a6a8906f01df54038862927dd6004ba9;
        tmp_compexpr_right_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_field);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_pos);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_2);

                exception_lineno = 243;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_unicode_digest_a6a8906f01df54038862927dd6004ba9;
            tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_8;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_10;
                CHECK_OBJECT(var_wslist);
                tmp_source_name_8 = var_wslist;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_append);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_9 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_field);
                if (tmp_subscribed_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 244;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_pos);
                if (tmp_subscript_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);
                    Py_DECREF(tmp_subscribed_name_3);

                    exception_lineno = 244;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
                Py_DECREF(tmp_subscribed_name_3);
                Py_DECREF(tmp_subscript_name_3);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 244;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_a45f365c3bc63e44289b1ba2d1095cd9->m_frame.f_lineno = 244;
                tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_call_result_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_1);
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT(par_self);
            tmp_source_name_11 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_pos);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_2 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_3 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "oo";
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT(par_self);
            tmp_source_name_12 = par_self;
            tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_field);
            if (tmp_subscribed_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_13 = par_self;
            tmp_subscript_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_pos);
            if (tmp_subscript_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_4);

                exception_lineno = 246;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
            Py_DECREF(tmp_subscribed_name_4);
            Py_DECREF(tmp_subscript_name_4);
            if (tmp_compexpr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_unicode_chr_40;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            Py_DECREF(tmp_compexpr_left_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_14;
                PyObject *tmp_source_name_15;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT(par_self);
                tmp_source_name_15 = par_self;
                tmp_source_name_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_commentlist);
                if (tmp_source_name_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_append);
                Py_DECREF(tmp_source_name_14);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_called_instance_1 = par_self;
                frame_a45f365c3bc63e44289b1ba2d1095cd9->m_frame.f_lineno = 247;
                tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_getcomment);
                if (tmp_args_element_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 247;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_a45f365c3bc63e44289b1ba2d1095cd9->m_frame.f_lineno = 247;
                tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_2);
            }
            goto branch_end_4;
            branch_no_4:;
            goto loop_end_1;
            branch_end_4:;
        }
        branch_end_2:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT(var_wslist);
        tmp_args_element_name_3 = var_wslist;
        frame_a45f365c3bc63e44289b1ba2d1095cd9->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_join, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a45f365c3bc63e44289b1ba2d1095cd9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a45f365c3bc63e44289b1ba2d1095cd9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a45f365c3bc63e44289b1ba2d1095cd9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a45f365c3bc63e44289b1ba2d1095cd9, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a45f365c3bc63e44289b1ba2d1095cd9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a45f365c3bc63e44289b1ba2d1095cd9, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a45f365c3bc63e44289b1ba2d1095cd9,
        type_description_1,
        par_self,
        var_wslist
    );


    // Release cached frame.
    if (frame_a45f365c3bc63e44289b1ba2d1095cd9 == cache_frame_a45f365c3bc63e44289b1ba2d1095cd9) {
        Py_DECREF(frame_a45f365c3bc63e44289b1ba2d1095cd9);
    }
    cache_frame_a45f365c3bc63e44289b1ba2d1095cd9 = NULL;

    assertFrameObject(frame_a45f365c3bc63e44289b1ba2d1095cd9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_7_gotonext);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_wslist);
    Py_DECREF(var_wslist);
    var_wslist = NULL;

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

    CHECK_OBJECT((PyObject *)var_wslist);
    Py_DECREF(var_wslist);
    var_wslist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_7_gotonext);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_8_getaddrlist(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_result = NULL;
    PyObject *var_ad = NULL;
    struct Nuitka_FrameObject *frame_51751f397e7852160c26e5be3b8f6aad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_51751f397e7852160c26e5be3b8f6aad = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_51751f397e7852160c26e5be3b8f6aad, codeobj_51751f397e7852160c26e5be3b8f6aad, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_51751f397e7852160c26e5be3b8f6aad = cache_frame_51751f397e7852160c26e5be3b8f6aad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_51751f397e7852160c26e5be3b8f6aad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_51751f397e7852160c26e5be3b8f6aad) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pos);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_51751f397e7852160c26e5be3b8f6aad->m_frame.f_lineno = 259;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_getaddress);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ad;
            var_ad = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ad);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_ad);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if (var_result == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "result");
                exception_tb = NULL;

                exception_lineno = 261;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_1 = var_result;
            CHECK_OBJECT(var_ad);
            tmp_right_name_1 = var_ad;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_1;
            var_result = tmp_assign_source_3;

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            if (var_result == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "result");
                exception_tb = NULL;

                exception_lineno = 263;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = var_result;
            frame_51751f397e7852160c26e5be3b8f6aad->m_frame.f_lineno = 263;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_tuple_unicode_empty_unicode_empty_tuple_tuple, 0));

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_end_2:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 258;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_result == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "result");
        exception_tb = NULL;

        exception_lineno = 264;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_51751f397e7852160c26e5be3b8f6aad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_51751f397e7852160c26e5be3b8f6aad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_51751f397e7852160c26e5be3b8f6aad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51751f397e7852160c26e5be3b8f6aad, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_51751f397e7852160c26e5be3b8f6aad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51751f397e7852160c26e5be3b8f6aad, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_51751f397e7852160c26e5be3b8f6aad,
        type_description_1,
        par_self,
        var_result,
        var_ad
    );


    // Release cached frame.
    if (frame_51751f397e7852160c26e5be3b8f6aad == cache_frame_51751f397e7852160c26e5be3b8f6aad) {
        Py_DECREF(frame_51751f397e7852160c26e5be3b8f6aad);
    }
    cache_frame_51751f397e7852160c26e5be3b8f6aad = NULL;

    assertFrameObject(frame_51751f397e7852160c26e5be3b8f6aad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_8_getaddrlist);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_result);
    var_result = NULL;

    Py_XDECREF(var_ad);
    var_ad = NULL;

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

    Py_XDECREF(var_result);
    var_result = NULL;

    Py_XDECREF(var_ad);
    var_ad = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_8_getaddrlist);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_9_getaddress(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_addrspec = NULL;
    PyObject *var_oldcl = NULL;
    PyObject *var_oldpos = NULL;
    PyObject *var_routeaddr = NULL;
    PyObject *var_fieldlen = NULL;
    PyObject *var_returnlist = NULL;
    PyObject *var_plist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    PyObject *tmp_inplace_assign_attr_4__end = NULL;
    PyObject *tmp_inplace_assign_attr_4__start = NULL;
    struct Nuitka_FrameObject *frame_ffe00bc424c8167fba5b43b394e18fb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ffe00bc424c8167fba5b43b394e18fb5 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_ffe00bc424c8167fba5b43b394e18fb5, codeobj_ffe00bc424c8167fba5b43b394e18fb5, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ffe00bc424c8167fba5b43b394e18fb5 = cache_frame_ffe00bc424c8167fba5b43b394e18fb5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ffe00bc424c8167fba5b43b394e18fb5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ffe00bc424c8167fba5b43b394e18fb5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_commentlist, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 269;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_gotonext);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pos);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_oldpos == NULL);
        var_oldpos = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_commentlist);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_oldcl == NULL);
        var_oldcl = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 273;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_getphraselist);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_plist == NULL);
        var_plist = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 275;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_gotonext);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyList_New(0);
        assert(var_returnlist == NULL);
        var_returnlist = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_pos);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 278;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 278;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT(var_plist);
            tmp_truth_name_1 = CHECK_IF_TRUE(var_plist);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_list_element_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE);

                if (unlikely(tmp_mvar_value_1 == NULL)) {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE);
                }

                if (tmp_mvar_value_1 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 43130 ], 34, 0);
                    exception_tb = NULL;

                    exception_lineno = 281;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_1;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_join);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 281;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_6 = par_self;
                tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_commentlist);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 281;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 281;
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 281;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_list_element_1 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(var_plist);
                tmp_subscribed_name_1 = var_plist;
                tmp_subscript_name_1 = const_int_0;
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_list_element_1);

                    exception_lineno = 281;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_1);
                tmp_assign_source_5 = PyList_New(1);
                PyList_SET_ITEM(tmp_assign_source_5, 0, tmp_list_element_1);
                {
                    PyObject *old = var_returnlist;
                    assert(old != NULL);
                    var_returnlist = tmp_assign_source_5;
                    Py_DECREF(old);
                }

            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_field);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_pos);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_2);

                exception_lineno = 283;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_unicode_digest_f717fc6c600a521690d4c5fccca7e0c2;
            tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
            Py_DECREF(tmp_compexpr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT(var_oldpos);
                tmp_assattr_name_2 = var_oldpos;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 286;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                CHECK_OBJECT(var_oldcl);
                tmp_assattr_name_3 = var_oldcl;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_commentlist, tmp_assattr_name_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_called_instance_4;
                CHECK_OBJECT(par_self);
                tmp_called_instance_4 = par_self;
                frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 288;
                tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_getaddrspec);
                if (tmp_assign_source_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_addrspec == NULL);
                var_addrspec = tmp_assign_source_6;
            }
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_list_element_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_source_name_10;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 43130 ], 34, 0);
                    exception_tb = NULL;

                    exception_lineno = 289;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_9 = tmp_mvar_value_2;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_join);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_commentlist);
                if (tmp_args_element_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 289;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 289;
                tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_list_element_2 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_list_element_2, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_addrspec);
                tmp_tuple_element_2 = var_addrspec;
                Py_INCREF(tmp_tuple_element_2);
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_2);
                tmp_assign_source_7 = PyList_New(1);
                PyList_SET_ITEM(tmp_assign_source_7, 0, tmp_list_element_2);
                {
                    PyObject *old = var_returnlist;
                    assert(old != NULL);
                    var_returnlist = tmp_assign_source_7;
                    Py_DECREF(old);
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_12;
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_field);
                if (tmp_subscribed_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 291;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_12 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_pos);
                if (tmp_subscript_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_subscribed_name_3);

                    exception_lineno = 291;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
                Py_DECREF(tmp_subscribed_name_3);
                Py_DECREF(tmp_subscript_name_3);
                if (tmp_compexpr_left_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 291;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_3 = const_unicode_chr_58;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
                Py_DECREF(tmp_compexpr_left_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 291;
                    type_description_1 = "oooooooo";
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
                    PyObject *tmp_assign_source_8;
                    tmp_assign_source_8 = PyList_New(0);
                    {
                        PyObject *old = var_returnlist;
                        assert(old != NULL);
                        var_returnlist = tmp_assign_source_8;
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_len_arg_2;
                    PyObject *tmp_source_name_13;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_13 = par_self;
                    tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_field);
                    if (tmp_len_arg_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_9 = BUILTIN_LEN(tmp_len_arg_2);
                    Py_DECREF(tmp_len_arg_2);
                    if (tmp_assign_source_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert(var_fieldlen == NULL);
                    var_fieldlen = tmp_assign_source_9;
                }
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_source_name_14;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_14 = par_self;
                    tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_pos);
                    if (tmp_assign_source_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert(tmp_inplace_assign_attr_1__start == NULL);
                    tmp_inplace_assign_attr_1__start = tmp_assign_source_10;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_right_name_1;
                    CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
                    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
                    tmp_right_name_1 = const_int_pos_1;
                    tmp_assign_source_11 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
                    if (tmp_assign_source_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_2;
                    }
                    assert(tmp_inplace_assign_attr_1__end == NULL);
                    tmp_inplace_assign_attr_1__end = tmp_assign_source_11;
                }
                // Tried code:
                {
                    PyObject *tmp_assattr_name_4;
                    PyObject *tmp_assattr_target_4;
                    CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
                    tmp_assattr_name_4 = tmp_inplace_assign_attr_1__end;
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_4 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_pos, tmp_assattr_name_4);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;
                        type_description_1 = "oooooooo";
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

                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
                Py_DECREF(tmp_inplace_assign_attr_1__end);
                tmp_inplace_assign_attr_1__end = NULL;

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

                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
                Py_DECREF(tmp_inplace_assign_attr_1__start);
                tmp_inplace_assign_attr_1__start = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto frame_exception_exit_1;
                // End of try:
                try_end_2:;
                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
                Py_DECREF(tmp_inplace_assign_attr_1__end);
                tmp_inplace_assign_attr_1__end = NULL;

                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
                Py_DECREF(tmp_inplace_assign_attr_1__start);
                tmp_inplace_assign_attr_1__start = NULL;

                loop_start_1:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_operand_name_1;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_len_arg_3;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_15 = par_self;
                    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_pos);
                    if (tmp_compexpr_left_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 297;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_16 = par_self;
                    tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_field);
                    if (tmp_len_arg_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_compexpr_left_4);

                        exception_lineno = 297;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_4 = BUILTIN_LEN(tmp_len_arg_3);
                    Py_DECREF(tmp_len_arg_3);
                    if (tmp_compexpr_right_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_compexpr_left_4);

                        exception_lineno = 297;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                    Py_DECREF(tmp_compexpr_left_4);
                    Py_DECREF(tmp_compexpr_right_4);
                    if (tmp_operand_name_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 297;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
                    Py_DECREF(tmp_operand_name_1);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 297;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_5;
                    } else {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    goto loop_end_1;
                    branch_no_5:;
                }
                {
                    PyObject *tmp_called_instance_5;
                    PyObject *tmp_call_result_3;
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_5 = par_self;
                    frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 298;
                    tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_gotonext);
                    if (tmp_call_result_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 298;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_3);
                }
                {
                    nuitka_bool tmp_condition_result_6;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_18;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_19;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_17 = par_self;
                    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_pos);
                    if (tmp_compexpr_left_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(var_fieldlen);
                    tmp_compexpr_right_5 = var_fieldlen;
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                    Py_DECREF(tmp_compexpr_left_5);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_1 = "oooooooo";
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
                    tmp_source_name_18 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_field);
                    if (tmp_subscribed_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_19 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_pos);
                    if (tmp_subscript_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_subscribed_name_4);

                        exception_lineno = 299;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
                    Py_DECREF(tmp_subscribed_name_4);
                    Py_DECREF(tmp_subscript_name_4);
                    if (tmp_compexpr_left_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_6 = const_unicode_chr_59;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
                    Py_DECREF(tmp_compexpr_left_6);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_6 = tmp_and_right_value_1;
                    goto and_end_1;
                    and_left_1:;
                    tmp_condition_result_6 = tmp_and_left_value_1;
                    and_end_1:;
                    if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_6;
                    } else {
                        goto branch_no_6;
                    }
                    branch_yes_6:;
                    {
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_source_name_20;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_20 = par_self;
                        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_pos);
                        if (tmp_assign_source_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 300;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert(tmp_inplace_assign_attr_2__start == NULL);
                        tmp_inplace_assign_attr_2__start = tmp_assign_source_12;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_13;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        CHECK_OBJECT(tmp_inplace_assign_attr_2__start);
                        tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                        tmp_right_name_2 = const_int_pos_1;
                        tmp_assign_source_13 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
                        if (tmp_assign_source_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 300;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_4;
                        }
                        assert(tmp_inplace_assign_attr_2__end == NULL);
                        tmp_inplace_assign_attr_2__end = tmp_assign_source_13;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_5;
                        PyObject *tmp_assattr_target_5;
                        CHECK_OBJECT(tmp_inplace_assign_attr_2__end);
                        tmp_assattr_name_5 = tmp_inplace_assign_attr_2__end;
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_5 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_pos, tmp_assattr_name_5);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 300;
                            type_description_1 = "oooooooo";
                            goto try_except_handler_5;
                        }
                    }
                    goto try_end_3;
                    // Exception handler code:
                    try_except_handler_5:;
                    exception_keeper_type_3 = exception_type;
                    exception_keeper_value_3 = exception_value;
                    exception_keeper_tb_3 = exception_tb;
                    exception_keeper_lineno_3 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
                    Py_DECREF(tmp_inplace_assign_attr_2__end);
                    tmp_inplace_assign_attr_2__end = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_3;
                    exception_value = exception_keeper_value_3;
                    exception_tb = exception_keeper_tb_3;
                    exception_lineno = exception_keeper_lineno_3;

                    goto try_except_handler_4;
                    // End of try:
                    try_end_3:;
                    goto try_end_4;
                    // Exception handler code:
                    try_except_handler_4:;
                    exception_keeper_type_4 = exception_type;
                    exception_keeper_value_4 = exception_value;
                    exception_keeper_tb_4 = exception_tb;
                    exception_keeper_lineno_4 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
                    Py_DECREF(tmp_inplace_assign_attr_2__start);
                    tmp_inplace_assign_attr_2__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_4;
                    exception_value = exception_keeper_value_4;
                    exception_tb = exception_keeper_tb_4;
                    exception_lineno = exception_keeper_lineno_4;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_4:;
                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
                    Py_DECREF(tmp_inplace_assign_attr_2__end);
                    tmp_inplace_assign_attr_2__end = NULL;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
                    Py_DECREF(tmp_inplace_assign_attr_2__start);
                    tmp_inplace_assign_attr_2__start = NULL;

                    goto loop_end_1;
                    branch_no_6:;
                }
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_called_instance_6;
                    CHECK_OBJECT(var_returnlist);
                    tmp_left_name_3 = var_returnlist;
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_6 = par_self;
                    frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 302;
                    tmp_right_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_getaddress);
                    if (tmp_right_name_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
                    Py_DECREF(tmp_right_name_3);
                    if (tmp_assign_source_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_returnlist;
                        assert(old != NULL);
                        var_returnlist = tmp_assign_source_14;
                        Py_DECREF(old);
                    }

                }
                if (CONSIDER_THREADING() == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 297;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                goto loop_start_1;
                loop_end_1:;
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_7;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_subscript_name_5;
                    PyObject *tmp_source_name_22;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_21 = par_self;
                    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_field);
                    if (tmp_subscribed_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_22 = par_self;
                    tmp_subscript_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_pos);
                    if (tmp_subscript_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_subscribed_name_5);

                        exception_lineno = 304;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_5, tmp_subscript_name_5);
                    Py_DECREF(tmp_subscribed_name_5);
                    Py_DECREF(tmp_subscript_name_5);
                    if (tmp_compexpr_left_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_7 = const_unicode_chr_60;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
                    Py_DECREF(tmp_compexpr_left_7);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 304;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_7;
                    } else {
                        goto branch_no_7;
                    }
                    branch_yes_7:;
                    {
                        PyObject *tmp_assign_source_15;
                        PyObject *tmp_called_instance_7;
                        CHECK_OBJECT(par_self);
                        tmp_called_instance_7 = par_self;
                        frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 306;
                        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_getrouteaddr);
                        if (tmp_assign_source_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 306;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert(var_routeaddr == NULL);
                        var_routeaddr = tmp_assign_source_15;
                    }
                    {
                        nuitka_bool tmp_condition_result_8;
                        PyObject *tmp_source_name_23;
                        PyObject *tmp_attribute_value_1;
                        int tmp_truth_name_2;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_23 = par_self;
                        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_commentlist);
                        if (tmp_attribute_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 308;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
                        if (tmp_truth_name_2 == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_attribute_value_1);

                            exception_lineno = 308;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        Py_DECREF(tmp_attribute_value_1);
                        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_8;
                        } else {
                            goto branch_no_8;
                        }
                        branch_yes_8:;
                        {
                            PyObject *tmp_assign_source_16;
                            PyObject *tmp_list_element_3;
                            PyObject *tmp_tuple_element_3;
                            PyObject *tmp_left_name_4;
                            PyObject *tmp_left_name_5;
                            PyObject *tmp_left_name_6;
                            PyObject *tmp_called_instance_8;
                            PyObject *tmp_mvar_value_3;
                            PyObject *tmp_args_element_name_3;
                            PyObject *tmp_right_name_4;
                            PyObject *tmp_right_name_5;
                            PyObject *tmp_called_name_3;
                            PyObject *tmp_source_name_24;
                            PyObject *tmp_args_element_name_4;
                            PyObject *tmp_source_name_25;
                            PyObject *tmp_right_name_6;
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE);

                            if (unlikely(tmp_mvar_value_3 == NULL)) {
                                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE);
                            }

                            if (tmp_mvar_value_3 == NULL) {

                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 43130 ], 34, 0);
                                exception_tb = NULL;

                                exception_lineno = 309;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_instance_8 = tmp_mvar_value_3;
                            CHECK_OBJECT(var_plist);
                            tmp_args_element_name_3 = var_plist;
                            frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 309;
                            {
                                PyObject *call_args[] = {tmp_args_element_name_3};
                                tmp_left_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_join, call_args);
                            }

                            if (tmp_left_name_6 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 309;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_right_name_4 = const_unicode_digest_b0a73c883a655937e1ff2aa8bb687e6a;
                            tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE(tmp_left_name_6, tmp_right_name_4);
                            Py_DECREF(tmp_left_name_6);
                            if (tmp_left_name_5 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 309;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_source_name_24 = const_unicode_space;
                            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_join);
                            assert(!(tmp_called_name_3 == NULL));
                            CHECK_OBJECT(par_self);
                            tmp_source_name_25 = par_self;
                            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_commentlist);
                            if (tmp_args_element_name_4 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_left_name_5);
                                Py_DECREF(tmp_called_name_3);

                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 310;
                            tmp_right_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
                            Py_DECREF(tmp_called_name_3);
                            Py_DECREF(tmp_args_element_name_4);
                            if (tmp_right_name_5 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_left_name_5);

                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
                            Py_DECREF(tmp_left_name_5);
                            Py_DECREF(tmp_right_name_5);
                            if (tmp_left_name_4 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 309;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_right_name_6 = const_unicode_chr_41;
                            tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_6);
                            Py_DECREF(tmp_left_name_4);
                            if (tmp_tuple_element_3 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 310;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_list_element_3 = PyTuple_New(2);
                            PyTuple_SET_ITEM(tmp_list_element_3, 0, tmp_tuple_element_3);
                            CHECK_OBJECT(var_routeaddr);
                            tmp_tuple_element_3 = var_routeaddr;
                            Py_INCREF(tmp_tuple_element_3);
                            PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_3);
                            tmp_assign_source_16 = PyList_New(1);
                            PyList_SET_ITEM(tmp_assign_source_16, 0, tmp_list_element_3);
                            {
                                PyObject *old = var_returnlist;
                                assert(old != NULL);
                                var_returnlist = tmp_assign_source_16;
                                Py_DECREF(old);
                            }

                        }
                        goto branch_end_8;
                        branch_no_8:;
                        {
                            PyObject *tmp_assign_source_17;
                            PyObject *tmp_list_element_4;
                            PyObject *tmp_tuple_element_4;
                            PyObject *tmp_called_instance_9;
                            PyObject *tmp_mvar_value_4;
                            PyObject *tmp_args_element_name_5;
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE);

                            if (unlikely(tmp_mvar_value_4 == NULL)) {
                                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE);
                            }

                            if (tmp_mvar_value_4 == NULL) {

                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 43130 ], 34, 0);
                                exception_tb = NULL;

                                exception_lineno = 312;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_called_instance_9 = tmp_mvar_value_4;
                            CHECK_OBJECT(var_plist);
                            tmp_args_element_name_5 = var_plist;
                            frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 312;
                            {
                                PyObject *call_args[] = {tmp_args_element_name_5};
                                tmp_tuple_element_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_join, call_args);
                            }

                            if (tmp_tuple_element_4 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 312;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_list_element_4 = PyTuple_New(2);
                            PyTuple_SET_ITEM(tmp_list_element_4, 0, tmp_tuple_element_4);
                            CHECK_OBJECT(var_routeaddr);
                            tmp_tuple_element_4 = var_routeaddr;
                            Py_INCREF(tmp_tuple_element_4);
                            PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_4);
                            tmp_assign_source_17 = PyList_New(1);
                            PyList_SET_ITEM(tmp_assign_source_17, 0, tmp_list_element_4);
                            {
                                PyObject *old = var_returnlist;
                                assert(old != NULL);
                                var_returnlist = tmp_assign_source_17;
                                Py_DECREF(old);
                            }

                        }
                        branch_end_8:;
                    }
                    goto branch_end_7;
                    branch_no_7:;
                    {
                        nuitka_bool tmp_condition_result_9;
                        int tmp_truth_name_3;
                        CHECK_OBJECT(var_plist);
                        tmp_truth_name_3 = CHECK_IF_TRUE(var_plist);
                        if (tmp_truth_name_3 == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 315;
                            type_description_1 = "oooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_9 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_9;
                        } else {
                            goto branch_no_9;
                        }
                        branch_yes_9:;
                        {
                            PyObject *tmp_assign_source_18;
                            PyObject *tmp_list_element_5;
                            PyObject *tmp_tuple_element_5;
                            PyObject *tmp_called_name_4;
                            PyObject *tmp_source_name_26;
                            PyObject *tmp_mvar_value_5;
                            PyObject *tmp_args_element_name_6;
                            PyObject *tmp_source_name_27;
                            PyObject *tmp_subscribed_name_6;
                            PyObject *tmp_subscript_name_6;
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE);

                            if (unlikely(tmp_mvar_value_5 == NULL)) {
                                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SPACE);
                            }

                            if (tmp_mvar_value_5 == NULL) {

                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 43130 ], 34, 0);
                                exception_tb = NULL;

                                exception_lineno = 316;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_26 = tmp_mvar_value_5;
                            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_join);
                            if (tmp_called_name_4 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 316;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT(par_self);
                            tmp_source_name_27 = par_self;
                            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_commentlist);
                            if (tmp_args_element_name_6 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_name_4);

                                exception_lineno = 316;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 316;
                            tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
                            Py_DECREF(tmp_called_name_4);
                            Py_DECREF(tmp_args_element_name_6);
                            if (tmp_tuple_element_5 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 316;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_list_element_5 = PyTuple_New(2);
                            PyTuple_SET_ITEM(tmp_list_element_5, 0, tmp_tuple_element_5);
                            CHECK_OBJECT(var_plist);
                            tmp_subscribed_name_6 = var_plist;
                            tmp_subscript_name_6 = const_int_0;
                            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_6, tmp_subscript_name_6, 0);
                            if (tmp_tuple_element_5 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_list_element_5);

                                exception_lineno = 316;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_5);
                            tmp_assign_source_18 = PyList_New(1);
                            PyList_SET_ITEM(tmp_assign_source_18, 0, tmp_list_element_5);
                            {
                                PyObject *old = var_returnlist;
                                assert(old != NULL);
                                var_returnlist = tmp_assign_source_18;
                                Py_DECREF(old);
                            }

                        }
                        goto branch_end_9;
                        branch_no_9:;
                        {
                            nuitka_bool tmp_condition_result_10;
                            PyObject *tmp_compexpr_left_8;
                            PyObject *tmp_compexpr_right_8;
                            PyObject *tmp_subscribed_name_7;
                            PyObject *tmp_source_name_28;
                            PyObject *tmp_subscript_name_7;
                            PyObject *tmp_source_name_29;
                            PyObject *tmp_source_name_30;
                            CHECK_OBJECT(par_self);
                            tmp_source_name_28 = par_self;
                            tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_field);
                            if (tmp_subscribed_name_7 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 317;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT(par_self);
                            tmp_source_name_29 = par_self;
                            tmp_subscript_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_pos);
                            if (tmp_subscript_name_7 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_subscribed_name_7);

                                exception_lineno = 317;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_compexpr_left_8 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_7, tmp_subscript_name_7);
                            Py_DECREF(tmp_subscribed_name_7);
                            Py_DECREF(tmp_subscript_name_7);
                            if (tmp_compexpr_left_8 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 317;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT(par_self);
                            tmp_source_name_30 = par_self;
                            tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_specials);
                            if (tmp_compexpr_right_8 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_compexpr_left_8);

                                exception_lineno = 317;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_res = PySequence_Contains(tmp_compexpr_right_8, tmp_compexpr_left_8);
                            Py_DECREF(tmp_compexpr_left_8);
                            Py_DECREF(tmp_compexpr_right_8);
                            if (tmp_res == -1) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 317;
                                type_description_1 = "oooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                                goto branch_yes_10;
                            } else {
                                goto branch_no_10;
                            }
                            branch_yes_10:;
                            {
                                PyObject *tmp_assign_source_19;
                                PyObject *tmp_source_name_31;
                                CHECK_OBJECT(par_self);
                                tmp_source_name_31 = par_self;
                                tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_pos);
                                if (tmp_assign_source_19 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 318;
                                    type_description_1 = "oooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert(tmp_inplace_assign_attr_3__start == NULL);
                                tmp_inplace_assign_attr_3__start = tmp_assign_source_19;
                            }
                            // Tried code:
                            {
                                PyObject *tmp_assign_source_20;
                                PyObject *tmp_left_name_7;
                                PyObject *tmp_right_name_7;
                                CHECK_OBJECT(tmp_inplace_assign_attr_3__start);
                                tmp_left_name_7 = tmp_inplace_assign_attr_3__start;
                                tmp_right_name_7 = const_int_pos_1;
                                tmp_assign_source_20 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_7, tmp_right_name_7);
                                if (tmp_assign_source_20 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 318;
                                    type_description_1 = "oooooooo";
                                    goto try_except_handler_6;
                                }
                                assert(tmp_inplace_assign_attr_3__end == NULL);
                                tmp_inplace_assign_attr_3__end = tmp_assign_source_20;
                            }
                            // Tried code:
                            {
                                PyObject *tmp_assattr_name_6;
                                PyObject *tmp_assattr_target_6;
                                CHECK_OBJECT(tmp_inplace_assign_attr_3__end);
                                tmp_assattr_name_6 = tmp_inplace_assign_attr_3__end;
                                CHECK_OBJECT(par_self);
                                tmp_assattr_target_6 = par_self;
                                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_pos, tmp_assattr_name_6);
                                if (tmp_result == false) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 318;
                                    type_description_1 = "oooooooo";
                                    goto try_except_handler_7;
                                }
                            }
                            goto try_end_5;
                            // Exception handler code:
                            try_except_handler_7:;
                            exception_keeper_type_5 = exception_type;
                            exception_keeper_value_5 = exception_value;
                            exception_keeper_tb_5 = exception_tb;
                            exception_keeper_lineno_5 = exception_lineno;
                            exception_type = NULL;
                            exception_value = NULL;
                            exception_tb = NULL;
                            exception_lineno = 0;

                            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
                            Py_DECREF(tmp_inplace_assign_attr_3__end);
                            tmp_inplace_assign_attr_3__end = NULL;

                            // Re-raise.
                            exception_type = exception_keeper_type_5;
                            exception_value = exception_keeper_value_5;
                            exception_tb = exception_keeper_tb_5;
                            exception_lineno = exception_keeper_lineno_5;

                            goto try_except_handler_6;
                            // End of try:
                            try_end_5:;
                            goto try_end_6;
                            // Exception handler code:
                            try_except_handler_6:;
                            exception_keeper_type_6 = exception_type;
                            exception_keeper_value_6 = exception_value;
                            exception_keeper_tb_6 = exception_tb;
                            exception_keeper_lineno_6 = exception_lineno;
                            exception_type = NULL;
                            exception_value = NULL;
                            exception_tb = NULL;
                            exception_lineno = 0;

                            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
                            Py_DECREF(tmp_inplace_assign_attr_3__start);
                            tmp_inplace_assign_attr_3__start = NULL;

                            // Re-raise.
                            exception_type = exception_keeper_type_6;
                            exception_value = exception_keeper_value_6;
                            exception_tb = exception_keeper_tb_6;
                            exception_lineno = exception_keeper_lineno_6;

                            goto frame_exception_exit_1;
                            // End of try:
                            try_end_6:;
                            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
                            Py_DECREF(tmp_inplace_assign_attr_3__end);
                            tmp_inplace_assign_attr_3__end = NULL;

                            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
                            Py_DECREF(tmp_inplace_assign_attr_3__start);
                            tmp_inplace_assign_attr_3__start = NULL;

                            branch_no_10:;
                        }
                        branch_end_9:;
                    }
                    branch_end_7:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_10 = par_self;
        frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame.f_lineno = 320;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_gotonext);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_source_name_32;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_source_name_33;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_source_name_34;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_source_name_35;
        CHECK_OBJECT(par_self);
        tmp_source_name_32 = par_self;
        tmp_compexpr_left_9 = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain_pos);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_33 = par_self;
        tmp_len_arg_4 = LOOKUP_ATTRIBUTE(tmp_source_name_33, const_str_plain_field);
        if (tmp_len_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_9);

            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = BUILTIN_LEN(tmp_len_arg_4);
        Py_DECREF(tmp_len_arg_4);
        if (tmp_compexpr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_9);

            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        Py_DECREF(tmp_compexpr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_source_name_34 = par_self;
        tmp_subscribed_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_34, const_str_plain_field);
        if (tmp_subscribed_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_35 = par_self;
        tmp_subscript_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_35, const_str_plain_pos);
        if (tmp_subscript_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_8);

            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_8, tmp_subscript_name_8);
        Py_DECREF(tmp_subscribed_name_8);
        Py_DECREF(tmp_subscript_name_8);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = const_unicode_chr_44;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        Py_DECREF(tmp_compexpr_left_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_11 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_source_name_36;
            CHECK_OBJECT(par_self);
            tmp_source_name_36 = par_self;
            tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_source_name_36, const_str_plain_pos);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_inplace_assign_attr_4__start == NULL);
            tmp_inplace_assign_attr_4__start = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT(tmp_inplace_assign_attr_4__start);
            tmp_left_name_8 = tmp_inplace_assign_attr_4__start;
            tmp_right_name_8 = const_int_pos_1;
            tmp_assign_source_22 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "oooooooo";
                goto try_except_handler_8;
            }
            assert(tmp_inplace_assign_attr_4__end == NULL);
            tmp_inplace_assign_attr_4__end = tmp_assign_source_22;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_assattr_target_7;
            CHECK_OBJECT(tmp_inplace_assign_attr_4__end);
            tmp_assattr_name_7 = tmp_inplace_assign_attr_4__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_pos, tmp_assattr_name_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "oooooooo";
                goto try_except_handler_9;
            }
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__end);
        Py_DECREF(tmp_inplace_assign_attr_4__end);
        tmp_inplace_assign_attr_4__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__start);
        Py_DECREF(tmp_inplace_assign_attr_4__start);
        tmp_inplace_assign_attr_4__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__end);
        Py_DECREF(tmp_inplace_assign_attr_4__end);
        tmp_inplace_assign_attr_4__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__start);
        Py_DECREF(tmp_inplace_assign_attr_4__start);
        tmp_inplace_assign_attr_4__start = NULL;

        branch_no_11:;
    }
    if (var_returnlist == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "returnlist");
        exception_tb = NULL;

        exception_lineno = 323;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_returnlist;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe00bc424c8167fba5b43b394e18fb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe00bc424c8167fba5b43b394e18fb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffe00bc424c8167fba5b43b394e18fb5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffe00bc424c8167fba5b43b394e18fb5, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ffe00bc424c8167fba5b43b394e18fb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffe00bc424c8167fba5b43b394e18fb5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ffe00bc424c8167fba5b43b394e18fb5,
        type_description_1,
        par_self,
        var_addrspec,
        var_oldcl,
        var_oldpos,
        var_routeaddr,
        var_fieldlen,
        var_returnlist,
        var_plist
    );


    // Release cached frame.
    if (frame_ffe00bc424c8167fba5b43b394e18fb5 == cache_frame_ffe00bc424c8167fba5b43b394e18fb5) {
        Py_DECREF(frame_ffe00bc424c8167fba5b43b394e18fb5);
    }
    cache_frame_ffe00bc424c8167fba5b43b394e18fb5 = NULL;

    assertFrameObject(frame_ffe00bc424c8167fba5b43b394e18fb5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_9_getaddress);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_addrspec);
    var_addrspec = NULL;

    CHECK_OBJECT((PyObject *)var_oldcl);
    Py_DECREF(var_oldcl);
    var_oldcl = NULL;

    CHECK_OBJECT((PyObject *)var_oldpos);
    Py_DECREF(var_oldpos);
    var_oldpos = NULL;

    Py_XDECREF(var_routeaddr);
    var_routeaddr = NULL;

    Py_XDECREF(var_fieldlen);
    var_fieldlen = NULL;

    Py_XDECREF(var_returnlist);
    var_returnlist = NULL;

    CHECK_OBJECT((PyObject *)var_plist);
    Py_DECREF(var_plist);
    var_plist = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_addrspec);
    var_addrspec = NULL;

    Py_XDECREF(var_oldcl);
    var_oldcl = NULL;

    Py_XDECREF(var_oldpos);
    var_oldpos = NULL;

    Py_XDECREF(var_routeaddr);
    var_routeaddr = NULL;

    Py_XDECREF(var_fieldlen);
    var_fieldlen = NULL;

    Py_XDECREF(var_returnlist);
    var_returnlist = NULL;

    Py_XDECREF(var_plist);
    var_plist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_9_getaddress);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_10_getrouteaddr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_expectroute = NULL;
    PyObject *var_adlist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    PyObject *tmp_inplace_assign_attr_4__end = NULL;
    PyObject *tmp_inplace_assign_attr_4__start = NULL;
    PyObject *tmp_inplace_assign_attr_5__end = NULL;
    PyObject *tmp_inplace_assign_attr_5__start = NULL;
    struct Nuitka_FrameObject *frame_e16a84083218128bf27e189b506ad3ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_e16a84083218128bf27e189b506ad3ae = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e16a84083218128bf27e189b506ad3ae, codeobj_e16a84083218128bf27e189b506ad3ae, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_e16a84083218128bf27e189b506ad3ae = cache_frame_e16a84083218128bf27e189b506ad3ae;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e16a84083218128bf27e189b506ad3ae);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e16a84083218128bf27e189b506ad3ae) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_field);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pos);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_1);

            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_unicode_chr_60;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_False;
        assert(var_expectroute == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_expectroute = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_pos);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_attr_1__start == NULL);
        tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_3 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_attr_1__end == NULL);
        tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
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

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e16a84083218128bf27e189b506ad3ae->m_frame.f_lineno = 335;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_gotonext);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_unicode_empty;
        assert(var_adlist == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_adlist = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_pos);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
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
        goto loop_end_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if (var_expectroute == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "expectroute");
            exception_tb = NULL;

            exception_lineno = 338;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_expectroute);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT(par_self);
            tmp_called_instance_2 = par_self;
            frame_e16a84083218128bf27e189b506ad3ae->m_frame.f_lineno = 339;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_getdomain);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_False;
            {
                PyObject *old = var_expectroute;
                var_expectroute = tmp_assign_source_5;
                Py_INCREF(var_expectroute);
                Py_XDECREF(old);
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_field);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_pos);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_2);

                exception_lineno = 341;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_unicode_chr_62;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "ooo";
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT(par_self);
                tmp_source_name_8 = par_self;
                tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_pos);
                if (tmp_assign_source_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 342;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert(tmp_inplace_assign_attr_2__start == NULL);
                tmp_inplace_assign_attr_2__start = tmp_assign_source_6;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT(tmp_inplace_assign_attr_2__start);
                tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                tmp_right_name_2 = const_int_pos_1;
                tmp_assign_source_7 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
                if (tmp_assign_source_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 342;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                assert(tmp_inplace_assign_attr_2__end == NULL);
                tmp_inplace_assign_attr_2__end = tmp_assign_source_7;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT(tmp_inplace_assign_attr_2__end);
                tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 342;
                    type_description_1 = "ooo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
            Py_DECREF(tmp_inplace_assign_attr_2__end);
            tmp_inplace_assign_attr_2__end = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_4;
            // End of try:
            try_end_3:;
            goto try_end_4;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
            Py_DECREF(tmp_inplace_assign_attr_2__start);
            tmp_inplace_assign_attr_2__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
            Py_DECREF(tmp_inplace_assign_attr_2__end);
            tmp_inplace_assign_attr_2__end = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
            Py_DECREF(tmp_inplace_assign_attr_2__start);
            tmp_inplace_assign_attr_2__start = NULL;

            goto loop_end_1;
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_10;
                CHECK_OBJECT(par_self);
                tmp_source_name_9 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_field);
                if (tmp_subscribed_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 344;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_pos);
                if (tmp_subscript_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_subscribed_name_3);

                    exception_lineno = 344;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
                Py_DECREF(tmp_subscribed_name_3);
                Py_DECREF(tmp_subscript_name_3);
                if (tmp_compexpr_left_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 344;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_unicode_chr_64;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                Py_DECREF(tmp_compexpr_left_4);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 344;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_5;
                } else {
                    goto branch_no_5;
                }
                branch_yes_5:;
                {
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_source_name_11;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_11 = par_self;
                    tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_pos);
                    if (tmp_assign_source_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 345;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = tmp_inplace_assign_attr_3__start;
                        tmp_inplace_assign_attr_3__start = tmp_assign_source_8;
                        Py_XDECREF(old);
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_9;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    CHECK_OBJECT(tmp_inplace_assign_attr_3__start);
                    tmp_left_name_3 = tmp_inplace_assign_attr_3__start;
                    tmp_right_name_3 = const_int_pos_1;
                    tmp_assign_source_9 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3);
                    if (tmp_assign_source_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 345;
                        type_description_1 = "ooo";
                        goto try_except_handler_6;
                    }
                    {
                        PyObject *old = tmp_inplace_assign_attr_3__end;
                        tmp_inplace_assign_attr_3__end = tmp_assign_source_9;
                        Py_XDECREF(old);
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assattr_name_3;
                    PyObject *tmp_assattr_target_3;
                    CHECK_OBJECT(tmp_inplace_assign_attr_3__end);
                    tmp_assattr_name_3 = tmp_inplace_assign_attr_3__end;
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_3 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_pos, tmp_assattr_name_3);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 345;
                        type_description_1 = "ooo";
                        goto try_except_handler_7;
                    }
                }
                goto try_end_5;
                // Exception handler code:
                try_except_handler_7:;
                exception_keeper_type_5 = exception_type;
                exception_keeper_value_5 = exception_value;
                exception_keeper_tb_5 = exception_tb;
                exception_keeper_lineno_5 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
                Py_DECREF(tmp_inplace_assign_attr_3__end);
                tmp_inplace_assign_attr_3__end = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_5;
                exception_value = exception_keeper_value_5;
                exception_tb = exception_keeper_tb_5;
                exception_lineno = exception_keeper_lineno_5;

                goto try_except_handler_6;
                // End of try:
                try_end_5:;
                goto try_end_6;
                // Exception handler code:
                try_except_handler_6:;
                exception_keeper_type_6 = exception_type;
                exception_keeper_value_6 = exception_value;
                exception_keeper_tb_6 = exception_tb;
                exception_keeper_lineno_6 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
                Py_DECREF(tmp_inplace_assign_attr_3__start);
                tmp_inplace_assign_attr_3__start = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_6;
                exception_value = exception_keeper_value_6;
                exception_tb = exception_keeper_tb_6;
                exception_lineno = exception_keeper_lineno_6;

                goto frame_exception_exit_1;
                // End of try:
                try_end_6:;
                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
                Py_DECREF(tmp_inplace_assign_attr_3__end);
                tmp_inplace_assign_attr_3__end = NULL;

                CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
                Py_DECREF(tmp_inplace_assign_attr_3__start);
                tmp_inplace_assign_attr_3__start = NULL;

                {
                    PyObject *tmp_assign_source_10;
                    tmp_assign_source_10 = Py_True;
                    {
                        PyObject *old = var_expectroute;
                        var_expectroute = tmp_assign_source_10;
                        Py_INCREF(var_expectroute);
                        Py_XDECREF(old);
                    }

                }
                goto branch_end_5;
                branch_no_5:;
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_13;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_12 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_field);
                    if (tmp_subscribed_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 347;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_13 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_pos);
                    if (tmp_subscript_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_subscribed_name_4);

                        exception_lineno = 347;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
                    Py_DECREF(tmp_subscribed_name_4);
                    Py_DECREF(tmp_subscript_name_4);
                    if (tmp_compexpr_left_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 347;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = const_unicode_chr_58;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                    Py_DECREF(tmp_compexpr_left_5);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 347;
                        type_description_1 = "ooo";
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
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_source_name_14;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_14 = par_self;
                        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_pos);
                        if (tmp_assign_source_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 348;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_4__start;
                            tmp_inplace_assign_attr_4__start = tmp_assign_source_11;
                            Py_XDECREF(old);
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_left_name_4;
                        PyObject *tmp_right_name_4;
                        CHECK_OBJECT(tmp_inplace_assign_attr_4__start);
                        tmp_left_name_4 = tmp_inplace_assign_attr_4__start;
                        tmp_right_name_4 = const_int_pos_1;
                        tmp_assign_source_12 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_4, tmp_right_name_4);
                        if (tmp_assign_source_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 348;
                            type_description_1 = "ooo";
                            goto try_except_handler_8;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_4__end;
                            tmp_inplace_assign_attr_4__end = tmp_assign_source_12;
                            Py_XDECREF(old);
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_4;
                        PyObject *tmp_assattr_target_4;
                        CHECK_OBJECT(tmp_inplace_assign_attr_4__end);
                        tmp_assattr_name_4 = tmp_inplace_assign_attr_4__end;
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_4 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_pos, tmp_assattr_name_4);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 348;
                            type_description_1 = "ooo";
                            goto try_except_handler_9;
                        }
                    }
                    goto try_end_7;
                    // Exception handler code:
                    try_except_handler_9:;
                    exception_keeper_type_7 = exception_type;
                    exception_keeper_value_7 = exception_value;
                    exception_keeper_tb_7 = exception_tb;
                    exception_keeper_lineno_7 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__end);
                    Py_DECREF(tmp_inplace_assign_attr_4__end);
                    tmp_inplace_assign_attr_4__end = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_7;
                    exception_value = exception_keeper_value_7;
                    exception_tb = exception_keeper_tb_7;
                    exception_lineno = exception_keeper_lineno_7;

                    goto try_except_handler_8;
                    // End of try:
                    try_end_7:;
                    goto try_end_8;
                    // Exception handler code:
                    try_except_handler_8:;
                    exception_keeper_type_8 = exception_type;
                    exception_keeper_value_8 = exception_value;
                    exception_keeper_tb_8 = exception_tb;
                    exception_keeper_lineno_8 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__start);
                    Py_DECREF(tmp_inplace_assign_attr_4__start);
                    tmp_inplace_assign_attr_4__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_8;
                    exception_value = exception_keeper_value_8;
                    exception_tb = exception_keeper_tb_8;
                    exception_lineno = exception_keeper_lineno_8;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_8:;
                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__end);
                    Py_DECREF(tmp_inplace_assign_attr_4__end);
                    tmp_inplace_assign_attr_4__end = NULL;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_4__start);
                    Py_DECREF(tmp_inplace_assign_attr_4__start);
                    tmp_inplace_assign_attr_4__start = NULL;

                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_assign_source_13;
                        PyObject *tmp_called_instance_3;
                        CHECK_OBJECT(par_self);
                        tmp_called_instance_3 = par_self;
                        frame_e16a84083218128bf27e189b506ad3ae->m_frame.f_lineno = 350;
                        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_getaddrspec);
                        if (tmp_assign_source_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 350;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_adlist;
                            assert(old != NULL);
                            var_adlist = tmp_assign_source_13;
                            Py_DECREF(old);
                        }

                    }
                    {
                        PyObject *tmp_assign_source_14;
                        PyObject *tmp_source_name_15;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_15 = par_self;
                        tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_pos);
                        if (tmp_assign_source_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 351;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        assert(tmp_inplace_assign_attr_5__start == NULL);
                        tmp_inplace_assign_attr_5__start = tmp_assign_source_14;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_15;
                        PyObject *tmp_left_name_5;
                        PyObject *tmp_right_name_5;
                        CHECK_OBJECT(tmp_inplace_assign_attr_5__start);
                        tmp_left_name_5 = tmp_inplace_assign_attr_5__start;
                        tmp_right_name_5 = const_int_pos_1;
                        tmp_assign_source_15 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5);
                        if (tmp_assign_source_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 351;
                            type_description_1 = "ooo";
                            goto try_except_handler_10;
                        }
                        assert(tmp_inplace_assign_attr_5__end == NULL);
                        tmp_inplace_assign_attr_5__end = tmp_assign_source_15;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_5;
                        PyObject *tmp_assattr_target_5;
                        CHECK_OBJECT(tmp_inplace_assign_attr_5__end);
                        tmp_assattr_name_5 = tmp_inplace_assign_attr_5__end;
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_5 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_pos, tmp_assattr_name_5);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 351;
                            type_description_1 = "ooo";
                            goto try_except_handler_11;
                        }
                    }
                    goto try_end_9;
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

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_5__end);
                    Py_DECREF(tmp_inplace_assign_attr_5__end);
                    tmp_inplace_assign_attr_5__end = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_9;
                    exception_value = exception_keeper_value_9;
                    exception_tb = exception_keeper_tb_9;
                    exception_lineno = exception_keeper_lineno_9;

                    goto try_except_handler_10;
                    // End of try:
                    try_end_9:;
                    goto try_end_10;
                    // Exception handler code:
                    try_except_handler_10:;
                    exception_keeper_type_10 = exception_type;
                    exception_keeper_value_10 = exception_value;
                    exception_keeper_tb_10 = exception_tb;
                    exception_keeper_lineno_10 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_5__start);
                    Py_DECREF(tmp_inplace_assign_attr_5__start);
                    tmp_inplace_assign_attr_5__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_10;
                    exception_value = exception_keeper_value_10;
                    exception_tb = exception_keeper_tb_10;
                    exception_lineno = exception_keeper_lineno_10;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_10:;
                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_5__end);
                    Py_DECREF(tmp_inplace_assign_attr_5__end);
                    tmp_inplace_assign_attr_5__end = NULL;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_5__start);
                    Py_DECREF(tmp_inplace_assign_attr_5__start);
                    tmp_inplace_assign_attr_5__start = NULL;

                    goto loop_end_1;
                    branch_end_6:;
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_e16a84083218128bf27e189b506ad3ae->m_frame.f_lineno = 353;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_gotonext);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 337;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e16a84083218128bf27e189b506ad3ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e16a84083218128bf27e189b506ad3ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e16a84083218128bf27e189b506ad3ae);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e16a84083218128bf27e189b506ad3ae, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e16a84083218128bf27e189b506ad3ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e16a84083218128bf27e189b506ad3ae, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e16a84083218128bf27e189b506ad3ae,
        type_description_1,
        par_self,
        var_expectroute,
        var_adlist
    );


    // Release cached frame.
    if (frame_e16a84083218128bf27e189b506ad3ae == cache_frame_e16a84083218128bf27e189b506ad3ae) {
        Py_DECREF(frame_e16a84083218128bf27e189b506ad3ae);
    }
    cache_frame_e16a84083218128bf27e189b506ad3ae = NULL;

    assertFrameObject(frame_e16a84083218128bf27e189b506ad3ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_adlist);
    tmp_return_value = var_adlist;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_10_getrouteaddr);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_expectroute);
    var_expectroute = NULL;

    Py_XDECREF(var_adlist);
    var_adlist = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_expectroute);
    var_expectroute = NULL;

    Py_XDECREF(var_adlist);
    var_adlist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_10_getrouteaddr);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_11_getaddrspec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_ws = NULL;
    PyObject *var_preserve_ws = NULL;
    PyObject *var_aslist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_e17954a69404dc268c89622d8f20e797;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e17954a69404dc268c89622d8f20e797 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_aslist == NULL);
        var_aslist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e17954a69404dc268c89622d8f20e797, codeobj_e17954a69404dc268c89622d8f20e797, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_e17954a69404dc268c89622d8f20e797 = cache_frame_e17954a69404dc268c89622d8f20e797;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e17954a69404dc268c89622d8f20e797);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e17954a69404dc268c89622d8f20e797) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 361;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_gotonext);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pos);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_True;
        {
            PyObject *old = var_preserve_ws;
            var_preserve_ws = tmp_assign_source_2;
            Py_INCREF(var_preserve_ws);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_field);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_pos);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_1);

            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_unicode_dot;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
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
            nuitka_bool tmp_condition_result_3;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT(var_aslist);
            tmp_truth_name_1 = CHECK_IF_TRUE(var_aslist);
            assert(!(tmp_truth_name_1 == -1));
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_1 == 1) {
                goto and_right_1;
            } else {
                goto and_left_1;
            }
            and_right_1:;
            CHECK_OBJECT(var_aslist);
            tmp_subscribed_name_2 = var_aslist;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, -1);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 365;
            tmp_operand_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_strip);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_operand_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            Py_DECREF(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_3 = tmp_and_left_value_1;
            and_end_1:;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT(var_aslist);
                tmp_called_instance_3 = var_aslist;
                frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 366;
                tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_pop);
                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 366;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_2);
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT(var_aslist);
            tmp_called_instance_4 = var_aslist;
            frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 367;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_unicode_dot_tuple, 0));

            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_pos);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_4 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_1 = "oooo";
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_False;
            {
                PyObject *old = var_preserve_ws;
                assert(old != NULL);
                var_preserve_ws = tmp_assign_source_5;
                Py_INCREF(var_preserve_ws);
                Py_DECREF(old);
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_field);
            if (tmp_subscribed_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscript_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_pos);
            if (tmp_subscript_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_3);

                exception_lineno = 370;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
            Py_DECREF(tmp_subscribed_name_3);
            Py_DECREF(tmp_subscript_name_3);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_unicode_chr_34;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_1 = "oooo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_8;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT(var_aslist);
                tmp_source_name_8 = var_aslist;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_append);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_2 = const_unicode_digest_1e4616cb2877c002aa48d41e8b575b32;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_quote);

                if (unlikely(tmp_mvar_value_1 == NULL)) {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_quote);
                }

                if (tmp_mvar_value_1 == NULL) {
                    Py_DECREF(tmp_called_name_1);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 43164 ], 34, 0);
                    exception_tb = NULL;

                    exception_lineno = 371;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_1;
                CHECK_OBJECT(par_self);
                tmp_called_instance_5 = par_self;
                frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 371;
                tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_getquote);
                if (tmp_args_element_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 371;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 371;
                tmp_right_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_right_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 371;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 371;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 371;
                tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_call_result_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_4);
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_source_name_9;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT(par_self);
                tmp_source_name_9 = par_self;
                tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_field);
                if (tmp_subscribed_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_subscript_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_pos);
                if (tmp_subscript_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_subscribed_name_4);

                    exception_lineno = 372;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
                Py_DECREF(tmp_subscribed_name_4);
                Py_DECREF(tmp_subscript_name_4);
                if (tmp_compexpr_left_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_atomends);
                if (tmp_compexpr_right_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_compexpr_left_4);

                    exception_lineno = 372;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
                Py_DECREF(tmp_compexpr_left_4);
                Py_DECREF(tmp_compexpr_right_4);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 372;
                    type_description_1 = "oooo";
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
                    nuitka_bool tmp_condition_result_6;
                    int tmp_and_left_truth_2;
                    nuitka_bool tmp_and_left_value_2;
                    nuitka_bool tmp_and_right_value_2;
                    int tmp_truth_name_2;
                    PyObject *tmp_operand_name_3;
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_subscript_name_5;
                    CHECK_OBJECT(var_aslist);
                    tmp_truth_name_2 = CHECK_IF_TRUE(var_aslist);
                    assert(!(tmp_truth_name_2 == -1));
                    tmp_and_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
                    if (tmp_and_left_truth_2 == 1) {
                        goto and_right_2;
                    } else {
                        goto and_left_2;
                    }
                    and_right_2:;
                    CHECK_OBJECT(var_aslist);
                    tmp_subscribed_name_5 = var_aslist;
                    tmp_subscript_name_5 = const_int_neg_1;
                    tmp_called_instance_6 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_5, tmp_subscript_name_5, -1);
                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 373;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 373;
                    tmp_operand_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, const_str_plain_strip);
                    Py_DECREF(tmp_called_instance_6);
                    if (tmp_operand_name_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 373;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
                    Py_DECREF(tmp_operand_name_3);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 373;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_6 = tmp_and_right_value_2;
                    goto and_end_2;
                    and_left_2:;
                    tmp_condition_result_6 = tmp_and_left_value_2;
                    and_end_2:;
                    if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_6;
                    } else {
                        goto branch_no_6;
                    }
                    branch_yes_6:;
                    {
                        PyObject *tmp_called_instance_7;
                        PyObject *tmp_call_result_5;
                        CHECK_OBJECT(var_aslist);
                        tmp_called_instance_7 = var_aslist;
                        frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 374;
                        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_pop);
                        if (tmp_call_result_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 374;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF(tmp_call_result_5);
                    }
                    branch_no_6:;
                }
                goto loop_end_1;
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_called_instance_8;
                    CHECK_OBJECT(var_aslist);
                    tmp_source_name_12 = var_aslist;
                    tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_append);
                    if (tmp_called_name_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 377;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_8 = par_self;
                    frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 377;
                    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_getatom);
                    if (tmp_args_element_name_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_3);

                        exception_lineno = 377;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 377;
                    tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
                    Py_DECREF(tmp_called_name_3);
                    Py_DECREF(tmp_args_element_name_3);
                    if (tmp_call_result_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 377;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_6);
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_9 = par_self;
        frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 378;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_gotonext);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ws;
            var_ws = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_3;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_preserve_ws);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_preserve_ws);
        assert(!(tmp_truth_name_3 == -1));
        tmp_and_left_value_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_ws);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_ws);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_7 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT(var_aslist);
            tmp_called_instance_10 = var_aslist;
            CHECK_OBJECT(var_ws);
            tmp_args_element_name_4 = var_ws;
            frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 380;
            {
                PyObject *call_args[] = {tmp_args_element_name_4};
                tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_append, call_args);
            }

            if (tmp_call_result_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 380;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_7);
        }
        branch_no_7:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 362;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_13;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_source_name_14;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_source_name_15;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT(par_self);
        tmp_source_name_13 = par_self;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_pos);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_14 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_field);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_5);

            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_5);

            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
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
        CHECK_OBJECT(par_self);
        tmp_source_name_15 = par_self;
        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_field);
        if (tmp_subscribed_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_16 = par_self;
        tmp_subscript_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_pos);
        if (tmp_subscript_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_6);

            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_6, tmp_subscript_name_6);
        Py_DECREF(tmp_subscribed_name_6);
        Py_DECREF(tmp_subscript_name_6);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_unicode_chr_64;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_8 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
                exception_tb = NULL;

                exception_lineno = 383;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_11 = tmp_mvar_value_2;
            CHECK_OBJECT(var_aslist);
            tmp_args_element_name_5 = var_aslist;
            frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 383;
            {
                PyObject *call_args[] = {tmp_args_element_name_5};
                tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_join, call_args);
            }

            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_aslist);
        tmp_called_instance_12 = var_aslist;
        frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 385;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_unicode_chr_64_tuple, 0));

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT(par_self);
        tmp_source_name_17 = par_self;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_pos);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_attr_2__start == NULL);
        tmp_inplace_assign_attr_2__start = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(tmp_inplace_assign_attr_2__start);
        tmp_left_name_3 = tmp_inplace_assign_attr_2__start;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_8 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(tmp_inplace_assign_attr_2__end == NULL);
        tmp_inplace_assign_attr_2__end = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_attr_2__end);
        tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
    Py_DECREF(tmp_inplace_assign_attr_2__end);
    tmp_inplace_assign_attr_2__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
    Py_DECREF(tmp_inplace_assign_attr_2__start);
    tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
    Py_DECREF(tmp_inplace_assign_attr_2__end);
    tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
    Py_DECREF(tmp_inplace_assign_attr_2__start);
    tmp_inplace_assign_attr_2__start = NULL;

    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_13 = par_self;
        frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 387;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, const_str_plain_gotonext);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_15;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 388;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = tmp_mvar_value_3;
        CHECK_OBJECT(var_aslist);
        tmp_args_element_name_6 = var_aslist;
        frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = {tmp_args_element_name_6};
            tmp_left_name_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_14, const_str_plain_join, call_args);
        }

        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_15 = par_self;
        frame_e17954a69404dc268c89622d8f20e797->m_frame.f_lineno = 388;
        tmp_right_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, const_str_plain_getdomain);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 388;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e17954a69404dc268c89622d8f20e797);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e17954a69404dc268c89622d8f20e797);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e17954a69404dc268c89622d8f20e797);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e17954a69404dc268c89622d8f20e797, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e17954a69404dc268c89622d8f20e797->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e17954a69404dc268c89622d8f20e797, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e17954a69404dc268c89622d8f20e797,
        type_description_1,
        par_self,
        var_ws,
        var_preserve_ws,
        var_aslist
    );


    // Release cached frame.
    if (frame_e17954a69404dc268c89622d8f20e797 == cache_frame_e17954a69404dc268c89622d8f20e797) {
        Py_DECREF(frame_e17954a69404dc268c89622d8f20e797);
    }
    cache_frame_e17954a69404dc268c89622d8f20e797 = NULL;

    assertFrameObject(frame_e17954a69404dc268c89622d8f20e797);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_11_getaddrspec);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ws);
    var_ws = NULL;

    Py_XDECREF(var_preserve_ws);
    var_preserve_ws = NULL;

    CHECK_OBJECT((PyObject *)var_aslist);
    Py_DECREF(var_aslist);
    var_aslist = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ws);
    var_ws = NULL;

    Py_XDECREF(var_preserve_ws);
    var_preserve_ws = NULL;

    CHECK_OBJECT((PyObject *)var_aslist);
    Py_DECREF(var_aslist);
    var_aslist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_11_getaddrspec);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_12_getdomain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_sdlist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_82cbed305210342d2c44ef58ad9b7ece;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_82cbed305210342d2c44ef58ad9b7ece = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_sdlist == NULL);
        var_sdlist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_82cbed305210342d2c44ef58ad9b7ece, codeobj_82cbed305210342d2c44ef58ad9b7ece, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_82cbed305210342d2c44ef58ad9b7ece = cache_frame_82cbed305210342d2c44ef58ad9b7ece;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_82cbed305210342d2c44ef58ad9b7ece);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_82cbed305210342d2c44ef58ad9b7ece) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pos);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_field);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_pos);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_1);

            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_LWS);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_pos);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_3 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_1 = "oo";
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_field);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_pos);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_2);

                exception_lineno = 396;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_unicode_chr_40;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_source_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_commentlist);
                if (tmp_source_name_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_append);
                Py_DECREF(tmp_source_name_9);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_called_instance_1 = par_self;
                frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 397;
                tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_getcomment);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 397;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 397;
                tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_call_result_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_1);
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_12;
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_field);
                if (tmp_subscribed_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 398;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_12 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_pos);
                if (tmp_subscript_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_subscribed_name_3);

                    exception_lineno = 398;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
                Py_DECREF(tmp_subscribed_name_3);
                Py_DECREF(tmp_subscript_name_3);
                if (tmp_compexpr_left_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 398;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_unicode_chr_91;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                Py_DECREF(tmp_compexpr_left_4);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 398;
                    type_description_1 = "oo";
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_called_instance_2;
                    CHECK_OBJECT(var_sdlist);
                    tmp_source_name_13 = var_sdlist;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_append);
                    if (tmp_called_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 399;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_2 = par_self;
                    frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 399;
                    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_getdomainliteral);
                    if (tmp_args_element_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);

                        exception_lineno = 399;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 399;
                    tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                    Py_DECREF(tmp_called_name_2);
                    Py_DECREF(tmp_args_element_name_2);
                    if (tmp_call_result_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 399;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_2);
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_15;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_14 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_field);
                    if (tmp_subscribed_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 400;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_15 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_pos);
                    if (tmp_subscript_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_subscribed_name_4);

                        exception_lineno = 400;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
                    Py_DECREF(tmp_subscribed_name_4);
                    Py_DECREF(tmp_subscript_name_4);
                    if (tmp_compexpr_left_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 400;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = const_unicode_dot;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                    Py_DECREF(tmp_compexpr_left_5);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 400;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_5;
                    } else {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_assign_source_4;
                        PyObject *tmp_source_name_16;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_16 = par_self;
                        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_pos);
                        if (tmp_assign_source_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 401;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_2__start;
                            tmp_inplace_assign_attr_2__start = tmp_assign_source_4;
                            Py_XDECREF(old);
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_5;
                        PyObject *tmp_left_name_2;
                        PyObject *tmp_right_name_2;
                        CHECK_OBJECT(tmp_inplace_assign_attr_2__start);
                        tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                        tmp_right_name_2 = const_int_pos_1;
                        tmp_assign_source_5 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
                        if (tmp_assign_source_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 401;
                            type_description_1 = "oo";
                            goto try_except_handler_4;
                        }
                        {
                            PyObject *old = tmp_inplace_assign_attr_2__end;
                            tmp_inplace_assign_attr_2__end = tmp_assign_source_5;
                            Py_XDECREF(old);
                        }

                    }
                    // Tried code:
                    {
                        PyObject *tmp_assattr_name_2;
                        PyObject *tmp_assattr_target_2;
                        CHECK_OBJECT(tmp_inplace_assign_attr_2__end);
                        tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_2 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 401;
                            type_description_1 = "oo";
                            goto try_except_handler_5;
                        }
                    }
                    goto try_end_3;
                    // Exception handler code:
                    try_except_handler_5:;
                    exception_keeper_type_3 = exception_type;
                    exception_keeper_value_3 = exception_value;
                    exception_keeper_tb_3 = exception_tb;
                    exception_keeper_lineno_3 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
                    Py_DECREF(tmp_inplace_assign_attr_2__end);
                    tmp_inplace_assign_attr_2__end = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_3;
                    exception_value = exception_keeper_value_3;
                    exception_tb = exception_keeper_tb_3;
                    exception_lineno = exception_keeper_lineno_3;

                    goto try_except_handler_4;
                    // End of try:
                    try_end_3:;
                    goto try_end_4;
                    // Exception handler code:
                    try_except_handler_4:;
                    exception_keeper_type_4 = exception_type;
                    exception_keeper_value_4 = exception_value;
                    exception_keeper_tb_4 = exception_tb;
                    exception_keeper_lineno_4 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
                    Py_DECREF(tmp_inplace_assign_attr_2__start);
                    tmp_inplace_assign_attr_2__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_4;
                    exception_value = exception_keeper_value_4;
                    exception_tb = exception_keeper_tb_4;
                    exception_lineno = exception_keeper_lineno_4;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_4:;
                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
                    Py_DECREF(tmp_inplace_assign_attr_2__end);
                    tmp_inplace_assign_attr_2__end = NULL;

                    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
                    Py_DECREF(tmp_inplace_assign_attr_2__start);
                    tmp_inplace_assign_attr_2__start = NULL;

                    {
                        PyObject *tmp_called_instance_3;
                        PyObject *tmp_call_result_3;
                        CHECK_OBJECT(var_sdlist);
                        tmp_called_instance_3 = var_sdlist;
                        frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 402;
                        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_unicode_dot_tuple, 0));

                        if (tmp_call_result_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 402;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF(tmp_call_result_3);
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_compexpr_left_6;
                        PyObject *tmp_compexpr_right_6;
                        PyObject *tmp_subscribed_name_5;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_subscript_name_5;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_source_name_19;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_17 = par_self;
                        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_field);
                        if (tmp_subscribed_name_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 403;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_18 = par_self;
                        tmp_subscript_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_pos);
                        if (tmp_subscript_name_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_subscribed_name_5);

                            exception_lineno = 403;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_5, tmp_subscript_name_5);
                        Py_DECREF(tmp_subscribed_name_5);
                        Py_DECREF(tmp_subscript_name_5);
                        if (tmp_compexpr_left_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 403;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_19 = par_self;
                        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_atomends);
                        if (tmp_compexpr_right_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_compexpr_left_6);

                            exception_lineno = 403;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_res = PySequence_Contains(tmp_compexpr_right_6, tmp_compexpr_left_6);
                        Py_DECREF(tmp_compexpr_left_6);
                        Py_DECREF(tmp_compexpr_right_6);
                        if (tmp_res == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 403;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_6;
                        } else {
                            goto branch_no_6;
                        }
                        branch_yes_6:;
                        goto loop_end_1;
                        goto branch_end_6;
                        branch_no_6:;
                        {
                            PyObject *tmp_called_name_3;
                            PyObject *tmp_source_name_20;
                            PyObject *tmp_call_result_4;
                            PyObject *tmp_args_element_name_3;
                            PyObject *tmp_called_instance_4;
                            CHECK_OBJECT(var_sdlist);
                            tmp_source_name_20 = var_sdlist;
                            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_append);
                            if (tmp_called_name_3 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 406;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT(par_self);
                            tmp_called_instance_4 = par_self;
                            frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 406;
                            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_getatom);
                            if (tmp_args_element_name_3 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_name_3);

                                exception_lineno = 406;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 406;
                            tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
                            Py_DECREF(tmp_called_name_3);
                            Py_DECREF(tmp_args_element_name_3);
                            if (tmp_call_result_4 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 406;
                                type_description_1 = "oo";
                                goto frame_exception_exit_1;
                            }
                            Py_DECREF(tmp_call_result_4);
                        }
                        branch_end_6:;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 393;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_1;
        CHECK_OBJECT(var_sdlist);
        tmp_args_element_name_4 = var_sdlist;
        frame_82cbed305210342d2c44ef58ad9b7ece->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_join, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_82cbed305210342d2c44ef58ad9b7ece);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_82cbed305210342d2c44ef58ad9b7ece);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_82cbed305210342d2c44ef58ad9b7ece);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_82cbed305210342d2c44ef58ad9b7ece, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_82cbed305210342d2c44ef58ad9b7ece->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82cbed305210342d2c44ef58ad9b7ece, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_82cbed305210342d2c44ef58ad9b7ece,
        type_description_1,
        par_self,
        var_sdlist
    );


    // Release cached frame.
    if (frame_82cbed305210342d2c44ef58ad9b7ece == cache_frame_82cbed305210342d2c44ef58ad9b7ece) {
        Py_DECREF(frame_82cbed305210342d2c44ef58ad9b7ece);
    }
    cache_frame_82cbed305210342d2c44ef58ad9b7ece = NULL;

    assertFrameObject(frame_82cbed305210342d2c44ef58ad9b7ece);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_12_getdomain);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_sdlist);
    Py_DECREF(var_sdlist);
    var_sdlist = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)var_sdlist);
    Py_DECREF(var_sdlist);
    var_sdlist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_12_getdomain);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_13_getdelimited(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_beginchar = python_pars[1];
    PyObject *par_endchars = python_pars[2];
    PyObject *par_allowcomments = python_pars[3];
    PyObject *var_slist = NULL;
    PyObject *var_quote = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    struct Nuitka_FrameObject *frame_a328ee5811804c7959bc845bc57a7ed2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_a328ee5811804c7959bc845bc57a7ed2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a328ee5811804c7959bc845bc57a7ed2, codeobj_a328ee5811804c7959bc845bc57a7ed2, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a328ee5811804c7959bc845bc57a7ed2 = cache_frame_a328ee5811804c7959bc845bc57a7ed2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a328ee5811804c7959bc845bc57a7ed2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a328ee5811804c7959bc845bc57a7ed2) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_field);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pos);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_1);

            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_beginchar);
        tmp_compexpr_right_1 = par_beginchar;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(const_list_unicode_empty_list);
        assert(var_slist == NULL);
        var_slist = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_False;
        assert(var_quote == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_quote = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_pos);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_attr_1__start == NULL);
        tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_attr_1__end == NULL);
        tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooo";
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

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_pos);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if (var_quote == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyString_FromFormat("local variable '%s' referenced before assignment", "quote");
            exception_tb = NULL;

            exception_lineno = 429;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_quote);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT(var_slist);
            tmp_source_name_6 = var_slist;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_append);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_field);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 430;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_pos);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_subscribed_name_2);

                exception_lineno = 430;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 430;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_a328ee5811804c7959bc845bc57a7ed2->m_frame.f_lineno = 430;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = Py_False;
            {
                PyObject *old = var_quote;
                var_quote = tmp_assign_source_5;
                Py_INCREF(var_quote);
                Py_XDECREF(old);
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT(par_self);
            tmp_source_name_9 = par_self;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_field);
            if (tmp_subscribed_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_10 = par_self;
            tmp_subscript_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_pos);
            if (tmp_subscript_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_3);

                exception_lineno = 432;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
            Py_DECREF(tmp_subscribed_name_3);
            Py_DECREF(tmp_subscript_name_3);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_endchars);
            tmp_compexpr_right_3 = par_endchars;
            tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_pos);
                if (tmp_assign_source_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                assert(tmp_inplace_assign_attr_2__start == NULL);
                tmp_inplace_assign_attr_2__start = tmp_assign_source_6;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT(tmp_inplace_assign_attr_2__start);
                tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
                tmp_right_name_2 = const_int_pos_1;
                tmp_assign_source_7 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
                if (tmp_assign_source_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "oooooo";
                    goto try_except_handler_4;
                }
                assert(tmp_inplace_assign_attr_2__end == NULL);
                tmp_inplace_assign_attr_2__end = tmp_assign_source_7;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT(tmp_inplace_assign_attr_2__end);
                tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 433;
                    type_description_1 = "oooooo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
            Py_DECREF(tmp_inplace_assign_attr_2__end);
            tmp_inplace_assign_attr_2__end = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_4;
            // End of try:
            try_end_3:;
            goto try_end_4;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
            Py_DECREF(tmp_inplace_assign_attr_2__start);
            tmp_inplace_assign_attr_2__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
            Py_DECREF(tmp_inplace_assign_attr_2__end);
            tmp_inplace_assign_attr_2__end = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
            Py_DECREF(tmp_inplace_assign_attr_2__start);
            tmp_inplace_assign_attr_2__start = NULL;

            goto loop_end_1;
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                int tmp_truth_name_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_source_name_12;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_source_name_13;
                CHECK_OBJECT(par_allowcomments);
                tmp_truth_name_2 = CHECK_IF_TRUE(par_allowcomments);
                if (tmp_truth_name_2 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 435;
                    type_description_1 = "oooooo";
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
                CHECK_OBJECT(par_self);
                tmp_source_name_12 = par_self;
                tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_field);
                if (tmp_subscribed_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 435;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_13 = par_self;
                tmp_subscript_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_pos);
                if (tmp_subscript_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_subscribed_name_4);

                    exception_lineno = 435;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
                Py_DECREF(tmp_subscribed_name_4);
                Py_DECREF(tmp_subscript_name_4);
                if (tmp_compexpr_left_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 435;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_unicode_chr_40;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                Py_DECREF(tmp_compexpr_left_4);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 435;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_5 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_5 = tmp_and_left_value_1;
                and_end_1:;
                if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_5;
                } else {
                    goto branch_no_5;
                }
                branch_yes_5:;
                {
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_called_instance_1;
                    CHECK_OBJECT(var_slist);
                    tmp_source_name_14 = var_slist;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_append);
                    if (tmp_called_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 436;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_1 = par_self;
                    frame_a328ee5811804c7959bc845bc57a7ed2->m_frame.f_lineno = 436;
                    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_getcomment);
                    if (tmp_args_element_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);

                        exception_lineno = 436;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_a328ee5811804c7959bc845bc57a7ed2->m_frame.f_lineno = 436;
                    tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                    Py_DECREF(tmp_called_name_2);
                    Py_DECREF(tmp_args_element_name_2);
                    if (tmp_call_result_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 436;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_2);
                }
                goto loop_start_1;
                goto branch_end_5;
                branch_no_5:;
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_subscript_name_5;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_15 = par_self;
                    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_field);
                    if (tmp_subscribed_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 438;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_16 = par_self;
                    tmp_subscript_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_pos);
                    if (tmp_subscript_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_subscribed_name_5);

                        exception_lineno = 438;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_5, tmp_subscript_name_5);
                    Py_DECREF(tmp_subscribed_name_5);
                    Py_DECREF(tmp_subscript_name_5);
                    if (tmp_compexpr_left_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 438;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = const_unicode_chr_92;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                    Py_DECREF(tmp_compexpr_left_5);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 438;
                        type_description_1 = "oooooo";
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
                        PyObject *tmp_assign_source_8;
                        tmp_assign_source_8 = Py_True;
                        {
                            PyObject *old = var_quote;
                            var_quote = tmp_assign_source_8;
                            Py_INCREF(var_quote);
                            Py_XDECREF(old);
                        }

                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_call_result_3;
                        PyObject *tmp_args_element_name_3;
                        PyObject *tmp_subscribed_name_6;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_subscript_name_6;
                        PyObject *tmp_source_name_19;
                        CHECK_OBJECT(var_slist);
                        tmp_source_name_17 = var_slist;
                        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_append);
                        if (tmp_called_name_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 441;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_18 = par_self;
                        tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_field);
                        if (tmp_subscribed_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_3);

                            exception_lineno = 441;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_19 = par_self;
                        tmp_subscript_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_pos);
                        if (tmp_subscript_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_3);
                            Py_DECREF(tmp_subscribed_name_6);

                            exception_lineno = 441;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_6, tmp_subscript_name_6);
                        Py_DECREF(tmp_subscribed_name_6);
                        Py_DECREF(tmp_subscript_name_6);
                        if (tmp_args_element_name_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_3);

                            exception_lineno = 441;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_a328ee5811804c7959bc845bc57a7ed2->m_frame.f_lineno = 441;
                        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_args_element_name_3);
                        if (tmp_call_result_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 441;
                            type_description_1 = "oooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF(tmp_call_result_3);
                    }
                    branch_end_6:;
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT(par_self);
        tmp_source_name_20 = par_self;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_pos);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_3__start;
            tmp_inplace_assign_attr_3__start = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(tmp_inplace_assign_attr_3__start);
        tmp_left_name_3 = tmp_inplace_assign_attr_3__start;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_10 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_3__end;
            tmp_inplace_assign_attr_3__end = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_inplace_assign_attr_3__end);
        tmp_assattr_name_3 = tmp_inplace_assign_attr_3__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_pos, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
    Py_DECREF(tmp_inplace_assign_attr_3__end);
    tmp_inplace_assign_attr_3__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
    Py_DECREF(tmp_inplace_assign_attr_3__start);
    tmp_inplace_assign_attr_3__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
    Py_DECREF(tmp_inplace_assign_attr_3__end);
    tmp_inplace_assign_attr_3__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
    Py_DECREF(tmp_inplace_assign_attr_3__start);
    tmp_inplace_assign_attr_3__start = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 428;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT(var_slist);
        tmp_args_element_name_4 = var_slist;
        frame_a328ee5811804c7959bc845bc57a7ed2->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_join, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a328ee5811804c7959bc845bc57a7ed2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a328ee5811804c7959bc845bc57a7ed2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a328ee5811804c7959bc845bc57a7ed2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a328ee5811804c7959bc845bc57a7ed2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a328ee5811804c7959bc845bc57a7ed2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a328ee5811804c7959bc845bc57a7ed2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a328ee5811804c7959bc845bc57a7ed2,
        type_description_1,
        par_self,
        par_beginchar,
        par_endchars,
        par_allowcomments,
        var_slist,
        var_quote
    );


    // Release cached frame.
    if (frame_a328ee5811804c7959bc845bc57a7ed2 == cache_frame_a328ee5811804c7959bc845bc57a7ed2) {
        Py_DECREF(frame_a328ee5811804c7959bc845bc57a7ed2);
    }
    cache_frame_a328ee5811804c7959bc845bc57a7ed2 = NULL;

    assertFrameObject(frame_a328ee5811804c7959bc845bc57a7ed2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_13_getdelimited);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_slist);
    var_slist = NULL;

    Py_XDECREF(var_quote);
    var_quote = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_slist);
    var_slist = NULL;

    Py_XDECREF(var_quote);
    var_quote = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_13_getdelimited);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_beginchar);
    Py_DECREF(par_beginchar);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_allowcomments);
    Py_DECREF(par_allowcomments);
    CHECK_OBJECT(par_endchars);
    Py_DECREF(par_endchars);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_beginchar);
    Py_DECREF(par_beginchar);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_allowcomments);
    Py_DECREF(par_allowcomments);
    CHECK_OBJECT(par_endchars);
    Py_DECREF(par_endchars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_14_getquote(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b65a0af7466f8cec096f1713c5ae8e98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b65a0af7466f8cec096f1713c5ae8e98 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_b65a0af7466f8cec096f1713c5ae8e98, codeobj_b65a0af7466f8cec096f1713c5ae8e98, module_future$backports$email$_parseaddr, sizeof(void *));
    frame_b65a0af7466f8cec096f1713c5ae8e98 = cache_frame_b65a0af7466f8cec096f1713c5ae8e98;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b65a0af7466f8cec096f1713c5ae8e98);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b65a0af7466f8cec096f1713c5ae8e98) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b65a0af7466f8cec096f1713c5ae8e98->m_frame.f_lineno = 448;
        tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_getdelimited, &PyTuple_GET_ITEM(const_tuple_9382e44e2cb7d88be8decbbf10259855_tuple, 0));

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b65a0af7466f8cec096f1713c5ae8e98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b65a0af7466f8cec096f1713c5ae8e98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b65a0af7466f8cec096f1713c5ae8e98);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b65a0af7466f8cec096f1713c5ae8e98, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b65a0af7466f8cec096f1713c5ae8e98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b65a0af7466f8cec096f1713c5ae8e98, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b65a0af7466f8cec096f1713c5ae8e98,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_b65a0af7466f8cec096f1713c5ae8e98 == cache_frame_b65a0af7466f8cec096f1713c5ae8e98) {
        Py_DECREF(frame_b65a0af7466f8cec096f1713c5ae8e98);
    }
    cache_frame_b65a0af7466f8cec096f1713c5ae8e98 = NULL;

    assertFrameObject(frame_b65a0af7466f8cec096f1713c5ae8e98);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_14_getquote);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_15_getcomment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6, codeobj_3c5fcfb813267bcdc71dbd0bdcd1e4f6, module_future$backports$email$_parseaddr, sizeof(void *));
    frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6 = cache_frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6->m_frame.f_lineno = 452;
        tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_getdelimited, &PyTuple_GET_ITEM(const_tuple_da09e2b852461f6e4f548916ee995d00_tuple, 0));

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6 == cache_frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6) {
        Py_DECREF(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6);
    }
    cache_frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6 = NULL;

    assertFrameObject(frame_3c5fcfb813267bcdc71dbd0bdcd1e4f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_15_getcomment);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_16_getdomainliteral(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e1584315357ee28b5b8a721c2a97db17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1584315357ee28b5b8a721c2a97db17 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_e1584315357ee28b5b8a721c2a97db17, codeobj_e1584315357ee28b5b8a721c2a97db17, module_future$backports$email$_parseaddr, sizeof(void *));
    frame_e1584315357ee28b5b8a721c2a97db17 = cache_frame_e1584315357ee28b5b8a721c2a97db17;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e1584315357ee28b5b8a721c2a97db17);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e1584315357ee28b5b8a721c2a97db17) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        tmp_left_name_1 = const_unicode_digest_0674107b2d3e86aecfffb00b3395ae4a;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e1584315357ee28b5b8a721c2a97db17->m_frame.f_lineno = 456;
        tmp_right_name_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_getdelimited, &PyTuple_GET_ITEM(const_tuple_460ee4091b0b887679ae9816a4154e10_tuple, 0));

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1584315357ee28b5b8a721c2a97db17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1584315357ee28b5b8a721c2a97db17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e1584315357ee28b5b8a721c2a97db17);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1584315357ee28b5b8a721c2a97db17, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e1584315357ee28b5b8a721c2a97db17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1584315357ee28b5b8a721c2a97db17, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1584315357ee28b5b8a721c2a97db17,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_e1584315357ee28b5b8a721c2a97db17 == cache_frame_e1584315357ee28b5b8a721c2a97db17) {
        Py_DECREF(frame_e1584315357ee28b5b8a721c2a97db17);
    }
    cache_frame_e1584315357ee28b5b8a721c2a97db17 = NULL;

    assertFrameObject(frame_e1584315357ee28b5b8a721c2a97db17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_16_getdomainliteral);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_17_getatom(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_atomends = python_pars[1];
    PyObject *var_atomlist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_f922da6b776dadadf31a9afde0c8da10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f922da6b776dadadf31a9afde0c8da10 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(const_list_unicode_empty_list);
        assert(var_atomlist == NULL);
        var_atomlist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_f922da6b776dadadf31a9afde0c8da10, codeobj_f922da6b776dadadf31a9afde0c8da10, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_f922da6b776dadadf31a9afde0c8da10 = cache_frame_f922da6b776dadadf31a9afde0c8da10;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f922da6b776dadadf31a9afde0c8da10);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f922da6b776dadadf31a9afde0c8da10) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_atomends);
        tmp_compexpr_left_1 = par_atomends;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_1 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_atomends);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_atomends;
                assert(old != NULL);
                par_atomends = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_pos);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 469;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 469;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
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
        goto loop_end_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_field);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_pos);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_1);

            exception_lineno = 470;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_atomends);
        tmp_compexpr_right_3 = par_atomends;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        goto loop_end_1;
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT(var_atomlist);
            tmp_source_name_6 = var_atomlist;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_append);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_field);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 473;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_pos);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_subscribed_name_2);

                exception_lineno = 473;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 473;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_f922da6b776dadadf31a9afde0c8da10->m_frame.f_lineno = 473;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT(par_self);
        tmp_source_name_9 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_pos);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_1__start;
            tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_4 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_inplace_assign_attr_1__end;
            tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooo";
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

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 469;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43090 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 476;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT(var_atomlist);
        tmp_args_element_name_2 = var_atomlist;
        frame_f922da6b776dadadf31a9afde0c8da10->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_join, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f922da6b776dadadf31a9afde0c8da10);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f922da6b776dadadf31a9afde0c8da10);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f922da6b776dadadf31a9afde0c8da10);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f922da6b776dadadf31a9afde0c8da10, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f922da6b776dadadf31a9afde0c8da10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f922da6b776dadadf31a9afde0c8da10, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f922da6b776dadadf31a9afde0c8da10,
        type_description_1,
        par_self,
        par_atomends,
        var_atomlist
    );


    // Release cached frame.
    if (frame_f922da6b776dadadf31a9afde0c8da10 == cache_frame_f922da6b776dadadf31a9afde0c8da10) {
        Py_DECREF(frame_f922da6b776dadadf31a9afde0c8da10);
    }
    cache_frame_f922da6b776dadadf31a9afde0c8da10 = NULL;

    assertFrameObject(frame_f922da6b776dadadf31a9afde0c8da10);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_17_getatom);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_atomends);
    Py_DECREF(par_atomends);
    par_atomends = NULL;

    CHECK_OBJECT((PyObject *)var_atomlist);
    Py_DECREF(var_atomlist);
    var_atomlist = NULL;

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

    Py_XDECREF(par_atomends);
    par_atomends = NULL;

    CHECK_OBJECT((PyObject *)var_atomlist);
    Py_DECREF(var_atomlist);
    var_atomlist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_17_getatom);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_18_getphraselist(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_plist = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_98ff8b3f8b9f4bd9daa616cd485c3590;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_98ff8b3f8b9f4bd9daa616cd485c3590 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_plist == NULL);
        var_plist = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_98ff8b3f8b9f4bd9daa616cd485c3590, codeobj_98ff8b3f8b9f4bd9daa616cd485c3590, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_98ff8b3f8b9f4bd9daa616cd485c3590 = cache_frame_98ff8b3f8b9f4bd9daa616cd485c3590;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_98ff8b3f8b9f4bd9daa616cd485c3590);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_98ff8b3f8b9f4bd9daa616cd485c3590) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_pos);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_field);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 487;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 487;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_field);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_pos);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscribed_name_1);

            exception_lineno = 488;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_FWS);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 488;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_pos);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_3 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;
                type_description_1 = "oo";
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_field);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_subscript_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_pos);
            if (tmp_subscript_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_2);

                exception_lineno = 490;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_unicode_chr_34;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 490;
                type_description_1 = "oo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT(var_plist);
                tmp_source_name_9 = var_plist;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_append);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 491;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_called_instance_1 = par_self;
                frame_98ff8b3f8b9f4bd9daa616cd485c3590->m_frame.f_lineno = 491;
                tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_getquote);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 491;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_98ff8b3f8b9f4bd9daa616cd485c3590->m_frame.f_lineno = 491;
                tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_call_result_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 491;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_1);
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_field);
                if (tmp_subscribed_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 492;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_subscript_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_pos);
                if (tmp_subscript_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_subscribed_name_3);

                    exception_lineno = 492;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
                Py_DECREF(tmp_subscribed_name_3);
                Py_DECREF(tmp_subscript_name_3);
                if (tmp_compexpr_left_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 492;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_unicode_chr_40;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
                Py_DECREF(tmp_compexpr_left_4);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 492;
                    type_description_1 = "oo";
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_called_instance_2;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_13 = par_self;
                    tmp_source_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_commentlist);
                    if (tmp_source_name_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 493;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_append);
                    Py_DECREF(tmp_source_name_12);
                    if (tmp_called_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 493;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_called_instance_2 = par_self;
                    frame_98ff8b3f8b9f4bd9daa616cd485c3590->m_frame.f_lineno = 493;
                    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_getcomment);
                    if (tmp_args_element_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_name_2);

                        exception_lineno = 493;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    frame_98ff8b3f8b9f4bd9daa616cd485c3590->m_frame.f_lineno = 493;
                    tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                    Py_DECREF(tmp_called_name_2);
                    Py_DECREF(tmp_args_element_name_2);
                    if (tmp_call_result_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 493;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_2);
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_14 = par_self;
                    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_field);
                    if (tmp_subscribed_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_15 = par_self;
                    tmp_subscript_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_pos);
                    if (tmp_subscript_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_subscribed_name_4);

                        exception_lineno = 494;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
                    Py_DECREF(tmp_subscribed_name_4);
                    Py_DECREF(tmp_subscript_name_4);
                    if (tmp_compexpr_left_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_16 = par_self;
                    tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_phraseends);
                    if (tmp_compexpr_right_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_compexpr_left_5);

                        exception_lineno = 494;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = PySequence_Contains(tmp_compexpr_right_5, tmp_compexpr_left_5);
                    Py_DECREF(tmp_compexpr_left_5);
                    Py_DECREF(tmp_compexpr_right_5);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 494;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_5;
                    } else {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    goto loop_end_1;
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_call_result_3;
                        PyObject *tmp_args_element_name_3;
                        PyObject *tmp_called_name_4;
                        PyObject *tmp_source_name_18;
                        PyObject *tmp_args_element_name_4;
                        PyObject *tmp_source_name_19;
                        CHECK_OBJECT(var_plist);
                        tmp_source_name_17 = var_plist;
                        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_append);
                        if (tmp_called_name_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 497;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_18 = par_self;
                        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_getatom);
                        if (tmp_called_name_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_3);

                            exception_lineno = 497;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_source_name_19 = par_self;
                        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_phraseends);
                        if (tmp_args_element_name_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_3);
                            Py_DECREF(tmp_called_name_4);

                            exception_lineno = 497;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        frame_98ff8b3f8b9f4bd9daa616cd485c3590->m_frame.f_lineno = 497;
                        tmp_args_element_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
                        Py_DECREF(tmp_called_name_4);
                        Py_DECREF(tmp_args_element_name_4);
                        if (tmp_args_element_name_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_3);

                            exception_lineno = 497;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        frame_98ff8b3f8b9f4bd9daa616cd485c3590->m_frame.f_lineno = 497;
                        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
                        Py_DECREF(tmp_called_name_3);
                        Py_DECREF(tmp_args_element_name_3);
                        if (tmp_call_result_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 497;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF(tmp_call_result_3);
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 487;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_98ff8b3f8b9f4bd9daa616cd485c3590);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_98ff8b3f8b9f4bd9daa616cd485c3590);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_98ff8b3f8b9f4bd9daa616cd485c3590, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_98ff8b3f8b9f4bd9daa616cd485c3590->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98ff8b3f8b9f4bd9daa616cd485c3590, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_98ff8b3f8b9f4bd9daa616cd485c3590,
        type_description_1,
        par_self,
        var_plist
    );


    // Release cached frame.
    if (frame_98ff8b3f8b9f4bd9daa616cd485c3590 == cache_frame_98ff8b3f8b9f4bd9daa616cd485c3590) {
        Py_DECREF(frame_98ff8b3f8b9f4bd9daa616cd485c3590);
    }
    cache_frame_98ff8b3f8b9f4bd9daa616cd485c3590 = NULL;

    assertFrameObject(frame_98ff8b3f8b9f4bd9daa616cd485c3590);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_plist);
    tmp_return_value = var_plist;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_18_getphraselist);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_plist);
    Py_DECREF(var_plist);
    var_plist = NULL;

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

    CHECK_OBJECT((PyObject *)var_plist);
    Py_DECREF(var_plist);
    var_plist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_18_getphraselist);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_19___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_field = python_pars[1];
    struct Nuitka_FrameObject *frame_10d5fd7ef29b2b2d30b488c654914f43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_10d5fd7ef29b2b2d30b488c654914f43 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_10d5fd7ef29b2b2d30b488c654914f43, codeobj_10d5fd7ef29b2b2d30b488c654914f43, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_10d5fd7ef29b2b2d30b488c654914f43 = cache_frame_10d5fd7ef29b2b2d30b488c654914f43;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10d5fd7ef29b2b2d30b488c654914f43);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10d5fd7ef29b2b2d30b488c654914f43) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddrlistClass);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AddrlistClass);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43198 ], 42, 0);
            exception_tb = NULL;

            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT(par_field);
        tmp_args_element_name_2 = par_field;
        frame_10d5fd7ef29b2b2d30b488c654914f43->m_frame.f_lineno = 504;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain___init__, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_field);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_field);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oo";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_2 = par_self;
            frame_10d5fd7ef29b2b2d30b488c654914f43->m_frame.f_lineno = 506;
            tmp_assattr_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_getaddrlist);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_addresslist, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 506;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = PyList_New(0);
            CHECK_OBJECT(par_self);
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_addresslist, tmp_assattr_name_2);
            Py_DECREF(tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10d5fd7ef29b2b2d30b488c654914f43);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10d5fd7ef29b2b2d30b488c654914f43);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10d5fd7ef29b2b2d30b488c654914f43, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_10d5fd7ef29b2b2d30b488c654914f43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10d5fd7ef29b2b2d30b488c654914f43, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10d5fd7ef29b2b2d30b488c654914f43,
        type_description_1,
        par_self,
        par_field
    );


    // Release cached frame.
    if (frame_10d5fd7ef29b2b2d30b488c654914f43 == cache_frame_10d5fd7ef29b2b2d30b488c654914f43) {
        Py_DECREF(frame_10d5fd7ef29b2b2d30b488c654914f43);
    }
    cache_frame_10d5fd7ef29b2b2d30b488c654914f43 = NULL;

    assertFrameObject(frame_10d5fd7ef29b2b2d30b488c654914f43);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_19___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_20___len__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c10a10ebdf06e31a46964de56c906022;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c10a10ebdf06e31a46964de56c906022 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c10a10ebdf06e31a46964de56c906022, codeobj_c10a10ebdf06e31a46964de56c906022, module_future$backports$email$_parseaddr, sizeof(void *));
    frame_c10a10ebdf06e31a46964de56c906022 = cache_frame_c10a10ebdf06e31a46964de56c906022;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c10a10ebdf06e31a46964de56c906022);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c10a10ebdf06e31a46964de56c906022) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_addresslist);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c10a10ebdf06e31a46964de56c906022);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c10a10ebdf06e31a46964de56c906022);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c10a10ebdf06e31a46964de56c906022);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c10a10ebdf06e31a46964de56c906022, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c10a10ebdf06e31a46964de56c906022->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c10a10ebdf06e31a46964de56c906022, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c10a10ebdf06e31a46964de56c906022,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_c10a10ebdf06e31a46964de56c906022 == cache_frame_c10a10ebdf06e31a46964de56c906022) {
        Py_DECREF(frame_c10a10ebdf06e31a46964de56c906022);
    }
    cache_frame_c10a10ebdf06e31a46964de56c906022 = NULL;

    assertFrameObject(frame_c10a10ebdf06e31a46964de56c906022);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_20___len__);
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


static PyObject *impl_future$backports$email$_parseaddr$$$function_21___add__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *var_newaddr = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_46ede2f952d69acf5fc2d9657a3726d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_46ede2f952d69acf5fc2d9657a3726d9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_46ede2f952d69acf5fc2d9657a3726d9, codeobj_46ede2f952d69acf5fc2d9657a3726d9, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_46ede2f952d69acf5fc2d9657a3726d9 = cache_frame_46ede2f952d69acf5fc2d9657a3726d9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_46ede2f952d69acf5fc2d9657a3726d9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_46ede2f952d69acf5fc2d9657a3726d9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddressList);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AddressList);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43240 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 515;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_46ede2f952d69acf5fc2d9657a3726d9->m_frame.f_lineno = 515;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_none_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_newaddr == NULL);
        var_newaddr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_slice_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_addresslist);
        if (tmp_slice_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = LOOKUP_INDEX_SLICE(tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1);
        Py_DECREF(tmp_slice_source_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_newaddr);
        tmp_assattr_target_1 = var_newaddr;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_addresslist, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_other);
        tmp_source_name_2 = par_other;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_addresslist);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 517;
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
            PyObject *old = var_x;
            var_x = tmp_assign_source_4;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(var_x);
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_addresslist);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(var_newaddr);
            tmp_source_name_4 = var_newaddr;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_addresslist);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 519;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_x);
            tmp_args_element_name_1 = var_x;
            frame_46ede2f952d69acf5fc2d9657a3726d9->m_frame.f_lineno = 519;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 519;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 517;
        type_description_1 = "oooo";
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
    RESTORE_FRAME_EXCEPTION(frame_46ede2f952d69acf5fc2d9657a3726d9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_46ede2f952d69acf5fc2d9657a3726d9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46ede2f952d69acf5fc2d9657a3726d9, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_46ede2f952d69acf5fc2d9657a3726d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46ede2f952d69acf5fc2d9657a3726d9, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46ede2f952d69acf5fc2d9657a3726d9,
        type_description_1,
        par_self,
        par_other,
        var_newaddr,
        var_x
    );


    // Release cached frame.
    if (frame_46ede2f952d69acf5fc2d9657a3726d9 == cache_frame_46ede2f952d69acf5fc2d9657a3726d9) {
        Py_DECREF(frame_46ede2f952d69acf5fc2d9657a3726d9);
    }
    cache_frame_46ede2f952d69acf5fc2d9657a3726d9 = NULL;

    assertFrameObject(frame_46ede2f952d69acf5fc2d9657a3726d9);

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

    CHECK_OBJECT(var_newaddr);
    tmp_return_value = var_newaddr;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_21___add__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_newaddr);
    Py_DECREF(var_newaddr);
    var_newaddr = NULL;

    Py_XDECREF(var_x);
    var_x = NULL;

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

    Py_XDECREF(var_newaddr);
    var_newaddr = NULL;

    Py_XDECREF(var_x);
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_21___add__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_22___iadd__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e9f79db525bcdb7b685531bc23596c46;
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
    static struct Nuitka_FrameObject *cache_frame_e9f79db525bcdb7b685531bc23596c46 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e9f79db525bcdb7b685531bc23596c46, codeobj_e9f79db525bcdb7b685531bc23596c46, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_e9f79db525bcdb7b685531bc23596c46 = cache_frame_e9f79db525bcdb7b685531bc23596c46;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e9f79db525bcdb7b685531bc23596c46);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e9f79db525bcdb7b685531bc23596c46) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_other);
        tmp_source_name_1 = par_other;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_addresslist);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 524;
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
            PyObject *old = var_x;
            var_x = tmp_assign_source_3;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(var_x);
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_addresslist);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_addresslist);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_x);
            tmp_args_element_name_1 = var_x;
            frame_e9f79db525bcdb7b685531bc23596c46->m_frame.f_lineno = 526;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 524;
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9f79db525bcdb7b685531bc23596c46);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e9f79db525bcdb7b685531bc23596c46);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e9f79db525bcdb7b685531bc23596c46, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e9f79db525bcdb7b685531bc23596c46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9f79db525bcdb7b685531bc23596c46, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e9f79db525bcdb7b685531bc23596c46,
        type_description_1,
        par_self,
        par_other,
        var_x
    );


    // Release cached frame.
    if (frame_e9f79db525bcdb7b685531bc23596c46 == cache_frame_e9f79db525bcdb7b685531bc23596c46) {
        Py_DECREF(frame_e9f79db525bcdb7b685531bc23596c46);
    }
    cache_frame_e9f79db525bcdb7b685531bc23596c46 = NULL;

    assertFrameObject(frame_e9f79db525bcdb7b685531bc23596c46);

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

    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_22___iadd__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_x);
    var_x = NULL;

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

    Py_XDECREF(var_x);
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_22___iadd__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_23___sub__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *var_newaddr = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d1d04fa1b87bc02749ca097f9428ec75;
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
    static struct Nuitka_FrameObject *cache_frame_d1d04fa1b87bc02749ca097f9428ec75 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d1d04fa1b87bc02749ca097f9428ec75, codeobj_d1d04fa1b87bc02749ca097f9428ec75, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d1d04fa1b87bc02749ca097f9428ec75 = cache_frame_d1d04fa1b87bc02749ca097f9428ec75;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d1d04fa1b87bc02749ca097f9428ec75);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d1d04fa1b87bc02749ca097f9428ec75) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddressList);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AddressList);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43240 ], 40, 0);
            exception_tb = NULL;

            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_d1d04fa1b87bc02749ca097f9428ec75->m_frame.f_lineno = 531;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_none_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_newaddr == NULL);
        var_newaddr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_addresslist);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 532;
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
            PyObject *old = var_x;
            var_x = tmp_assign_source_4;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(var_x);
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT(par_other);
        tmp_source_name_2 = par_other;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_addresslist);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(var_newaddr);
            tmp_source_name_3 = var_newaddr;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_addresslist);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_x);
            tmp_args_element_name_1 = var_x;
            frame_d1d04fa1b87bc02749ca097f9428ec75->m_frame.f_lineno = 534;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 532;
        type_description_1 = "oooo";
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
    RESTORE_FRAME_EXCEPTION(frame_d1d04fa1b87bc02749ca097f9428ec75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d1d04fa1b87bc02749ca097f9428ec75);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1d04fa1b87bc02749ca097f9428ec75, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d1d04fa1b87bc02749ca097f9428ec75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1d04fa1b87bc02749ca097f9428ec75, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d1d04fa1b87bc02749ca097f9428ec75,
        type_description_1,
        par_self,
        par_other,
        var_newaddr,
        var_x
    );


    // Release cached frame.
    if (frame_d1d04fa1b87bc02749ca097f9428ec75 == cache_frame_d1d04fa1b87bc02749ca097f9428ec75) {
        Py_DECREF(frame_d1d04fa1b87bc02749ca097f9428ec75);
    }
    cache_frame_d1d04fa1b87bc02749ca097f9428ec75 = NULL;

    assertFrameObject(frame_d1d04fa1b87bc02749ca097f9428ec75);

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

    CHECK_OBJECT(var_newaddr);
    tmp_return_value = var_newaddr;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_23___sub__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_newaddr);
    Py_DECREF(var_newaddr);
    var_newaddr = NULL;

    Py_XDECREF(var_x);
    var_x = NULL;

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

    Py_XDECREF(var_newaddr);
    var_newaddr = NULL;

    Py_XDECREF(var_x);
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_23___sub__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_24___isub__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_46da49e29847bfce71c426b2d13eda15;
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
    static struct Nuitka_FrameObject *cache_frame_46da49e29847bfce71c426b2d13eda15 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_46da49e29847bfce71c426b2d13eda15, codeobj_46da49e29847bfce71c426b2d13eda15, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_46da49e29847bfce71c426b2d13eda15 = cache_frame_46da49e29847bfce71c426b2d13eda15;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_46da49e29847bfce71c426b2d13eda15);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_46da49e29847bfce71c426b2d13eda15) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_other);
        tmp_source_name_1 = par_other;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_addresslist);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 539;
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
            PyObject *old = var_x;
            var_x = tmp_assign_source_3;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(var_x);
        tmp_compexpr_left_1 = var_x;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_addresslist);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_addresslist);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_x);
            tmp_args_element_name_1 = var_x;
            frame_46da49e29847bfce71c426b2d13eda15->m_frame.f_lineno = 541;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_remove, call_args);
            }

            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 539;
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_46da49e29847bfce71c426b2d13eda15);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_46da49e29847bfce71c426b2d13eda15);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46da49e29847bfce71c426b2d13eda15, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_46da49e29847bfce71c426b2d13eda15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46da49e29847bfce71c426b2d13eda15, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46da49e29847bfce71c426b2d13eda15,
        type_description_1,
        par_self,
        par_other,
        var_x
    );


    // Release cached frame.
    if (frame_46da49e29847bfce71c426b2d13eda15 == cache_frame_46da49e29847bfce71c426b2d13eda15) {
        Py_DECREF(frame_46da49e29847bfce71c426b2d13eda15);
    }
    cache_frame_46da49e29847bfce71c426b2d13eda15 = NULL;

    assertFrameObject(frame_46da49e29847bfce71c426b2d13eda15);

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

    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_24___isub__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_x);
    var_x = NULL;

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

    Py_XDECREF(var_x);
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_24___isub__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_future$backports$email$_parseaddr$$$function_25___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_08e2794d78056de64a988acf4955addb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08e2794d78056de64a988acf4955addb = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_08e2794d78056de64a988acf4955addb, codeobj_08e2794d78056de64a988acf4955addb, module_future$backports$email$_parseaddr, sizeof(void *)+sizeof(void *));
    frame_08e2794d78056de64a988acf4955addb = cache_frame_08e2794d78056de64a988acf4955addb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_08e2794d78056de64a988acf4955addb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_08e2794d78056de64a988acf4955addb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_addresslist);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_name_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_08e2794d78056de64a988acf4955addb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_08e2794d78056de64a988acf4955addb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_08e2794d78056de64a988acf4955addb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08e2794d78056de64a988acf4955addb, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_08e2794d78056de64a988acf4955addb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08e2794d78056de64a988acf4955addb, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_08e2794d78056de64a988acf4955addb,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame.
    if (frame_08e2794d78056de64a988acf4955addb == cache_frame_08e2794d78056de64a988acf4955addb) {
        Py_DECREF(frame_08e2794d78056de64a988acf4955addb);
    }
    cache_frame_08e2794d78056de64a988acf4955addb = NULL;

    assertFrameObject(frame_08e2794d78056de64a988acf4955addb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr$$$function_25___getitem__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_10_getrouteaddr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_10_getrouteaddr,
        const_str_plain_getrouteaddr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e16a84083218128bf27e189b506ad3ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_0f31a3180a2ee48342f1e758017e19b0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_11_getaddrspec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_11_getaddrspec,
        const_str_plain_getaddrspec,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e17954a69404dc268c89622d8f20e797,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_964af0501dad3c155597daef02b65515,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_12_getdomain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_12_getdomain,
        const_str_plain_getdomain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_82cbed305210342d2c44ef58ad9b7ece,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_f3002bab0927ff1980bb821637eb966d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_13_getdelimited(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_13_getdelimited,
        const_str_plain_getdelimited,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a328ee5811804c7959bc845bc57a7ed2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_48930c92c40a4c43e2b386b7aeae0e7d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_14_getquote() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_14_getquote,
        const_str_plain_getquote,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b65a0af7466f8cec096f1713c5ae8e98,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_11f2fb395eb3d1bcb84b088cbd977291,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_15_getcomment() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_15_getcomment,
        const_str_plain_getcomment,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3c5fcfb813267bcdc71dbd0bdcd1e4f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_24fbba627d2552038ed5e6fb5a86b549,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_16_getdomainliteral() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_16_getdomainliteral,
        const_str_plain_getdomainliteral,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e1584315357ee28b5b8a721c2a97db17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_4c10ea677c5985268e1c1e519afaa07c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_17_getatom(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_17_getatom,
        const_str_plain_getatom,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f922da6b776dadadf31a9afde0c8da10,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_ddf6c7cc780d451ffc34a9a4364ed04a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_18_getphraselist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_18_getphraselist,
        const_str_plain_getphraselist,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_98ff8b3f8b9f4bd9daa616cd485c3590,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_bdcebde3432f639563b92f72b787114c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_19___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10d5fd7ef29b2b2d30b488c654914f43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_1_parsedate_tz() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_1_parsedate_tz,
        const_str_plain_parsedate_tz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c48f872e562c16fa8cb45f285328bfb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_5e6858139daf36d44e718ecee097ee97,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_20___len__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_20___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c10a10ebdf06e31a46964de56c906022,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_21___add__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_21___add__,
        const_str_plain___add__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_46ede2f952d69acf5fc2d9657a3726d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_22___iadd__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_22___iadd__,
        const_str_plain___iadd__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e9f79db525bcdb7b685531bc23596c46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_23___sub__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_23___sub__,
        const_str_plain___sub__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d1d04fa1b87bc02749ca097f9428ec75,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_24___isub__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_24___isub__,
        const_str_plain___isub__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_46da49e29847bfce71c426b2d13eda15,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_25___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_25___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_08e2794d78056de64a988acf4955addb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_2__parsedate_tz() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_2__parsedate_tz,
        const_str_plain__parsedate_tz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_099dc03d32b8be438c77aa2798e1c797,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_dc57a83f629836bb58a2f9270bf61cfd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_3_parsedate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_3_parsedate,
        const_str_plain_parsedate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89dad0487329899daff00d17bc04837e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_ca236d04fcee6bc49f19e4f6c825e3c1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_4_mktime_tz() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_4_mktime_tz,
        const_str_plain_mktime_tz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e4182f6f2781e31907c3b54fb76df626,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_c187ccaa27f2071bab4a2e5face88f40,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_5_quote() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_5_quote,
        const_str_plain_quote,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e6627ad4e62acd10820b49235f949d6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_64b4968e38cf7e39d2c870c13dd738dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35f990bb49c7160cc4a52e093e774722,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_75b168fba240912f90890636ee280c57,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_7_gotonext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_7_gotonext,
        const_str_plain_gotonext,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a45f365c3bc63e44289b1ba2d1095cd9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_fad78ae70f0f47bab7cf6c6815dd549a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_8_getaddrlist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_8_getaddrlist,
        const_str_plain_getaddrlist,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_51751f397e7852160c26e5be3b8f6aad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_5c89709a48945a5ebff790f6bfd4f4e7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_9_getaddress() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_future$backports$email$_parseaddr$$$function_9_getaddress,
        const_str_plain_getaddress,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ffe00bc424c8167fba5b43b394e18fb5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_future$backports$email$_parseaddr,
        const_unicode_digest_f1cb0013611bc32f424141176b188e49,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports$email$_parseaddr =
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

function_impl_code functable_future$backports$email$_parseaddr[] = {
    impl_future$backports$email$_parseaddr$$$function_1_parsedate_tz,
    impl_future$backports$email$_parseaddr$$$function_2__parsedate_tz,
    impl_future$backports$email$_parseaddr$$$function_3_parsedate,
    impl_future$backports$email$_parseaddr$$$function_4_mktime_tz,
    impl_future$backports$email$_parseaddr$$$function_5_quote,
    impl_future$backports$email$_parseaddr$$$function_6___init__,
    impl_future$backports$email$_parseaddr$$$function_7_gotonext,
    impl_future$backports$email$_parseaddr$$$function_8_getaddrlist,
    impl_future$backports$email$_parseaddr$$$function_9_getaddress,
    impl_future$backports$email$_parseaddr$$$function_10_getrouteaddr,
    impl_future$backports$email$_parseaddr$$$function_11_getaddrspec,
    impl_future$backports$email$_parseaddr$$$function_12_getdomain,
    impl_future$backports$email$_parseaddr$$$function_13_getdelimited,
    impl_future$backports$email$_parseaddr$$$function_14_getquote,
    impl_future$backports$email$_parseaddr$$$function_15_getcomment,
    impl_future$backports$email$_parseaddr$$$function_16_getdomainliteral,
    impl_future$backports$email$_parseaddr$$$function_17_getatom,
    impl_future$backports$email$_parseaddr$$$function_18_getphraselist,
    impl_future$backports$email$_parseaddr$$$function_19___init__,
    impl_future$backports$email$_parseaddr$$$function_20___len__,
    impl_future$backports$email$_parseaddr$$$function_21___add__,
    impl_future$backports$email$_parseaddr$$$function_22___iadd__,
    impl_future$backports$email$_parseaddr$$$function_23___sub__,
    impl_future$backports$email$_parseaddr$$$function_24___isub__,
    impl_future$backports$email$_parseaddr$$$function_25___getitem__,
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

    function_impl_code *current = functable_future$backports$email$_parseaddr;
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

    if (offset > sizeof(functable_future$backports$email$_parseaddr) || offset < 0) {
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
        functable_future$backports$email$_parseaddr[offset],
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
        module_future$backports$email$_parseaddr,
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
PyObject *modulecode_future$backports$email$_parseaddr(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_future$backports$email$_parseaddr;
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
    PRINT_STRING("future.backports.email._parseaddr: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email._parseaddr: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("future.backports.email._parseaddr: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initfuture$backports$email$_parseaddr\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports$email$_parseaddr = Py_InitModule4(
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
    mdef_future$backports$email$_parseaddr.m_name = module_full_name;
    module_future$backports$email$_parseaddr = PyModule_Create(&mdef_future$backports$email$_parseaddr);
#endif

    moduledict_future$backports$email$_parseaddr = MODULE_DICT(module_future$backports$email$_parseaddr);

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
        moduledict_future$backports$email$_parseaddr,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_future$backports$email$_parseaddr,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_future$backports$email$_parseaddr,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email$_parseaddr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_future$backports$email$_parseaddr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_future$backports$email$_parseaddr);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_future$backports$email$_parseaddr);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key___init__ = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getaddress = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getatom = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getcomment = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getdomain = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getquote = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr = NULL;
    PyObject *tmp_locals_future$backports$email$_parseaddr_209_key_gotonext = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    struct Nuitka_FrameObject *frame_d9ee516ff89da7aa641a630b57fc5971;
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
    PyObject *locals_future$backports$email$_parseaddr_501 = NULL;
    PyObject *tmp_dictset_value;
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
        tmp_assign_source_1 = const_unicode_digest_01ddeff52903ebf9203a5861272393bd;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_d9ee516ff89da7aa641a630b57fc5971 = MAKE_MODULE_FRAME(codeobj_d9ee516ff89da7aa641a630b57fc5971, module_future$backports$email$_parseaddr);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_d9ee516ff89da7aa641a630b57fc5971);
    assert(Py_REFCNT(frame_d9ee516ff89da7aa641a630b57fc5971) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_unicode_literals);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 10;
        tmp_import_name_from_2 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_2 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_print_function);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_3;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_3 == NULL));
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_division);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_4;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_4 == NULL));
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_absolute_import);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
        tmp_globals_name_1 = (PyObject *)moduledict_future$backports$email$_parseaddr;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_int_tuple;
        tmp_level_name_1 = const_int_0;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_int);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY(const_list_d21280f2608061c33220bf3d68c96cea_list);
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_future$backports$email$_parseaddr;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 22;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_calendar;
        tmp_globals_name_3 = (PyObject *)moduledict_future$backports$email$_parseaddr;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 22;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_unicode_space;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_SPACE, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_unicode_empty;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_unicode_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_COMMASPACE, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = LIST_COPY(const_list_8995188d258aa8ae6d218e0d5fc99a2f_list);
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__monthnames, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY(const_list_a531e3ebea8f910a39ebf539f01f1e29_list);
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__daynames, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_Copy(const_dict_770c83bc059a93ff00bafe034133c2a2);
        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__timezones, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_1_parsedate_tz();



        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_parsedate_tz, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_2__parsedate_tz();



        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain__parsedate_tz, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_3_parsedate();



        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_parsedate, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_4_mktime_tz();



        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_mktime_tz, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_5_quote();



        UPDATE_STRING_DICT1(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_6___init__();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key___init__ == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key___init__ = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_7_gotonext();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_gotonext == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_gotonext = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_8_getaddrlist();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_9_getaddress();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getaddress == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getaddress = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_10_getrouteaddr();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_11_getaddrspec();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_12_getdomain();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getdomain == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getdomain = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_true_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_assign_source_30 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_13_getdelimited(tmp_defaults_1);



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_14_getquote();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getquote == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getquote = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_15_getcomment();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getcomment == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getcomment = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_16_getdomainliteral();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_2);
            tmp_assign_source_34 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_17_getatom(tmp_defaults_2);



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getatom == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getatom = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_18_getphraselist();



            assert(tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist == NULL);
            tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist = tmp_assign_source_35;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_value_1 = const_str_digest_5f0db3cd30cc80d2ac8e677631ff8610;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_22 = _PyDict_NewPresized( 15 );
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = const_unicode_digest_d79cfdb9557c580313dead15cbd34257;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key___init__);
            tmp_dict_value_3 = tmp_locals_future$backports$email$_parseaddr_209_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_gotonext);
            tmp_dict_value_4 = tmp_locals_future$backports$email$_parseaddr_209_key_gotonext;
            tmp_dict_key_4 = const_str_plain_gotonext;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist);
            tmp_dict_value_5 = tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist;
            tmp_dict_key_5 = const_str_plain_getaddrlist;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getaddress);
            tmp_dict_value_6 = tmp_locals_future$backports$email$_parseaddr_209_key_getaddress;
            tmp_dict_key_6 = const_str_plain_getaddress;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr);
            tmp_dict_value_7 = tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr;
            tmp_dict_key_7 = const_str_plain_getrouteaddr;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec);
            tmp_dict_value_8 = tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec;
            tmp_dict_key_8 = const_str_plain_getaddrspec;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getdomain);
            tmp_dict_value_9 = tmp_locals_future$backports$email$_parseaddr_209_key_getdomain;
            tmp_dict_key_9 = const_str_plain_getdomain;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited);
            tmp_dict_value_10 = tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited;
            tmp_dict_key_10 = const_str_plain_getdelimited;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getquote);
            tmp_dict_value_11 = tmp_locals_future$backports$email$_parseaddr_209_key_getquote;
            tmp_dict_key_11 = const_str_plain_getquote;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getcomment);
            tmp_dict_value_12 = tmp_locals_future$backports$email$_parseaddr_209_key_getcomment;
            tmp_dict_key_12 = const_str_plain_getcomment;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral);
            tmp_dict_value_13 = tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral;
            tmp_dict_key_13 = const_str_plain_getdomainliteral;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getatom);
            tmp_dict_value_14 = tmp_locals_future$backports$email$_parseaddr_209_key_getatom;
            tmp_dict_key_14 = const_str_plain_getatom;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist);
            tmp_dict_value_15 = tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist;
            tmp_dict_key_15 = const_str_plain_getphraselist;
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr);
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key___init__);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key___init__);
        tmp_locals_future$backports$email$_parseaddr_209_key___init__ = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_gotonext);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_gotonext);
        tmp_locals_future$backports$email$_parseaddr_209_key_gotonext = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist);
        tmp_locals_future$backports$email$_parseaddr_209_key_getaddrlist = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getaddress);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getaddress);
        tmp_locals_future$backports$email$_parseaddr_209_key_getaddress = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr);
        tmp_locals_future$backports$email$_parseaddr_209_key_getrouteaddr = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec);
        tmp_locals_future$backports$email$_parseaddr_209_key_getaddrspec = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getdomain);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getdomain);
        tmp_locals_future$backports$email$_parseaddr_209_key_getdomain = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited);
        tmp_locals_future$backports$email$_parseaddr_209_key_getdelimited = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getquote);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getquote);
        tmp_locals_future$backports$email$_parseaddr_209_key_getquote = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getcomment);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getcomment);
        tmp_locals_future$backports$email$_parseaddr_209_key_getcomment = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral);
        tmp_locals_future$backports$email$_parseaddr_209_key_getdomainliteral = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getatom);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getatom);
        tmp_locals_future$backports$email$_parseaddr_209_key_getatom = NULL;

        CHECK_OBJECT((PyObject *)tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist);
        Py_DECREF(tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist);
        tmp_locals_future$backports$email$_parseaddr_209_key_getphraselist = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr);
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
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


            exception_lineno = 209;

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
        tmp_assign_source_36 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_36 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_assign_source_36);
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_AddrlistClass;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_37;
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
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_38 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddrlistClass, tmp_assign_source_38);
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
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddrlistClass);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AddrlistClass);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 43205 ], 35, 0);
            exception_tb = NULL;

            exception_lineno = 501;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_39 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_future$backports$email$_parseaddr_501 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_5f0db3cd30cc80d2ac8e677631ff8610;
        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___module__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = const_unicode_digest_defb5316411f5eda4d458633449911f9;
        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___doc__, tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_19___init__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_20___len__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___len__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_21___add__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___add__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_22___iadd__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___iadd__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_23___sub__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___sub__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_24___isub__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___isub__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_FUNCTION_future$backports$email$_parseaddr$$$function_25___getitem__();



        tmp_res = PyDict_SetItem(locals_future$backports$email$_parseaddr_501, const_str_plain___getitem__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_40 = locals_future$backports$email$_parseaddr_501;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_future$backports$email$_parseaddr_501);
        locals_future$backports$email$_parseaddr_501 = NULL;
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr);
        return NULL;
        outline_result_2:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
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


            exception_lineno = 501;

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
        tmp_assign_source_41 = DICT_GET_ITEM(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_42 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto try_except_handler_3;
            }
            assert(tmp_select_metaclass_2__base == NULL);
            tmp_select_metaclass_2__base = tmp_assign_source_42;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_source_name_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_41 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_source_name_1);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr);
        return NULL;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_2);
            Py_XDECREF(exception_keeper_value_2);
            Py_XDECREF(exception_keeper_tb_2);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_41 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_41 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr);
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
        NUITKA_CANNOT_GET_HERE(future$backports$email$_parseaddr);
        return NULL;
        outline_result_3:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_AddressList;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_d9ee516ff89da7aa641a630b57fc5971->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_43;
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

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
    RESTORE_FRAME_EXCEPTION(frame_d9ee516ff89da7aa641a630b57fc5971);
#endif
    popFrameStack();

    assertFrameObject(frame_d9ee516ff89da7aa641a630b57fc5971);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9ee516ff89da7aa641a630b57fc5971);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_d9ee516ff89da7aa641a630b57fc5971, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d9ee516ff89da7aa641a630b57fc5971->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9ee516ff89da7aa641a630b57fc5971, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_44 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_future$backports$email$_parseaddr, (Nuitka_StringObject *)const_str_plain_AddressList, tmp_assign_source_44);
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


    return module_future$backports$email$_parseaddr;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
